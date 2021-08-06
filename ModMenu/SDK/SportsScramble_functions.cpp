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

// Function SportsScramble.AcceptInviteCallbackProxy.FriendInviteClientConnect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAcceptInviteCallbackProxy::STATIC_FriendInviteClientConnect(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AcceptInviteCallbackProxy.FriendInviteClientConnect");

	UAcceptInviteCallbackProxy_FriendInviteClientConnect_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.AcceptInviteCallbackProxy.AcceptInvite
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScramGameInvite        invite                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UAcceptInviteCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAcceptInviteCallbackProxy* UAcceptInviteCallbackProxy::STATIC_AcceptInvite(class APlayerController* PlayerController, const struct FScramGameInvite& invite)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AcceptInviteCallbackProxy.AcceptInvite");

	UAcceptInviteCallbackProxy_AcceptInvite_Params params;
	params.PlayerController = PlayerController;
	params.invite = invite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ActorSet.ResetActors
// (Final, Native, Public, BlueprintCallable)
void UActorSet::ResetActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ActorSet.ResetActors");

	UActorSet_ResetActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ActorSet.GetNextActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UActorSet::GetNextActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ActorSet.GetNextActor");

	UActorSet_GetNextActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ActorSet.AvoidActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UActorSet::AvoidActor(class UClass* ActorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ActorSet.AvoidActor");

	UActorSet_AvoidActor_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.AdvancedSessionsLibrary.UniqueNetIdToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_UniqueNetIdToString(const struct FBPUniqueNetId& UniqueNetId, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.UniqueNetIdToString");

	UAdvancedSessionsLibrary_UniqueNetIdToString_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

}


// Function SportsScramble.AdvancedSessionsLibrary.SetPlayerName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PlayerName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_SetPlayerName(class APlayerController* PlayerController, const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.SetPlayerName");

	UAdvancedSessionsLibrary_SetPlayerName_Params params;
	params.PlayerController = PlayerController;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSessionPropertyKeyPair SessionSearchProperty          (Parm, NativeAccessSpecifierPublic)
// SportsScramble_EOnlineComparisonOpRedux ComparisonOp                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionsSearchSetting  ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionsSearchSetting UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, SportsScramble_EOnlineComparisonOpRedux ComparisonOp)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty");

	UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Params params;
	params.SessionSearchProperty = SessionSearchProperty;
	params.ComparisonOp = ComparisonOp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyString(const struct FName& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyInt(const struct FName& Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyFloat(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyByte(const struct FName& Key, unsigned char Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyBool(const struct FName& Key, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.AdvancedSessionsLibrary.IsValidUniqueNetID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSessionsLibrary::STATIC_IsValidUniqueNetID(const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.IsValidUniqueNetID");

	UAdvancedSessionsLibrary_IsValidUniqueNetID_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.AdvancedSessionsLibrary.IsValidSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSessionsLibrary::STATIC_IsValidSession(const struct FBlueprintSessionResult& SessionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.IsValidSession");

	UAdvancedSessionsLibrary_IsValidSession_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.AdvancedSessionsLibrary.IsPlayerInSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          PlayerToCheck                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bIsInSession                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_IsPlayerInSession(const struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.IsPlayerInSession");

	UAdvancedSessionsLibrary_IsPlayerInSession_Params params;
	params.PlayerToCheck = PlayerToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsInSession != nullptr)
		*bIsInSession = params.bIsInSession;

}


// Function SportsScramble.AdvancedSessionsLibrary.HasOnlineSubsystem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   SubSystemName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSessionsLibrary::STATIC_HasOnlineSubsystem(const struct FName& SubSystemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.HasOnlineSubsystem");

	UAdvancedSessionsLibrary_HasOnlineSubsystem_Params params;
	params.SubSystemName = SubSystemName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState");

	UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;

}


// Function SportsScramble.AdvancedSessionsLibrary.GetUniqueNetID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetUniqueNetID(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetUniqueNetID");

	UAdvancedSessionsLibrary_GetUniqueNetID_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;

}


// Function SportsScramble.AdvancedSessionsLibrary.GetUniqueBuildID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (Parm, NativeAccessSpecifierPublic)
// int                            UniqueBuildId                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int* UniqueBuildId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetUniqueBuildID");

	UAdvancedSessionsLibrary_GetUniqueBuildID_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueBuildId != nullptr)
		*UniqueBuildId = params.UniqueBuildId;

}


// Function SportsScramble.AdvancedSessionsLibrary.GetSessionState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// SportsScramble_EBPOnlineSessionState SessionState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionState(SportsScramble_EBPOnlineSessionState* SessionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionState");

	UAdvancedSessionsLibrary_GetSessionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SessionState != nullptr)
		*SessionState = params.SessionState;

}


// Function SportsScramble.AdvancedSessionsLibrary.GetSessionSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumConnections                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumPrivateConnections          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsLAN                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsDedicated                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowInvites                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowJoinInProgress           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsAnticheatEnabled            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BuildUniqueID                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// SportsScramble_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionSettings(int* NumConnections, int* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, SportsScramble_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionSettings");

	UAdvancedSessionsLibrary_GetSessionSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumConnections != nullptr)
		*NumConnections = params.NumConnections;
	if (NumPrivateConnections != nullptr)
		*NumPrivateConnections = params.NumPrivateConnections;
	if (bIsLAN != nullptr)
		*bIsLAN = params.bIsLAN;
	if (bIsDedicated != nullptr)
		*bIsDedicated = params.bIsDedicated;
	if (bAllowInvites != nullptr)
		*bAllowInvites = params.bAllowInvites;
	if (bAllowJoinInProgress != nullptr)
		*bAllowJoinInProgress = params.bAllowJoinInProgress;
	if (bIsAnticheatEnabled != nullptr)
		*bIsAnticheatEnabled = params.bIsAnticheatEnabled;
	if (BuildUniqueID != nullptr)
		*BuildUniqueID = params.BuildUniqueID;
	if (ExtraSettings != nullptr)
		*ExtraSettings = params.ExtraSettings;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SettingValue                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, SportsScramble_ESessionSettingSearchResult* SearchResult, struct FString* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyString");

	UAdvancedSessionsLibrary_GetSessionPropertyString_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyKey
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSessionPropertyKeyPair SessionProperty                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UAdvancedSessionsLibrary::STATIC_GetSessionPropertyKey(const struct FSessionPropertyKeyPair& SessionProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyKey");

	UAdvancedSessionsLibrary_GetSessionPropertyKey_Params params;
	params.SessionProperty = SessionProperty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, SportsScramble_ESessionSettingSearchResult* SearchResult, int* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyInt");

	UAdvancedSessionsLibrary_GetSessionPropertyInt_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, SportsScramble_ESessionSettingSearchResult* SearchResult, float* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyFloat");

	UAdvancedSessionsLibrary_GetSessionPropertyFloat_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyByte
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, SportsScramble_ESessionSettingSearchResult* SearchResult, unsigned char* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyByte");

	UAdvancedSessionsLibrary_GetSessionPropertyByte_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, SportsScramble_ESessionSettingSearchResult* SearchResult, bool* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyBool");

	UAdvancedSessionsLibrary_GetSessionPropertyBool_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function SportsScramble.AdvancedSessionsLibrary.GetPlayerName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PlayerName                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetPlayerName(class APlayerController* PlayerController, struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetPlayerName");

	UAdvancedSessionsLibrary_GetPlayerName_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;

}


// Function SportsScramble.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumNetPlayers                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int* NumNetPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers");

	UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumNetPlayers != nullptr)
		*NumNetPlayers = params.NumNetPlayers;

}


// Function SportsScramble.AdvancedSessionsLibrary.GetNetPlayerIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NetPlayerIndex                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetNetPlayerIndex(class APlayerController* PlayerController, int* NetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetNetPlayerIndex");

	UAdvancedSessionsLibrary_GetNetPlayerIndex_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NetPlayerIndex != nullptr)
		*NetPlayerIndex = params.NetPlayerIndex;

}


// Function SportsScramble.AdvancedSessionsLibrary.GetExtraSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (Parm, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetExtraSettings");

	UAdvancedSessionsLibrary_GetExtraSettings_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExtraSettings != nullptr)
		*ExtraSettings = params.ExtraSettings;

}


// Function SportsScramble.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            UniqueBuildId                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetCurrentUniqueBuildID(int* UniqueBuildId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetCurrentUniqueBuildID");

	UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueBuildId != nullptr)
		*UniqueBuildId = params.UniqueBuildId;

}


// Function SportsScramble.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, SportsScramble_EBlueprintResultSwitch* Result, int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.FindSessionPropertyIndexByName");

	UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

}


// Function SportsScramble.AdvancedSessionsLibrary.FindSessionPropertyByName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingsName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair OutProperty                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingsName, SportsScramble_EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.FindSessionPropertyByName");

	UAdvancedSessionsLibrary_FindSessionPropertyByName_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingsName = SettingsName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (OutProperty != nullptr)
		*OutProperty = params.OutProperty;

}


// Function SportsScramble.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          A                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          B                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSessionsLibrary::STATIC_EqualEqual_UNetIDUnetID(const struct FBPUniqueNetId& A, const struct FBPUniqueNetId& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID");

	UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.AdvancedSessionsLibrary.AddOrModifyExtraSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> SettingsArray                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> NewOrChangedSettings           (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ModifiedSettingsArray          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>* SettingsArray, TArray<struct FSessionPropertyKeyPair>* NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.AddOrModifyExtraSettings");

	UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SettingsArray != nullptr)
		*SettingsArray = params.SettingsArray;
	if (NewOrChangedSettings != nullptr)
		*NewOrChangedSettings = params.NewOrChangedSettings;
	if (ModifiedSettingsArray != nullptr)
		*ModifiedSettingsArray = params.ModifiedSettingsArray;

}


// Function SportsScramble.ScramActor.PlayManagedSoundAtLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          VolumeMultiplier               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PitchMultiplier                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAudioComponent* AScramActor::PlayManagedSoundAtLocation(class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramActor.PlayManagedSoundAtLocation");

	AScramActor_PlayManagedSoundAtLocation_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramActor.HasBegunPlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramActor::HasBegunPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramActor.HasBegunPlay");

	AScramActor_HasBegunPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramActor.AttachSound2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VolumeMultiplier               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PitchMultiplier                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsUiSound                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAudioComponent* AScramActor::AttachSound2D(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool IsUiSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramActor.AttachSound2D");

	AScramActor_AttachSound2D_Params params;
	params.Sound = Sound;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.ConcurrencySettings = ConcurrencySettings;
	params.IsUiSound = IsUiSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramAvatar.PlaySpawnAnimation
// (Final, Native, Public, BlueprintCallable)
void AScramAvatar::PlaySpawnAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramAvatar.PlaySpawnAnimation");

	AScramAvatar_PlaySpawnAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramAvatar.GetPlayerIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AScramAvatar::GetPlayerIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramAvatar.GetPlayerIndex");

	AScramAvatar_GetPlayerIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramAvatar.GetPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AScramPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramPlayer* AScramAvatar::GetPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramAvatar.GetPlayer");

	AScramAvatar_GetPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramAvatar.GetGlobalColor
// (Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FName                   globalColorName                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor AScramAvatar::GetGlobalColor(const struct FName& globalColorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramAvatar.GetGlobalColor");

	AScramAvatar_GetGlobalColor_Params params;
	params.globalColorName = globalColorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramMeshActor.HasBegunPlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramMeshActor::HasBegunPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramMeshActor.HasBegunPlay");

	AScramMeshActor_HasBegunPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.SetPrimitiveTrajectory
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScramTrajectory        trajectory                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AScramPrimitiveActor::SetPrimitiveTrajectory(const struct FScramTrajectory& trajectory)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.SetPrimitiveTrajectory");

	AScramPrimitiveActor_SetPrimitiveTrajectory_Params params;
	params.trajectory = trajectory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPrimitiveActor.ResumeTrajectory
// (Final, Native, Public, BlueprintCallable)
void AScramPrimitiveActor::ResumeTrajectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.ResumeTrajectory");

	AScramPrimitiveActor_ResumeTrajectory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPrimitiveActor.RecreatePhysicsState
// (Final, Native, Public, BlueprintCallable)
void AScramPrimitiveActor::RecreatePhysicsState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.RecreatePhysicsState");

	AScramPrimitiveActor_RecreatePhysicsState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPrimitiveActor.PauseTrajectory
// (Final, Native, Public, BlueprintCallable)
void AScramPrimitiveActor::PauseTrajectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.PauseTrajectory");

	AScramPrimitiveActor_PauseTrajectory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPrimitiveActor.OnRep_ClientTrajectoryPaused
// (Final, Native, Private)
void AScramPrimitiveActor::OnRep_ClientTrajectoryPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.OnRep_ClientTrajectoryPaused");

	AScramPrimitiveActor_OnRep_ClientTrajectoryPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPrimitiveActor.NotifyPrimitiveDestroyed
// (Native, Public, BlueprintCallable)
void AScramPrimitiveActor::NotifyPrimitiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.NotifyPrimitiveDestroyed");

	AScramPrimitiveActor_NotifyPrimitiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPrimitiveActor.NetResumeTrajectory
// (Final, Native, Public, BlueprintCallable)
void AScramPrimitiveActor::NetResumeTrajectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.NetResumeTrajectory");

	AScramPrimitiveActor_NetResumeTrajectory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPrimitiveActor.NetPauseTrajectory
// (Final, Native, Public, BlueprintCallable)
void AScramPrimitiveActor::NetPauseTrajectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.NetPauseTrajectory");

	AScramPrimitiveActor_NetPauseTrajectory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPrimitiveActor.NetDestroyPrimitive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           playOut                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPrimitiveActor::NetDestroyPrimitive(bool playOut, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.NetDestroyPrimitive");

	AScramPrimitiveActor_NetDestroyPrimitive_Params params;
	params.playOut = playOut;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPrimitiveActor.IsPrimitiveSimulatingPhysics
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPrimitiveActor::IsPrimitiveSimulatingPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.IsPrimitiveSimulatingPhysics");

	AScramPrimitiveActor_IsPrimitiveSimulatingPhysics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.IsPrimitivePendingDestroy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPrimitiveActor::IsPrimitivePendingDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.IsPrimitivePendingDestroy");

	AScramPrimitiveActor_IsPrimitivePendingDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.IsPrimitiveInMotion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPrimitiveActor::IsPrimitiveInMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.IsPrimitiveInMotion");

	AScramPrimitiveActor_IsPrimitiveInMotion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.IsPrimitiveFollowingSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPrimitiveActor::IsPrimitiveFollowingSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.IsPrimitiveFollowingSpline");

	AScramPrimitiveActor_IsPrimitiveFollowingSpline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.IsPrimitiveDestroyed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPrimitiveActor::IsPrimitiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.IsPrimitiveDestroyed");

	AScramPrimitiveActor_IsPrimitiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.InitializePrimitiveTrajectory
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScramTrajectory        trajectory                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AScramPrimitiveActor::InitializePrimitiveTrajectory(const struct FScramTrajectory& trajectory)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.InitializePrimitiveTrajectory");

	AScramPrimitiveActor_InitializePrimitiveTrajectory_Params params;
	params.trajectory = trajectory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPrimitiveActor.GetTrajectoryPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPrimitiveActor::GetTrajectoryPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetTrajectoryPaused");

	AScramPrimitiveActor_GetTrajectoryPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveVisMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMeshComponent* AScramPrimitiveActor::GetPrimitiveVisMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveVisMesh");

	AScramPrimitiveActor_GetPrimitiveVisMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveTrajectory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScramTrajectory        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FScramTrajectory AScramPrimitiveActor::GetPrimitiveTrajectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveTrajectory");

	AScramPrimitiveActor_GetPrimitiveTrajectory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FQuat AScramPrimitiveActor::GetPrimitiveRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveRotation");

	AScramPrimitiveActor_GetPrimitiveRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveProperties
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScramPrimitiveProperties ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FScramPrimitiveProperties AScramPrimitiveActor::GetPrimitiveProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveProperties");

	AScramPrimitiveActor_GetPrimitiveProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.GetPrimitivePhysicalAngularVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AScramPrimitiveActor::GetPrimitivePhysicalAngularVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitivePhysicalAngularVelocity");

	AScramPrimitiveActor_GetPrimitivePhysicalAngularVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveMotionState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMotionState            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FMotionState AScramPrimitiveActor::GetPrimitiveMotionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveMotionState");

	AScramPrimitiveActor_GetPrimitiveMotionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AScramPrimitiveActor::GetPrimitiveLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveLocation");

	AScramPrimitiveActor_GetPrimitiveLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveLinearVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AScramPrimitiveActor::GetPrimitiveLinearVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveLinearVelocity");

	AScramPrimitiveActor_GetPrimitiveLinearVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPrimitiveComponent* AScramPrimitiveActor::GetPrimitiveComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveComponent");

	AScramPrimitiveActor_GetPrimitiveComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.GetFloorBouncesWithCurrentTrajectory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AScramPrimitiveActor::GetFloorBouncesWithCurrentTrajectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetFloorBouncesWithCurrentTrajectory");

	AScramPrimitiveActor_GetFloorBouncesWithCurrentTrajectory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.GetEnvironmentBouncesWithCurrentTrajectory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AScramPrimitiveActor::GetEnvironmentBouncesWithCurrentTrajectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetEnvironmentBouncesWithCurrentTrajectory");

	AScramPrimitiveActor_GetEnvironmentBouncesWithCurrentTrajectory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveActor.DestroyPrimitive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           playOut                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPrimitiveActor::DestroyPrimitive(bool playOut, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.DestroyPrimitive");

	AScramPrimitiveActor_DestroyPrimitive_Params params;
	params.playOut = playOut;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPrimitiveGrabbable.SetProxyGrabbable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AScramPrimitiveGrabbable* grabbable                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPrimitiveGrabbable::SetProxyGrabbable(class AScramPrimitiveGrabbable* grabbable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.SetProxyGrabbable");

	AScramPrimitiveGrabbable_SetProxyGrabbable_Params params;
	params.grabbable = grabbable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPrimitiveGrabbable.OnGrabbableDeactivated
// (Event, Public, BlueprintEvent)
void AScramPrimitiveGrabbable::OnGrabbableDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.OnGrabbableDeactivated");

	AScramPrimitiveGrabbable_OnGrabbableDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPrimitiveGrabbable.OnGrabbableActivated
// (Event, Public, BlueprintEvent)
void AScramPrimitiveGrabbable::OnGrabbableActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.OnGrabbableActivated");

	AScramPrimitiveGrabbable_OnGrabbableActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPrimitiveGrabbable.IsLocallyGrabbed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPrimitiveGrabbable::IsLocallyGrabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.IsLocallyGrabbed");

	AScramPrimitiveGrabbable_IsLocallyGrabbed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveGrabbable.InitialGrabInProgress
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPrimitiveGrabbable::InitialGrabInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.InitialGrabInProgress");

	AScramPrimitiveGrabbable_InitialGrabInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveGrabbable.GrabbableIsTracked
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPrimitiveGrabbable::GrabbableIsTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.GrabbableIsTracked");

	AScramPrimitiveGrabbable_GrabbableIsTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveGrabbable.GetProxyGrabbable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AScramPrimitiveGrabbable* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramPrimitiveGrabbable* AScramPrimitiveGrabbable::GetProxyGrabbable()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.GetProxyGrabbable");

	AScramPrimitiveGrabbable_GetProxyGrabbable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveGrabbable.GetHidesAvatarHands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPrimitiveGrabbable::GetHidesAvatarHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.GetHidesAvatarHands");

	AScramPrimitiveGrabbable_GetHidesAvatarHands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveGrabbable.CurrentPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AScramPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramPlayer* AScramPrimitiveGrabbable::CurrentPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.CurrentPlayer");

	AScramPrimitiveGrabbable_CurrentPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveGrabbable.CurrentHand
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AScramPlayerHand*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramPlayerHand* AScramPrimitiveGrabbable::CurrentHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.CurrentHand");

	AScramPrimitiveGrabbable_CurrentHand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPrimitiveGrabbable.CurrentGrabberActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AScramPrimitiveGrabbable::CurrentGrabberActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.CurrentGrabberActor");

	AScramPrimitiveGrabbable_CurrentGrabberActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramBall.SetImmuneToInstruments
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           immune                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBall::SetImmuneToInstruments(bool immune)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBall.SetImmuneToInstruments");

	AScramBall_SetImmuneToInstruments_Params params;
	params.immune = immune;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBall.SetHitsBallHitters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           hits                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBall::SetHitsBallHitters(bool hits)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBall.SetHitsBallHitters");

	AScramBall_SetHitsBallHitters_Params params;
	params.hits = hits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBall.SetHitByInstrument
// (Final, Native, Public, BlueprintCallable)
void AScramBall::SetHitByInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBall.SetHitByInstrument");

	AScramBall_SetHitByInstrument_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBall.IsImmuneToInstruments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramBall::IsImmuneToInstruments()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBall.IsImmuneToInstruments");

	AScramBall_IsImmuneToInstruments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramBall.GetHitsBallHitters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramBall::GetHitsBallHitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBall.GetHitsBallHitters");

	AScramBall_GetHitsBallHitters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramBall.GetBallProperties
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScramBallProperties    ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FScramBallProperties AScramBall::GetBallProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBall.GetBallProperties");

	AScramBall_GetBallProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramBall.EverHitByInstrument
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramBall::EverHitByInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBall.EverHitByInstrument");

	AScramBall_EverHitByInstrument_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballBall.TrySetFutureHit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* ABaseballBall::TrySetFutureHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.TrySetFutureHit");

	ABaseballBall_TrySetFutureHit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballBall.SetVerticalFieldZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SportsScramble_EVerticalFieldZone verticalFieldZone              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballBall::SetVerticalFieldZone(SportsScramble_EVerticalFieldZone verticalFieldZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.SetVerticalFieldZone");

	ABaseballBall_SetVerticalFieldZone_Params params;
	params.verticalFieldZone = verticalFieldZone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballBall.SetIsThrow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isThrow                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballBall::SetIsThrow(bool isThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.SetIsThrow");

	ABaseballBall_SetIsThrow_Params params;
	params.isThrow = isThrow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballBall.SetForceCharge
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           shouldCharge                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballBall::SetForceCharge(bool shouldCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.SetForceCharge");

	ABaseballBall_SetForceCharge_Params params;
	params.shouldCharge = shouldCharge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballBall.SetBallImbued
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Imbued                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballBall::SetBallImbued(bool Imbued)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.SetBallImbued");

	ABaseballBall_SetBallImbued_Params params;
	params.Imbued = Imbued;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballBall.OnShotChanged
// (Event, Protected, BlueprintEvent)
void ABaseballBall::OnShotChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.OnShotChanged");

	ABaseballBall_OnShotChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballBall.OnRep_NetworkMotionState
// (Final, Native, Private)
void ABaseballBall::OnRep_NetworkMotionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.OnRep_NetworkMotionState");

	ABaseballBall_OnRep_NetworkMotionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballBall.OnRep_BowlingBall
// (Final, Native, Private)
void ABaseballBall::OnRep_BowlingBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.OnRep_BowlingBall");

	ABaseballBall_OnRep_BowlingBall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballBall.OnImbuedChanged
// (Event, Public, BlueprintEvent)
void ABaseballBall::OnImbuedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.OnImbuedChanged");

	ABaseballBall_OnImbuedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballBall.OnHit
// (Final, Native, Protected)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballBall::OnHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.OnHit");

	ABaseballBall_OnHit_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballBall.OnFloorResultChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// SportsScramble_EFloorResult    newFloorResult                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballBall::OnFloorResultChanged(SportsScramble_EFloorResult newFloorResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.OnFloorResultChanged");

	ABaseballBall_OnFloorResultChanged_Params params;
	params.newFloorResult = newFloorResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballBall.IsRollingPitch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseballBall::IsRollingPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.IsRollingPitch");

	ABaseballBall_IsRollingPitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballBall.IsBallImbued
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseballBall::IsBallImbued()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.IsBallImbued");

	ABaseballBall_IsBallImbued_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballBall.GetVerticalFieldZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EVerticalFieldZone ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EVerticalFieldZone ABaseballBall::GetVerticalFieldZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.GetVerticalFieldZone");

	ABaseballBall_GetVerticalFieldZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballBall.GetShot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBaseballShot           ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
struct FBaseballShot ABaseballBall::GetShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.GetShot");

	ABaseballBall_GetShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballBall.GetIsThrow
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseballBall::GetIsThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.GetIsThrow");

	ABaseballBall_GetIsThrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballBall.GetForceCharge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseballBall::GetForceCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.GetForceCharge");

	ABaseballBall_GetForceCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballBall.GetFloorResult
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EFloorResult    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EFloorResult ABaseballBall::GetFloorResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.GetFloorResult");

	ABaseballBall_GetFloorResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballBall.GetBaseballBallProperties
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBaseballBallProperties ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FBaseballBallProperties ABaseballBall::GetBaseballBallProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.GetBaseballBallProperties");

	ABaseballBall_GetBaseballBallProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballBallClassifier.OnBallHit
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballBallClassifier::OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallClassifier.OnBallHit");

	ABaseballBallClassifier_OnBallHit_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballBallClassifier.OnBallBounced
// (Event, Protected, BlueprintEvent)
// Parameters:
// SportsScramble_EBallState      ballState                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            numBounces                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballBallClassifier::OnBallBounced(SportsScramble_EBallState ballState, int numBounces)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallClassifier.OnBallBounced");

	ABaseballBallClassifier_OnBallBounced_Params params;
	params.ballState = ballState;
	params.numBounces = numBounces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballBallScrambleDisplay.SetIcon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballBallScrambleDisplay::SetIcon(int Index, class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallScrambleDisplay.SetIcon");

	ABaseballBallScrambleDisplay_SetIcon_Params params;
	params.Index = Index;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballBallScrambleDisplay.GoAway
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABaseballBallScrambleDisplay::GoAway()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallScrambleDisplay.GoAway");

	ABaseballBallScrambleDisplay_GoAway_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballBallSelector.TrySpawnScrambleTargets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<SportsScramble_EBaseballScrambleTargetLocations> validDisplays                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            numToSpawn                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FChance                 imbueChance                    (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           localPlayerIsBatter            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseballBallSelector::TrySpawnScrambleTargets(TArray<SportsScramble_EBaseballScrambleTargetLocations> validDisplays, int numToSpawn, const struct FChance& imbueChance, bool localPlayerIsBatter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallSelector.TrySpawnScrambleTargets");

	ABaseballBallSelector_TrySpawnScrambleTargets_Params params;
	params.validDisplays = validDisplays;
	params.numToSpawn = numToSpawn;
	params.imbueChance = imbueChance;
	params.localPlayerIsBatter = localPlayerIsBatter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballBallSelector.TrySetBalls
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FBaseballBallScrambleProperties> ballProperties                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseballBallSelector::TrySetBalls(TArray<struct FBaseballBallScrambleProperties> ballProperties)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallSelector.TrySetBalls");

	ABaseballBallSelector_TrySetBalls_Params params;
	params.ballProperties = ballProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballBallSelector.TryChangeBallTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              BallTable                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseballBallSelector::TryChangeBallTable(class UDataTable* BallTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallSelector.TryChangeBallTable");

	ABaseballBallSelector_TryChangeBallTable_Params params;
	params.BallTable = BallTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballBallSelector.ClearScrambleTargets
// (Final, Native, Public, BlueprintCallable)
void ABaseballBallSelector::ClearScrambleTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallSelector.ClearScrambleTargets");

	ABaseballBallSelector_ClearScrambleTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballGlobalDataAsset.GetBatterPlayAreas
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                    minPlayArea                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FBox                    maxPlayArea                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FBox                    maxHazardArea                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// SportsScramble_EBattingSide    Side                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseballGlobalDataAsset::STATIC_GetBatterPlayAreas(struct FBox* minPlayArea, struct FBox* maxPlayArea, struct FBox* maxHazardArea, SportsScramble_EBattingSide Side)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballGlobalDataAsset.GetBatterPlayAreas");

	UBaseballGlobalDataAsset_GetBatterPlayAreas_Params params;
	params.Side = Side;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (minPlayArea != nullptr)
		*minPlayArea = params.minPlayArea;
	if (maxPlayArea != nullptr)
		*maxPlayArea = params.maxPlayArea;
	if (maxHazardArea != nullptr)
		*maxHazardArea = params.maxHazardArea;

}


// Function SportsScramble.ScramInstrument.GetLeverVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AScramInstrument::GetLeverVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramInstrument.GetLeverVelocity");

	AScramInstrument_GetLeverVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramInstrument.GetInstrumentProperties
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScramInstrumentProperties ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FScramInstrumentProperties AScramInstrument::GetInstrumentProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramInstrument.GetInstrumentProperties");

	AScramInstrument_GetInstrumentProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballInstrument.OnInstrumentBreakEvent
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballInstrument::OnInstrumentBreakEvent(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrument.OnInstrumentBreakEvent");

	ABaseballInstrument_OnInstrumentBreakEvent_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballInstrument.IsPendingRelease
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseballInstrument::IsPendingRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrument.IsPendingRelease");

	ABaseballInstrument_IsPendingRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballInstrument.InstrumentLowHealth
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          health                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballInstrument::InstrumentLowHealth(float health)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrument.InstrumentLowHealth");

	ABaseballInstrument_InstrumentLowHealth_Params params;
	params.health = health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballInstrument.GetBaseballInstrumentProperties
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBaseballInstrumentProperties ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FBaseballInstrumentProperties ABaseballInstrument::GetBaseballInstrumentProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrument.GetBaseballInstrumentProperties");

	ABaseballInstrument_GetBaseballInstrumentProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballInstrumentSelector.TrySetInstruments
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FBaseballInstrumentEntryProperties> instrumentEntries              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseballInstrumentSelector::TrySetInstruments(TArray<struct FBaseballInstrumentEntryProperties> instrumentEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrumentSelector.TrySetInstruments");

	ABaseballInstrumentSelector_TrySetInstruments_Params params;
	params.instrumentEntries = instrumentEntries;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballInstrumentSelector.TryChangeInstrumentTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              InstrumentTable                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseballInstrumentSelector::TryChangeInstrumentTable(class UDataTable* InstrumentTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrumentSelector.TryChangeInstrumentTable");

	ABaseballInstrumentSelector_TryChangeInstrumentTable_Params params;
	params.InstrumentTable = InstrumentTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballInstrumentSelector.SetSelectorVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           visible                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballInstrumentSelector::SetSelectorVisible(bool visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrumentSelector.SetSelectorVisible");

	ABaseballInstrumentSelector_SetSelectorVisible_Params params;
	params.visible = visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballInstrumentSelector.OnRep_ClientSpawnedInstruments
// (Final, Native, Protected)
void ABaseballInstrumentSelector::OnRep_ClientSpawnedInstruments()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrumentSelector.OnRep_ClientSpawnedInstruments");

	ABaseballInstrumentSelector_OnRep_ClientSpawnedInstruments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballInstrumentSelector.InstrumentSelected
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballInstrumentSelector::InstrumentSelected(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrumentSelector.InstrumentSelected");

	ABaseballInstrumentSelector_InstrumentSelected_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGlove.GetGrabberHandedness
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EScramHandedness ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EScramHandedness AScramGlove::GetGrabberHandedness()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGlove.GetGrabberHandedness");

	AScramGlove_GetGrabberHandedness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGlove.ForceGrab
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  GrabbableActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramGlove::ForceGrab(class AActor* GrabbableActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGlove.ForceGrab");

	AScramGlove_ForceGrab_Params params;
	params.GrabbableActor = GrabbableActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballMitt.OnScrambleBallGrabbed
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballMitt::OnScrambleBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballMitt.OnScrambleBallGrabbed");

	ABaseballMitt_OnScrambleBallGrabbed_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballMitt.OnRep_ClientSpawnedBalls
// (Final, Native, Protected)
void ABaseballMitt::OnRep_ClientSpawnedBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballMitt.OnRep_ClientSpawnedBalls");

	ABaseballMitt_OnRep_ClientSpawnedBalls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballMitt.GetScrambleOptionsFull
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseballMitt::GetScrambleOptionsFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballMitt.GetScrambleOptionsFull");

	ABaseballMitt_GetScrambleOptionsFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballMitt.GetScrambleOptions
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMittSpawnInfo>  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<struct FMittSpawnInfo> ABaseballMitt::GetScrambleOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballMitt.GetScrambleOptions");

	ABaseballMitt_GetScrambleOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballMitt.ClearScrambleOptions
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void ABaseballMitt::ClearScrambleOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballMitt.ClearScrambleOptions");

	ABaseballMitt_ClearScrambleOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballMitt.AddScrambleBallWithType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  BallClass                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Imbued                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballMitt::AddScrambleBallWithType(class UClass* BallClass, bool Imbued)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballMitt.AddScrambleBallWithType");

	ABaseballMitt_AddScrambleBallWithType_Params params;
	params.BallClass = BallClass;
	params.Imbued = Imbued;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballPitchingPropManager.SpawnRegisteredObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SportsScramble_EBaseballBallType BallType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballPitchingPropManager::SpawnRegisteredObjects(SportsScramble_EBaseballBallType BallType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballPitchingPropManager.SpawnRegisteredObjects");

	ABaseballPitchingPropManager_SpawnRegisteredObjects_Params params;
	params.BallType = BallType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BaseballPitchingPropManager.ClearAllObjects
// (Final, Native, Public, BlueprintCallable)
void ABaseballPitchingPropManager::ClearAllObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballPitchingPropManager.ClearAllObjects");

	ABaseballPitchingPropManager_ClearAllObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBallTrigger.OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBallTrigger::OnTriggered(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBallTrigger.OnTriggered");

	AScramBallTrigger_OnTriggered_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBallTrigger.IsFutureHitPending
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramBallTrigger::IsFutureHitPending()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBallTrigger.IsFutureHitPending");

	AScramBallTrigger_IsFutureHitPending_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BaseballThrowingGlove.OnBowlingGloveRelease
// (Final, Native, Protected)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseballThrowingGlove::OnBowlingGloveRelease(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballThrowingGlove.OnBowlingGloveRelease");

	ABaseballThrowingGlove_OnBowlingGloveRelease_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BattingAvatar.OnSwung
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABattingAvatar::OnSwung(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BattingAvatar.OnSwung");

	ABattingAvatar_OnSwung_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BattingAvatar.OnHit
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABattingAvatar::OnHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BattingAvatar.OnHit");

	ABattingAvatar_OnHit_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BlobShadowComponent.ScaleOut
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          scaleOutTime                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlobShadowComponent::ScaleOut(float scaleOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BlobShadowComponent.ScaleOut");

	UBlobShadowComponent_ScaleOut_Params params;
	params.scaleOutTime = scaleOutTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BlobShadowComponent.ScaleIn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          scaleInTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlobShadowComponent::ScaleIn(float scaleInTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BlobShadowComponent.ScaleIn");

	UBlobShadowComponent_ScaleIn_Params params;
	params.scaleInTime = scaleInTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BlobShadowComponent.FadeOut
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          fadeOutTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlobShadowComponent::FadeOut(float fadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BlobShadowComponent.FadeOut");

	UBlobShadowComponent_FadeOut_Params params;
	params.fadeOutTime = fadeOutTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BlobShadowComponent.FadeIn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          fadeInTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlobShadowComponent::FadeIn(float fadeInTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BlobShadowComponent.FadeIn");

	UBlobShadowComponent_FadeIn_Params params;
	params.fadeInTime = fadeInTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingAlley.SetPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingAlley::SetPlayer(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.SetPlayer");

	ABowlingAlley_SetPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingAlley.SetPinsetter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ABowlingPinsetter*       pinsetter                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingAlley::SetPinsetter(class ABowlingPinsetter* pinsetter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.SetPinsetter");

	ABowlingAlley_SetPinsetter_Params params;
	params.pinsetter = pinsetter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingAlley.OnBallReleased
// (Final, Native, Protected)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingAlley::OnBallReleased(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.OnBallReleased");

	ABowlingAlley_OnBallReleased_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingAlley.OnBallOut
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           pit                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           restricted                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingAlley::OnBallOut(class ABowlingBall* Ball, bool pit, bool restricted)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.OnBallOut");

	ABowlingAlley_OnBallOut_Params params;
	params.Ball = Ball;
	params.pit = pit;
	params.restricted = restricted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingAlley.OnBallGrabbed
// (Final, Native, Protected)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingAlley::OnBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.OnBallGrabbed");

	ABowlingAlley_OnBallGrabbed_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingAlley.OnBallDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                  pBallActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingAlley::OnBallDestroyed(class AActor* pBallActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.OnBallDestroyed");

	ABowlingAlley_OnBallDestroyed_Params params;
	params.pBallActor = pBallActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingAlley.IsLaneReady
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingAlley::IsLaneReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.IsLaneReady");

	ABowlingAlley_IsLaneReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingAlley.GetScore
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ABowlingAlley::GetScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetScore");

	ABowlingAlley_GetScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingAlley.GetPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* ABowlingAlley::GetPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetPlayer");

	ABowlingAlley_GetPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingAlley.GetFloorZ
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ABowlingAlley::GetFloorZ()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetFloorZ");

	ABowlingAlley_GetFloorZ_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingAlley.GetFloorMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhysicalMaterial*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPhysicalMaterial* ABowlingAlley::GetFloorMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetFloorMaterial");

	ABowlingAlley_GetFloorMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingAlley.GetBalls
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ABowlingBall*>    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class ABowlingBall*> ABowlingAlley::GetBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetBalls");

	ABowlingAlley_GetBalls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingAlley.GetBallReturn
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABowlingBallReturn*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ABowlingBallReturn* ABowlingAlley::GetBallReturn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetBallReturn");

	ABowlingAlley_GetBallReturn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingAlley.GetAlley
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ABowlingAlley*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ABowlingAlley* ABowlingAlley::STATIC_GetAlley(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetAlley");

	ABowlingAlley_GetAlley_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingAlley.GetActiveLane
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABowlingLane*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ABowlingLane* ABowlingAlley::GetActiveLane()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetActiveLane");

	ABowlingAlley_GetActiveLane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingAlley.ClearBalls
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           includeThrownBalls             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingAlley::ClearBalls(bool includeThrownBalls)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.ClearBalls");

	ABowlingAlley_ClearBalls_Params params;
	params.includeThrownBalls = includeThrownBalls;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingAlley.ClearBall
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingAlley::ClearBall(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.ClearBall");

	ABowlingAlley_ClearBall_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingAlley.AnyThrownBallsRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingAlley::AnyThrownBallsRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.AnyThrownBallsRemaining");

	ABowlingAlley_AnyThrownBallsRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingAlley.AddInstigatorBallCode
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingAlley::AddInstigatorBallCode(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.AddInstigatorBallCode");

	ABowlingAlley_AddInstigatorBallCode_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingAlley.AddBall
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ABowlingBall*            Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingAlley::AddBall(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.AddBall");

	ABowlingAlley_AddBall_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingAvatar.OnBallReleased
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingAvatar::OnBallReleased(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAvatar.OnBallReleased");

	ABowlingAvatar_OnBallReleased_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBall.SetValidRoll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           validRoll                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingBall::SetValidRoll(bool validRoll)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.SetValidRoll");

	ABowlingBall_SetValidRoll_Params params;
	params.validRoll = validRoll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBall.OnThrowChanged
// (Event, Protected, BlueprintEvent)
void ABowlingBall::OnThrowChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.OnThrowChanged");

	ABowlingBall_OnThrowChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBall.OnHitPin
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABowlingPin*             Pin                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingBall::OnHitPin(class ABowlingPin* Pin)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.OnHitPin");

	ABowlingBall_OnHitPin_Params params;
	params.Pin = Pin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBall.OnHitLane
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABowlingLane*            Lane                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          bounceSpeed                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingBall::OnHitLane(class ABowlingLane* Lane, float bounceSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.OnHitLane");

	ABowlingBall_OnHitLane_Params params;
	params.Lane = Lane;
	params.bounceSpeed = bounceSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBall.OnHitFootballBlocker
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABowlingFootballBlocker* FootballBlocker                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingBall::OnHitFootballBlocker(class ABowlingFootballBlocker* FootballBlocker)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.OnHitFootballBlocker");

	ABowlingBall_OnHitFootballBlocker_Params params;
	params.FootballBlocker = FootballBlocker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBall.OnFloorResultChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// SportsScramble_EFloorResult    newFloorResult                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingBall::OnFloorResultChanged(SportsScramble_EFloorResult newFloorResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.OnFloorResultChanged");

	ABowlingBall_OnFloorResultChanged_Params params;
	params.newFloorResult = newFloorResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBall.IsBouncing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingBall::IsBouncing()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.IsBouncing");

	ABowlingBall_IsBouncing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingBall.GetValidRoll
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingBall::GetValidRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.GetValidRoll");

	ABowlingBall_GetValidRoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingBall.GetThrow
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBowlingThrow           ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FBowlingThrow ABowlingBall::GetThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.GetThrow");

	ABowlingBall_GetThrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingBall.GetFloorResult
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EFloorResult    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EFloorResult ABowlingBall::GetFloorResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.GetFloorResult");

	ABowlingBall_GetFloorResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingBall.GetBowlingBallProperties
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBowlingBallProperties  ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FBowlingBallProperties ABowlingBall::GetBowlingBallProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.GetBowlingBallProperties");

	ABowlingBall_GetBowlingBallProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingBallReturn.SetSlideDirection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           Forward                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingBallReturn::SetSlideDirection(bool Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.SetSlideDirection");

	ABowlingBallReturn_SetSlideDirection_Params params;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturn.ResetBallTable
// (Final, Native, Protected, BlueprintCallable)
void ABowlingBallReturn::ResetBallTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.ResetBallTable");

	ABowlingBallReturn_ResetBallTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturn.PreLevelChangeCleanup
// (Final, Native, Public, BlueprintCallable)
void ABowlingBallReturn::PreLevelChangeCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.PreLevelChangeCleanup");

	ABowlingBallReturn_PreLevelChangeCleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturn.OnTrackMotionStop
// (Event, Public, BlueprintEvent)
void ABowlingBallReturn::OnTrackMotionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.OnTrackMotionStop");

	ABowlingBallReturn_OnTrackMotionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturn.OnTrackMotionStart
// (Event, Public, BlueprintEvent)
void ABowlingBallReturn::OnTrackMotionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.OnTrackMotionStart");

	ABowlingBallReturn_OnTrackMotionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturn.OnReturnSlideStopped
// (Event, Public, BlueprintEvent)
void ABowlingBallReturn::OnReturnSlideStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.OnReturnSlideStopped");

	ABowlingBallReturn_OnReturnSlideStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturn.OnReturnSlideStarted
// (Event, Public, BlueprintEvent)
void ABowlingBallReturn::OnReturnSlideStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.OnReturnSlideStarted");

	ABowlingBallReturn_OnReturnSlideStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturn.IncrementBallSelection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UClass*                  BallClass                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingBallReturn::IncrementBallSelection(class UClass* BallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.IncrementBallSelection");

	ABowlingBallReturn_IncrementBallSelection_Params params;
	params.BallClass = BallClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturn.GetReturnTrack
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UBowlingBallReturnTrack* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBowlingBallReturnTrack* ABowlingBallReturn::GetReturnTrack()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.GetReturnTrack");

	ABowlingBallReturn_GetReturnTrack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingBallReturn.GetRandomBall
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* ABowlingBallReturn::GetRandomBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.GetRandomBall");

	ABowlingBallReturn_GetRandomBall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingBallReturnSlot.OnRep_ClientTrack
// (Final, Native, Private)
void ABowlingBallReturnSlot::OnRep_ClientTrack()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.OnRep_ClientTrack");

	ABowlingBallReturnSlot_OnRep_ClientTrack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturnSlot.OnRep_ClientBall
// (Final, Native, Private)
void ABowlingBallReturnSlot::OnRep_ClientBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.OnRep_ClientBall");

	ABowlingBallReturnSlot_OnRep_ClientBall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturnSlot.OnMotionStop
// (Event, Protected, BlueprintEvent)
void ABowlingBallReturnSlot::OnMotionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.OnMotionStop");

	ABowlingBallReturnSlot_OnMotionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturnSlot.OnMotionStart
// (Event, Protected, BlueprintEvent)
void ABowlingBallReturnSlot::OnMotionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.OnMotionStart");

	ABowlingBallReturnSlot_OnMotionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturnSlot.OnBallGrabbed
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingBallReturnSlot::OnBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.OnBallGrabbed");

	ABowlingBallReturnSlot_OnBallGrabbed_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturnSlot.OnBallAttached
// (Event, Protected, BlueprintEvent)
void ABowlingBallReturnSlot::OnBallAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.OnBallAttached");

	ABowlingBallReturnSlot_OnBallAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturnSlot.IsDisposing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingBallReturnSlot::IsDisposing()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.IsDisposing");

	ABowlingBallReturnSlot_IsDisposing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingBallReturnSlot.IsBallAttached
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingBallReturnSlot::IsBallAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.IsBallAttached");

	ABowlingBallReturnSlot_IsBallAttached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingBallReturnSlot.GetAttachedBall
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ABowlingBall*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ABowlingBall* ABowlingBallReturnSlot::GetAttachedBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.GetAttachedBall");

	ABowlingBallReturnSlot_GetAttachedBall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTrajectoryUtils.GetInitialLinearVelocity
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScramTrajectory        trajectory                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UScramTrajectoryUtils::STATIC_GetInitialLinearVelocity(const struct FScramTrajectory& trajectory)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrajectoryUtils.GetInitialLinearVelocity");

	UScramTrajectoryUtils_GetInitialLinearVelocity_Params params;
	params.trajectory = trajectory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTrajectoryInfluencerComponent.SetInfluencerEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramTrajectoryInfluencerComponent::SetInfluencerEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrajectoryInfluencerComponent.SetInfluencerEnabled");

	UScramTrajectoryInfluencerComponent_SetInfluencerEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrajectoryInfluencerBaseball.RemoveSkillFlag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SportsScramble_EScramSkill     Skill                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramTrajectoryInfluencerBaseball::RemoveSkillFlag(SportsScramble_EScramSkill Skill)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrajectoryInfluencerBaseball.RemoveSkillFlag");

	UScramTrajectoryInfluencerBaseball_RemoveSkillFlag_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrajectoryInfluencerBaseball.HasSkillFlag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EScramSkill     Skill                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramTrajectoryInfluencerBaseball::HasSkillFlag(SportsScramble_EScramSkill Skill)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrajectoryInfluencerBaseball.HasSkillFlag");

	UScramTrajectoryInfluencerBaseball_HasSkillFlag_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTrajectoryInfluencerBaseball.AddSkillFlag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SportsScramble_EScramSkill     Skill                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramTrajectoryInfluencerBaseball::AddSkillFlag(SportsScramble_EScramSkill Skill)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrajectoryInfluencerBaseball.AddSkillFlag");

	UScramTrajectoryInfluencerBaseball_AddSkillFlag_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturnTrack.SetupSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ABowlingBall*            Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  SlotClass                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBowlingBallReturnTrack::SetupSlot(class ABowlingBall* Ball, class UClass* SlotClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnTrack.SetupSlot");

	UBowlingBallReturnTrack_SetupSlot_Params params;
	params.Ball = Ball;
	params.SlotClass = SlotClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingBallReturnTrack.HasBall
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ABowlingBall*            Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBowlingBallReturnTrack::HasBall(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnTrack.HasBall");

	UBowlingBallReturnTrack_HasBall_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingBallReturnTrack.GetNumOccupiedSlots
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UBowlingBallReturnTrack::GetNumOccupiedSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnTrack.GetNumOccupiedSlots");

	UBowlingBallReturnTrack_GetNumOccupiedSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingBallReturnTrack.FreeLastSlot
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 disposalPoint                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBowlingBallReturnTrack::FreeLastSlot(const struct FVector& disposalPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnTrack.FreeLastSlot");

	UBowlingBallReturnTrack_FreeLastSlot_Params params;
	params.disposalPoint = disposalPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingCenterScoreboard.GetTimeRemaining
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ABowlingCenterScoreboard::GetTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingCenterScoreboard.GetTimeRemaining");

	ABowlingCenterScoreboard_GetTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingFootballBlocker.StopBlocker
// (Final, Native, Public, BlueprintCallable)
void ABowlingFootballBlocker::StopBlocker()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingFootballBlocker.StopBlocker");

	ABowlingFootballBlocker_StopBlocker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingFootballBlocker.StartBlocker
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              centerTransform                (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          initialAngleDegrees            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingFootballBlocker::StartBlocker(const struct FTransform& centerTransform, float initialAngleDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingFootballBlocker.StartBlocker");

	ABowlingFootballBlocker_StartBlocker_Params params;
	params.centerTransform = centerTransform;
	params.initialAngleDegrees = initialAngleDegrees;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingFootballBlocker.DeferredInit
// (Final, Native, Private)
void ABowlingFootballBlocker::DeferredInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingFootballBlocker.DeferredInit");

	ABowlingFootballBlocker_DeferredInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingForceMagnet.DirectSuckStarted
// (Event, Protected, BlueprintEvent)
void ABowlingForceMagnet::DirectSuckStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingForceMagnet.DirectSuckStarted");

	ABowlingForceMagnet_DirectSuckStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingForceMagnet.DeactivateMagnet
// (Final, Native, Public, BlueprintCallable)
void ABowlingForceMagnet::DeactivateMagnet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingForceMagnet.DeactivateMagnet");

	ABowlingForceMagnet_DeactivateMagnet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingForceMagnet.ActivateMagnet
// (Final, Native, Public, BlueprintCallable)
void ABowlingForceMagnet::ActivateMagnet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingForceMagnet.ActivateMagnet");

	ABowlingForceMagnet_ActivateMagnet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingGlove.OnThrowFinalized
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingGlove::OnThrowFinalized(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingGlove.OnThrowFinalized");

	ABowlingGlove_OnThrowFinalized_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingGutterTracker.SimpleHitActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBowlingGutterTracker::SimpleHitActor(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingGutterTracker.SimpleHitActor");

	UBowlingGutterTracker_SimpleHitActor_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingGutterTracker.ForceClearGutter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ClearRight                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ClearLeft                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBowlingGutterTracker::ForceClearGutter(bool ClearRight, bool ClearLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingGutterTracker.ForceClearGutter");

	UBowlingGutterTracker_ForceClearGutter_Params params;
	params.ClearRight = ClearRight;
	params.ClearLeft = ClearLeft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingGutterTracker.FireRightParticle
// (Event, Public, BlueprintEvent)
void UBowlingGutterTracker::FireRightParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingGutterTracker.FireRightParticle");

	UBowlingGutterTracker_FireRightParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingGutterTracker.FireLeftParticle
// (Event, Public, BlueprintEvent)
void UBowlingGutterTracker::FireLeftParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingGutterTracker.FireLeftParticle");

	UBowlingGutterTracker_FireLeftParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingLane.ShowBaseballLane
// (Event, Public, BlueprintEvent)
void ABowlingLane::ShowBaseballLane()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingLane.ShowBaseballLane");

	ABowlingLane_ShowBaseballLane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingLane.ShouldUsePins
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingLane::ShouldUsePins()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingLane.ShouldUsePins");

	ABowlingLane_ShouldUsePins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingLane.HideBaseballLane
// (Event, Public, BlueprintEvent)
void ABowlingLane::HideBaseballLane()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingLane.HideBaseballLane");

	ABowlingLane_HideBaseballLane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingLane.GetDownLaneVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector ABowlingLane::GetDownLaneVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingLane.GetDownLaneVector");

	ABowlingLane_GetDownLaneVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingLane.GetAlley
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABowlingAlley*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ABowlingAlley* ABowlingLane::GetAlley()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingLane.GetAlley");

	ABowlingLane_GetAlley_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingLaneFlipper.SetLaunchTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingLaneFlipper::SetLaunchTarget(class USceneComponent* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingLaneFlipper.SetLaunchTarget");

	ABowlingLaneFlipper_SetLaunchTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingLaneFlipper.FlipFlipper
// (Final, Native, Public, BlueprintCallable)
void ABowlingLaneFlipper::FlipFlipper()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingLaneFlipper.FlipFlipper");

	ABowlingLaneFlipper_FlipFlipper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingPin.WasKnockedDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingPin::WasKnockedDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPin.WasKnockedDown");

	ABowlingPin_WasKnockedDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingPin.StartCheckingForKnockedDown
// (Final, Native, Protected, BlueprintCallable)
void ABowlingPin::StartCheckingForKnockedDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPin.StartCheckingForKnockedDown");

	ABowlingPin_StartCheckingForKnockedDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingPin.OnKnockedDown
// (Event, Protected, BlueprintEvent)
void ABowlingPin::OnKnockedDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPin.OnKnockedDown");

	ABowlingPin_OnKnockedDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingPin.IsAtRest
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingPin::IsAtRest()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPin.IsAtRest");

	ABowlingPin_IsAtRest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingPinsetter.ActivePinsCanBeScored
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingPinsetter::ActivePinsCanBeScored()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPinsetter.ActivePinsCanBeScored");

	ABowlingPinsetter_ActivePinsCanBeScored_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingPlinko.ResolveBall
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABowlingPlinkoBall*      Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          localY                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingPlinko::ResolveBall(class ABowlingPlinkoBall* Ball, float localY)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPlinko.ResolveBall");

	ABowlingPlinko_ResolveBall_Params params;
	params.Ball = Ball;
	params.localY = localY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingPlinkoBall.SetWidget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingPlinkoBall::SetWidget(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPlinkoBall.SetWidget");

	ABowlingPlinkoBall_SetWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingPlinkoBall.SetResolving
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           resolving                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingPlinkoBall::SetResolving(bool resolving)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPlinkoBall.SetResolving");

	ABowlingPlinkoBall_SetResolving_Params params;
	params.resolving = resolving;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingScoreKeeper.TryGetFrameScoreStatic
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBowlingFrameSet        frameSet                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingScoreKeeper::STATIC_TryGetFrameScoreStatic(int* score, const struct FBowlingFrameSet& frameSet, int frameIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.TryGetFrameScoreStatic");

	ABowlingScoreKeeper_TryGetFrameScoreStatic_Params params;
	params.frameSet = frameSet;
	params.frameIndex = frameIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (score != nullptr)
		*score = params.score;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingScoreKeeper.TryGetFrameScore
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingScoreKeeper::TryGetFrameScore(int* score, int Player, int frameIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.TryGetFrameScore");

	ABowlingScoreKeeper_TryGetFrameScore_Params params;
	params.Player = Player;
	params.frameIndex = frameIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (score != nullptr)
		*score = params.score;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingScoreKeeper.ResetFrames
// (Final, Native, Public, BlueprintCallable)
void ABowlingScoreKeeper::ResetFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.ResetFrames");

	ABowlingScoreKeeper_ResetFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingScoreKeeper.IsGameDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingScoreKeeper::IsGameDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.IsGameDone");

	ABowlingScoreKeeper_IsGameDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingScoreKeeper.GetGameScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ABowlingScoreKeeper::GetGameScore(int Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.GetGameScore");

	ABowlingScoreKeeper_GetGameScore_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingScoreKeeper.GetFrameScoreUpTo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBowlingFrameSet        frameSet                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            maxFrameIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ABowlingScoreKeeper::STATIC_GetFrameScoreUpTo(bool* complete, const struct FBowlingFrameSet& frameSet, int maxFrameIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.GetFrameScoreUpTo");

	ABowlingScoreKeeper_GetFrameScoreUpTo_Params params;
	params.frameSet = frameSet;
	params.maxFrameIndex = maxFrameIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (complete != nullptr)
		*complete = params.complete;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingScoreKeeper.GetCurrentPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ABowlingScoreKeeper::GetCurrentPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.GetCurrentPlayer");

	ABowlingScoreKeeper_GetCurrentPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingScoreKeeper.GetCurrentFrameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ABowlingScoreKeeper::GetCurrentFrameIndex(int Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.GetCurrentFrameIndex");

	ABowlingScoreKeeper_GetCurrentFrameIndex_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingScoreKeeper.AreFramesDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingScoreKeeper::AreFramesDone(int Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.AreFramesDone");

	ABowlingScoreKeeper_AreFramesDone_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingScoreKeeper.AddRoll
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           frameDone                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Roll                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingScoreKeeper::AddRoll(bool* frameDone, int Player, int Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.AddRoll");

	ABowlingScoreKeeper_AddRoll_Params params;
	params.Player = Player;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (frameDone != nullptr)
		*frameDone = params.frameDone;

}


// Function SportsScramble.BowlingSpaceInvaderAlien.UpdateAnimation
// (Event, Public, BlueprintEvent)
void ABowlingSpaceInvaderAlien::UpdateAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.UpdateAnimation");

	ABowlingSpaceInvaderAlien_UpdateAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderAlien.UncoverAlien
// (Event, Public, BlueprintEvent)
void ABowlingSpaceInvaderAlien::UncoverAlien()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.UncoverAlien");

	ABowlingSpaceInvaderAlien_UncoverAlien_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderAlien.RunScoreFX
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingSpaceInvaderAlien::RunScoreFX(class AActor* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.RunScoreFX");

	ABowlingSpaceInvaderAlien_RunScoreFX_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderAlien.RunEndLaneFX
// (Event, Protected, BlueprintEvent)
void ABowlingSpaceInvaderAlien::RunEndLaneFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.RunEndLaneFX");

	ABowlingSpaceInvaderAlien_RunEndLaneFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderAlien.PatternRemover
// (Final, Native, Protected, BlueprintCallable)
void ABowlingSpaceInvaderAlien::PatternRemover()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.PatternRemover");

	ABowlingSpaceInvaderAlien_PatternRemover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderAlien.HideAlien
// (Event, Public, BlueprintEvent)
void ABowlingSpaceInvaderAlien::HideAlien()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.HideAlien");

	ABowlingSpaceInvaderAlien_HideAlien_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderAlien.GetRelativePosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector ABowlingSpaceInvaderAlien::GetRelativePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.GetRelativePosition");

	ABowlingSpaceInvaderAlien_GetRelativePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingSpaceInvaderAlien.GetGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ABowlingSpaceInvaderGroup* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ABowlingSpaceInvaderGroup* ABowlingSpaceInvaderAlien::GetGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.GetGroup");

	ABowlingSpaceInvaderAlien_GetGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingSpaceInvaderAlien.GetAlienID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ABowlingSpaceInvaderAlien::GetAlienID()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.GetAlienID");

	ABowlingSpaceInvaderAlien_GetAlienID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingSpaceInvaderAlien.GetActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingSpaceInvaderAlien::GetActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.GetActive");

	ABowlingSpaceInvaderAlien_GetActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingSpaceInvaderAlien.AddScore
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            ScoreValue                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingSpaceInvaderAlien::AddScore(int ScoreValue, class AActor* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.AddScore");

	ABowlingSpaceInvaderAlien_AddScore_Params params;
	params.ScoreValue = ScoreValue;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderGroup.SetBaseTimeStep
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newBaseTimeStep                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingSpaceInvaderGroup::SetBaseTimeStep(float newBaseTimeStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.SetBaseTimeStep");

	ABowlingSpaceInvaderGroup_SetBaseTimeStep_Params params;
	params.newBaseTimeStep = newBaseTimeStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderGroup.NotifyResetAlienGroup
// (Event, Public, BlueprintEvent)
void ABowlingSpaceInvaderGroup::NotifyResetAlienGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.NotifyResetAlienGroup");

	ABowlingSpaceInvaderGroup_NotifyResetAlienGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderGroup.IsGroupInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingSpaceInvaderGroup::IsGroupInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.IsGroupInitialized");

	ABowlingSpaceInvaderGroup_IsGroupInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingSpaceInvaderGroup.IsGroupClear
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldPosition                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          clearMargin                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingSpaceInvaderGroup::IsGroupClear(const struct FVector& WorldPosition, float clearMargin)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.IsGroupClear");

	ABowlingSpaceInvaderGroup_IsGroupClear_Params params;
	params.WorldPosition = WorldPosition;
	params.clearMargin = clearMargin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingSpaceInvaderGroup.IsGameplayRunning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABowlingSpaceInvaderGroup::IsGameplayRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.IsGameplayRunning");

	ABowlingSpaceInvaderGroup_IsGameplayRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingSpaceInvaderGroup.GetCurrentTimeStep
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ABowlingSpaceInvaderGroup::GetCurrentTimeStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.GetCurrentTimeStep");

	ABowlingSpaceInvaderGroup_GetCurrentTimeStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingSpaceInvaderGroup.EndGameplay
// (Final, Native, Public, BlueprintCallable)
void ABowlingSpaceInvaderGroup::EndGameplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.EndGameplay");

	ABowlingSpaceInvaderGroup_EndGameplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderGroup.DeferredInitComplete
// (Event, Public, BlueprintEvent)
void ABowlingSpaceInvaderGroup::DeferredInitComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.DeferredInitComplete");

	ABowlingSpaceInvaderGroup_DeferredInitComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderGroup.DeferredInit
// (Final, Native, Private)
void ABowlingSpaceInvaderGroup::DeferredInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.DeferredInit");

	ABowlingSpaceInvaderGroup_DeferredInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderGroup.ChangeTimeStep
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newTimeStep                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingSpaceInvaderGroup::ChangeTimeStep(float newTimeStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.ChangeTimeStep");

	ABowlingSpaceInvaderGroup_ChangeTimeStep_Params params;
	params.newTimeStep = newTimeStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderGroup.BeginGameplay
// (Final, Native, Public, BlueprintCallable)
void ABowlingSpaceInvaderGroup::BeginGameplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.BeginGameplay");

	ABowlingSpaceInvaderGroup_BeginGameplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_UpdateAliens
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector_NetQuantize     newWorldPos                    (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FQuat                   newWorldRot                    (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class USoundBase*              pSoundAsset                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingSpaceInvaderNetHelper::Server_UpdateAliens(const struct FVector_NetQuantize& newWorldPos, const struct FQuat& newWorldRot, class USoundBase* pSoundAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_UpdateAliens");

	ABowlingSpaceInvaderNetHelper_Server_UpdateAliens_Params params;
	params.newWorldPos = newWorldPos;
	params.newWorldRot = newWorldRot;
	params.pSoundAsset = pSoundAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_ShutdownAliens
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ABowlingSpaceInvaderNetHelper::Server_ShutdownAliens()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_ShutdownAliens");

	ABowlingSpaceInvaderNetHelper_Server_ShutdownAliens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_PrepareAliens
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ABowlingSpaceInvaderNetHelper::Server_PrepareAliens()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_PrepareAliens");

	ABowlingSpaceInvaderNetHelper_Server_PrepareAliens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_UpdateAliens
// (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults, NetValidate)
// Parameters:
// struct FVector_NetQuantize     newWorldPos                    (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FQuat                   newWorldRot                    (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class USoundBase*              pSoundAsset                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABowlingSpaceInvaderNetHelper::NetMulticast_UpdateAliens(const struct FVector_NetQuantize& newWorldPos, const struct FQuat& newWorldRot, class USoundBase* pSoundAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_UpdateAliens");

	ABowlingSpaceInvaderNetHelper_NetMulticast_UpdateAliens_Params params;
	params.newWorldPos = newWorldPos;
	params.newWorldRot = newWorldRot;
	params.pSoundAsset = pSoundAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_ShutdownAliens
// (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
void ABowlingSpaceInvaderNetHelper::NetMulticast_ShutdownAliens()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_ShutdownAliens");

	ABowlingSpaceInvaderNetHelper_NetMulticast_ShutdownAliens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_PrepareAliens
// (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
void ABowlingSpaceInvaderNetHelper::NetMulticast_PrepareAliens()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_PrepareAliens");

	ABowlingSpaceInvaderNetHelper_NetMulticast_PrepareAliens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingSpinKicker.SimpleBeginOverlap
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBowlingSpinKicker::SimpleBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpinKicker.SimpleBeginOverlap");

	UBowlingSpinKicker_SimpleBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.BowlingUtils.SwitchHasBowlingAuthority
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EBowlingAuthority Branch                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBowlingUtils::STATIC_SwitchHasBowlingAuthority(class UObject* WorldContextObject, SportsScramble_EBowlingAuthority* Branch)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingUtils.SwitchHasBowlingAuthority");

	UBowlingUtils_SwitchHasBowlingAuthority_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function SportsScramble.BowlingUtils.ObjectHasBowlingAuthority
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBowlingUtils::STATIC_ObjectHasBowlingAuthority(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingUtils.ObjectHasBowlingAuthority");

	UBowlingUtils_ObjectHasBowlingAuthority_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.BowlingUtils.HasBowlingAuthority
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBowlingUtils::STATIC_HasBowlingAuthority(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingUtils.HasBowlingAuthority");

	UBowlingUtils_HasBowlingAuthority_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.CancelOculusMatchmakingCallbackProxy.CancelOculusMatchmaking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCancelOculusMatchmakingCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCancelOculusMatchmakingCallbackProxy* UCancelOculusMatchmakingCallbackProxy::STATIC_CancelOculusMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.CancelOculusMatchmakingCallbackProxy.CancelOculusMatchmaking");

	UCancelOculusMatchmakingCallbackProxy_CancelOculusMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.DestroyOculusSessionCallbackProxy.DestroyOculusSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDestroyOculusSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDestroyOculusSessionCallbackProxy* UDestroyOculusSessionCallbackProxy::STATIC_DestroyOculusSession(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.DestroyOculusSessionCallbackProxy.DestroyOculusSession");

	UDestroyOculusSessionCallbackProxy_DestroyOculusSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.DodgeballBall.OnShotChanged
// (Event, Protected, BlueprintEvent)
void ADodgeballBall::OnShotChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.DodgeballBall.OnShotChanged");

	ADodgeballBall_OnShotChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.DodgeballBall.GetShot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDodgeballShot          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FDodgeballShot ADodgeballBall::GetShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.DodgeballBall.GetShot");

	ADodgeballBall_GetShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.DodgeballBall.GetDodgeballBallProperties
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDodgeballBallProperties ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FDodgeballBallProperties ADodgeballBall::GetDodgeballBallProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.DodgeballBall.GetDodgeballBallProperties");

	ADodgeballBall_GetDodgeballBallProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.DodgeballGlove.PlayHaptic
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UHapticFeedbackEffect_Base* haptic                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADodgeballGlove::PlayHaptic(class UHapticFeedbackEffect_Base* haptic, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.DodgeballGlove.PlayHaptic");

	ADodgeballGlove_PlayHaptic_Params params;
	params.haptic = haptic;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.DodgeballGlove.ItemThrown
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                  Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADodgeballGlove::ItemThrown(class AActor* Item, const struct FVector& Location, float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.DodgeballGlove.ItemThrown");

	ADodgeballGlove_ItemThrown_Params params;
	params.Item = Item;
	params.Location = Location;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.DodgeballGlove.ItemPassed
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                  Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADodgeballGlove::ItemPassed(class AActor* Item, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.DodgeballGlove.ItemPassed");

	ADodgeballGlove_ItemPassed_Params params;
	params.Item = Item;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.DodgeballGlove.ItemCaught
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                  Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADodgeballGlove::ItemCaught(class AActor* Item, const struct FVector& Location, float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.DodgeballGlove.ItemCaught");

	ADodgeballGlove_ItemCaught_Params params;
	params.Item = Item;
	params.Location = Location;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramMeshShadow.GetShadowSample
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UScramMeshShadow::GetShadowSample()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramMeshShadow.GetShadowSample");

	UScramMeshShadow_GetShadowSample_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.FanMeshShadow.GetInstancedMeshFloatValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          shadowSample                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFanMeshShadow::GetInstancedMeshFloatValue(float shadowSample)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.FanMeshShadow.GetInstancedMeshFloatValue");

	UFanMeshShadow_GetInstancedMeshFloatValue_Params params;
	params.shadowSample = shadowSample;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.FieldingPlayerManager.SetTimeScale
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// SportsScramble_EVerticalFieldZone zone                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMinMaxFloat            TimeScale                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AFieldingPlayerManager::SetTimeScale(SportsScramble_EVerticalFieldZone zone, const struct FMinMaxFloat& TimeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.FieldingPlayerManager.SetTimeScale");

	AFieldingPlayerManager_SetTimeScale_Params params;
	params.zone = zone;
	params.TimeScale = TimeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.FieldingPlayerManager.OnBallInPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABaseballBall*           Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EVerticalFieldZone zone                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFieldingPlayerManager::OnBallInPlay(class ABaseballBall* Ball, SportsScramble_EVerticalFieldZone zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.FieldingPlayerManager.OnBallInPlay");

	AFieldingPlayerManager_OnBallInPlay_Params params;
	params.Ball = Ball;
	params.zone = zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.FieldingPlayerManager.GetTimeScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EVerticalFieldZone zone                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMinMaxFloat            ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
struct FMinMaxFloat AFieldingPlayerManager::GetTimeScale(SportsScramble_EVerticalFieldZone zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.FieldingPlayerManager.GetTimeScale");

	AFieldingPlayerManager_GetTimeScale_Params params;
	params.zone = zone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.FlyTextLabel.SetText
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FText                   Text                           (Parm, NativeAccessSpecifierPublic)
void AFlyTextLabel::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.FlyTextLabel.SetText");

	AFlyTextLabel_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.FlyTextLabel.SetScore
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bonus                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   combineTag                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlyTextLabel::SetScore(int score, bool bonus, const struct FName& combineTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.FlyTextLabel.SetScore");

	AFlyTextLabel_SetScore_Params params;
	params.score = score;
	params.bonus = bonus;
	params.combineTag = combineTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.GameInviteUtils.GetFriends
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UGameInviteUtils::STATIC_GetFriends(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.GameInviteUtils.GetFriends");

	UGameInviteUtils_GetFriends_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.HoopsLaneIndicator.StopIndicator
// (Final, Native, Public, BlueprintCallable)
void UHoopsLaneIndicator::StopIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.HoopsLaneIndicator.StopIndicator");

	UHoopsLaneIndicator_StopIndicator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.HoopsLaneIndicator.StartIndicator
// (Final, Native, Public, BlueprintCallable)
void UHoopsLaneIndicator::StartIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.HoopsLaneIndicator.StartIndicator");

	UHoopsLaneIndicator_StartIndicator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.HoopsLaneIndicator.SetFlipper
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ABowlingLaneFlipper*     Flipper                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHoopsLaneIndicator::SetFlipper(class ABowlingLaneFlipper* Flipper)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.HoopsLaneIndicator.SetFlipper");

	UHoopsLaneIndicator_SetFlipper_Params params;
	params.Flipper = Flipper;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.HoopsLaneIndicator.ProgressIndicator
// (Final, Native, Protected)
void UHoopsLaneIndicator::ProgressIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.HoopsLaneIndicator.ProgressIndicator");

	UHoopsLaneIndicator_ProgressIndicator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.InstancedMesh.UnregisterInstance
// (Final, Native, Public, BlueprintCallable)
void UInstancedMesh::UnregisterInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.InstancedMesh.UnregisterInstance");

	UInstancedMesh_UnregisterInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.InstancedMesh.SetInstanceFloatValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FloatValue                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInstancedMesh::SetInstanceFloatValue(float FloatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.InstancedMesh.SetInstanceFloatValue");

	UInstancedMesh_SetInstanceFloatValue_Params params;
	params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.InstancedMesh.RegisterInstance
// (Final, Native, Public, BlueprintCallable)
void UInstancedMesh::RegisterInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.InstancedMesh.RegisterInstance");

	UInstancedMesh_RegisterInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.InviteFriendCallbackProxy.InviteFriend
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScramFriend            invitedFriend                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UInviteFriendCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInviteFriendCallbackProxy* UInviteFriendCallbackProxy::STATIC_InviteFriend(class APlayerController* PlayerController, const struct FScramFriend& invitedFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.InviteFriendCallbackProxy.InviteFriend");

	UInviteFriendCallbackProxy_InviteFriend_Params params;
	params.PlayerController = PlayerController;
	params.invitedFriend = invitedFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.JoinOculusSessionCallbackProxy.JoinOculusSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UJoinOculusSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJoinOculusSessionCallbackProxy* UJoinOculusSessionCallbackProxy::STATIC_JoinOculusSession(class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.JoinOculusSessionCallbackProxy.JoinOculusSession");

	UJoinOculusSessionCallbackProxy_JoinOculusSession_Params params;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.MenuInstrument.TryMakeActiveMenuInstrument
// (Final, Native, Protected, BlueprintCallable)
void AMenuInstrument::TryMakeActiveMenuInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MenuInstrument.TryMakeActiveMenuInstrument");

	AMenuInstrument_TryMakeActiveMenuInstrument_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.MenuInstrument.SetPointerMenuOption
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           useMenuPointer                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMenuInstrument::SetPointerMenuOption(bool useMenuPointer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MenuInstrument.SetPointerMenuOption");

	AMenuInstrument_SetPointerMenuOption_Params params;
	params.useMenuPointer = useMenuPointer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.MenuInstrument.SetLaserPointerVisibility
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           IsVisible                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMenuInstrument::SetLaserPointerVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MenuInstrument.SetLaserPointerVisibility");

	AMenuInstrument_SetLaserPointerVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.MenuInstrument.OnNotifyInputRelease
// (Event, Protected, BlueprintEvent)
void AMenuInstrument::OnNotifyInputRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MenuInstrument.OnNotifyInputRelease");

	AMenuInstrument_OnNotifyInputRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.MenuInstrument.OnNotifyInputPress
// (Event, Protected, BlueprintEvent)
void AMenuInstrument::OnNotifyInputPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MenuInstrument.OnNotifyInputPress");

	AMenuInstrument_OnNotifyInputPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.MenuInstrument.OnChangePointerType
// (Event, Protected, BlueprintEvent)
void AMenuInstrument::OnChangePointerType()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MenuInstrument.OnChangePointerType");

	AMenuInstrument_OnChangePointerType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.MenuInstrument.Initialize
// (Final, Native, Protected, BlueprintCallable)
void AMenuInstrument::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MenuInstrument.Initialize");

	AMenuInstrument_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.MusicManager.StopMusic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          FadeTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMusicManager::STATIC_StopMusic(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.StopMusic");

	AMusicManager_StopMusic_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.MusicManager.Stop
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          FadeTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMusicManager::Stop(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.Stop");

	AMusicManager_Stop_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.MusicManager.PlayMusicEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   EntryName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FadeTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMusicManager::STATIC_PlayMusicEntry(const struct FName& EntryName, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.PlayMusicEntry");

	AMusicManager_PlayMusicEntry_Params params;
	params.EntryName = EntryName;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.MusicManager.PlayMusic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Volume                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FadeTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMusicManager::STATIC_PlayMusic(class USoundBase* Sound, float StartTime, float Volume, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.PlayMusic");

	AMusicManager_PlayMusic_Params params;
	params.Sound = Sound;
	params.StartTime = StartTime;
	params.Volume = Volume;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.MusicManager.PlayEntry
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EntryName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FadeTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMusicManager::PlayEntry(const struct FName& EntryName, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.PlayEntry");

	AMusicManager_PlayEntry_Params params;
	params.EntryName = EntryName;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.MusicManager.Play
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Volume                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FadeTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMusicManager::Play(class USoundBase* Sound, float StartTime, float Volume, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.Play");

	AMusicManager_Play_Params params;
	params.Sound = Sound;
	params.StartTime = StartTime;
	params.Volume = Volume;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.MusicManager.IsPlaying
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMusicManager::IsPlaying(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.IsPlaying");

	AMusicManager_IsPlaying_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.MusicManager.IsMusicPlaying
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMusicManager::STATIC_IsMusicPlaying(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.IsMusicPlaying");

	AMusicManager_IsMusicPlaying_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.NetworkMotionStateManager.Server_ApplyReplicatedStates
// (Final, Net, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// TArray<struct FNetworkMotionState> States                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ANetworkMotionStateManager::Server_ApplyReplicatedStates(TArray<struct FNetworkMotionState> States)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.NetworkMotionStateManager.Server_ApplyReplicatedStates");

	ANetworkMotionStateManager_Server_ApplyReplicatedStates_Params params;
	params.States = States;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.NetworkMotionStateManager.OnRep_ReplicatedStates
// (Final, Native, Private)
void ANetworkMotionStateManager::OnRep_ReplicatedStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.NetworkMotionStateManager.OnRep_ReplicatedStates");

	ANetworkMotionStateManager_OnRep_ReplicatedStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.PitchingAvatar.OnDrop
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APitchingAvatar::OnDrop(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.PitchingAvatar.OnDrop");

	APitchingAvatar_OnDrop_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.PitchingAvatar.OnBaseballEvent
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APitchingAvatar::OnBaseballEvent(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.PitchingAvatar.OnBaseballEvent");

	APitchingAvatar_OnBaseballEvent_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.PitchingAvatar.OnBallGrabbed
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APitchingAvatar::OnBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.PitchingAvatar.OnBallGrabbed");

	APitchingAvatar_OnBallGrabbed_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.PitchingPropInterface.SetBattingPlayer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  batterActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPitchingPropInterface::SetBattingPlayer(class AActor* batterActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.PitchingPropInterface.SetBattingPlayer");

	UPitchingPropInterface_SetBattingPlayer_Params params;
	params.batterActor = batterActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.PlayByPlay.NetMulticast_PlayByPlayEvent
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// int                            eventIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APlayByPlay::NetMulticast_PlayByPlayEvent(int eventIndex, class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlay.NetMulticast_PlayByPlayEvent");

	APlayByPlay_NetMulticast_PlayByPlayEvent_Params params;
	params.eventIndex = eventIndex;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.PlayByPlay.IsQueuedOrPlaying
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APlayByPlay::STATIC_IsQueuedOrPlaying(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlay.IsQueuedOrPlaying");

	APlayByPlay_IsQueuedOrPlaying_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.PlayByPlay.CultureChanged
// (Final, Native, Public, BlueprintCallable)
void APlayByPlay::CultureChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlay.CultureChanged");

	APlayByPlay_CultureChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.PlayByPlayBaseball.OnBaseballEvent
// (Final, Native, Protected)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APlayByPlayBaseball::OnBaseballEvent(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlayBaseball.OnBaseballEvent");

	APlayByPlayBaseball_OnBaseballEvent_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.PlayByPlayBaseball.BatChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// SportsScramble_EBaseballInstrumentType newBatType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APlayByPlayBaseball::STATIC_BatChange(SportsScramble_EBaseballInstrumentType newBatType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlayBaseball.BatChange");

	APlayByPlayBaseball_BatChange_Params params;
	params.newBatType = newBatType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.PlayByPlayBaseball.BallChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// SportsScramble_EBaseballBallType newBallType                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APlayByPlayBaseball::STATIC_BallChange(SportsScramble_EBaseballBallType newBallType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlayBaseball.BallChange");

	APlayByPlayBaseball_BallChange_Params params;
	params.newBallType = newBallType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TennisBall.OnShotChanged
// (Event, Protected, BlueprintEvent)
void ATennisBall::OnShotChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisBall.OnShotChanged");

	ATennisBall_OnShotChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TennisBall.OnRallyCountChanged
// (Event, Protected, BlueprintEvent)
void ATennisBall::OnRallyCountChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisBall.OnRallyCountChanged");

	ATennisBall_OnRallyCountChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TennisBall.GetTennisBallProperties
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTennisBallProperties   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FTennisBallProperties ATennisBall::GetTennisBallProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisBall.GetTennisBallProperties");

	ATennisBall_GetTennisBallProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.TennisBall.GetTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* ATennisBall::GetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisBall.GetTarget");

	ATennisBall_GetTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.TennisBall.GetShot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTennisShot             ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FTennisShot ATennisBall::GetShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisBall.GetShot");

	ATennisBall_GetShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.TennisBall.GetSender
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* ATennisBall::GetSender()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisBall.GetSender");

	ATennisBall_GetSender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.TennisBall.GetRallyCount
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ATennisBall::GetRallyCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisBall.GetRallyCount");

	ATennisBall_GetRallyCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.PlayByPlayTennis.SendPlayByPlayEvent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// SportsScramble_ETennisPlayByPlayEvent playByPlayEvent                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APlayByPlayTennis::SendPlayByPlayEvent(SportsScramble_ETennisPlayByPlayEvent playByPlayEvent, class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlayTennis.SendPlayByPlayEvent");

	APlayByPlayTennis_SendPlayByPlayEvent_Params params;
	params.playByPlayEvent = playByPlayEvent;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.PlayByPlayTennis.RacquetChange
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTennisInstrumentProperties instrumentProps                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void APlayByPlayTennis::STATIC_RacquetChange(class AActor* Player, const struct FTennisInstrumentProperties& instrumentProps)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlayTennis.RacquetChange");

	APlayByPlayTennis_RacquetChange_Params params;
	params.Player = Player;
	params.instrumentProps = instrumentProps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBallManager.SetMaxBalls
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            maxBalls                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBallManager::STATIC_SetMaxBalls(int maxBalls)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBallManager.SetMaxBalls");

	AScramBallManager_SetMaxBalls_Params params;
	params.maxBalls = maxBalls;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBaseAI.PlaySpawnAnimation
// (Final, Native, Public, BlueprintCallable)
void AScramBaseAI::PlaySpawnAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseAI.PlaySpawnAnimation");

	AScramBaseAI_PlaySpawnAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBaseballBatterAI.PlayBatSound
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABaseballBall*           Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BallSpeed                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBaseballBatterAI::PlayBatSound(class ABaseballBall* Ball, float BallSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballBatterAI.PlayBatSound");

	AScramBaseballBatterAI_PlayBatSound_Params params;
	params.Ball = Ball;
	params.BallSpeed = BallSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBaseballCatcherAI.SetState
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// SportsScramble_ECatcherAIState newState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBaseballCatcherAI::SetState(SportsScramble_ECatcherAIState newState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballCatcherAI.SetState");

	AScramBaseballCatcherAI_SetState_Params params;
	params.newState = newState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBaseballCatcherAI.SetGloveMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SportsScramble_ECatcherGloveMode gloveMode                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EScramSkill     Skill                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBaseballCatcherAI::SetGloveMode(SportsScramble_ECatcherGloveMode gloveMode, SportsScramble_EScramSkill Skill)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballCatcherAI.SetGloveMode");

	AScramBaseballCatcherAI_SetGloveMode_Params params;
	params.gloveMode = gloveMode;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBaseballCatcherAI.OnBallHit
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBaseballCatcherAI::OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballCatcherAI.OnBallHit");

	AScramBaseballCatcherAI_OnBallHit_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBaseballCatcherAI.OnBallDropped
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBaseballCatcherAI::OnBallDropped(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballCatcherAI.OnBallDropped");

	AScramBaseballCatcherAI_OnBallDropped_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBaseballCatcherAI.OnBallCaught
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBaseballCatcherAI::OnBallCaught(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballCatcherAI.OnBallCaught");

	AScramBaseballCatcherAI_OnBallCaught_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBaseballCatcherAI.GetGloveMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AScramSportManagerBaseball* pBaseball                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_ECatcherGloveMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_ECatcherGloveMode AScramBaseballCatcherAI::GetGloveMode(class AScramSportManagerBaseball* pBaseball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballCatcherAI.GetGloveMode");

	AScramBaseballCatcherAI_GetGloveMode_Params params;
	params.pBaseball = pBaseball;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramBaseballCatcherAI.BallCaught
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                  Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EBaseballBallType BallType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Imbued                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBaseballCatcherAI::BallCaught(class AActor* Ball, const struct FVector& Position, SportsScramble_EBaseballBallType BallType, bool Imbued)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballCatcherAI.BallCaught");

	AScramBaseballCatcherAI_BallCaught_Params params;
	params.Ball = Ball;
	params.Position = Position;
	params.BallType = BallType;
	params.Imbued = Imbued;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBaseballFielderAI.OnBaseballEvent
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBaseballFielderAI::OnBaseballEvent(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballFielderAI.OnBaseballEvent");

	AScramBaseballFielderAI_OnBaseballEvent_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBaseballFielderAI.NetMulticast_SetDesiredAnimState
// (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
// Parameters:
// SportsScramble_EBaseballFielderAnimState animState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBaseballFielderAI::NetMulticast_SetDesiredAnimState(SportsScramble_EBaseballFielderAnimState animState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballFielderAI.NetMulticast_SetDesiredAnimState");

	AScramBaseballFielderAI_NetMulticast_SetDesiredAnimState_Params params;
	params.animState = animState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBaseballPitcherAI.PlayMittSound
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABaseballBall*           Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BallSpeed                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBaseballPitcherAI::PlayMittSound(class ABaseballBall* Ball, float BallSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballPitcherAI.PlayMittSound");

	AScramBaseballPitcherAI_PlayMittSound_Params params;
	params.Ball = Ball;
	params.BallSpeed = BallSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBaseballPitcherAI.GetScrambleBallClass
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UClass*                  Ball                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBaseballPitcherAI::GetScrambleBallClass(class UClass** Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballPitcherAI.GetScrambleBallClass");

	AScramBaseballPitcherAI_GetScrambleBallClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ball != nullptr)
		*Ball = params.Ball;

}


// Function SportsScramble.ScramBaseballRunnerAI.OnSpawn
// (Event, Protected, BlueprintEvent)
void AScramBaseballRunnerAI::OnSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballRunnerAI.OnSpawn");

	AScramBaseballRunnerAI_OnSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBaseballRunnerAI.OnDespawn
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramBaseballRunnerAI::OnDespawn(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballRunnerAI.OnDespawn");

	AScramBaseballRunnerAI_OnDespawn_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramBaseballRunnerAI.HasReachedHome
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramBaseballRunnerAI::HasReachedHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballRunnerAI.HasReachedHome");

	AScramBaseballRunnerAI_HasReachedHome_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramBaseballRunnerAI.GetDestinationBase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AScramBaseballRunnerAI::GetDestinationBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballRunnerAI.GetDestinationBase");

	AScramBaseballRunnerAI_GetDestinationBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScrambleTarget.GetAiValue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// SportsScramble_EScrambleTargetAiValue Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScrambleTarget::GetAiValue(SportsScramble_EScrambleTargetAiValue* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScrambleTarget.GetAiValue");

	AScrambleTarget_GetAiValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function SportsScramble.TextureSamplerSettings.SampleTexture
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 worldPos                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                  DefaultColor                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FColor ATextureSamplerSettings::SampleTexture(const struct FVector& worldPos, const struct FColor& DefaultColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TextureSamplerSettings.SampleTexture");

	ATextureSamplerSettings_SampleTexture_Params params;
	params.worldPos = worldPos;
	params.DefaultColor = DefaultColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramCameraCover.EnqueueVignette
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCoverVignette          vignette                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AScramCameraCover::STATIC_EnqueueVignette(const struct FCoverVignette& vignette)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramCameraCover.EnqueueVignette");

	AScramCameraCover_EnqueueVignette_Params params;
	params.vignette = vignette;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrajectoryInfluencerActor.SetInfluencerEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramTrajectoryInfluencerActor::SetInfluencerEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrajectoryInfluencerActor.SetInfluencerEnabled");

	AScramTrajectoryInfluencerActor_SetInfluencerEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramCourt.SetScramCourtMatchType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EScramCourtMatchType matchType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramCourt::STATIC_SetScramCourtMatchType(class UObject* pWorldContextObject, SportsScramble_EScramCourtMatchType matchType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramCourt.SetScramCourtMatchType");

	AScramCourt_SetScramCourtMatchType_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.matchType = matchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramCourt.GetScramCourtMatchType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EScramCourtMatchType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EScramCourtMatchType AScramCourt::STATIC_GetScramCourtMatchType(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramCourt.GetScramCourtMatchType");

	AScramCourt_GetScramCourtMatchType_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramDodgeballAI.SetTeam2
// (Final, Native, Protected, BlueprintCallable)
void AScramDodgeballAI::SetTeam2()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballAI.SetTeam2");

	AScramDodgeballAI_SetTeam2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramDodgeballAI.SetTeam1
// (Final, Native, Protected, BlueprintCallable)
void AScramDodgeballAI::SetTeam1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballAI.SetTeam1");

	AScramDodgeballAI_SetTeam1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramDodgeballAI.SetPositionIndex
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramDodgeballAI::SetPositionIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballAI.SetPositionIndex");

	AScramDodgeballAI_SetPositionIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramDodgeballAI.GetTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EScramDodgeballTeam ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EScramDodgeballTeam AScramDodgeballAI::GetTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballAI.GetTeam");

	AScramDodgeballAI_GetTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramDodgeballAI.GetPositionIndex
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AScramDodgeballAI::GetPositionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballAI.GetPositionIndex");

	AScramDodgeballAI_GetPositionIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramDodgeballPawnAI.StartGame
// (Final, Native, Protected, BlueprintCallable)
void AScramDodgeballPawnAI::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballPawnAI.StartGame");

	AScramDodgeballPawnAI_StartGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramDodgeballPawnAI.SetDelayBeforeThrowing
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FMinMaxFloat            delayBeforeThrow               (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AScramDodgeballPawnAI::SetDelayBeforeThrowing(const struct FMinMaxFloat& delayBeforeThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballPawnAI.SetDelayBeforeThrowing");

	AScramDodgeballPawnAI_SetDelayBeforeThrowing_Params params;
	params.delayBeforeThrow = delayBeforeThrow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramDodgeballPawnAI.KnockedOut
// (Event, Protected, BlueprintEvent)
void AScramDodgeballPawnAI::KnockedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballPawnAI.KnockedOut");

	AScramDodgeballPawnAI_KnockedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramDodgeballPawnAI.BallThrown
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                  Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramDodgeballPawnAI::BallThrown(class AActor* Ball, const struct FVector& Location, float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballPawnAI.BallThrown");

	AScramDodgeballPawnAI_BallThrown_Params params;
	params.Ball = Ball;
	params.Location = Location;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramEquipmentSet.PostEquipmentSpawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramPrimitiveGrabbable* DominantHandSpawnedEquipment   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramPrimitiveGrabbable* OffHandSpawnedEquipment        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramEquipmentSet::PostEquipmentSpawn(class AScramPrimitiveGrabbable* DominantHandSpawnedEquipment, class AScramPrimitiveGrabbable* OffHandSpawnedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEquipmentSet.PostEquipmentSpawn");

	AScramEquipmentSet_PostEquipmentSpawn_Params params;
	params.DominantHandSpawnedEquipment = DominantHandSpawnedEquipment;
	params.OffHandSpawnedEquipment = OffHandSpawnedEquipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramEventObjectPayload.CreateObjectPayload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventObjectPayload* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UScramEventObjectPayload* UScramEventObjectPayload::STATIC_CreateObjectPayload(class UObject* WorldContextObject, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEventObjectPayload.CreateObjectPayload");

	UScramEventObjectPayload_CreateObjectPayload_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramEventCollisionPayload.CreateCollisionPayload
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitNormal                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventCollisionPayload* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UScramEventCollisionPayload* UScramEventCollisionPayload::STATIC_CreateCollisionPayload(class UObject* WorldContextObject, class AActor* OtherActor, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEventCollisionPayload.CreateCollisionPayload");

	UScramEventCollisionPayload_CreateCollisionPayload_Params params;
	params.WorldContextObject = WorldContextObject;
	params.OtherActor = OtherActor;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramEventManager.UnbindEventFromObjectScramEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AScramEventManager::STATIC_UnbindEventFromObjectScramEvent(SportsScramble_EScramEvent ScramEvent, class UObject* WorldContextObject, const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEventManager.UnbindEventFromObjectScramEvent");

	AScramEventManager_UnbindEventFromObjectScramEvent_Params params;
	params.ScramEvent = ScramEvent;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramEventManager.UnbindEventFromGlobalScramEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AScramEventManager::STATIC_UnbindEventFromGlobalScramEvent(SportsScramble_EScramEvent ScramEvent, const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEventManager.UnbindEventFromGlobalScramEvent");

	AScramEventManager_UnbindEventFromGlobalScramEvent_Params params;
	params.ScramEvent = ScramEvent;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramEventManager.BroadcastScramEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  Payload                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           replicate                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramEventManager::STATIC_BroadcastScramEvent(SportsScramble_EScramEvent ScramEvent, class UObject* WorldContextObject, class UScramEventBasePayload* Payload, bool replicate)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEventManager.BroadcastScramEvent");

	AScramEventManager_BroadcastScramEvent_Params params;
	params.ScramEvent = ScramEvent;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;
	params.replicate = replicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramEventManager.BindEventToObjectScramEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AScramEventManager::STATIC_BindEventToObjectScramEvent(SportsScramble_EScramEvent ScramEvent, class UObject* WorldContextObject, const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEventManager.BindEventToObjectScramEvent");

	AScramEventManager_BindEventToObjectScramEvent_Params params;
	params.ScramEvent = ScramEvent;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramEventManager.BindEventToGlobalScramEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AScramEventManager::STATIC_BindEventToGlobalScramEvent(SportsScramble_EScramEvent ScramEvent, const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEventManager.BindEventToGlobalScramEvent");

	AScramEventManager_BindEventToGlobalScramEvent_Params params;
	params.ScramEvent = ScramEvent;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.StopGameInvitePings
// (Final, Native, Public, BlueprintCallable)
void UScramGameInstance::StopGameInvitePings()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.StopGameInvitePings");

	UScramGameInstance_StopGameInvitePings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.StartOculusAchievementSync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramGameInstance::STATIC_StartOculusAchievementSync(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.StartOculusAchievementSync");

	UScramGameInstance_StartOculusAchievementSync_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.ShowDebugMessage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LifeTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramGameInstance::ShowDebugMessage(const struct FString& Message, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.ShowDebugMessage");

	UScramGameInstance_ShowDebugMessage_Params params;
	params.Message = Message;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.SetUseVoiceChat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           useVoice                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramGameInstance::SetUseVoiceChat(bool useVoice)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.SetUseVoiceChat");

	UScramGameInstance_SetUseVoiceChat_Params params;
	params.useVoice = useVoice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.SetLocalizationCulture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Culture                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramGameInstance::STATIC_SetLocalizationCulture(class UObject* WorldContextObject, const struct FString& Culture)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.SetLocalizationCulture");

	UScramGameInstance_SetLocalizationCulture_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Culture = Culture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.SetAvatarLook
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AScramPlayer*            pPlayer                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAvatarLook             AvatarLook                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UScramGameInstance::SetAvatarLook(class AScramPlayer* pPlayer, const struct FAvatarLook& AvatarLook)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.SetAvatarLook");

	UScramGameInstance_SetAvatarLook_Params params;
	params.pPlayer = pPlayer;
	params.AvatarLook = AvatarLook;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.SaveGameData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramGameInstance::STATIC_SaveGameData(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.SaveGameData");

	UScramGameInstance_SaveGameData_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.RemoveShelfActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramGameInstance::STATIC_RemoveShelfActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.RemoveShelfActor");

	UScramGameInstance_RemoveShelfActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.RefreshGameInvites
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UScramGameInstance::RefreshGameInvites(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.RefreshGameInvites");

	UScramGameInstance_RefreshGameInvites_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.OnInputFocusReceived
// (Event, Public, BlueprintEvent)
void UScramGameInstance::OnInputFocusReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.OnInputFocusReceived");

	UScramGameInstance_OnInputFocusReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.OnInputFocusLost
// (Event, Public, BlueprintEvent)
void UScramGameInstance::OnInputFocusLost()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.OnInputFocusLost");

	UScramGameInstance_OnInputFocusLost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.OnHeadsetReconnected
// (Event, Public, BlueprintEvent)
void UScramGameInstance::OnHeadsetReconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.OnHeadsetReconnected");

	UScramGameInstance_OnHeadsetReconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.OnHeadsetDisconnected
// (Event, Public, BlueprintEvent)
void UScramGameInstance::OnHeadsetDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.OnHeadsetDisconnected");

	UScramGameInstance_OnHeadsetDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.OnControllerConnectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsConnected                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramGameInstance::OnControllerConnectionChanged(bool IsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.OnControllerConnectionChanged");

	UScramGameInstance_OnControllerConnectionChanged_Params params;
	params.IsConnected = IsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.LocalNetworkVersionOverride
// (Final, Native, Private)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
uint32_t UScramGameInstance::LocalNetworkVersionOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.LocalNetworkVersionOverride");

	UScramGameInstance_LocalNetworkVersionOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameInstance.LoadSoftRefTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UScramGameInstance::STATIC_LoadSoftRefTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.LoadSoftRefTexture");

	UScramGameInstance_LoadSoftRefTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameInstance.LoadSoftObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UScramGameInstance::STATIC_LoadSoftObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.LoadSoftObject");

	UScramGameInstance_LoadSoftObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameInstance.LoadSoftClassActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UScramGameInstance::STATIC_LoadSoftClassActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.LoadSoftClassActor");

	UScramGameInstance_LoadSoftClassActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameInstance.LoadGameData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramGameInstance::STATIC_LoadGameData(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.LoadGameData");

	UScramGameInstance_LoadGameData_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.LoadArrayFromSoftTextures
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UTexture2D*>      textureList                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramGameInstance::STATIC_LoadArrayFromSoftTextures(TArray<class UTexture2D*>* textureList)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.LoadArrayFromSoftTextures");

	UScramGameInstance_LoadArrayFromSoftTextures_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (textureList != nullptr)
		*textureList = params.textureList;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameInstance.IsHeadsetConnected
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramGameInstance::STATIC_IsHeadsetConnected(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.IsHeadsetConnected");

	UScramGameInstance_IsHeadsetConnected_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameInstance.InitializePendingGameInvitesComplete
// (Final, Native, Private, HasOutParms)
// Parameters:
// bool                           wasSuccessful                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FScramGameInvite> invites                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UScramGameInstance::InitializePendingGameInvitesComplete(bool wasSuccessful, TArray<struct FScramGameInvite> invites)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.InitializePendingGameInvitesComplete");

	UScramGameInstance_InitializePendingGameInvitesComplete_Params params;
	params.wasSuccessful = wasSuccessful;
	params.invites = invites;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.InitializePendingGameInvites
// (Final, Native, Public, BlueprintCallable)
void UScramGameInstance::InitializePendingGameInvites()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.InitializePendingGameInvites");

	UScramGameInstance_InitializePendingGameInvites_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.HasSportStateSaved
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramGameInstance::STATIC_HasSportStateSaved(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.HasSportStateSaved");

	UScramGameInstance_HasSportStateSaved_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameInstance.HasPendingGameInvites
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramGameInstance::HasPendingGameInvites()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.HasPendingGameInvites");

	UScramGameInstance_HasPendingGameInvites_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameInstance.GetUseVoiceChat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramGameInstance::GetUseVoiceChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.GetUseVoiceChat");

	UScramGameInstance_GetUseVoiceChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameInstance.GetSaveData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramSaveData*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UScramSaveData* UScramGameInstance::STATIC_GetSaveData(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.GetSaveData");

	UScramGameInstance_GetSaveData_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameInstance.GetLocalizationCulture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UScramGameInstance::STATIC_GetLocalizationCulture(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.GetLocalizationCulture");

	UScramGameInstance_GetLocalizationCulture_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameInstance.DoesUseVoiceChat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramGameInstance::STATIC_DoesUseVoiceChat(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.DoesUseVoiceChat");

	UScramGameInstance_DoesUseVoiceChat_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameInstance.DismissPendingGameInvite
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScramGameInvite        invite                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UScramGameInstance::DismissPendingGameInvite(const struct FScramGameInvite& invite)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.DismissPendingGameInvite");

	UScramGameInstance_DismissPendingGameInvite_Params params;
	params.invite = invite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.DismissAllPendingGameInvites
// (Final, Native, Public, BlueprintCallable)
void UScramGameInstance::DismissAllPendingGameInvites()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.DismissAllPendingGameInvites");

	UScramGameInstance_DismissAllPendingGameInvites_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.ClearSavedSportState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramGameInstance::STATIC_ClearSavedSportState(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.ClearSavedSportState");

	UScramGameInstance_ClearSavedSportState_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.ClearDebugMessages
// (Event, Public, BlueprintEvent)
void UScramGameInstance::ClearDebugMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.ClearDebugMessages");

	UScramGameInstance_ClearDebugMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.BroadcastLocalAvatarLook
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UScramGameInstance::BroadcastLocalAvatarLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.BroadcastLocalAvatarLook");

	UScramGameInstance_BroadcastLocalAvatarLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.BeginListeningForDisconnection
// (Final, Native, Public, BlueprintCallable)
void UScramGameInstance::BeginListeningForDisconnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.BeginListeningForDisconnection");

	UScramGameInstance_BeginListeningForDisconnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.AsyncLoadObjects
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UScramGameInstance::STATIC_AsyncLoadObjects(class UObject* WorldContextObject, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.AsyncLoadObjects");

	UScramGameInstance_AsyncLoadObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.AsyncLoadClasses
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         onSuccessEvent                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UScramGameInstance::STATIC_AsyncLoadClasses(class UObject* WorldContextObject, const struct FScriptDelegate& onSuccessEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.AsyncLoadClasses");

	UScramGameInstance_AsyncLoadClasses_Params params;
	params.WorldContextObject = WorldContextObject;
	params.onSuccessEvent = onSuccessEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameInstance.AreControllersConnected
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramGameInstance::STATIC_AreControllersConnected(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.AreControllersConnected");

	UScramGameInstance_AreControllersConnected_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameInstance.AddShelfActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramGameInstance::STATIC_AddShelfActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.AddShelfActor");

	UScramGameInstance_AddShelfActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameMode.ServerTravel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Absolute                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ShouldSkipGameNotify           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramGameMode::ServerTravel(const struct FString& URL, bool Absolute, bool ShouldSkipGameNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameMode.ServerTravel");

	AScramGameMode_ServerTravel_Params params;
	params.URL = URL;
	params.Absolute = Absolute;
	params.ShouldSkipGameNotify = ShouldSkipGameNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameMode.ResetMatch
// (Final, Native, Public, BlueprintCallable)
void AScramGameMode::ResetMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameMode.ResetMatch");

	AScramGameMode_ResetMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameMode.GetClientSportPreferences
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScramSportPreferences  ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FScramSportPreferences AScramGameMode::GetClientSportPreferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameMode.GetClientSportPreferences");

	AScramGameMode_GetClientSportPreferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameMode.DisallowMultiplayerLogins
// (Final, Native, Public, BlueprintCallable)
void AScramGameMode::DisallowMultiplayerLogins()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameMode.DisallowMultiplayerLogins");

	AScramGameMode_DisallowMultiplayerLogins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameMode.ClientSportPreferencesReceived
// (Event, Public, BlueprintEvent)
void AScramGameMode::ClientSportPreferencesReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameMode.ClientSportPreferencesReceived");

	AScramGameMode_ClientSportPreferencesReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameMode.AllowMatchmakingLogins
// (Final, Native, Public, BlueprintCallable)
void AScramGameMode::AllowMatchmakingLogins()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameMode.AllowMatchmakingLogins");

	AScramGameMode_AllowMatchmakingLogins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameMode.AllowFriendLogin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScramFriend            ScramFriend                    (ConstParm, Parm, NativeAccessSpecifierPublic)
void AScramGameMode::AllowFriendLogin(const struct FScramFriend& ScramFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameMode.AllowFriendLogin");

	AScramGameMode_AllowFriendLogin_Params params;
	params.ScramFriend = ScramFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameState.StartMatch
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
void AScramGameState::StartMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.StartMatch");

	AScramGameState_StartMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameState.ShowPausedActors
// (Final, Native, Public, BlueprintCallable)
void AScramGameState::ShowPausedActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.ShowPausedActors");

	AScramGameState_ShowPausedActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameState.ShowAllActors
// (Final, Native, Public, BlueprintCallable)
void AScramGameState::ShowAllActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.ShowAllActors");

	AScramGameState_ShowAllActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameState.SetActiveBallClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  activeBallClass                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramGameState::STATIC_SetActiveBallClass(class UObject* pWorldContextObject, class UClass* activeBallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.SetActiveBallClass");

	AScramGameState_SetActiveBallClass_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.activeBallClass = activeBallClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameState.OnPauseCapsuleRemoved
// (Final, Native, Public)
void AScramGameState::OnPauseCapsuleRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.OnPauseCapsuleRemoved");

	AScramGameState_OnPauseCapsuleRemoved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameState.OnPauseCapsuleAdded
// (Final, Native, Public)
void AScramGameState::OnPauseCapsuleAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.OnPauseCapsuleAdded");

	AScramGameState_OnPauseCapsuleAdded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameState.OnActorSpawned
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramGameState::STATIC_OnActorSpawned(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.OnActorSpawned");

	AScramGameState_OnActorSpawned_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameState.IsLocalGameStatePaused
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramGameState::STATIC_IsLocalGameStatePaused(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.IsLocalGameStatePaused");

	AScramGameState_IsLocalGameStatePaused_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameState.IsGameStatePaused
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramGameState::STATIC_IsGameStatePaused(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.IsGameStatePaused");

	AScramGameState_IsGameStatePaused_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameState.IsActorHidden
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramGameState::STATIC_IsActorHidden(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.IsActorHidden");

	AScramGameState_IsActorHidden_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameState.HidePausedActors
// (Final, Native, Public, BlueprintCallable)
void AScramGameState::HidePausedActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.HidePausedActors");

	AScramGameState_HidePausedActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameState.HideAllActors
// (Final, Native, Public, BlueprintCallable)
void AScramGameState::HideAllActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.HideAllActors");

	AScramGameState_HideAllActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameState.GetSportManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramSportManagerBase*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramSportManagerBase* AScramGameState::STATIC_GetSportManager(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetSportManager");

	AScramGameState_GetSportManager_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameState.GetSport
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EScramSport     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EScramSport AScramGameState::STATIC_GetSport(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetSport");

	AScramGameState_GetSport_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameState.GetSmoothedPingVariance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AScramGameState::STATIC_GetSmoothedPingVariance(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetSmoothedPingVariance");

	AScramGameState_GetSmoothedPingVariance_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameState.GetSmoothedPingTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AScramGameState::STATIC_GetSmoothedPingTime(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetSmoothedPingTime");

	AScramGameState_GetSmoothedPingTime_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameState.GetScramServerWorldTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AScramGameState::STATIC_GetScramServerWorldTime(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetScramServerWorldTime");

	AScramGameState_GetScramServerWorldTime_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameState.GetPingTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AScramGameState::STATIC_GetPingTime(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetPingTime");

	AScramGameState_GetPingTime_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameState.GetPauseCapsuleTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform AScramGameState::STATIC_GetPauseCapsuleTransform(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetPauseCapsuleTransform");

	AScramGameState_GetPauseCapsuleTransform_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameState.GetActiveBallClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* AScramGameState::STATIC_GetActiveBallClass(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetActiveBallClass");

	AScramGameState_GetActiveBallClass_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramGameState.BlueprintCall_OnMultiplayerGameResume
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           isCalledByHost                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EGamePauseReason reason                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramGameState::BlueprintCall_OnMultiplayerGameResume(bool isCalledByHost, SportsScramble_EGamePauseReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.BlueprintCall_OnMultiplayerGameResume");

	AScramGameState_BlueprintCall_OnMultiplayerGameResume_Params params;
	params.isCalledByHost = isCalledByHost;
	params.reason = reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramGameState.BlueprintCall_OnMultiplayerGamePaused
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           isCalledByHost                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EGamePauseReason reason                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramGameState::BlueprintCall_OnMultiplayerGamePaused(bool isCalledByHost, SportsScramble_EGamePauseReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.BlueprintCall_OnMultiplayerGamePaused");

	AScramGameState_BlueprintCall_OnMultiplayerGamePaused_Params params;
	params.isCalledByHost = isCalledByHost;
	params.reason = reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramHandshakeActor.ServerReady
// (Event, Public, BlueprintEvent)
void AScramHandshakeActor::ServerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramHandshakeActor.ServerReady");

	AScramHandshakeActor_ServerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramInviteManager.HasAcceptedShellInvite
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramInviteManager::HasAcceptedShellInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramInviteManager.HasAcceptedShellInvite");

	AScramInviteManager_HasAcceptedShellInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramInviteManager.GetInviteManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AScramInviteManager*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramInviteManager* AScramInviteManager::STATIC_GetInviteManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramInviteManager.GetInviteManager");

	AScramInviteManager_GetInviteManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramLauncher.TryCalculateTrajectory
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FScramTrajectory        outTrajectory                  (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FVector                 launchOrigin                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          horizontalVariance             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          verticalVariance               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramLauncher::TryCalculateTrajectory(struct FScramTrajectory* outTrajectory, const struct FVector& launchOrigin, float horizontalVariance, float verticalVariance)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramLauncher.TryCalculateTrajectory");

	AScramLauncher_TryCalculateTrajectory_Params params;
	params.launchOrigin = launchOrigin;
	params.horizontalVariance = horizontalVariance;
	params.verticalVariance = verticalVariance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outTrajectory != nullptr)
		*outTrajectory = params.outTrajectory;


	return params.ReturnValue;
}


// Function SportsScramble.ScramLauncher.SetScrambleMods
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramLauncher::SetScrambleMods(class UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramLauncher.SetScrambleMods");

	AScramLauncher_SetScrambleMods_Params params;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramLauncher.SetMinSpaceBetweenLeftRightMargins
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          minSpace                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramLauncher::SetMinSpaceBetweenLeftRightMargins(float minSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramLauncher.SetMinSpaceBetweenLeftRightMargins");

	AScramLauncher_SetMinSpaceBetweenLeftRightMargins_Params params;
	params.minSpace = minSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramLauncher.LaunchWithTrajectory
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScramTrajectory        trajectory                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class AScramBall*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramBall* AScramLauncher::LaunchWithTrajectory(const struct FScramTrajectory& trajectory)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramLauncher.LaunchWithTrajectory");

	AScramLauncher_LaunchWithTrajectory_Params params;
	params.trajectory = trajectory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramLauncher.Launch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          horizontalVariance             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          verticalVariance               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramBall*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramBall* AScramLauncher::Launch(float horizontalVariance, float verticalVariance)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramLauncher.Launch");

	AScramLauncher_Launch_Params params;
	params.horizontalVariance = horizontalVariance;
	params.verticalVariance = verticalVariance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramNetworkHelperComponent.SetAvatarLook
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AScramPlayer*            pPlayer                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAvatarLook             AvatarLook                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::STATIC_SetAvatarLook(class AScramPlayer* pPlayer, const struct FAvatarLook& AvatarLook)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.SetAvatarLook");

	UScramNetworkHelperComponent_SetAvatarLook_Params params;
	params.pPlayer = pPlayer;
	params.AvatarLook = AvatarLook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateTennisBallTrajectory
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class ATennisBall*             pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTennisBallNetworkUpdate Update                         (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_UpdateTennisBallTrajectory(class ATennisBall* pBall, const struct FTennisBallNetworkUpdate& Update)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateTennisBallTrajectory");

	UScramNetworkHelperComponent_Server_UpdateTennisBallTrajectory_Params params;
	params.pBall = pBall;
	params.Update = Update;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateStickDrivenCatcherGlove
// (Net, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class ABaseballThrowingGlove*  pGlove                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          leftRight                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          upDown                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_UpdateStickDrivenCatcherGlove(class ABaseballThrowingGlove* pGlove, float leftRight, float upDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateStickDrivenCatcherGlove");

	UScramNetworkHelperComponent_Server_UpdateStickDrivenCatcherGlove_Params params;
	params.pGlove = pGlove;
	params.leftRight = leftRight;
	params.upDown = upDown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateDodgeballBallTrajectory
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class ADodgeballBall*          pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScramTrajectory        trajectory                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FDodgeballShot          newShot                        (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_UpdateDodgeballBallTrajectory(class ADodgeballBall* pBall, const struct FScramTrajectory& trajectory, const struct FDodgeballShot& newShot)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateDodgeballBallTrajectory");

	UScramNetworkHelperComponent_Server_UpdateDodgeballBallTrajectory_Params params;
	params.pBall = pBall;
	params.trajectory = trajectory;
	params.newShot = newShot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateBowlingBallTrajectory
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class ABowlingBall*            pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScramTrajectory        trajectory                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBowlingThrow           newThrow                       (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_UpdateBowlingBallTrajectory(class ABowlingBall* pBall, const struct FScramTrajectory& trajectory, const struct FBowlingThrow& newThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateBowlingBallTrajectory");

	UScramNetworkHelperComponent_Server_UpdateBowlingBallTrajectory_Params params;
	params.pBall = pBall;
	params.trajectory = trajectory;
	params.newThrow = newThrow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateBaseballBallTrajectory
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class ABaseballBall*           pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBaseballNetworkUpdate  Update                         (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_UpdateBaseballBallTrajectory(class ABaseballBall* pBall, const struct FBaseballNetworkUpdate& Update)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateBaseballBallTrajectory");

	UScramNetworkHelperComponent_Server_UpdateBaseballBallTrajectory_Params params;
	params.pBall = pBall;
	params.Update = Update;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_StartFollowingTrajectoryWithSlowDown
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AScramPrimitiveActor*    pPrimitive                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScramTrajectory        trajectoryToFollow             (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          TimeScale                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          maxStepDown                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_StartFollowingTrajectoryWithSlowDown(class AScramPrimitiveActor* pPrimitive, const struct FScramTrajectory& trajectoryToFollow, float TimeScale, float Delay, float Duration, float maxStepDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_StartFollowingTrajectoryWithSlowDown");

	UScramNetworkHelperComponent_Server_StartFollowingTrajectoryWithSlowDown_Params params;
	params.pPrimitive = pPrimitive;
	params.trajectoryToFollow = trajectoryToFollow;
	params.TimeScale = TimeScale;
	params.Delay = Delay;
	params.Duration = Duration;
	params.maxStepDown = maxStepDown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_StartFollowingTrajectory
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AScramPrimitiveActor*    pPrimitive                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScramTrajectory        trajectoryToFollow             (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_StartFollowingTrajectory(class AScramPrimitiveActor* pPrimitive, const struct FScramTrajectory& trajectoryToFollow)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_StartFollowingTrajectory");

	UScramNetworkHelperComponent_Server_StartFollowingTrajectory_Params params;
	params.pPrimitive = pPrimitive;
	params.trajectoryToFollow = trajectoryToFollow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_SportManagerReady
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AScramSportManagerBase*  pSportManager                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_SportManagerReady(class AScramSportManagerBase* pSportManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SportManagerReady");

	UScramNetworkHelperComponent_Server_SportManagerReady_Params params;
	params.pSportManager = pSportManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_SpawnPitcherScrambleOptions
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class ABaseballMitt*           pMitt                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_SpawnPitcherScrambleOptions(class ABaseballMitt* pMitt)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SpawnPitcherScrambleOptions");

	UScramNetworkHelperComponent_Server_SpawnPitcherScrambleOptions_Params params;
	params.pMitt = pMitt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_SetTennisBallRallyCount
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class ATennisBall*             pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            rallyCount                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_SetTennisBallRallyCount(class ATennisBall* pBall, int rallyCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SetTennisBallRallyCount");

	UScramNetworkHelperComponent_Server_SetTennisBallRallyCount_Params params;
	params.pBall = pBall;
	params.rallyCount = rallyCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_SetPlayerPreferences
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AScramPlayer*            pPlayer                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScramPlayerPreferences preferences                    (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_SetPlayerPreferences(class AScramPlayer* pPlayer, const struct FScramPlayerPreferences& preferences)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SetPlayerPreferences");

	UScramNetworkHelperComponent_Server_SetPlayerPreferences_Params params;
	params.pPlayer = pPlayer;
	params.preferences = preferences;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_SetPlayerPausedRemote
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AScramPlayer*            pPlayer                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EGamePauseReason reason                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           paused                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_SetPlayerPausedRemote(class AScramPlayer* pPlayer, SportsScramble_EGamePauseReason reason, bool paused)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SetPlayerPausedRemote");

	UScramNetworkHelperComponent_Server_SetPlayerPausedRemote_Params params;
	params.pPlayer = pPlayer;
	params.reason = reason;
	params.paused = paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_SetFutureBallHit
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// struct FFutureBallHit          FutureBallHit                  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_SetFutureBallHit(const struct FFutureBallHit& FutureBallHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SetFutureBallHit");

	UScramNetworkHelperComponent_Server_SetFutureBallHit_Params params;
	params.FutureBallHit = FutureBallHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_SetAvatarLook
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class AScramPlayer*            pPlayer                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAvatarLook             AvatarLook                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_SetAvatarLook(class AScramPlayer* pPlayer, const struct FAvatarLook& AvatarLook)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SetAvatarLook");

	UScramNetworkHelperComponent_Server_SetAvatarLook_Params params;
	params.pPlayer = pPlayer;
	params.AvatarLook = AvatarLook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_ServeTriggerSpawnBall
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, Const, NetValidate)
// Parameters:
// class AScramPlayerServeTrigger* pServeTrigger                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  BallClass                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              SpawnTransform                 (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_ServeTriggerSpawnBall(class AScramPlayerServeTrigger* pServeTrigger, class UClass* BallClass, const struct FTransform& SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_ServeTriggerSpawnBall");

	UScramNetworkHelperComponent_Server_ServeTriggerSpawnBall_Params params;
	params.pServeTrigger = pServeTrigger;
	params.BallClass = BallClass;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_ServeBallSpawned
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AScramPlayerServeTrigger* pServeTrigger                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramBall*              pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_ServeBallSpawned(class AScramPlayerServeTrigger* pServeTrigger, class AScramBall* pBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_ServeBallSpawned");

	UScramNetworkHelperComponent_Server_ServeBallSpawned_Params params;
	params.pServeTrigger = pServeTrigger;
	params.pBall = pBall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_ServeBallGrabbed
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AScramPlayerServeTrigger* pServeTrigger                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramBall*              pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_ServeBallGrabbed(class AScramPlayerServeTrigger* pServeTrigger, class AScramBall* pBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_ServeBallGrabbed");

	UScramNetworkHelperComponent_Server_ServeBallGrabbed_Params params;
	params.pServeTrigger = pServeTrigger;
	params.pBall = pBall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_SendPlayByPlayEvent
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// int                            eventIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pPlayer                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_SendPlayByPlayEvent(int eventIndex, class AActor* pPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SendPlayByPlayEvent");

	UScramNetworkHelperComponent_Server_SendPlayByPlayEvent_Params params;
	params.eventIndex = eventIndex;
	params.pPlayer = pPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_RequestAvatarLook
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class AScramPlayer*            pPlayer                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_RequestAvatarLook(class AScramPlayer* pPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_RequestAvatarLook");

	UScramNetworkHelperComponent_Server_RequestAvatarLook_Params params;
	params.pPlayer = pPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteGameDone
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AScramSportManagerBase*  pSportManager                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_RemoteGameDone(class AScramSportManagerBase* pSportManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteGameDone");

	UScramNetworkHelperComponent_Server_RemoteGameDone_Params params;
	params.pSportManager = pSportManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillTerminate
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
void UScramNetworkHelperComponent::Server_RemoteApplicationWillTerminate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillTerminate");

	UScramNetworkHelperComponent_Server_RemoteApplicationWillTerminate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillEnterBackground
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
void UScramNetworkHelperComponent::Server_RemoteApplicationWillEnterBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillEnterBackground");

	UScramNetworkHelperComponent_Server_RemoteApplicationWillEnterBackground_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillDeactivate
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
void UScramNetworkHelperComponent::Server_RemoteApplicationWillDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillDeactivate");

	UScramNetworkHelperComponent_Server_RemoteApplicationWillDeactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationHasReactivated
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
void UScramNetworkHelperComponent::Server_RemoteApplicationHasReactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationHasReactivated");

	UScramNetworkHelperComponent_Server_RemoteApplicationHasReactivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationHasEnteredForeground
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
void UScramNetworkHelperComponent::Server_RemoteApplicationHasEnteredForeground()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationHasEnteredForeground");

	UScramNetworkHelperComponent_Server_RemoteApplicationHasEnteredForeground_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_ReceiveHeartbeat
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// uint16_t                       remotePendingNetGeneration     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint16_t                       remoteEstablishedNetGeneration (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_ReceiveHeartbeat(uint16_t remotePendingNetGeneration, uint16_t remoteEstablishedNetGeneration)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_ReceiveHeartbeat");

	UScramNetworkHelperComponent_Server_ReceiveHeartbeat_Params params;
	params.remotePendingNetGeneration = remotePendingNetGeneration;
	params.remoteEstablishedNetGeneration = remoteEstablishedNetGeneration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_PingHandShake
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// float                          clientPingTime                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_PingHandShake(float clientPingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_PingHandShake");

	UScramNetworkHelperComponent_Server_PingHandShake_Params params;
	params.clientPingTime = clientPingTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_MultiplayerGameResume
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// bool                           isCalledByHost                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EGamePauseReason reason                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_MultiplayerGameResume(bool isCalledByHost, SportsScramble_EGamePauseReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_MultiplayerGameResume");

	UScramNetworkHelperComponent_Server_MultiplayerGameResume_Params params;
	params.isCalledByHost = isCalledByHost;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_MultiplayerGamePause
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// bool                           isCalledByHost                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EGamePauseReason reason                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_MultiplayerGamePause(bool isCalledByHost, SportsScramble_EGamePauseReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_MultiplayerGamePause");

	UScramNetworkHelperComponent_Server_MultiplayerGamePause_Params params;
	params.isCalledByHost = isCalledByHost;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_HandshakeActorReady
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AScramHandshakeActor*    pHandshakeActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_HandshakeActorReady(class AScramHandshakeActor* pHandshakeActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_HandshakeActorReady");

	UScramNetworkHelperComponent_Server_HandshakeActorReady_Params params;
	params.pHandshakeActor = pHandshakeActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_GrabberRelease
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AActor*                  pGrabberActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_GrabberRelease(class AActor* pGrabberActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_GrabberRelease");

	UScramNetworkHelperComponent_Server_GrabberRelease_Params params;
	params.pGrabberActor = pGrabberActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_GrabberGrab
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AActor*                  pGrabberActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pGrabbableActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           snap                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_GrabberGrab(class AActor* pGrabberActor, class AActor* pGrabbableActor, bool snap)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_GrabberGrab");

	UScramNetworkHelperComponent_Server_GrabberGrab_Params params;
	params.pGrabberActor = pGrabberActor;
	params.pGrabbableActor = pGrabbableActor;
	params.snap = snap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_DrawDebugSphere
// (Net, Native, Event, Protected, NetServer, HasDefaults, Const, NetValidate)
// Parameters:
// class AActor*                  pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize10   Center                         (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                          Radius                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Segments                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                  Color                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LifeTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_DrawDebugSphere(class AActor* pWorldContextObject, const struct FVector_NetQuantize10& Center, float Radius, int Segments, const struct FColor& Color, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_DrawDebugSphere");

	UScramNetworkHelperComponent_Server_DrawDebugSphere_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.Center = Center;
	params.Radius = Radius;
	params.Segments = Segments;
	params.Color = Color;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_DestroyPrimitive
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AScramPrimitiveActor*    pPrimitive                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           playOut                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_DestroyPrimitive(class AScramPrimitiveActor* pPrimitive, bool playOut, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_DestroyPrimitive");

	UScramNetworkHelperComponent_Server_DestroyPrimitive_Params params;
	params.pPrimitive = pPrimitive;
	params.playOut = playOut;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_ClearTennisBallTrajectoryOwnership
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class ATennisBall*             pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_ClearTennisBallTrajectoryOwnership(class ATennisBall* pBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_ClearTennisBallTrajectoryOwnership");

	UScramNetworkHelperComponent_Server_ClearTennisBallTrajectoryOwnership_Params params;
	params.pBall = pBall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_ClearPausedTrajectory
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AScramPrimitiveActor*    pPrimitive                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_ClearPausedTrajectory(class AScramPrimitiveActor* pPrimitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_ClearPausedTrajectory");

	UScramNetworkHelperComponent_Server_ClearPausedTrajectory_Params params;
	params.pPrimitive = pPrimitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_CallTennisDoubleBounce
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AScramSportManagerTennis* pTennisManager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATennisBall*             pTrackedBall                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_CallTennisDoubleBounce(class AScramSportManagerTennis* pTennisManager, class ATennisBall* pTrackedBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_CallTennisDoubleBounce");

	UScramNetworkHelperComponent_Server_CallTennisDoubleBounce_Params params;
	params.pTennisManager = pTennisManager;
	params.pTrackedBall = pTrackedBall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Tennis
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_ETennisEvent    TennisEvent                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_BroadcastScramEvent_Tennis(SportsScramble_EScramEvent ScramEvent, class AActor* pWorldContextObject, int PlayerIndex, SportsScramble_ETennisEvent TennisEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Tennis");

	UScramNetworkHelperComponent_Server_BroadcastScramEvent_Tennis_Params params;
	params.ScramEvent = ScramEvent;
	params.pWorldContextObject = pWorldContextObject;
	params.PlayerIndex = PlayerIndex;
	params.TennisEvent = TennisEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Object
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 pObjectParameter               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_BroadcastScramEvent_Object(SportsScramble_EScramEvent ScramEvent, class AActor* pWorldContextObject, class UObject* pObjectParameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Object");

	UScramNetworkHelperComponent_Server_BroadcastScramEvent_Object_Params params;
	params.ScramEvent = ScramEvent;
	params.pWorldContextObject = pWorldContextObject;
	params.pObjectParameter = pObjectParameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Null
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_BroadcastScramEvent_Null(SportsScramble_EScramEvent ScramEvent, class AActor* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Null");

	UScramNetworkHelperComponent_Server_BroadcastScramEvent_Null_Params params;
	params.ScramEvent = ScramEvent;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Collision
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, Const, NetValidate)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pOtherActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitNormal                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_BroadcastScramEvent_Collision(SportsScramble_EScramEvent ScramEvent, class AActor* pWorldContextObject, class AActor* pOtherActor, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Collision");

	UScramNetworkHelperComponent_Server_BroadcastScramEvent_Collision_Params params;
	params.ScramEvent = ScramEvent;
	params.pWorldContextObject = pWorldContextObject;
	params.pOtherActor = pOtherActor;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Bowling
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EBowlingEvent   BowlingEvent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pBowlingBall                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_BroadcastScramEvent_Bowling(SportsScramble_EScramEvent ScramEvent, class AActor* pWorldContextObject, int PlayerIndex, SportsScramble_EBowlingEvent BowlingEvent, class AActor* pBowlingBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Bowling");

	UScramNetworkHelperComponent_Server_BroadcastScramEvent_Bowling_Params params;
	params.ScramEvent = ScramEvent;
	params.pWorldContextObject = pWorldContextObject;
	params.PlayerIndex = PlayerIndex;
	params.BowlingEvent = BowlingEvent;
	params.pBowlingBall = pBowlingBall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Baseball
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EBaseballEvent  BaseballEvent                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ABaseballBall*           pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_BroadcastScramEvent_Baseball(SportsScramble_EScramEvent ScramEvent, class AActor* pWorldContextObject, int PlayerIndex, SportsScramble_EBaseballEvent BaseballEvent, class ABaseballBall* pBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Baseball");

	UScramNetworkHelperComponent_Server_BroadcastScramEvent_Baseball_Params params;
	params.ScramEvent = ScramEvent;
	params.pWorldContextObject = pWorldContextObject;
	params.PlayerIndex = PlayerIndex;
	params.BaseballEvent = BaseballEvent;
	params.pBall = pBall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_BaseballCatcherCaught
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class AActor*                  pCatcher                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ABaseballBall*           pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_BaseballCatcherCaught(class AActor* pCatcher, class ABaseballBall* pBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BaseballCatcherCaught");

	UScramNetworkHelperComponent_Server_BaseballCatcherCaught_Params params;
	params.pCatcher = pCatcher;
	params.pBall = pBall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Server_BaseballBallPitched
// (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
// Parameters:
// class ABaseballThrowingGlove*  pGlove                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ABaseballBall*           pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ThrowSpeed                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Server_BaseballBallPitched(class ABaseballThrowingGlove* pGlove, class ABaseballBall* pBall, float ThrowSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BaseballBallPitched");

	UScramNetworkHelperComponent_Server_BaseballBallPitched_Params params;
	params.pGlove = pGlove;
	params.pBall = pBall;
	params.ThrowSpeed = ThrowSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisNextPlayerToHitBall
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// int                            nextPlayerIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramSportManagerTennis* pTennisManager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_UpdateTennisNextPlayerToHitBall(int nextPlayerIndex, class AScramSportManagerTennis* pTennisManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisNextPlayerToHitBall");

	UScramNetworkHelperComponent_Client_UpdateTennisNextPlayerToHitBall_Params params;
	params.nextPlayerIndex = nextPlayerIndex;
	params.pTennisManager = pTennisManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisBallTrajectory
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class ATennisBall*             pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTennisBallNetworkUpdate Update                         (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_UpdateTennisBallTrajectory(class ATennisBall* pBall, const struct FTennisBallNetworkUpdate& Update)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisBallTrajectory");

	UScramNetworkHelperComponent_Client_UpdateTennisBallTrajectory_Params params;
	params.pBall = pBall;
	params.Update = Update;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisBallInPlay
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class ATennisBall*             pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATennisBall*             pLastBall                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32_t                       ballGeneration                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramSportManagerTennis* pTennisManager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_UpdateTennisBallInPlay(class ATennisBall* pBall, class ATennisBall* pLastBall, uint32_t ballGeneration, class AScramSportManagerTennis* pTennisManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisBallInPlay");

	UScramNetworkHelperComponent_Client_UpdateTennisBallInPlay_Params params;
	params.pBall = pBall;
	params.pLastBall = pLastBall;
	params.ballGeneration = ballGeneration;
	params.pTennisManager = pTennisManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateStickDrivenCatcherGlove
// (Net, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class ABaseballThrowingGlove*  pGlove                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          leftRight                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          upDown                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_UpdateStickDrivenCatcherGlove(class ABaseballThrowingGlove* pGlove, float leftRight, float upDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateStickDrivenCatcherGlove");

	UScramNetworkHelperComponent_Client_UpdateStickDrivenCatcherGlove_Params params;
	params.pGlove = pGlove;
	params.leftRight = leftRight;
	params.upDown = upDown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateBowlingBallTrajectory
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class ABowlingBall*            pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScramTrajectory        trajectory                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBowlingThrow           newThrow                       (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_UpdateBowlingBallTrajectory(class ABowlingBall* pBall, const struct FScramTrajectory& trajectory, const struct FBowlingThrow& newThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateBowlingBallTrajectory");

	UScramNetworkHelperComponent_Client_UpdateBowlingBallTrajectory_Params params;
	params.pBall = pBall;
	params.trajectory = trajectory;
	params.newThrow = newThrow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateBaseballBallTrajectory
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class ABaseballBall*           pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBaseballNetworkUpdate  Update                         (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_UpdateBaseballBallTrajectory(class ABaseballBall* pBall, const struct FBaseballNetworkUpdate& Update)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateBaseballBallTrajectory");

	UScramNetworkHelperComponent_Client_UpdateBaseballBallTrajectory_Params params;
	params.pBall = pBall;
	params.Update = Update;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_StartFollowingTrajectoryWithSlowDown
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class AScramPrimitiveActor*    pPrimitive                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScramTrajectory        trajectoryToFollow             (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          TimeScale                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          maxStepDown                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_StartFollowingTrajectoryWithSlowDown(class AScramPrimitiveActor* pPrimitive, const struct FScramTrajectory& trajectoryToFollow, float TimeScale, float Delay, float Duration, float maxStepDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_StartFollowingTrajectoryWithSlowDown");

	UScramNetworkHelperComponent_Client_StartFollowingTrajectoryWithSlowDown_Params params;
	params.pPrimitive = pPrimitive;
	params.trajectoryToFollow = trajectoryToFollow;
	params.TimeScale = TimeScale;
	params.Delay = Delay;
	params.Duration = Duration;
	params.maxStepDown = maxStepDown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_StartFollowingTrajectory
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class AScramPrimitiveActor*    pPrimitive                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScramTrajectory        trajectoryToFollow             (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_StartFollowingTrajectory(class AScramPrimitiveActor* pPrimitive, const struct FScramTrajectory& trajectoryToFollow)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_StartFollowingTrajectory");

	UScramNetworkHelperComponent_Client_StartFollowingTrajectory_Params params;
	params.pPrimitive = pPrimitive;
	params.trajectoryToFollow = trajectoryToFollow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_SetTimeScale
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class AScramPrimitiveActor*    pPrimitive                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TimeScale                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_SetTimeScale(class AScramPrimitiveActor* pPrimitive, float TimeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_SetTimeScale");

	UScramNetworkHelperComponent_Client_SetTimeScale_Params params;
	params.pPrimitive = pPrimitive;
	params.TimeScale = TimeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_SetTennisBallRallyCount
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class ATennisBall*             pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            rallyCount                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_SetTennisBallRallyCount(class ATennisBall* pBall, int rallyCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_SetTennisBallRallyCount");

	UScramNetworkHelperComponent_Client_SetTennisBallRallyCount_Params params;
	params.pBall = pBall;
	params.rallyCount = rallyCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_SetPlayerPreferences
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class AScramPlayer*            pPlayer                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScramPlayerPreferences preferences                    (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_SetPlayerPreferences(class AScramPlayer* pPlayer, const struct FScramPlayerPreferences& preferences)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_SetPlayerPreferences");

	UScramNetworkHelperComponent_Client_SetPlayerPreferences_Params params;
	params.pPlayer = pPlayer;
	params.preferences = preferences;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_SetPlayerPausedRemote
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class AScramPlayer*            pPlayer                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EGamePauseReason reason                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           paused                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_SetPlayerPausedRemote(class AScramPlayer* pPlayer, SportsScramble_EGamePauseReason reason, bool paused)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_SetPlayerPausedRemote");

	UScramNetworkHelperComponent_Client_SetPlayerPausedRemote_Params params;
	params.pPlayer = pPlayer;
	params.reason = reason;
	params.paused = paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_SetFutureBallHit
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// struct FFutureBallHit          FutureBallHit                  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_SetFutureBallHit(const struct FFutureBallHit& FutureBallHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_SetFutureBallHit");

	UScramNetworkHelperComponent_Client_SetFutureBallHit_Params params;
	params.FutureBallHit = FutureBallHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_SetAvatarLook
// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
// Parameters:
// class AScramPlayer*            pPlayer                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAvatarLook             AvatarLook                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_SetAvatarLook(class AScramPlayer* pPlayer, const struct FAvatarLook& AvatarLook)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_SetAvatarLook");

	UScramNetworkHelperComponent_Client_SetAvatarLook_Params params;
	params.pPlayer = pPlayer;
	params.AvatarLook = AvatarLook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_ServeBallSpawned
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class AScramPlayerServeTrigger* pServeTrigger                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramBall*              pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_ServeBallSpawned(class AScramPlayerServeTrigger* pServeTrigger, class AScramBall* pBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_ServeBallSpawned");

	UScramNetworkHelperComponent_Client_ServeBallSpawned_Params params;
	params.pServeTrigger = pServeTrigger;
	params.pBall = pBall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_ServeBallGrabbed
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class AScramPlayerServeTrigger* pServeTrigger                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramBall*              pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_ServeBallGrabbed(class AScramPlayerServeTrigger* pServeTrigger, class AScramBall* pBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_ServeBallGrabbed");

	UScramNetworkHelperComponent_Client_ServeBallGrabbed_Params params;
	params.pServeTrigger = pServeTrigger;
	params.pBall = pBall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteGameDone
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class AScramSportManagerBase*  pSportManager                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_RemoteGameDone(class AScramSportManagerBase* pSportManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteGameDone");

	UScramNetworkHelperComponent_Client_RemoteGameDone_Params params;
	params.pSportManager = pSportManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillTerminate
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
void UScramNetworkHelperComponent::Client_RemoteApplicationWillTerminate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillTerminate");

	UScramNetworkHelperComponent_Client_RemoteApplicationWillTerminate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillEnterBackground
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
void UScramNetworkHelperComponent::Client_RemoteApplicationWillEnterBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillEnterBackground");

	UScramNetworkHelperComponent_Client_RemoteApplicationWillEnterBackground_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillDeactivate
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
void UScramNetworkHelperComponent::Client_RemoteApplicationWillDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillDeactivate");

	UScramNetworkHelperComponent_Client_RemoteApplicationWillDeactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationHasReactivated
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
void UScramNetworkHelperComponent::Client_RemoteApplicationHasReactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationHasReactivated");

	UScramNetworkHelperComponent_Client_RemoteApplicationHasReactivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationHasEnteredForeground
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
void UScramNetworkHelperComponent::Client_RemoteApplicationHasEnteredForeground()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationHasEnteredForeground");

	UScramNetworkHelperComponent_Client_RemoteApplicationHasEnteredForeground_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_ReceiveHeartbeat
// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
// Parameters:
// uint16_t                       remotePendingNetGeneration     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint16_t                       remoteEstablishedNetGeneration (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_ReceiveHeartbeat(uint16_t remotePendingNetGeneration, uint16_t remoteEstablishedNetGeneration)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_ReceiveHeartbeat");

	UScramNetworkHelperComponent_Client_ReceiveHeartbeat_Params params;
	params.remotePendingNetGeneration = remotePendingNetGeneration;
	params.remoteEstablishedNetGeneration = remoteEstablishedNetGeneration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_PingHandShake
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
void UScramNetworkHelperComponent::Client_PingHandShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_PingHandShake");

	UScramNetworkHelperComponent_Client_PingHandShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_GrabberRelease
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class AActor*                  pGrabberActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_GrabberRelease(class AActor* pGrabberActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_GrabberRelease");

	UScramNetworkHelperComponent_Client_GrabberRelease_Params params;
	params.pGrabberActor = pGrabberActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_GrabberGrab
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class AActor*                  pGrabberActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pGrabbableActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           snap                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_GrabberGrab(class AActor* pGrabberActor, class AActor* pGrabbableActor, bool snap)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_GrabberGrab");

	UScramNetworkHelperComponent_Client_GrabberGrab_Params params;
	params.pGrabberActor = pGrabberActor;
	params.pGrabbableActor = pGrabbableActor;
	params.snap = snap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_DrawDebugSphere
// (Net, Native, Event, Protected, HasDefaults, NetClient, Const, NetValidate)
// Parameters:
// class AActor*                  pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize10   Center                         (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                          Radius                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Segments                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                  Color                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LifeTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_DrawDebugSphere(class AActor* pWorldContextObject, const struct FVector_NetQuantize10& Center, float Radius, int Segments, const struct FColor& Color, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_DrawDebugSphere");

	UScramNetworkHelperComponent_Client_DrawDebugSphere_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.Center = Center;
	params.Radius = Radius;
	params.Segments = Segments;
	params.Color = Color;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_DestroyPrimitive
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class AScramPrimitiveActor*    pPrimitive                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           playOut                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_DestroyPrimitive(class AScramPrimitiveActor* pPrimitive, bool playOut, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_DestroyPrimitive");

	UScramNetworkHelperComponent_Client_DestroyPrimitive_Params params;
	params.pPrimitive = pPrimitive;
	params.playOut = playOut;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_ClearTennisBallTrajectoryOwnership
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class ATennisBall*             pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_ClearTennisBallTrajectoryOwnership(class ATennisBall* pBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_ClearTennisBallTrajectoryOwnership");

	UScramNetworkHelperComponent_Client_ClearTennisBallTrajectoryOwnership_Params params;
	params.pBall = pBall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_ClearPausedTrajectory
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// class AScramPrimitiveActor*    pPrimitive                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_ClearPausedTrajectory(class AScramPrimitiveActor* pPrimitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_ClearPausedTrajectory");

	UScramNetworkHelperComponent_Client_ClearPausedTrajectory_Params params;
	params.pPrimitive = pPrimitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Tennis
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_ETennisEvent    TennisEvent                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_BroadcastScramEvent_Tennis(SportsScramble_EScramEvent ScramEvent, class AActor* pWorldContextObject, int PlayerIndex, SportsScramble_ETennisEvent TennisEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Tennis");

	UScramNetworkHelperComponent_Client_BroadcastScramEvent_Tennis_Params params;
	params.ScramEvent = ScramEvent;
	params.pWorldContextObject = pWorldContextObject;
	params.PlayerIndex = PlayerIndex;
	params.TennisEvent = TennisEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Object
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 pObjectParameter               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_BroadcastScramEvent_Object(SportsScramble_EScramEvent ScramEvent, class AActor* pWorldContextObject, class UObject* pObjectParameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Object");

	UScramNetworkHelperComponent_Client_BroadcastScramEvent_Object_Params params;
	params.ScramEvent = ScramEvent;
	params.pWorldContextObject = pWorldContextObject;
	params.pObjectParameter = pObjectParameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Null
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_BroadcastScramEvent_Null(SportsScramble_EScramEvent ScramEvent, class AActor* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Null");

	UScramNetworkHelperComponent_Client_BroadcastScramEvent_Null_Params params;
	params.ScramEvent = ScramEvent;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Collision
// (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient, Const, NetValidate)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pOtherActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitNormal                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_BroadcastScramEvent_Collision(SportsScramble_EScramEvent ScramEvent, class AActor* pWorldContextObject, class AActor* pOtherActor, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Collision");

	UScramNetworkHelperComponent_Client_BroadcastScramEvent_Collision_Params params;
	params.ScramEvent = ScramEvent;
	params.pWorldContextObject = pWorldContextObject;
	params.pOtherActor = pOtherActor;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Bowling
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EBowlingEvent   BowlingEvent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pBowlingBall                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_BroadcastScramEvent_Bowling(SportsScramble_EScramEvent ScramEvent, class AActor* pWorldContextObject, int PlayerIndex, SportsScramble_EBowlingEvent BowlingEvent, class AActor* pBowlingBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Bowling");

	UScramNetworkHelperComponent_Client_BroadcastScramEvent_Bowling_Params params;
	params.ScramEvent = ScramEvent;
	params.pWorldContextObject = pWorldContextObject;
	params.PlayerIndex = PlayerIndex;
	params.BowlingEvent = BowlingEvent;
	params.pBowlingBall = pBowlingBall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Baseball
// (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
// Parameters:
// SportsScramble_EScramEvent     ScramEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EBaseballEvent  BaseballEvent                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ABaseballBall*           pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramNetworkHelperComponent::Client_BroadcastScramEvent_Baseball(SportsScramble_EScramEvent ScramEvent, class AActor* pWorldContextObject, int PlayerIndex, SportsScramble_EBaseballEvent BaseballEvent, class ABaseballBall* pBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Baseball");

	UScramNetworkHelperComponent_Client_BroadcastScramEvent_Baseball_Params params;
	params.ScramEvent = ScramEvent;
	params.pWorldContextObject = pWorldContextObject;
	params.PlayerIndex = PlayerIndex;
	params.BaseballEvent = BaseballEvent;
	params.pBall = pBall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPauseCapsule.ShowCapsule
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramPauseCapsule::ShowCapsule()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPauseCapsule.ShowCapsule");

	AScramPauseCapsule_ShowCapsule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPauseCapsule.HideCapsule
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramPauseCapsule::HideCapsule()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPauseCapsule.HideCapsule");

	AScramPauseCapsule_HideCapsule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPauseManager.QueuePauseEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         PauseEvent                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AScramPauseManager::STATIC_QueuePauseEvent(const struct FScriptDelegate& PauseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPauseManager.QueuePauseEvent");

	AScramPauseManager_QueuePauseEvent_Params params;
	params.PauseEvent = PauseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.SetWorldTimeDilation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          timeDilation                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayer::SetWorldTimeDilation(float timeDilation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.SetWorldTimeDilation");

	AScramPlayer_SetWorldTimeDilation_Params params;
	params.timeDilation = timeDilation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.SetScriptedFadeOutOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Opacity                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayer::SetScriptedFadeOutOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.SetScriptedFadeOutOpacity");

	AScramPlayer_SetScriptedFadeOutOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.SetNetVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           netVisible                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayer::SetNetVisible(bool netVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.SetNetVisible");

	AScramPlayer_SetNetVisible_Params params;
	params.netVisible = netVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.SetAvatarMaterials
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAvatarLook             AvatarLook                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AScramPlayer::SetAvatarMaterials(const struct FAvatarLook& AvatarLook)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.SetAvatarMaterials");

	AScramPlayer_SetAvatarMaterials_Params params;
	params.AvatarLook = AvatarLook;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.SetAnchor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              anchor                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FBox                    minPlayArea                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FBox                    maxPlayArea                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FBox                    maxHazardArea                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AScramPlayer::SetAnchor(const struct FTransform& anchor, const struct FBox& minPlayArea, const struct FBox& maxPlayArea, const struct FBox& maxHazardArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.SetAnchor");

	AScramPlayer_SetAnchor_Params params;
	params.anchor = anchor;
	params.minPlayArea = minPlayArea;
	params.maxPlayArea = maxPlayArea;
	params.maxHazardArea = maxHazardArea;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.Server_UpdateTransforms
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FPlayerTransforms       Transforms                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// uint32_t                       updateCounter                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayer::Server_UpdateTransforms(const struct FPlayerTransforms& Transforms, uint32_t updateCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Server_UpdateTransforms");

	AScramPlayer_Server_UpdateTransforms_Params params;
	params.Transforms = Transforms;
	params.updateCounter = updateCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.Server_UpdatePlayAreaDiagonal
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                          newPlayAreaDiagonal            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayer::Server_UpdatePlayAreaDiagonal(float newPlayAreaDiagonal)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Server_UpdatePlayAreaDiagonal");

	AScramPlayer_Server_UpdatePlayAreaDiagonal_Params params;
	params.newPlayAreaDiagonal = newPlayAreaDiagonal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.Server_SpawnHands
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AScramPlayer::Server_SpawnHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Server_SpawnHands");

	AScramPlayer_Server_SpawnHands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.Server_SetTennisReturnData
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FPlayerTennisReturn     newReturnData                  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AScramPlayer::Server_SetTennisReturnData(const struct FPlayerTennisReturn& newReturnData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Server_SetTennisReturnData");

	AScramPlayer_Server_SetTennisReturnData_Params params;
	params.newReturnData = newReturnData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.Server_SetPlayerReadyForMatch
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable, NetValidate)
void AScramPlayer::Server_SetPlayerReadyForMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Server_SetPlayerReadyForMatch");

	AScramPlayer_Server_SetPlayerReadyForMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.Server_SetNetVisible
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           netVisible                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayer::Server_SetNetVisible(bool netVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Server_SetNetVisible");

	AScramPlayer_Server_SetNetVisible_Params params;
	params.netVisible = netVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.Server_ClientSelectedAvatar
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void AScramPlayer::Server_ClientSelectedAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Server_ClientSelectedAvatar");

	AScramPlayer_Server_ClientSelectedAvatar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.SavePreferences
// (Final, Native, Public, BlueprintCallable)
void AScramPlayer::SavePreferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.SavePreferences");

	AScramPlayer_SavePreferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.ResetAnchor
// (Final, Native, Public, BlueprintCallable)
void AScramPlayer::ResetAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.ResetAnchor");

	AScramPlayer_ResetAnchor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.RecenterDetected
// (Event, Public, BlueprintEvent)
void AScramPlayer::RecenterDetected()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.RecenterDetected");

	AScramPlayer_RecenterDetected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.PlayerResume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SportsScramble_EGamePauseReason reason                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           multiplayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayer::PlayerResume(SportsScramble_EGamePauseReason reason, bool multiplayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.PlayerResume");

	AScramPlayer_PlayerResume_Params params;
	params.reason = reason;
	params.multiplayer = multiplayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.PlayerPause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SportsScramble_EGamePauseReason reason                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           multiplayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayer::PlayerPause(SportsScramble_EGamePauseReason reason, bool multiplayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.PlayerPause");

	AScramPlayer_PlayerPause_Params params;
	params.reason = reason;
	params.multiplayer = multiplayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.OnRep_TennisReturnData
// (Final, Native, Protected)
void AScramPlayer::OnRep_TennisReturnData()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.OnRep_TennisReturnData");

	AScramPlayer_OnRep_TennisReturnData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.OnRep_NetVisible
// (Final, Native, Protected)
void AScramPlayer::OnRep_NetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.OnRep_NetVisible");

	AScramPlayer_OnRep_NetVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.OnRep_ClientTransforms
// (Final, Native, Protected)
void AScramPlayer::OnRep_ClientTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.OnRep_ClientTransforms");

	AScramPlayer_OnRep_ClientTransforms_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.OnRep_ClientPlayAreaDiagonal
// (Final, Native, Protected)
void AScramPlayer::OnRep_ClientPlayAreaDiagonal()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.OnRep_ClientPlayAreaDiagonal");

	AScramPlayer_OnRep_ClientPlayAreaDiagonal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.OnRecenter
// (Final, Native, Public, BlueprintCallable)
void AScramPlayer::OnRecenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.OnRecenter");

	AScramPlayer_OnRecenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.OnPlayerOutOfBoundary
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              ReturnTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AScramPlayer::OnPlayerOutOfBoundary(const struct FTransform& ReturnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.OnPlayerOutOfBoundary");

	AScramPlayer_OnPlayerOutOfBoundary_Params params;
	params.ReturnTransform = ReturnTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.OnPlayerEnterBoundary
// (Event, Public, BlueprintEvent)
void AScramPlayer::OnPlayerEnterBoundary()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.OnPlayerEnterBoundary");

	AScramPlayer_OnPlayerEnterBoundary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.NetSetPreferences
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScramPlayerPreferences preferences                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AScramPlayer::NetSetPreferences(const struct FScramPlayerPreferences& preferences)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.NetSetPreferences");

	AScramPlayer_NetSetPreferences_Params params;
	params.preferences = preferences;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.LocalAvatarSelected
// (Final, Native, Public, BlueprintCallable)
void AScramPlayer::LocalAvatarSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.LocalAvatarSelected");

	AScramPlayer_LocalAvatarSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.LoadPreferences
// (Final, Native, Public, BlueprintCallable)
void AScramPlayer::LoadPreferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.LoadPreferences");

	AScramPlayer_LoadPreferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.IsPlayerRestricted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPlayer::IsPlayerRestricted()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.IsPlayerRestricted");

	AScramPlayer_IsPlayerRestricted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.IsPlayerPausedExcluded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EGamePauseReason exludedReason                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPlayer::IsPlayerPausedExcluded(SportsScramble_EGamePauseReason exludedReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.IsPlayerPausedExcluded");

	AScramPlayer_IsPlayerPausedExcluded_Params params;
	params.exludedReason = exludedReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.IsPlayerPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPlayer::IsPlayerPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.IsPlayerPaused");

	AScramPlayer_IsPlayerPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.IsPlayerFadedOut
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPlayer::IsPlayerFadedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.IsPlayerFadedOut");

	AScramPlayer_IsPlayerFadedOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.IsInitComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPlayer::IsInitComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.IsInitComplete");

	AScramPlayer_IsInitComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.HasBegunPlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPlayer::HasBegunPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.HasBegunPlay");

	AScramPlayer_HasBegunPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.GetWorldTimeDilation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AScramPlayer::GetWorldTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetWorldTimeDilation");

	AScramPlayer_GetWorldTimeDilation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.GetScriptedFadeOutOpacity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AScramPlayer::GetScriptedFadeOutOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetScriptedFadeOutOpacity");

	AScramPlayer_GetScriptedFadeOutOpacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.GetPreferredHandedness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EScramHandedness ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EScramHandedness AScramPlayer::GetPreferredHandedness()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetPreferredHandedness");

	AScramPlayer_GetPreferredHandedness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.GetPreferences
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScramPlayerPreferences ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
struct FScramPlayerPreferences AScramPlayer::GetPreferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetPreferences");

	AScramPlayer_GetPreferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.GetPlayAreaTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform AScramPlayer::GetPlayAreaTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetPlayAreaTransform");

	AScramPlayer_GetPlayAreaTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.GetOrthogonalAnchor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform AScramPlayer::GetOrthogonalAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetOrthogonalAnchor");

	AScramPlayer_GetOrthogonalAnchor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.GetHand
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EScramHandedness Handedness                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramPlayerHand*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramPlayerHand* AScramPlayer::GetHand(SportsScramble_EScramHandedness Handedness)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetHand");

	AScramPlayer_GetHand_Params params;
	params.Handedness = Handedness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.GetDominantStroke
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EScramStroke    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EScramStroke AScramPlayer::GetDominantStroke()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetDominantStroke");

	AScramPlayer_GetDominantStroke_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.GetDominantHandedness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EScramHandedness ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EScramHandedness AScramPlayer::GetDominantHandedness()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetDominantHandedness");

	AScramPlayer_GetDominantHandedness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.GetAnchor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform AScramPlayer::GetAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetAnchor");

	AScramPlayer_GetAnchor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.ForceChangeGrabbable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  NewGrabbableClass              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramPlayerHand*        SpecificHand                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramPrimitiveGrabbable* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramPrimitiveGrabbable* AScramPlayer::ForceChangeGrabbable(class UClass* NewGrabbableClass, class AScramPlayerHand* SpecificHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.ForceChangeGrabbable");

	AScramPlayer_ForceChangeGrabbable_Params params;
	params.NewGrabbableClass = NewGrabbableClass;
	params.SpecificHand = SpecificHand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.EnsureHasHands
// (Final, Native, Public, BlueprintCallable)
void AScramPlayer::EnsureHasHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.EnsureHasHands");

	AScramPlayer_EnsureHasHands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.DestroyAllGrabbables
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           playOut                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayer::DestroyAllGrabbables(bool playOut, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.DestroyAllGrabbables");

	AScramPlayer_DestroyAllGrabbables_Params params;
	params.playOut = playOut;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.DeferredInit
// (Final, Native, Private)
void AScramPlayer::DeferredInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.DeferredInit");

	AScramPlayer_DeferredInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.ConstrainToPlayArea
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AScramPlayer::ConstrainToPlayArea(const struct FVector& Point, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.ConstrainToPlayArea");

	AScramPlayer_ConstrainToPlayArea_Params params;
	params.Point = Point;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.Client_ServerSelectedAvatar
// (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
void AScramPlayer::Client_ServerSelectedAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Client_ServerSelectedAvatar");

	AScramPlayer_Client_ServerSelectedAvatar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayer.ChangeAvatarBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  avatarClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           PlaySpawnAnimation             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPlayer::ChangeAvatarBlueprint(class UClass* avatarClass, bool PlaySpawnAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.ChangeAvatarBlueprint");

	AScramPlayer_ChangeAvatarBlueprint_Params params;
	params.avatarClass = avatarClass;
	params.PlaySpawnAnimation = PlaySpawnAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayer.CanBeSeen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPlayer::CanBeSeen()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.CanBeSeen");

	AScramPlayer_CanBeSeen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayerBoundary.ResetPlayerAnchor
// (Final, Native, Public, BlueprintCallable)
void AScramPlayerBoundary::ResetPlayerAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerBoundary.ResetPlayerAnchor");

	AScramPlayerBoundary_ResetPlayerAnchor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerBoundary.ResetHazardLine
// (Final, Native, Public, BlueprintCallable)
void AScramPlayerBoundary::ResetHazardLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerBoundary.ResetHazardLine");

	AScramPlayerBoundary_ResetHazardLine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerController.UnpauseLocalHeartbeat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerController::STATIC_UnpauseLocalHeartbeat(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.UnpauseLocalHeartbeat");

	AScramPlayerController_UnpauseLocalHeartbeat_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerController.StopLocalHeartbeat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerController::STATIC_StopLocalHeartbeat(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.StopLocalHeartbeat");

	AScramPlayerController_StopLocalHeartbeat_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerController.StopHeartbeat
// (Final, Native, Public, BlueprintCallable)
void AScramPlayerController::StopHeartbeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.StopHeartbeat");

	AScramPlayerController_StopHeartbeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerController.StartHeartbeat
// (Final, Native, Public, BlueprintCallable)
void AScramPlayerController::StartHeartbeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.StartHeartbeat");

	AScramPlayerController_StartHeartbeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerController.ServerSetSportPreferences
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// struct FScramSportPreferences  clientPreferences              (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AScramPlayerController::ServerSetSportPreferences(const struct FScramSportPreferences& clientPreferences)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.ServerSetSportPreferences");

	AScramPlayerController_ServerSetSportPreferences_Params params;
	params.clientPreferences = clientPreferences;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerController.ResumeHeartbeatEvents
// (Final, Native, Public, BlueprintCallable)
void AScramPlayerController::ResumeHeartbeatEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.ResumeHeartbeatEvents");

	AScramPlayerController_ResumeHeartbeatEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerController.RestartHeartbeat
// (Final, Native, Public, BlueprintCallable)
void AScramPlayerController::RestartHeartbeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.RestartHeartbeat");

	AScramPlayerController_RestartHeartbeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerController.PauseLocalHeartbeat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerController::STATIC_PauseLocalHeartbeat(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.PauseLocalHeartbeat");

	AScramPlayerController_PauseLocalHeartbeat_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerController.HasStartedHeartbeat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPlayerController::HasStartedHeartbeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.HasStartedHeartbeat");

	AScramPlayerController_HasStartedHeartbeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayerController.DEBUGForceHeartbeatTimeout
// (Final, Native, Public, BlueprintCallable)
void AScramPlayerController::DEBUGForceHeartbeatTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.DEBUGForceHeartbeatTimeout");

	AScramPlayerController_DEBUGForceHeartbeatTimeout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerController.ClientRequestSportPreferences
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable, NetValidate)
void AScramPlayerController::ClientRequestSportPreferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.ClientRequestSportPreferences");

	AScramPlayerController_ClientRequestSportPreferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerHand.SpawnAndGrabActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GrabbableClass                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerHand::SpawnAndGrabActor(class UClass* GrabbableClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.SpawnAndGrabActor");

	AScramPlayerHand_SpawnAndGrabActor_Params params;
	params.GrabbableClass = GrabbableClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerHand.ServerGrabSpawnedActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  GrabbableActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerHand::ServerGrabSpawnedActor(class AActor* GrabbableActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.ServerGrabSpawnedActor");

	AScramPlayerHand_ServerGrabSpawnedActor_Params params;
	params.GrabbableActor = GrabbableActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerHand.Server_SpawnAndGrabActor
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              SpawnTransform                 (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AScramPlayerHand::Server_SpawnAndGrabActor(class UClass* ActorClass, const struct FTransform& SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.Server_SpawnAndGrabActor");

	AScramPlayerHand_Server_SpawnAndGrabActor_Params params;
	params.ActorClass = ActorClass;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerHand.OnRep_ClientSpawnedActor
// (Final, Native, Private)
void AScramPlayerHand::OnRep_ClientSpawnedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.OnRep_ClientSpawnedActor");

	AScramPlayerHand_OnRep_ClientSpawnedActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerHand.OnGrabbableHit
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerHand::OnGrabbableHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.OnGrabbableHit");

	AScramPlayerHand_OnGrabbableHit_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerHand.GrabberIsTracked
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPlayerHand::GrabberIsTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.GrabberIsTracked");

	AScramPlayerHand_GrabberIsTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayerHand.GetPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AScramPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramPlayer* AScramPlayerHand::GetPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.GetPlayer");

	AScramPlayerHand_GetPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayerHand.GetGrabberVerticalStroke
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EScramStroke    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EScramStroke AScramPlayerHand::GetGrabberVerticalStroke()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.GetGrabberVerticalStroke");

	AScramPlayerHand_GetGrabberVerticalStroke_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayerHand.GetGrabberStroke
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EScramStroke    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EScramStroke AScramPlayerHand::GetGrabberStroke()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.GetGrabberStroke");

	AScramPlayerHand_GetGrabberStroke_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayerHand.GetGrabberHorizontalStroke
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EScramStroke    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EScramStroke AScramPlayerHand::GetGrabberHorizontalStroke()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.GetGrabberHorizontalStroke");

	AScramPlayerHand_GetGrabberHorizontalStroke_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayerHand.GetGrabberHandedness
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// SportsScramble_EScramHandedness ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EScramHandedness AScramPlayerHand::GetGrabberHandedness()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.GetGrabberHandedness");

	AScramPlayerHand_GetGrabberHandedness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayerHand.ForceReleaseCurrentGrabbable
// (Final, Native, Public, BlueprintCallable)
void AScramPlayerHand::ForceReleaseCurrentGrabbable()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.ForceReleaseCurrentGrabbable");

	AScramPlayerHand_ForceReleaseCurrentGrabbable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerHand.ForceGrab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  GrabbableActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerHand::ForceGrab(class AActor* GrabbableActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.ForceGrab");

	AScramPlayerHand_ForceGrab_Params params;
	params.GrabbableActor = GrabbableActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerHand.DestroyCurrentGrabbable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           playOut                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerHand::DestroyCurrentGrabbable(bool playOut, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.DestroyCurrentGrabbable");

	AScramPlayerHand_DestroyCurrentGrabbable_Params params;
	params.playOut = playOut;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerHand.DeferredInit
// (Final, Native, Private)
void AScramPlayerHand::DeferredInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.DeferredInit");

	AScramPlayerHand_DeferredInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerHand.CurrentGrabbableActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AScramPlayerHand::CurrentGrabbableActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.CurrentGrabbableActor");

	AScramPlayerHand_CurrentGrabbableActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayerTrigger.OnPlayerStay
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerTrigger::OnPlayerStay(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerTrigger.OnPlayerStay");

	AScramPlayerTrigger_OnPlayerStay_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerTrigger.OnPlayerExit
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerTrigger::OnPlayerExit(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerTrigger.OnPlayerExit");

	AScramPlayerTrigger_OnPlayerExit_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerTrigger.OnPlayerEnter
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerTrigger::OnPlayerEnter(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerTrigger.OnPlayerEnter");

	AScramPlayerTrigger_OnPlayerEnter_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerServeTrigger.Show
// (Event, Public, BlueprintEvent)
void AScramPlayerServeTrigger::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.Show");

	AScramPlayerServeTrigger_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerServeTrigger.SetPlayerServing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           shouldServe                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerServeTrigger::SetPlayerServing(bool shouldServe)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.SetPlayerServing");

	AScramPlayerServeTrigger_SetPlayerServing_Params params;
	params.shouldServe = shouldServe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerServeTrigger.SetAllowRespawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           canSpawn                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerServeTrigger::SetAllowRespawn(bool canSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.SetAllowRespawn");

	AScramPlayerServeTrigger_SetAllowRespawn_Params params;
	params.canSpawn = canSpawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerServeTrigger.ServeBallSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerServeTrigger::ServeBallSpawned(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.ServeBallSpawned");

	AScramPlayerServeTrigger_ServeBallSpawned_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerServeTrigger.ServeBallGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerServeTrigger::ServeBallGrabbed(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.ServeBallGrabbed");

	AScramPlayerServeTrigger_ServeBallGrabbed_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerServeTrigger.RespawnBall
// (Final, Native, Public, BlueprintCallable)
void AScramPlayerServeTrigger::RespawnBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.RespawnBall");

	AScramPlayerServeTrigger_RespawnBall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerServeTrigger.ResetServeTrigger
// (Final, Native, Public, BlueprintCallable)
void AScramPlayerServeTrigger::ResetServeTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.ResetServeTrigger");

	AScramPlayerServeTrigger_ResetServeTrigger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerServeTrigger.OnRep_ClientBall
// (Final, Native, Protected)
void AScramPlayerServeTrigger::OnRep_ClientBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.OnRep_ClientBall");

	AScramPlayerServeTrigger_OnRep_ClientBall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerServeTrigger.Hide
// (Event, Public, BlueprintEvent)
void AScramPlayerServeTrigger::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.Hide");

	AScramPlayerServeTrigger_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerServeTrigger.HandleServeTrajectory
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerServeTrigger::HandleServeTrajectory(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.HandleServeTrajectory");

	AScramPlayerServeTrigger_HandleServeTrajectory_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerServeTrigger.HandlePostHit
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerServeTrigger::HandlePostHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.HandlePostHit");

	AScramPlayerServeTrigger_HandlePostHit_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerServeTrigger.HandleBallGrabbed
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramPlayerServeTrigger::HandleBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.HandleBallGrabbed");

	AScramPlayerServeTrigger_HandleBallGrabbed_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramPlayerServeTrigger.GetPlayerServing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPlayerServeTrigger::GetPlayerServing()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.GetPlayerServing");

	AScramPlayerServeTrigger_GetPlayerServing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayerServeTrigger.GetBall
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AScramBall*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramBall* AScramPlayerServeTrigger::GetBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.GetBall");

	AScramPlayerServeTrigger_GetBall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayerServeTrigger.GetAllowRespawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramPlayerServeTrigger::GetAllowRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.GetAllowRespawn");

	AScramPlayerServeTrigger_GetAllowRespawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramPlayerServeTrigger.DespawnCurrentBall
// (Final, Native, Public, BlueprintCallable)
void AScramPlayerServeTrigger::DespawnCurrentBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.DespawnCurrentBall");

	AScramPlayerServeTrigger_DespawnCurrentBall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophy.WasTrophyEarned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramTrophy::WasTrophyEarned()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophy.WasTrophyEarned");

	AScramTrophy_WasTrophyEarned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTrophy.OnPlayerStopLookAtTrophy
// (Event, Public, BlueprintEvent)
void AScramTrophy::OnPlayerStopLookAtTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophy.OnPlayerStopLookAtTrophy");

	AScramTrophy_OnPlayerStopLookAtTrophy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophy.OnPlayerLookAtTrophy
// (Event, Public, BlueprintEvent)
void AScramTrophy::OnPlayerLookAtTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophy.OnPlayerLookAtTrophy");

	AScramTrophy_OnPlayerLookAtTrophy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophy.CalculateDisplayTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform AScramTrophy::CalculateDisplayTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophy.CalculateDisplayTransform");

	AScramTrophy_CalculateDisplayTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTrophyGlove.TryMakeActiveTrophyGlove
// (Final, Native, Public, BlueprintCallable)
void AScramTrophyGlove::TryMakeActiveTrophyGlove()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.TryMakeActiveTrophyGlove");

	AScramTrophyGlove_TryMakeActiveTrophyGlove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyGlove.SetLaserPointerVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsVisible                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramTrophyGlove::SetLaserPointerVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.SetLaserPointerVisibility");

	AScramTrophyGlove_SetLaserPointerVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyGlove.SetLaserLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Length                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramTrophyGlove::SetLaserLength(float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.SetLaserLength");

	AScramTrophyGlove_SetLaserLength_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyGlove.SetEnableGrab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramTrophyGlove::SetEnableGrab(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.SetEnableGrab");

	AScramTrophyGlove_SetEnableGrab_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyGlove.OnShouldGrab
// (Event, Public, BlueprintEvent)
// Parameters:
// class ATrophyGrabbable*        Trophy                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramTrophyGlove::OnShouldGrab(class ATrophyGrabbable* Trophy)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.OnShouldGrab");

	AScramTrophyGlove_OnShouldGrab_Params params;
	params.Trophy = Trophy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyGlove.IsTriggerPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramTrophyGlove::IsTriggerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.IsTriggerPressed");

	AScramTrophyGlove_IsTriggerPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTrophyGlove.IsTriggerDownThisFrame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramTrophyGlove::IsTriggerDownThisFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.IsTriggerDownThisFrame");

	AScramTrophyGlove_IsTriggerDownThisFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTrophyGlove.IsActiveGlove
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramTrophyGlove::IsActiveGlove()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.IsActiveGlove");

	AScramTrophyGlove_IsActiveGlove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTrophyGlove.InputRotateTrophyYaw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          AxisValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramTrophyGlove::InputRotateTrophyYaw(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.InputRotateTrophyYaw");

	AScramTrophyGlove_InputRotateTrophyYaw_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyGlove.InputRotateTrophyPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          AxisValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramTrophyGlove::InputRotateTrophyPitch(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.InputRotateTrophyPitch");

	AScramTrophyGlove_InputRotateTrophyPitch_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyGlove.GetTrophyGrabPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AScramTrophyGlove::GetTrophyGrabPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.GetTrophyGrabPoint");

	AScramTrophyGlove_GetTrophyGrabPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTrophyGlove.BindInputYaw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AxisName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramTrophyGlove::BindInputYaw(const struct FName& AxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.BindInputYaw");

	AScramTrophyGlove_BindInputYaw_Params params;
	params.AxisName = AxisName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyGlove.BindInputPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AxisName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramTrophyGlove::BindInputPitch(const struct FName& AxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.BindInputPitch");

	AScramTrophyGlove_BindInputPitch_Params params;
	params.AxisName = AxisName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyManager.WasTrophyEarned
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   TrophyID                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramTrophyManager::STATIC_WasTrophyEarned(const struct FName& TrophyID, class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.WasTrophyEarned");

	AScramTrophyManager_WasTrophyEarned_Params params;
	params.TrophyID = TrophyID;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTrophyManager.WasAvatarEarned
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   avatarID                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramTrophyManager::STATIC_WasAvatarEarned(const struct FName& avatarID, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.WasAvatarEarned");

	AScramTrophyManager_WasAvatarEarned_Params params;
	params.avatarID = avatarID;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTrophyManager.TryGetTrophyEarnedDate
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime               date                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   TrophyID                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramTrophyManager::STATIC_TryGetTrophyEarnedDate(struct FDateTime* date, const struct FName& TrophyID, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.TryGetTrophyEarnedDate");

	AScramTrophyManager_TryGetTrophyEarnedDate_Params params;
	params.TrophyID = TrophyID;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (date != nullptr)
		*date = params.date;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTrophyManager.SpawnTrophyNotificationFX
// (Event, Public, BlueprintEvent)
void AScramTrophyManager::SpawnTrophyNotificationFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.SpawnTrophyNotificationFX");

	AScramTrophyManager_SpawnTrophyNotificationFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyManager.ResetAllTrophy
// (Final, Native, Public, BlueprintCallable)
void AScramTrophyManager::ResetAllTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.ResetAllTrophy");

	AScramTrophyManager_ResetAllTrophy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyManager.OnNotifyTrophyEarned
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramTrophyManager::OnNotifyTrophyEarned(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.OnNotifyTrophyEarned");

	AScramTrophyManager_OnNotifyTrophyEarned_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyManager.OnNotifyOculusUpload
// (Event, Public, BlueprintEvent)
void AScramTrophyManager::OnNotifyOculusUpload()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.OnNotifyOculusUpload");

	AScramTrophyManager_OnNotifyOculusUpload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyManager.OnNotifyOculusUpdate
// (Event, Public, BlueprintEvent)
void AScramTrophyManager::OnNotifyOculusUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.OnNotifyOculusUpdate");

	AScramTrophyManager_OnNotifyOculusUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyManager.InitializeTrophyAwardListeners
// (Final, Native, Public, BlueprintCallable)
void AScramTrophyManager::InitializeTrophyAwardListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.InitializeTrophyAwardListeners");

	AScramTrophyManager_InitializeTrophyAwardListeners_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyManager.GetTrophyRequirement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   TrophyID                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AScramTrophyManager::STATIC_GetTrophyRequirement(const struct FName& TrophyID, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.GetTrophyRequirement");

	AScramTrophyManager_GetTrophyRequirement_Params params;
	params.TrophyID = TrophyID;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTrophyManager.GetEarnedTrophyCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AScramTrophyManager::STATIC_GetEarnedTrophyCount(class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.GetEarnedTrophyCount");

	AScramTrophyManager_GetEarnedTrophyCount_Params params;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTrophyManager.EarnTrophy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   TrophyName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramTrophyManager::STATIC_EarnTrophy(const struct FName& TrophyName, class UObject* pWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.EarnTrophy");

	AScramTrophyManager_EarnTrophy_Params params;
	params.TrophyName = TrophyName;
	params.pWorldContextObject = pWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyManager.DeferNotifications
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramTrophyManager::DeferNotifications(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.DeferNotifications");

	AScramTrophyManager_DeferNotifications_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTrophyManager.ClearAwardListeners
// (Final, Native, Public, BlueprintCallable)
void AScramTrophyManager::ClearAwardListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.ClearAwardListeners");

	AScramTrophyManager_ClearAwardListeners_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramUtils.TryGetOculusID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 UniqueId                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramUtils::STATIC_TryGetOculusID(struct FString* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.TryGetOculusID");

	UScramUtils_TryGetOculusID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueId != nullptr)
		*UniqueId = params.UniqueId;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.ShowDebugMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LifeTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramUtils::STATIC_ShowDebugMessage(class UObject* WorldContextObject, const struct FString& Message, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.ShowDebugMessage");

	UScramUtils_ShowDebugMessage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Message = Message;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramUtils.SetShaderCacheModeFast
// (Final, Native, Static, Public, BlueprintCallable)
void UScramUtils::STATIC_SetShaderCacheModeFast()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.SetShaderCacheModeFast");

	UScramUtils_SetShaderCacheModeFast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramUtils.SetShaderCacheModeBackground
// (Final, Native, Static, Public, BlueprintCallable)
void UScramUtils::STATIC_SetShaderCacheModeBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.SetShaderCacheModeBackground");

	UScramUtils_SetShaderCacheModeBackground_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramUtils.SetOnlineSessionCustomSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SettingValue                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramUtils::STATIC_SetOnlineSessionCustomSetting(class UObject* WorldContextObject, const struct FName& SettingName, int SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.SetOnlineSessionCustomSetting");

	UScramUtils_SetOnlineSessionCustomSetting_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SettingName = SettingName;
	params.SettingValue = SettingValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramUtils.SetInstancedVisibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*    Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Visibility                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramUtils::STATIC_SetInstancedVisibility(class UStaticMeshComponent* Target, bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.SetInstancedVisibility");

	UScramUtils_SetInstancedVisibility_Params params;
	params.Target = Target;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramUtils.SavePipelineCache
// (Final, Native, Static, Public, BlueprintCallable)
void UScramUtils::STATIC_SavePipelineCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.SavePipelineCache");

	UScramUtils_SavePipelineCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramUtils.SampleTexture
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          U                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          V                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            pixelColor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_ESuccessFailure Branch                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramUtils::STATIC_SampleTexture(class UTexture2D* Texture, float U, float V, struct FLinearColor* pixelColor, SportsScramble_ESuccessFailure* Branch)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.SampleTexture");

	UScramUtils_SampleTexture_Params params;
	params.Texture = Texture;
	params.U = U;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (pixelColor != nullptr)
		*pixelColor = params.pixelColor;
	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function SportsScramble.ScramUtils.RandomSharedSport
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScramSportPreferences  A                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FScramSportPreferences  B                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// SportsScramble_EScramSport     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EScramSport UScramUtils::STATIC_RandomSharedSport(const struct FScramSportPreferences& A, const struct FScramSportPreferences& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.RandomSharedSport");

	UScramUtils_RandomSharedSport_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.PickDestinationPointOnSpline
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  SplineFollower                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LookAheadDistance              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UScramUtils::STATIC_PickDestinationPointOnSpline(class AActor* SplineFollower, class USplineComponent* Spline, float LookAheadDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.PickDestinationPointOnSpline");

	UScramUtils_PickDestinationPointOnSpline_Params params;
	params.SplineFollower = SplineFollower;
	params.Spline = Spline;
	params.LookAheadDistance = LookAheadDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.PauseShaderCacheCompilation
// (Final, Native, Static, Public, BlueprintCallable)
void UScramUtils::STATIC_PauseShaderCacheCompilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.PauseShaderCacheCompilation");

	UScramUtils_PauseShaderCacheCompilation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramUtils.MakeActorsFaceLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  subClass                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramUtils::STATIC_MakeActorsFaceLocation(class UObject* WorldContextObject, class UClass* subClass, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.MakeActorsFaceLocation");

	UScramUtils_MakeActorsFaceLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.subClass = subClass;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramUtils.LaunchOtherApp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 appID                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramUtils::STATIC_LaunchOtherApp(const struct FString& appID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.LaunchOtherApp");

	UScramUtils_LaunchOtherApp_Params params;
	params.appID = appID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramUtils.IsShipping
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// SportsScramble_EYesNo          Branch                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramUtils::STATIC_IsShipping(SportsScramble_EYesNo* Branch)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.IsShipping");

	UScramUtils_IsShipping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function SportsScramble.ScramUtils.IsShaderCacheReady
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramUtils::STATIC_IsShaderCacheReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.IsShaderCacheReady");

	UScramUtils_IsShaderCacheReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.IsHitFloor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AScramPrimitiveActor*    Primitive                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramUtils::STATIC_IsHitFloor(class AScramPrimitiveActor* Primitive, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.IsHitFloor");

	UScramUtils_IsHitFloor_Params params;
	params.Primitive = Primitive;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.IsHitEnvironmental
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  hitActor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramUtils::STATIC_IsHitEnvironmental(class AActor* hitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.IsHitEnvironmental");

	UScramUtils_IsHitEnvironmental_Params params;
	params.hitActor = hitActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.IsChargeShotPossible
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ATennisInstrument*       Instrument                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATennisBall*             Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramUtils::STATIC_IsChargeShotPossible(class ATennisInstrument* Instrument, class ATennisBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.IsChargeShotPossible");

	UScramUtils_IsChargeShotPossible_Params params;
	params.Instrument = Instrument;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.HasBinaryShaderCache
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramUtils::STATIC_HasBinaryShaderCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.HasBinaryShaderCache");

	UScramUtils_HasBinaryShaderCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GoToStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 uriPath                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramUtils::STATIC_GoToStore(const struct FString& uriPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GoToStore");

	UScramUtils_GoToStore_Params params;
	params.uriPath = uriPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramUtils.GetSkipLogos
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UScramUtils::STATIC_GetSkipLogos()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetSkipLogos");

	UScramUtils_GetSkipLogos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetSingleActorExec
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UScramUtils::STATIC_GetSingleActorExec(class UObject* WorldContextObject, class UClass* ActorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetSingleActorExec");

	UScramUtils_GetSingleActorExec_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetSingleActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UScramUtils::STATIC_GetSingleActor(class UObject* WorldContextObject, class UClass* ActorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetSingleActor");

	UScramUtils_GetSingleActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetScramPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramPlayer* UScramUtils::STATIC_GetScramPlayer(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetScramPlayer");

	UScramUtils_GetScramPlayer_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetScramNetworkVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UScramUtils::STATIC_GetScramNetworkVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetScramNetworkVersion");

	UScramUtils_GetScramNetworkVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetScramGameMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramGameMode*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramGameMode* UScramUtils::STATIC_GetScramGameMode(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetScramGameMode");

	UScramUtils_GetScramGameMode_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetRemoteScramPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramPlayer* UScramUtils::STATIC_GetRemoteScramPlayer(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetRemoteScramPlayer");

	UScramUtils_GetRemoteScramPlayer_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetPlayerTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 OffsetLocation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                OffsetRotation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UScramUtils::STATIC_GetPlayerTransform(class UObject* WorldContextObject, const struct FVector& OffsetLocation, const struct FRotator& OffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetPlayerTransform");

	UScramUtils_GetPlayerTransform_Params params;
	params.WorldContextObject = WorldContextObject;
	params.OffsetLocation = OffsetLocation;
	params.OffsetRotation = OffsetRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EScramPlatform  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_EScramPlatform UScramUtils::STATIC_GetPlatform(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetPlatform");

	UScramUtils_GetPlatform_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetOnlineSessionCustomSetting
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UScramUtils::STATIC_GetOnlineSessionCustomSetting(const struct FBlueprintSessionResult& Result, const struct FName& SettingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetOnlineSessionCustomSetting");

	UScramUtils_GetOnlineSessionCustomSetting_Params params;
	params.Result = Result;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetNumShaderCompilesRemaining
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UScramUtils::STATIC_GetNumShaderCompilesRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetNumShaderCompilesRemaining");

	UScramUtils_GetNumShaderCompilesRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetNumberOfLines
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UScramUtils::STATIC_GetNumberOfLines(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetNumberOfLines");

	UScramUtils_GetNumberOfLines_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetMatchmakingPool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UScramUtils::STATIC_GetMatchmakingPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetMatchmakingPool");

	UScramUtils_GetMatchmakingPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetLocalScramPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AScramPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AScramPlayer* UScramUtils::STATIC_GetLocalScramPlayer(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetLocalScramPlayer");

	UScramUtils_GetLocalScramPlayer_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetLengthOfLongestLine
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UScramUtils::STATIC_GetLengthOfLongestLine(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetLengthOfLongestLine");

	UScramUtils_GetLengthOfLongestLine_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetIsShipping
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramUtils::STATIC_GetIsShipping()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetIsShipping");

	UScramUtils_GetIsShipping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetIsEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramUtils::STATIC_GetIsEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetIsEditor");

	UScramUtils_GetIsEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetIsAndroid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramUtils::STATIC_GetIsAndroid()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetIsAndroid");

	UScramUtils_GetIsAndroid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetEarlyAccess
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UScramUtils::STATIC_GetEarlyAccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetEarlyAccess");

	UScramUtils_GetEarlyAccess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetDemoMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UScramUtils::STATIC_GetDemoMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetDemoMode");

	UScramUtils_GetDemoMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetDefaultObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ObjectClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UScramUtils::STATIC_GetDefaultObject(class UClass* ObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetDefaultObject");

	UScramUtils_GetDefaultObject_Params params;
	params.ObjectClass = ObjectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetDebugMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UScramUtils::STATIC_GetDebugMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetDebugMode");

	UScramUtils_GetDebugMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.GetAttachedActorsExec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UScramUtils::STATIC_GetAttachedActorsExec(class AActor* Actor, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetAttachedActorsExec");

	UScramUtils_GetAttachedActorsExec_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function SportsScramble.ScramUtils.GetAppropriateTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UScramUtils::STATIC_GetAppropriateTransform(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetAppropriateTransform");

	UScramUtils_GetAppropriateTransform_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramUtils.ControllerIsConnected
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// SportsScramble_EYesNo          Branch                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramUtils::STATIC_ControllerIsConnected(SportsScramble_EYesNo* Branch)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.ControllerIsConnected");

	UScramUtils_ControllerIsConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function SportsScramble.ScramUtils.ClearDebugMessages
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramUtils::STATIC_ClearDebugMessages(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.ClearDebugMessages");

	UScramUtils_ClearDebugMessages_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramVoiceChat.SetVoiceChatMuted
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           muted                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramVoiceChat::STATIC_SetVoiceChatMuted(class UObject* WorldContextObject, bool muted)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramVoiceChat.SetVoiceChatMuted");

	AScramVoiceChat_SetVoiceChatMuted_Params params;
	params.WorldContextObject = WorldContextObject;
	params.muted = muted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramVoiceChat.Server_SetClientVoiceChatDesired
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool                           clientVoiceChatDesired         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramVoiceChat::Server_SetClientVoiceChatDesired(bool clientVoiceChatDesired)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramVoiceChat.Server_SetClientVoiceChatDesired");

	AScramVoiceChat_Server_SetClientVoiceChatDesired_Params params;
	params.clientVoiceChatDesired = clientVoiceChatDesired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramVoiceChat.Server_InitializeVoiceChat
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool                           clientVoiceChatDesired         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramVoiceChat::Server_InitializeVoiceChat(bool clientVoiceChatDesired)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramVoiceChat.Server_InitializeVoiceChat");

	AScramVoiceChat_Server_InitializeVoiceChat_Params params;
	params.clientVoiceChatDesired = clientVoiceChatDesired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramVoiceChat.KillVoiceChat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramVoiceChat::STATIC_KillVoiceChat(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramVoiceChat.KillVoiceChat");

	AScramVoiceChat_KillVoiceChat_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramVoiceChat.DeferredInit
// (Final, Native, Private)
void AScramVoiceChat::DeferredInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramVoiceChat.DeferredInit");

	AScramVoiceChat_DeferredInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramVoiceChat.Client_SetServerVoiceChatDesired
// (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
// Parameters:
// bool                           serverVoiceChatDesired         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramVoiceChat::Client_SetServerVoiceChatDesired(bool serverVoiceChatDesired)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramVoiceChat.Client_SetServerVoiceChatDesired");

	AScramVoiceChat_Client_SetServerVoiceChatDesired_Params params;
	params.serverVoiceChatDesired = serverVoiceChatDesired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramVoiceChat.Client_InitializeVoiceChat
// (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
// Parameters:
// bool                           serverVoiceChatDesired         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramVoiceChat::Client_InitializeVoiceChat(bool serverVoiceChatDesired)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramVoiceChat.Client_InitializeVoiceChat");

	AScramVoiceChat_Client_InitializeVoiceChat_Params params;
	params.serverVoiceChatDesired = serverVoiceChatDesired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramWidgetComponent.ExternalInitWidget
// (Final, Native, Public, BlueprintCallable)
void UScramWidgetComponent::ExternalInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramWidgetComponent.ExternalInitWidget");

	UScramWidgetComponent_ExternalInitWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.SkiBallTrigger.SetIsPositive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           positive                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASkiBallTrigger::SetIsPositive(bool positive)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.SkiBallTrigger.SetIsPositive");

	ASkiBallTrigger_SetIsPositive_Params params;
	params.positive = positive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.SpectateSessionCallbackProxy.SpectateSession
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USpectateSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USpectateSessionCallbackProxy* USpectateSessionCallbackProxy::STATIC_SpectateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.SpectateSessionCallbackProxy.SpectateSession");

	USpectateSessionCallbackProxy_SpectateSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.SplineMoverComponent.StartOnSpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*        SplineComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*         SceneComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USplineMoverComponent::StartOnSpline(class USplineComponent* SplineComponent, class USceneComponent* SceneComponent, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.SplineMoverComponent.StartOnSpline");

	USplineMoverComponent_StartOnSpline_Params params;
	params.SplineComponent = SplineComponent;
	params.SceneComponent = SceneComponent;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.SplineMoverComponent.Restart
// (Final, Native, Public, BlueprintCallable)
void USplineMoverComponent::Restart()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.SplineMoverComponent.Restart");

	USplineMoverComponent_Restart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.SplineMoverComponent.GetCurrentSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USplineMoverComponent::GetCurrentSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.SplineMoverComponent.GetCurrentSpeed");

	USplineMoverComponent_GetCurrentSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.StartOculusMatchmakingCallbackProxy.StartOculusMatchmaking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 poolKey                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Timeout                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStartOculusMatchmakingCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStartOculusMatchmakingCallbackProxy* UStartOculusMatchmakingCallbackProxy::STATIC_StartOculusMatchmaking(class APlayerController* PlayerController, const struct FString& poolKey, float Timeout)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.StartOculusMatchmakingCallbackProxy.StartOculusMatchmaking");

	UStartOculusMatchmakingCallbackProxy_StartOculusMatchmaking_Params params;
	params.PlayerController = PlayerController;
	params.poolKey = poolKey;
	params.Timeout = Timeout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.StartOculusMatchmakingCallbackProxy.MatchmakingClientConnect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UStartOculusMatchmakingCallbackProxy::STATIC_MatchmakingClientConnect(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.StartOculusMatchmakingCallbackProxy.MatchmakingClientConnect");

	UStartOculusMatchmakingCallbackProxy_MatchmakingClientConnect_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.SwapIndicator.OnHandednessSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// SportsScramble_EScramHandedness Handedness                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASwapIndicator::OnHandednessSet(SportsScramble_EScramHandedness Handedness)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.SwapIndicator.OnHandednessSet");

	ASwapIndicator_OnHandednessSet_Params params;
	params.Handedness = Handedness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.SwapIndicator.OnConfirmSwap
// (Event, Protected, BlueprintEvent)
void ASwapIndicator::OnConfirmSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.SwapIndicator.OnConfirmSwap");

	ASwapIndicator_OnConfirmSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.SwapIndicator.OnBeginSwap
// (Event, Protected, BlueprintEvent)
void ASwapIndicator::OnBeginSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.SwapIndicator.OnBeginSwap");

	ASwapIndicator_OnBeginSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSaveData.WipeSaveData
// (Final, Native, Public, BlueprintCallable)
void UScramSaveData::WipeSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.WipeSaveData");

	UScramSaveData_WipeSaveData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSaveData.WipeHighScoreData
// (Final, Native, Public, BlueprintCallable)
void UScramSaveData::WipeHighScoreData()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.WipeHighScoreData");

	UScramSaveData_WipeHighScoreData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSaveData.UnlockTraining
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   TrainingName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramSaveData::UnlockTraining(const struct FName& TrainingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.UnlockTraining");

	UScramSaveData_UnlockTraining_Params params;
	params.TrainingName = TrainingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSaveData.SaveNamedValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramSaveData::SaveNamedValue(const struct FName& Name, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.SaveNamedValue");

	UScramSaveData_SaveNamedValue_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSaveData.SaveHighScore
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   GameName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          score                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramSaveData::SaveHighScore(const struct FName& GameName, float score)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.SaveHighScore");

	UScramSaveData_SaveHighScore_Params params;
	params.GameName = GameName;
	params.score = score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSaveData.GetTrainingProgression
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   TrainingName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_ETrainingProgression ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SportsScramble_ETrainingProgression UScramSaveData::GetTrainingProgression(const struct FName& TrainingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.GetTrainingProgression");

	UScramSaveData_GetTrainingProgression_Params params;
	params.TrainingName = TrainingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSaveData.GetNamedValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UScramSaveData::GetNamedValue(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.GetNamedValue");

	UScramSaveData_GetNamedValue_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSaveData.GetHighScore
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   GameName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UScramSaveData::GetHighScore(const struct FName& GameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.GetHighScore");

	UScramSaveData_GetHighScore_Params params;
	params.GameName = GameName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSaveData.CompleteTraining
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   TrainingName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramSaveData::CompleteTraining(const struct FName& TrainingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.CompleteTraining");

	UScramSaveData_CompleteTraining_Params params;
	params.TrainingName = TrainingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBase.StopSavingSportState
// (Native, Public, BlueprintCallable)
void AScramSportManagerBase::StopSavingSportState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.StopSavingSportState");

	AScramSportManagerBase_StopSavingSportState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBase.SetSelectableBallClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  BallClass                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBase::SetSelectableBallClass(class UClass* BallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.SetSelectableBallClass");

	AScramSportManagerBase_SetSelectableBallClass_Params params;
	params.BallClass = BallClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBase.ServerReady
// (Event, Public, BlueprintEvent)
void AScramSportManagerBase::ServerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.ServerReady");

	AScramSportManagerBase_ServerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBase.SaveSportState
// (Native, Public, BlueprintCallable)
void AScramSportManagerBase::SaveSportState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.SaveSportState");

	AScramSportManagerBase_SaveSportState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBase.OnHeartbeatSustained
// (Final, Native, Private)
// Parameters:
// class AScramPlayerController*  pPlayerController              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBase::OnHeartbeatSustained(class AScramPlayerController* pPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.OnHeartbeatSustained");

	AScramSportManagerBase_OnHeartbeatSustained_Params params;
	params.pPlayerController = pPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBase.OnHeartbeatDisconnected
// (Final, Native, Private)
// Parameters:
// class AScramPlayerController*  pPlayerController              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBase::OnHeartbeatDisconnected(class AScramPlayerController* pPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.OnHeartbeatDisconnected");

	AScramSportManagerBase_OnHeartbeatDisconnected_Params params;
	params.pPlayerController = pPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBase.OnGameDone
// (Event, Public, BlueprintEvent)
void AScramSportManagerBase::OnGameDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.OnGameDone");

	AScramSportManagerBase_OnGameDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBase.LocalGameDone
// (Final, Native, Public, BlueprintCallable)
void AScramSportManagerBase::LocalGameDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.LocalGameDone");

	AScramSportManagerBase_LocalGameDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBase.GetPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AScramSportManagerBase::GetPlayer(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.GetPlayer");

	AScramSportManagerBase_GetPlayer_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerBase.GetOtherPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AScramSportManagerBase::GetOtherPlayer(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.GetOtherPlayer");

	AScramSportManagerBase_GetOtherPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerBaseball.SetScrambleBallProperties
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FBaseballBallScrambleProperties> Properties                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::SetScrambleBallProperties(TArray<struct FBaseballBallScrambleProperties> Properties)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.SetScrambleBallProperties");

	AScramSportManagerBaseball_SetScrambleBallProperties_Params params;
	params.Properties = Properties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBaseball.SetBattingSkillOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           shouldOverride                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EScramSkill     skillLevel                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::SetBattingSkillOverride(bool shouldOverride, SportsScramble_EScramSkill skillLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.SetBattingSkillOverride");

	AScramSportManagerBaseball_SetBattingSkillOverride_Params params;
	params.shouldOverride = shouldOverride;
	params.skillLevel = skillLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBaseball.SetBall
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ABaseballBall*           Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::SetBall(class ABaseballBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.SetBall");

	AScramSportManagerBaseball_SetBall_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBaseball.SetAllowPitch
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           allowPitch                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::SetAllowPitch(bool allowPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.SetAllowPitch");

	AScramSportManagerBaseball_SetAllowPitch_Params params;
	params.allowPitch = allowPitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBaseball.SendBaseballEvent
// (Final, Native, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// SportsScramble_EBaseballEvent  BaseballEvent                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ABaseballBall*           Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::SendBaseballEvent(SportsScramble_EBaseballEvent BaseballEvent, const struct FVector& Location, class ABaseballBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.SendBaseballEvent");

	AScramSportManagerBaseball_SendBaseballEvent_Params params;
	params.BaseballEvent = BaseballEvent;
	params.Location = Location;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBaseball.SaveBaseballState
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// int                            VisitorsScore                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            HomeScore                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Inning                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TopOfInning                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           FirstPitchOfInning             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Outs                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Strikes                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  BatterInstrument               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMittSpawnInfo>  PitcherScrambleOptions         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::SaveBaseballState(int* VisitorsScore, int* HomeScore, int* Inning, bool* TopOfInning, bool* FirstPitchOfInning, int* Outs, int* Strikes, class UClass** BatterInstrument, TArray<struct FMittSpawnInfo>* PitcherScrambleOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.SaveBaseballState");

	AScramSportManagerBaseball_SaveBaseballState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VisitorsScore != nullptr)
		*VisitorsScore = params.VisitorsScore;
	if (HomeScore != nullptr)
		*HomeScore = params.HomeScore;
	if (Inning != nullptr)
		*Inning = params.Inning;
	if (TopOfInning != nullptr)
		*TopOfInning = params.TopOfInning;
	if (FirstPitchOfInning != nullptr)
		*FirstPitchOfInning = params.FirstPitchOfInning;
	if (Outs != nullptr)
		*Outs = params.Outs;
	if (Strikes != nullptr)
		*Strikes = params.Strikes;
	if (BatterInstrument != nullptr)
		*BatterInstrument = params.BatterInstrument;
	if (PitcherScrambleOptions != nullptr)
		*PitcherScrambleOptions = params.PitcherScrambleOptions;

}


// Function SportsScramble.ScramSportManagerBaseball.RestartGame
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           RestoringGame                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::RestartGame(bool RestoringGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.RestartGame");

	AScramSportManagerBaseball_RestartGame_Params params;
	params.RestoringGame = RestoringGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBaseball.OnStrikeZoneHit
// (Final, Native, Private)
// Parameters:
// class ABaseballBall*           pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EScramStrikeResult Result                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::OnStrikeZoneHit(class ABaseballBall* pBall, SportsScramble_EScramStrikeResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.OnStrikeZoneHit");

	AScramSportManagerBaseball_OnStrikeZoneHit_Params params;
	params.pBall = pBall;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBaseball.OnRunnerSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AScramBaseballRunnerAI*  runner                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::OnRunnerSpawned(class AScramBaseballRunnerAI* runner)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.OnRunnerSpawned");

	AScramSportManagerBaseball_OnRunnerSpawned_Params params;
	params.runner = runner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBaseball.OnBallHit
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.OnBallHit");

	AScramSportManagerBaseball_OnBallHit_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBaseball.OnBallDeleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABaseballBall*           Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::OnBallDeleted(class ABaseballBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.OnBallDeleted");

	AScramSportManagerBaseball_OnBallDeleted_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBaseball.LoadBaseballState
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// int                            VisitorsScore                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            HomeScore                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Inning                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TopOfInning                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           FirstPitchOfInning             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Outs                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Strikes                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  BatterInstrument               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMittSpawnInfo>  PitcherScrambleOptions         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::LoadBaseballState(int VisitorsScore, int HomeScore, int Inning, bool TopOfInning, bool FirstPitchOfInning, int Outs, int Strikes, class UClass* BatterInstrument, TArray<struct FMittSpawnInfo> PitcherScrambleOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.LoadBaseballState");

	AScramSportManagerBaseball_LoadBaseballState_Params params;
	params.VisitorsScore = VisitorsScore;
	params.HomeScore = HomeScore;
	params.Inning = Inning;
	params.TopOfInning = TopOfInning;
	params.FirstPitchOfInning = FirstPitchOfInning;
	params.Outs = Outs;
	params.Strikes = Strikes;
	params.BatterInstrument = BatterInstrument;
	params.PitcherScrambleOptions = PitcherScrambleOptions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBaseball.GetUnclassifiedBalls
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ABaseballBall*>   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class ABaseballBall*> AScramSportManagerBaseball::GetUnclassifiedBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetUnclassifiedBalls");

	AScramSportManagerBaseball_GetUnclassifiedBalls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerBaseball.GetScrambleBallProperties
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FBaseballBallScrambleProperties> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<struct FBaseballBallScrambleProperties> AScramSportManagerBaseball::GetScrambleBallProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetScrambleBallProperties");

	AScramSportManagerBaseball_GetScrambleBallProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerBaseball.GetPitcher
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AScramSportManagerBaseball::GetPitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetPitcher");

	AScramSportManagerBaseball_GetPitcher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerBaseball.GetPitchedBalls
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ABaseballBall*>   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class ABaseballBall*> AScramSportManagerBaseball::GetPitchedBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetPitchedBalls");

	AScramSportManagerBaseball_GetPitchedBalls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerBaseball.GetGameRunning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AScramSportManagerBaseball::GetGameRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetGameRunning");

	AScramSportManagerBaseball_GetGameRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerBaseball.GetFieldedBalls
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ABaseballBall*>   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class ABaseballBall*> AScramSportManagerBaseball::GetFieldedBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetFieldedBalls");

	AScramSportManagerBaseball_GetFieldedBalls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerBaseball.GetBatterRunAdvantage
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AScramSportManagerBaseball::GetBatterRunAdvantage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetBatterRunAdvantage");

	AScramSportManagerBaseball_GetBatterRunAdvantage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerBaseball.GetBatter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AScramSportManagerBaseball::GetBatter()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetBatter");

	AScramSportManagerBaseball_GetBatter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerBaseball.GetBalls
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ABaseballBall*>   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class ABaseballBall*> AScramSportManagerBaseball::GetBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetBalls");

	AScramSportManagerBaseball_GetBalls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerBaseball.DeleteBall
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ABaseballBall*           pBall                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           playOut                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::DeleteBall(class ABaseballBall* pBall, bool playOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.DeleteBall");

	AScramSportManagerBaseball_DeleteBall_Params params;
	params.pBall = pBall;
	params.playOut = playOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBaseball.BaseballEvent
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballEvent  BaseballEvent                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::BaseballEvent(SportsScramble_EBaseballEvent BaseballEvent, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.BaseballEvent");

	AScramSportManagerBaseball_BaseballEvent_Params params;
	params.BaseballEvent = BaseballEvent;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBaseball.AssignStrikeZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AScramStrikeZone*        strikeZone                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBaseball::AssignStrikeZone(class AScramStrikeZone* strikeZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.AssignStrikeZone");

	AScramSportManagerBaseball_AssignStrikeZone_Params params;
	params.strikeZone = strikeZone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBowling.SendBowlingEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EBowlingEvent   BowlingEvent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  BallActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBowling::SendBowlingEvent(int Player, SportsScramble_EBowlingEvent BowlingEvent, class AActor* BallActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBowling.SendBowlingEvent");

	AScramSportManagerBowling_SendBowlingEvent_Params params;
	params.Player = Player;
	params.BowlingEvent = BowlingEvent;
	params.BallActor = BallActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBowling.SaveBowlingState
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FBowlingScrambleState   ScrambleState                  (Parm, OutParm, NativeAccessSpecifierPublic)
// TArray<struct FBowlingFrameSet> TraditionalFrameSets           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void AScramSportManagerBowling::SaveBowlingState(struct FBowlingScrambleState* ScrambleState, TArray<struct FBowlingFrameSet>* TraditionalFrameSets)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBowling.SaveBowlingState");

	AScramSportManagerBowling_SaveBowlingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScrambleState != nullptr)
		*ScrambleState = params.ScrambleState;
	if (TraditionalFrameSets != nullptr)
		*TraditionalFrameSets = params.TraditionalFrameSets;

}


// Function SportsScramble.ScramSportManagerBowling.RestartGame
// (Final, Native, Protected, BlueprintCallable)
void AScramSportManagerBowling::RestartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBowling.RestartGame");

	AScramSportManagerBowling_RestartGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBowling.LoadBowlingState
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FBowlingScrambleState   ScrambleState                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FBowlingFrameSet> TraditionalFrameSets           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AScramSportManagerBowling::LoadBowlingState(const struct FBowlingScrambleState& ScrambleState, TArray<struct FBowlingFrameSet> TraditionalFrameSets)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBowling.LoadBowlingState");

	AScramSportManagerBowling_LoadBowlingState_Params params;
	params.ScrambleState = ScrambleState;
	params.TraditionalFrameSets = TraditionalFrameSets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerBowling.BowlingEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_EBowlingEvent   BowlingEvent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerBowling::BowlingEvent(int Player, SportsScramble_EBowlingEvent BowlingEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBowling.BowlingEvent");

	AScramSportManagerBowling_BowlingEvent_Params params;
	params.Player = Player;
	params.BowlingEvent = BowlingEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerDodgeball.StartGame
// (Final, Native, Protected, BlueprintCallable)
void AScramSportManagerDodgeball::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerDodgeball.StartGame");

	AScramSportManagerDodgeball_StartGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerDodgeball.OnBallHit
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerDodgeball::OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerDodgeball.OnBallHit");

	AScramSportManagerDodgeball_OnBallHit_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerDodgeball.DodgeballEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// SportsScramble_EDodgeballEvent DodgeballEvent                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerDodgeball::DodgeballEvent(SportsScramble_EDodgeballEvent DodgeballEvent, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerDodgeball.DodgeballEvent");

	AScramSportManagerDodgeball_DodgeballEvent_Params params;
	params.DodgeballEvent = DodgeballEvent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerTennis.TennisEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SportsScramble_ETennisEvent    TennisEvent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerTennis::TennisEvent(int Player, SportsScramble_ETennisEvent TennisEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.TennisEvent");

	AScramSportManagerTennis_TennisEvent_Params params;
	params.Player = Player;
	params.TennisEvent = TennisEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerTennis.SetAllowServe
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           allowServe                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerTennis::SetAllowServe(int Player, bool allowServe)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.SetAllowServe");

	AScramSportManagerTennis_SetAllowServe_Params params;
	params.Player = Player;
	params.allowServe = allowServe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerTennis.ServerOnBallHit
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerTennis::ServerOnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.ServerOnBallHit");

	AScramSportManagerTennis_ServerOnBallHit_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerTennis.SendDebugString
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 S                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerTennis::SendDebugString(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.SendDebugString");

	AScramSportManagerTennis_SendDebugString_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerTennis.SaveTennisState
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UClass*                  Ball                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  player1Instrument              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  player2Instrument              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  activeArenaScramble            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerTennis::SaveTennisState(class UClass** Ball, class UClass** player1Instrument, class UClass** player2Instrument, class UClass** activeArenaScramble)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.SaveTennisState");

	AScramSportManagerTennis_SaveTennisState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ball != nullptr)
		*Ball = params.Ball;
	if (player1Instrument != nullptr)
		*player1Instrument = params.player1Instrument;
	if (player2Instrument != nullptr)
		*player2Instrument = params.player2Instrument;
	if (activeArenaScramble != nullptr)
		*activeArenaScramble = params.activeArenaScramble;

}


// Function SportsScramble.ScramSportManagerTennis.RestartMatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           resetServer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerTennis::RestartMatch(bool resetServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.RestartMatch");

	AScramSportManagerTennis_RestartMatch_Params params;
	params.resetServer = resetServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerTennis.ReplaceBallInPlay
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AActor*                  Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerTennis::ReplaceBallInPlay(class AActor* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.ReplaceBallInPlay");

	AScramSportManagerTennis_ReplaceBallInPlay_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerTennis.OnRep_InPlayInfo
// (Final, Native, Private)
void AScramSportManagerTennis::OnRep_InPlayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.OnRep_InPlayInfo");

	AScramSportManagerTennis_OnRep_InPlayInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerTennis.LoadTennisState
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UClass*                  Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  player1Instrument              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  player2Instrument              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  activeArenaScramble            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerTennis::LoadTennisState(class UClass* Ball, class UClass* player1Instrument, class UClass* player2Instrument, class UClass* activeArenaScramble)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.LoadTennisState");

	AScramSportManagerTennis_LoadTennisState_Params params;
	params.Ball = Ball;
	params.player1Instrument = player1Instrument;
	params.player2Instrument = player2Instrument;
	params.activeArenaScramble = activeArenaScramble;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramSportManagerTennis.GetServingPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AScramSportManagerTennis::GetServingPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetServingPlayer");

	AScramSportManagerTennis_GetServingPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerTennis.GetReceivingPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AScramSportManagerTennis::GetReceivingPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetReceivingPlayer");

	AScramSportManagerTennis_GetReceivingPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerTennis.GetPlayerPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AScramSportManagerTennis::GetPlayerPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetPlayerPoints");

	AScramSportManagerTennis_GetPlayerPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerTennis.GetPlayerGames
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AScramSportManagerTennis::GetPlayerGames()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetPlayerGames");

	AScramSportManagerTennis_GetPlayerGames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerTennis.GetPlayerDoubleFaults
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AScramSportManagerTennis::GetPlayerDoubleFaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetPlayerDoubleFaults");

	AScramSportManagerTennis_GetPlayerDoubleFaults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerTennis.GetPlayerAces
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AScramSportManagerTennis::GetPlayerAces()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetPlayerAces");

	AScramSportManagerTennis_GetPlayerAces_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerTennis.GetOpponentPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AScramSportManagerTennis::GetOpponentPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetOpponentPoints");

	AScramSportManagerTennis_GetOpponentPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerTennis.GetOpponentGames
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AScramSportManagerTennis::GetOpponentGames()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetOpponentGames");

	AScramSportManagerTennis_GetOpponentGames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerTennis.GetNextPlayerToHitBall
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AScramSportManagerTennis::GetNextPlayerToHitBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetNextPlayerToHitBall");

	AScramSportManagerTennis_GetNextPlayerToHitBall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerTennis.GetBallInPlay
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AScramSportManagerTennis::GetBallInPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetBallInPlay");

	AScramSportManagerTennis_GetBallInPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramSportManagerTennis.ClientOnBallHit
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramSportManagerTennis::ClientOnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.ClientOnBallHit");

	AScramSportManagerTennis_ClientOnBallHit_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTennisAI.SetInstrumentProperties
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTennisInstrumentProperties instrumentProperties           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AScramTennisAI::SetInstrumentProperties(const struct FTennisInstrumentProperties& instrumentProperties)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTennisAI.SetInstrumentProperties");

	AScramTennisAI_SetInstrumentProperties_Params params;
	params.instrumentProperties = instrumentProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTennisAI.PlayRacquetSound
// (Event, Public, BlueprintEvent)
// Parameters:
// class ATennisBall*             Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BallSpeed                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AScramTennisAI::PlayRacquetSound(class ATennisBall* Ball, float BallSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTennisAI.PlayRacquetSound");

	AScramTennisAI_PlayRacquetSound_Params params;
	params.Ball = Ball;
	params.BallSpeed = BallSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTimeLineComponent.TimeLineIsRunning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScramTimeLineComponent::TimeLineIsRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.TimeLineIsRunning");

	UScramTimeLineComponent_TimeLineIsRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTimeLineComponent.StopTimeLine
// (Final, Native, Public, BlueprintCallable)
void UScramTimeLineComponent::StopTimeLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.StopTimeLine");

	UScramTimeLineComponent_StopTimeLine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTimeLineComponent.StartTimeLine
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Forward                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramTimeLineComponent::StartTimeLine(bool Forward, float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.StartTimeLine");

	UScramTimeLineComponent_StartTimeLine_Params params;
	params.Forward = Forward;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTimeLineComponent.SetTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramTimeLineComponent::SetTarget(class USceneComponent* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.SetTarget");

	UScramTimeLineComponent_SetTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTimeLineComponent.SampleAtTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SampleTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScramTimeLineComponent::SampleAtTime(float SampleTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.SampleAtTime");

	UScramTimeLineComponent_SampleAtTime_Params params;
	params.SampleTime = SampleTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTimeLineComponent.ResumeTimeLine
// (Final, Native, Public, BlueprintCallable)
void UScramTimeLineComponent::ResumeTimeLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.ResumeTimeLine");

	UScramTimeLineComponent_ResumeTimeLine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.ScramTimeLineComponent.GetTimeLineLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UScramTimeLineComponent::GetTimeLineLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.GetTimeLineLength");

	UScramTimeLineComponent_GetTimeLineLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.ScramTimeLineComponent.GetRemainingTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UScramTimeLineComponent::GetRemainingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.GetRemainingTime");

	UScramTimeLineComponent_GetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.TennisAvatar.OnBallHit
// (Final, Native, Private)
// Parameters:
// class UObject*                 pWorldContextObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScramEventBasePayload*  pPayload                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATennisAvatar::OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisAvatar.OnBallHit");

	ATennisAvatar_OnBallHit_Params params;
	params.pWorldContextObject = pWorldContextObject;
	params.pPayload = pPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TennisInstrument.GetTennisInstrumentProperties
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTennisInstrumentProperties ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FTennisInstrumentProperties ATennisInstrument::GetTennisInstrumentProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisInstrument.GetTennisInstrumentProperties");

	ATennisInstrument_GetTennisInstrumentProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.TimeDisplayWidget.FormatTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTimeDisplayWidget::FormatTime(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TimeDisplayWidget.FormatTime");

	UTimeDisplayWidget_FormatTime_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.TrophyAwardListenerBase.UpdateProgress
// (Final, Native, Public, BlueprintCallable)
void ATrophyAwardListenerBase::UpdateProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyAwardListenerBase.UpdateProgress");

	ATrophyAwardListenerBase_UpdateProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TrophyAwardListenerBase.SaveProgressToSaveData
// (Final, Native, Public, BlueprintCallable)
void ATrophyAwardListenerBase::SaveProgressToSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyAwardListenerBase.SaveProgressToSaveData");

	ATrophyAwardListenerBase_SaveProgressToSaveData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TrophyAwardListenerBase.Refresh
// (Final, Native, Public, BlueprintCallable)
void ATrophyAwardListenerBase::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyAwardListenerBase.Refresh");

	ATrophyAwardListenerBase_Refresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TrophyAwardListenerBase.LoadProgressFromSaveData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ATrophyAwardListenerBase::LoadProgressFromSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyAwardListenerBase.LoadProgressFromSaveData");

	ATrophyAwardListenerBase_LoadProgressFromSaveData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.TrophyAwardListenerBase.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATrophyAwardListenerBase::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyAwardListenerBase.Initialize");

	ATrophyAwardListenerBase_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TrophyAwardListenerBase.IncreaseProgress
// (Final, Native, Public, BlueprintCallable)
void ATrophyAwardListenerBase::IncreaseProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyAwardListenerBase.IncreaseProgress");

	ATrophyAwardListenerBase_IncreaseProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TrophyAwardListenerBase.AwardTrophy
// (Final, Native, Public, BlueprintCallable)
void ATrophyAwardListenerBase::AwardTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyAwardListenerBase.AwardTrophy");

	ATrophyAwardListenerBase_AwardTrophy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TrophyGrabbable.WasTrophyEarned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ATrophyGrabbable::WasTrophyEarned()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.WasTrophyEarned");

	ATrophyGrabbable_WasTrophyEarned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.TrophyGrabbable.RespawnTrophy
// (Final, Native, Public, BlueprintCallable)
void ATrophyGrabbable::RespawnTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.RespawnTrophy");

	ATrophyGrabbable_RespawnTrophy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TrophyGrabbable.OverrideInitialRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                overrideRotation               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void ATrophyGrabbable::OverrideInitialRotation(const struct FRotator& overrideRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.OverrideInitialRotation");

	ATrophyGrabbable_OverrideInitialRotation_Params params;
	params.overrideRotation = overrideRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TrophyGrabbable.OverrideInitialPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 overridePosition               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATrophyGrabbable::OverrideInitialPosition(const struct FVector& overridePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.OverrideInitialPosition");

	ATrophyGrabbable_OverrideInitialPosition_Params params;
	params.overridePosition = overridePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TrophyGrabbable.OnTrophyRespawnToOriginalPosition
// (Event, Public, BlueprintEvent)
void ATrophyGrabbable::OnTrophyRespawnToOriginalPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.OnTrophyRespawnToOriginalPosition");

	ATrophyGrabbable_OnTrophyRespawnToOriginalPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TrophyGrabbable.OnTrophyReleased
// (Event, Public, BlueprintEvent)
void ATrophyGrabbable::OnTrophyReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.OnTrophyReleased");

	ATrophyGrabbable_OnTrophyReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TrophyGrabbable.OnTrophyGrabbed
// (Event, Public, BlueprintEvent)
void ATrophyGrabbable::OnTrophyGrabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.OnTrophyGrabbed");

	ATrophyGrabbable_OnTrophyGrabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TrophyGrabbable.OnStopPointingAt
// (Event, Public, BlueprintEvent)
void ATrophyGrabbable::OnStopPointingAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.OnStopPointingAt");

	ATrophyGrabbable_OnStopPointingAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TrophyGrabbable.OnStartPointingAt
// (Event, Public, BlueprintEvent)
void ATrophyGrabbable::OnStartPointingAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.OnStartPointingAt");

	ATrophyGrabbable_OnStartPointingAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SportsScramble.TrophyGrabbable.GetInitialRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator ATrophyGrabbable::GetInitialRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.GetInitialRotation");

	ATrophyGrabbable_GetInitialRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.TrophyGrabbable.GetInitialPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector ATrophyGrabbable::GetInitialPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.GetInitialPosition");

	ATrophyGrabbable_GetInitialPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SportsScramble.UpdateSessionCallbackProxyAdvanced.UpdateSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PrivateConnections             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowInvites                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowJoinInProgress           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRefreshOnlineData             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsDedicatedServer             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUpdateSessionCallbackProxyAdvanced* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUpdateSessionCallbackProxyAdvanced* UUpdateSessionCallbackProxyAdvanced::STATIC_UpdateSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, int PublicConnections, int PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SportsScramble.UpdateSessionCallbackProxyAdvanced.UpdateSession");

	UUpdateSessionCallbackProxyAdvanced_UpdateSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ExtraSettings = ExtraSettings;
	params.PublicConnections = PublicConnections;
	params.PrivateConnections = PrivateConnections;
	params.bUseLAN = bUseLAN;
	params.bAllowInvites = bAllowInvites;
	params.bAllowJoinInProgress = bAllowJoinInProgress;
	params.bRefreshOnlineData = bRefreshOnlineData;
	params.bIsDedicatedServer = bIsDedicatedServer;

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
