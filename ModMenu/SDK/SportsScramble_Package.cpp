/**
 * Name: SportsScramble
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x003A1EB0
	 * 		Name   -> Function SportsScramble.AcceptInviteCallbackProxy.FriendInviteClientConnect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAcceptInviteCallbackProxy::STATIC_FriendInviteClientConnect(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AcceptInviteCallbackProxy.FriendInviteClientConnect");
		
		UAcceptInviteCallbackProxy_FriendInviteClientConnect_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A1610
	 * 		Name   -> Function SportsScramble.AcceptInviteCallbackProxy.AcceptInvite
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScramGameInvite                            invite                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UAcceptInviteCallbackProxy* UAcceptInviteCallbackProxy::STATIC_AcceptInvite(class APlayerController* PlayerController, const struct FScramGameInvite& invite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AcceptInviteCallbackProxy.AcceptInvite");
		
		UAcceptInviteCallbackProxy_AcceptInvite_Params params {};
		params.PlayerController = PlayerController;
		params.invite = invite;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAcceptInviteCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAcceptInviteCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.AcceptInviteCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramSceneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramSceneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramSceneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A42B0
	 * 		Name   -> Function SportsScramble.ActorSet.ResetActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UActorSet::ResetActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ActorSet.ResetActors");
		
		UActorSet_ResetActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A2370
	 * 		Name   -> Function SportsScramble.ActorSet.GetNextActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UClass* UActorSet::GetNextActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ActorSet.GetNextActor");
		
		UActorSet_GetNextActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A1950
	 * 		Name   -> Function SportsScramble.ActorSet.AvoidActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActorSet::AvoidActor(class UClass* ActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ActorSet.AvoidActor");
		
		UActorSet_AvoidActor_Params params {};
		params.ActorClass = ActorClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ActorSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A4640
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.UniqueNetIdToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_UniqueNetIdToString(const struct FBPUniqueNetId& UniqueNetId, class FString* String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.UniqueNetIdToString");
		
		UAdvancedSessionsLibrary_UniqueNetIdToString_Params params {};
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A4480
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.SetPlayerName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_SetPlayerName(class APlayerController* PlayerController, const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.SetPlayerName");
		
		UAdvancedSessionsLibrary_SetPlayerName_Params params {};
		params.PlayerController = PlayerController;
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A3FC0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSessionPropertyKeyPair                     SessionSearchProperty                                      (Parm, NativeAccessSpecifierPublic)
	 * 		EOnlineComparisonOpRedux                           ComparisonOp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSessionsSearchSetting UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty");
		
		UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Params params {};
		params.SessionSearchProperty = SessionSearchProperty;
		params.ComparisonOp = ComparisonOp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A3E80
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyString(const class FName& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString");
		
		UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A3DA0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyInt(const class FName& Key, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt");
		
		UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A3CB0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyFloat(const class FName& Key, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat");
		
		UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A3BD0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyByte(const class FName& Key, unsigned char Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte");
		
		UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A3AF0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyBool(const class FName& Key, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool");
		
		UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A3A10
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.IsValidUniqueNetID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::STATIC_IsValidUniqueNetID(const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.IsValidUniqueNetID");
		
		UAdvancedSessionsLibrary_IsValidUniqueNetID_Params params {};
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A38F0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.IsValidSession
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     SessionResult                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::STATIC_IsValidSession(const struct FBlueprintSessionResult& SessionResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.IsValidSession");
		
		UAdvancedSessionsLibrary_IsValidSession_Params params {};
		params.SessionResult = SessionResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A37A0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.IsPlayerInSession
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FBPUniqueNetId                              PlayerToCheck                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsInSession                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_IsPlayerInSession(const struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.IsPlayerInSession");
		
		UAdvancedSessionsLibrary_IsPlayerInSession_Params params {};
		params.PlayerToCheck = PlayerToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsInSession != nullptr)
			*bIsInSession = params.bIsInSession;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A36F0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.HasOnlineSubsystem
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        SubSystemName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::STATIC_HasOnlineSubsystem(const class FName& SubSystemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.HasOnlineSubsystem");
		
		UAdvancedSessionsLibrary_HasOnlineSubsystem_Params params {};
		params.SubSystemName = SubSystemName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A35B0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState");
		
		UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueNetId != nullptr)
			*UniqueNetId = params.UniqueNetId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A34A0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetUniqueNetID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetUniqueNetID(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetUniqueNetID");
		
		UAdvancedSessionsLibrary_GetUniqueNetID_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueNetId != nullptr)
			*UniqueNetId = params.UniqueNetId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A32B0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetUniqueBuildID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     SessionResult                                              (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UniqueBuildId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int32_t* UniqueBuildId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetUniqueBuildID");
		
		UAdvancedSessionsLibrary_GetUniqueBuildID_Params params {};
		params.SessionResult = SessionResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueBuildId != nullptr)
			*UniqueBuildId = params.UniqueBuildId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A31F0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetSessionState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EBPOnlineSessionState                              SessionState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetSessionState(EBPOnlineSessionState* SessionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionState");
		
		UAdvancedSessionsLibrary_GetSessionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SessionState != nullptr)
			*SessionState = params.SessionState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A2E40
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetSessionSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumConnections                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumPrivateConnections                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsLAN                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsDedicated                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowInvites                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowJoinInProgress                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsAnticheatEnabled                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BuildUniqueID                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetSessionSettings(int32_t* NumConnections, int32_t* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int32_t* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionSettings");
		
		UAdvancedSessionsLibrary_GetSessionSettings_Params params {};
		
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

	/**
	 * Function:
	 * 		RVA    -> 0x003A2C90
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SettingValue                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, class FString* SettingValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyString");
		
		UAdvancedSessionsLibrary_GetSessionPropertyString_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003A2BD0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSessionPropertyKeyPair                     SessionProperty                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FName UAdvancedSessionsLibrary::STATIC_GetSessionPropertyKey(const struct FSessionPropertyKeyPair& SessionProperty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyKey");
		
		UAdvancedSessionsLibrary_GetSessionPropertyKey_Params params {};
		params.SessionProperty = SessionProperty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A2A30
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyInt
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SettingValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, int32_t* SettingValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyInt");
		
		UAdvancedSessionsLibrary_GetSessionPropertyInt_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003A2890
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyFloat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SettingValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, float* SettingValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyFloat");
		
		UAdvancedSessionsLibrary_GetSessionPropertyFloat_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003A26F0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyByte
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      SettingValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, unsigned char* SettingValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyByte");
		
		UAdvancedSessionsLibrary_GetSessionPropertyByte_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003A2550
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyBool
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SettingValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, bool* SettingValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyBool");
		
		UAdvancedSessionsLibrary_GetSessionPropertyBool_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003A2470
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetPlayerName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetPlayerName(class APlayerController* PlayerController, class FString* PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetPlayerName");
		
		UAdvancedSessionsLibrary_GetPlayerName_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerName != nullptr)
			*PlayerName = params.PlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A23B0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumNetPlayers                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int32_t* NumNetPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers");
		
		UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumNetPlayers != nullptr)
			*NumNetPlayers = params.NumNetPlayers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A22B0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetNetPlayerIndex
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NetPlayerIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetNetPlayerIndex(class APlayerController* PlayerController, int32_t* NetPlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetNetPlayerIndex");
		
		UAdvancedSessionsLibrary_GetNetPlayerIndex_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NetPlayerIndex != nullptr)
			*NetPlayerIndex = params.NetPlayerIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A1FF0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetExtraSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     SessionResult                                              (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetExtraSettings");
		
		UAdvancedSessionsLibrary_GetExtraSettings_Params params {};
		params.SessionResult = SessionResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExtraSettings != nullptr)
			*ExtraSettings = params.ExtraSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A1F70
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            UniqueBuildId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_GetCurrentUniqueBuildID(int32_t* UniqueBuildId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.GetCurrentUniqueBuildID");
		
		UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueBuildId != nullptr)
			*UniqueBuildId = params.UniqueBuildId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A1D10
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, EBlueprintResultSwitch* Result, int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.FindSessionPropertyIndexByName");
		
		UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003A1B50
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.FindSessionPropertyByName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingsName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSessionPropertyKeyPair                     OutProperty                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingsName, EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.FindSessionPropertyByName");
		
		UAdvancedSessionsLibrary_FindSessionPropertyByName_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003A19D0
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBPUniqueNetId                              A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::STATIC_EqualEqual_UNetIDUnetID(const struct FBPUniqueNetId& A, const struct FBPUniqueNetId& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID");
		
		UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A1780
	 * 		Name   -> Function SportsScramble.AdvancedSessionsLibrary.AddOrModifyExtraSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             SettingsArray                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             NewOrChangedSettings                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             ModifiedSettingsArray                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::STATIC_AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>* SettingsArray, TArray<struct FSessionPropertyKeyPair>* NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.AdvancedSessionsLibrary.AddOrModifyExtraSettings");
		
		UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Params params {};
		
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

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSessionsLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSessionsLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.AdvancedSessionsLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseballAIAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseballAIAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballAIAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C16D0
	 * 		Name   -> Function SportsScramble.ScramActor.PlayManagedSoundAtLocation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeMultiplier                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchMultiplier                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAudioComponent* AScramActor::PlayManagedSoundAtLocation(class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramActor.PlayManagedSoundAtLocation");
		
		AScramActor_PlayManagedSoundAtLocation_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003C0F70
	 * 		Name   -> Function SportsScramble.ScramActor.HasBegunPlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramActor::HasBegunPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramActor.HasBegunPlay");
		
		AScramActor_HasBegunPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0A90
	 * 		Name   -> Function SportsScramble.ScramActor.AttachSound2D
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeMultiplier                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchMultiplier                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsUiSound                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAudioComponent* AScramActor::AttachSound2D(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool IsUiSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramActor.AttachSound2D");
		
		AScramActor_AttachSound2D_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1B30
	 * 		Name   -> Function SportsScramble.ScramAvatar.PlaySpawnAnimation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramAvatar::PlaySpawnAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramAvatar.PlaySpawnAnimation");
		
		AScramAvatar_PlaySpawnAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0F40
	 * 		Name   -> Function SportsScramble.ScramAvatar.GetPlayerIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AScramAvatar::GetPlayerIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramAvatar.GetPlayerIndex");
		
		AScramAvatar_GetPlayerIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0F10
	 * 		Name   -> Function SportsScramble.ScramAvatar.GetPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AScramPlayer* AScramAvatar::GetPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramAvatar.GetPlayer");
		
		AScramAvatar_GetPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramAvatar.GetGlobalColor
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FName                                        globalColorName                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor AScramAvatar::GetGlobalColor(const class FName& globalColorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramAvatar.GetGlobalColor");
		
		AScramAvatar_GetGlobalColor_Params params {};
		params.globalColorName = globalColorName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramAvatar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramAvatar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramAvatar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballAvatar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballAvatar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballAvatar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0F70
	 * 		Name   -> Function SportsScramble.ScramMeshActor.HasBegunPlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramMeshActor::HasBegunPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramMeshActor.HasBegunPlay");
		
		AScramMeshActor_HasBegunPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD680
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.SetPrimitiveTrajectory
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScramTrajectory                            trajectory                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AScramPrimitiveActor::SetPrimitiveTrajectory(const struct FScramTrajectory& trajectory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.SetPrimitiveTrajectory");
		
		AScramPrimitiveActor_SetPrimitiveTrajectory_Params params {};
		params.trajectory = trajectory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD3B0
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.ResumeTrajectory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPrimitiveActor::ResumeTrajectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.ResumeTrajectory");
		
		AScramPrimitiveActor_ResumeTrajectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD350
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.RecreatePhysicsState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPrimitiveActor::RecreatePhysicsState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.RecreatePhysicsState");
		
		AScramPrimitiveActor_RecreatePhysicsState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD330
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.PauseTrajectory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPrimitiveActor::PauseTrajectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.PauseTrajectory");
		
		AScramPrimitiveActor_PauseTrajectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD310
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.OnRep_ClientTrajectoryPaused
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AScramPrimitiveActor::OnRep_ClientTrajectoryPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.OnRep_ClientTrajectoryPaused");
		
		AScramPrimitiveActor_OnRep_ClientTrajectoryPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD2D0
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.NotifyPrimitiveDestroyed
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AScramPrimitiveActor::NotifyPrimitiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.NotifyPrimitiveDestroyed");
		
		AScramPrimitiveActor_NotifyPrimitiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD2B0
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.NetResumeTrajectory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPrimitiveActor::NetResumeTrajectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.NetResumeTrajectory");
		
		AScramPrimitiveActor_NetResumeTrajectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD290
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.NetPauseTrajectory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPrimitiveActor::NetPauseTrajectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.NetPauseTrajectory");
		
		AScramPrimitiveActor_NetPauseTrajectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD1C0
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.NetDestroyPrimitive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               playOut                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPrimitiveActor::NetDestroyPrimitive(bool playOut, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.NetDestroyPrimitive");
		
		AScramPrimitiveActor_NetDestroyPrimitive_Params params {};
		params.playOut = playOut;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD190
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.IsPrimitiveSimulatingPhysics
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPrimitiveActor::IsPrimitiveSimulatingPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.IsPrimitiveSimulatingPhysics");
		
		AScramPrimitiveActor_IsPrimitiveSimulatingPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD160
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.IsPrimitivePendingDestroy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPrimitiveActor::IsPrimitivePendingDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.IsPrimitivePendingDestroy");
		
		AScramPrimitiveActor_IsPrimitivePendingDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD130
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.IsPrimitiveInMotion
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPrimitiveActor::IsPrimitiveInMotion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.IsPrimitiveInMotion");
		
		AScramPrimitiveActor_IsPrimitiveInMotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD100
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.IsPrimitiveFollowingSpline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPrimitiveActor::IsPrimitiveFollowingSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.IsPrimitiveFollowingSpline");
		
		AScramPrimitiveActor_IsPrimitiveFollowingSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD0D0
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.IsPrimitiveDestroyed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPrimitiveActor::IsPrimitiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.IsPrimitiveDestroyed");
		
		AScramPrimitiveActor_IsPrimitiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DCFF0
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.InitializePrimitiveTrajectory
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScramTrajectory                            trajectory                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AScramPrimitiveActor::InitializePrimitiveTrajectory(const struct FScramTrajectory& trajectory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.InitializePrimitiveTrajectory");
		
		AScramPrimitiveActor_InitializePrimitiveTrajectory_Params params {};
		params.trajectory = trajectory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DCD00
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.GetTrajectoryPaused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPrimitiveActor::GetTrajectoryPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetTrajectoryPaused");
		
		AScramPrimitiveActor_GetTrajectoryPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DCC00
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.GetPrimitiveVisMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMeshComponent* AScramPrimitiveActor::GetPrimitiveVisMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveVisMesh");
		
		AScramPrimitiveActor_GetPrimitiveVisMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC860
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.GetPrimitiveTrajectory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FScramTrajectory AScramPrimitiveActor::GetPrimitiveTrajectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveTrajectory");
		
		AScramPrimitiveActor_GetPrimitiveTrajectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC820
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.GetPrimitiveRotation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FQuat AScramPrimitiveActor::GetPrimitiveRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveRotation");
		
		AScramPrimitiveActor_GetPrimitiveRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC760
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.GetPrimitiveProperties
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FScramPrimitiveProperties AScramPrimitiveActor::GetPrimitiveProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveProperties");
		
		AScramPrimitiveActor_GetPrimitiveProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC720
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.GetPrimitivePhysicalAngularVelocity
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector AScramPrimitiveActor::GetPrimitivePhysicalAngularVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitivePhysicalAngularVelocity");
		
		AScramPrimitiveActor_GetPrimitivePhysicalAngularVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC6D0
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.GetPrimitiveMotionState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FMotionState AScramPrimitiveActor::GetPrimitiveMotionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveMotionState");
		
		AScramPrimitiveActor_GetPrimitiveMotionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC690
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.GetPrimitiveLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector AScramPrimitiveActor::GetPrimitiveLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveLocation");
		
		AScramPrimitiveActor_GetPrimitiveLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC650
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.GetPrimitiveLinearVelocity
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector AScramPrimitiveActor::GetPrimitiveLinearVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveLinearVelocity");
		
		AScramPrimitiveActor_GetPrimitiveLinearVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC620
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.GetPrimitiveComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UPrimitiveComponent* AScramPrimitiveActor::GetPrimitiveComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetPrimitiveComponent");
		
		AScramPrimitiveActor_GetPrimitiveComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC470
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.GetFloorBouncesWithCurrentTrajectory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AScramPrimitiveActor::GetFloorBouncesWithCurrentTrajectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetFloorBouncesWithCurrentTrajectory");
		
		AScramPrimitiveActor_GetFloorBouncesWithCurrentTrajectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC440
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.GetEnvironmentBouncesWithCurrentTrajectory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AScramPrimitiveActor::GetEnvironmentBouncesWithCurrentTrajectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.GetEnvironmentBouncesWithCurrentTrajectory");
		
		AScramPrimitiveActor_GetEnvironmentBouncesWithCurrentTrajectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPrimitiveActor.DestroyPrimitive
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               playOut                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPrimitiveActor::DestroyPrimitive(bool playOut, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveActor.DestroyPrimitive");
		
		AScramPrimitiveActor_DestroyPrimitive_Params params {};
		params.playOut = playOut;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPrimitiveActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPrimitiveActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramPrimitiveActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD720
	 * 		Name   -> Function SportsScramble.ScramPrimitiveGrabbable.SetProxyGrabbable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AScramPrimitiveGrabbable*                    grabbable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPrimitiveGrabbable::SetProxyGrabbable(class AScramPrimitiveGrabbable* grabbable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.SetProxyGrabbable");
		
		AScramPrimitiveGrabbable_SetProxyGrabbable_Params params {};
		params.grabbable = grabbable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPrimitiveGrabbable.OnGrabbableDeactivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramPrimitiveGrabbable::OnGrabbableDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.OnGrabbableDeactivated");
		
		AScramPrimitiveGrabbable_OnGrabbableDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPrimitiveGrabbable.OnGrabbableActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramPrimitiveGrabbable::OnGrabbableActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.OnGrabbableActivated");
		
		AScramPrimitiveGrabbable_OnGrabbableActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD090
	 * 		Name   -> Function SportsScramble.ScramPrimitiveGrabbable.IsLocallyGrabbed
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPrimitiveGrabbable::IsLocallyGrabbed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.IsLocallyGrabbed");
		
		AScramPrimitiveGrabbable_IsLocallyGrabbed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DCFB0
	 * 		Name   -> Function SportsScramble.ScramPrimitiveGrabbable.InitialGrabInProgress
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPrimitiveGrabbable::InitialGrabInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.InitialGrabInProgress");
		
		AScramPrimitiveGrabbable_InitialGrabInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DCD30
	 * 		Name   -> Function SportsScramble.ScramPrimitiveGrabbable.GrabbableIsTracked
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPrimitiveGrabbable::GrabbableIsTracked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.GrabbableIsTracked");
		
		AScramPrimitiveGrabbable_GrabbableIsTracked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DCC30
	 * 		Name   -> Function SportsScramble.ScramPrimitiveGrabbable.GetProxyGrabbable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AScramPrimitiveGrabbable* AScramPrimitiveGrabbable::GetProxyGrabbable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.GetProxyGrabbable");
		
		AScramPrimitiveGrabbable_GetProxyGrabbable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC4A0
	 * 		Name   -> Function SportsScramble.ScramPrimitiveGrabbable.GetHidesAvatarHands
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPrimitiveGrabbable::GetHidesAvatarHands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.GetHidesAvatarHands");
		
		AScramPrimitiveGrabbable_GetHidesAvatarHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC390
	 * 		Name   -> Function SportsScramble.ScramPrimitiveGrabbable.CurrentPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AScramPlayer* AScramPrimitiveGrabbable::CurrentPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.CurrentPlayer");
		
		AScramPrimitiveGrabbable_CurrentPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC360
	 * 		Name   -> Function SportsScramble.ScramPrimitiveGrabbable.CurrentHand
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AScramPlayerHand* AScramPrimitiveGrabbable::CurrentHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.CurrentHand");
		
		AScramPrimitiveGrabbable_CurrentHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC330
	 * 		Name   -> Function SportsScramble.ScramPrimitiveGrabbable.CurrentGrabberActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class AActor* AScramPrimitiveGrabbable::CurrentGrabberActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPrimitiveGrabbable.CurrentGrabberActor");
		
		AScramPrimitiveGrabbable_CurrentGrabberActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPrimitiveGrabbable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPrimitiveGrabbable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramPrimitiveGrabbable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1EF0
	 * 		Name   -> Function SportsScramble.ScramBall.SetImmuneToInstruments
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               immune                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBall::SetImmuneToInstruments(bool immune)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBall.SetImmuneToInstruments");
		
		AScramBall_SetImmuneToInstruments_Params params {};
		params.immune = immune;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1E60
	 * 		Name   -> Function SportsScramble.ScramBall.SetHitsBallHitters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               hits                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBall::SetHitsBallHitters(bool hits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBall.SetHitsBallHitters");
		
		AScramBall_SetHitsBallHitters_Params params {};
		params.hits = hits;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1E40
	 * 		Name   -> Function SportsScramble.ScramBall.SetHitByInstrument
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramBall::SetHitByInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBall.SetHitByInstrument");
		
		AScramBall_SetHitByInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0FA0
	 * 		Name   -> Function SportsScramble.ScramBall.IsImmuneToInstruments
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramBall::IsImmuneToInstruments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBall.IsImmuneToInstruments");
		
		AScramBall_IsImmuneToInstruments_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0EF0
	 * 		Name   -> Function SportsScramble.ScramBall.GetHitsBallHitters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramBall::GetHitsBallHitters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBall.GetHitsBallHitters");
		
		AScramBall_GetHitsBallHitters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0D80
	 * 		Name   -> Function SportsScramble.ScramBall.GetBallProperties
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FScramBallProperties AScramBall::GetBallProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBall.GetBallProperties");
		
		AScramBall_GetBallProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0D50
	 * 		Name   -> Function SportsScramble.ScramBall.EverHitByInstrument
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramBall::EverHitByInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBall.EverHitByInstrument");
		
		AScramBall_EverHitByInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramBall.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramBall::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBall");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A4610
	 * 		Name   -> Function SportsScramble.BaseballBall.TrySetFutureHit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UObject* ABaseballBall::TrySetFutureHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.TrySetFutureHit");
		
		ABaseballBall_TrySetFutureHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A4590
	 * 		Name   -> Function SportsScramble.BaseballBall.SetVerticalFieldZone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EVerticalFieldZone                                 verticalFieldZone                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballBall::SetVerticalFieldZone(EVerticalFieldZone verticalFieldZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.SetVerticalFieldZone");
		
		ABaseballBall_SetVerticalFieldZone_Params params {};
		params.verticalFieldZone = verticalFieldZone;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A43F0
	 * 		Name   -> Function SportsScramble.BaseballBall.SetIsThrow
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isThrow                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballBall::SetIsThrow(bool isThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.SetIsThrow");
		
		ABaseballBall_SetIsThrow_Params params {};
		params.isThrow = isThrow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A4360
	 * 		Name   -> Function SportsScramble.BaseballBall.SetForceCharge
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               shouldCharge                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballBall::SetForceCharge(bool shouldCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.SetForceCharge");
		
		ABaseballBall_SetForceCharge_Params params {};
		params.shouldCharge = shouldCharge;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A42D0
	 * 		Name   -> Function SportsScramble.BaseballBall.SetBallImbued
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Imbued                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballBall::SetBallImbued(bool Imbued)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.SetBallImbued");
		
		ABaseballBall_SetBallImbued_Params params {};
		params.Imbued = Imbued;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BaseballBall.OnShotChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABaseballBall::OnShotChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.OnShotChanged");
		
		ABaseballBall_OnShotChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A4290
	 * 		Name   -> Function SportsScramble.BaseballBall.OnRep_NetworkMotionState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ABaseballBall::OnRep_NetworkMotionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.OnRep_NetworkMotionState");
		
		ABaseballBall_OnRep_NetworkMotionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A4270
	 * 		Name   -> Function SportsScramble.BaseballBall.OnRep_BowlingBall
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ABaseballBall::OnRep_BowlingBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.OnRep_BowlingBall");
		
		ABaseballBall_OnRep_BowlingBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BaseballBall.OnImbuedChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABaseballBall::OnImbuedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.OnImbuedChanged");
		
		ABaseballBall_OnImbuedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A41B0
	 * 		Name   -> Function SportsScramble.BaseballBall.OnHit
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballBall::OnHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.OnHit");
		
		ABaseballBall_OnHit_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BaseballBall.OnFloorResultChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EFloorResult                                       newFloorResult                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballBall::OnFloorResultChanged(EFloorResult newFloorResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.OnFloorResultChanged");
		
		ABaseballBall_OnFloorResultChanged_Params params {};
		params.newFloorResult = newFloorResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A38C0
	 * 		Name   -> Function SportsScramble.BaseballBall.IsRollingPitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABaseballBall::IsRollingPitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.IsRollingPitch");
		
		ABaseballBall_IsRollingPitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A3770
	 * 		Name   -> Function SportsScramble.BaseballBall.IsBallImbued
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABaseballBall::IsBallImbued()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.IsBallImbued");
		
		ABaseballBall_IsBallImbued_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A36C0
	 * 		Name   -> Function SportsScramble.BaseballBall.GetVerticalFieldZone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EVerticalFieldZone ABaseballBall::GetVerticalFieldZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.GetVerticalFieldZone");
		
		ABaseballBall_GetVerticalFieldZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A3270
	 * 		Name   -> Function SportsScramble.BaseballBall.GetShot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBaseballShot ABaseballBall::GetShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.GetShot");
		
		ABaseballBall_GetShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A2280
	 * 		Name   -> Function SportsScramble.BaseballBall.GetIsThrow
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABaseballBall::GetIsThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.GetIsThrow");
		
		ABaseballBall_GetIsThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A2250
	 * 		Name   -> Function SportsScramble.BaseballBall.GetForceCharge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABaseballBall::GetForceCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.GetForceCharge");
		
		ABaseballBall_GetForceCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A2220
	 * 		Name   -> Function SportsScramble.BaseballBall.GetFloorResult
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	EFloorResult ABaseballBall::GetFloorResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.GetFloorResult");
		
		ABaseballBall_GetFloorResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A1F30
	 * 		Name   -> Function SportsScramble.BaseballBall.GetBaseballBallProperties
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBaseballBallProperties ABaseballBall::GetBaseballBallProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBall.GetBaseballBallProperties");
		
		ABaseballBall_GetBaseballBallProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballBall.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballBall::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballBall");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003A40F0
	 * 		Name   -> Function SportsScramble.BaseballBallClassifier.OnBallHit
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballBallClassifier::OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallClassifier.OnBallHit");
		
		ABaseballBallClassifier_OnBallHit_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BaseballBallClassifier.OnBallBounced
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EBallState                                         ballState                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numBounces                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballBallClassifier::OnBallBounced(EBallState ballState, int32_t numBounces)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallClassifier.OnBallBounced");
		
		ABaseballBallClassifier_OnBallBounced_Params params {};
		params.ballState = ballState;
		params.numBounces = numBounces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballBallClassifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballBallClassifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballBallClassifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BaseballBallScrambleDisplay.SetIcon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballBallScrambleDisplay::SetIcon(int32_t Index, class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallScrambleDisplay.SetIcon");
		
		ABaseballBallScrambleDisplay_SetIcon_Params params {};
		params.Index = Index;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BaseballBallScrambleDisplay.GoAway
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballBallScrambleDisplay::GoAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallScrambleDisplay.GoAway");
		
		ABaseballBallScrambleDisplay_GoAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballBallScrambleDisplay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballBallScrambleDisplay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballBallScrambleDisplay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramSceneComponentActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramSceneComponentActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramSceneComponentActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003AC1C0
	 * 		Name   -> Function SportsScramble.BaseballBallSelector.TrySpawnScrambleTargets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<EBaseballScrambleTargetLocations>           validDisplays                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numToSpawn                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FChance                                     imbueChance                                                (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               localPlayerIsBatter                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ABaseballBallSelector::TrySpawnScrambleTargets(TArray<EBaseballScrambleTargetLocations> validDisplays, int32_t numToSpawn, const struct FChance& imbueChance, bool localPlayerIsBatter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallSelector.TrySpawnScrambleTargets");
		
		ABaseballBallSelector_TrySpawnScrambleTargets_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003AC030
	 * 		Name   -> Function SportsScramble.BaseballBallSelector.TrySetBalls
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FBaseballBallScrambleProperties>     ballProperties                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ABaseballBallSelector::TrySetBalls(TArray<struct FBaseballBallScrambleProperties> ballProperties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallSelector.TrySetBalls");
		
		ABaseballBallSelector_TrySetBalls_Params params {};
		params.ballProperties = ballProperties;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003ABF10
	 * 		Name   -> Function SportsScramble.BaseballBallSelector.TryChangeBallTable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDataTable*                                  BallTable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ABaseballBallSelector::TryChangeBallTable(class UDataTable* BallTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallSelector.TryChangeBallTable");
		
		ABaseballBallSelector_TryChangeBallTable_Params params {};
		params.BallTable = BallTable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003AB920
	 * 		Name   -> Function SportsScramble.BaseballBallSelector.ClearScrambleTargets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ABaseballBallSelector::ClearScrambleTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballBallSelector.ClearScrambleTargets");
		
		ABaseballBallSelector_ClearScrambleTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballBallSelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballBallSelector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballBallSelector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseballBatterAIAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseballBatterAIAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballBatterAIAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseballCatcherAIAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseballCatcherAIAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballCatcherAIAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseballFielderAIAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseballFielderAIAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballFielderAIAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003AB980
	 * 		Name   -> Function SportsScramble.BaseballGlobalDataAsset.GetBatterPlayAreas
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBox                                        minPlayArea                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        maxPlayArea                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        maxHazardArea                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EBattingSide                                       Side                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseballGlobalDataAsset::STATIC_GetBatterPlayAreas(struct FBox* minPlayArea, struct FBox* maxPlayArea, struct FBox* maxHazardArea, EBattingSide Side)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballGlobalDataAsset.GetBatterPlayAreas");
		
		UBaseballGlobalDataAsset_GetBatterPlayAreas_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseballGlobalDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseballGlobalDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballGlobalDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2DC0
	 * 		Name   -> Function SportsScramble.ScramInstrument.GetLeverVelocity
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector AScramInstrument::GetLeverVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramInstrument.GetLeverVelocity");
		
		AScramInstrument_GetLeverVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2CD0
	 * 		Name   -> Function SportsScramble.ScramInstrument.GetInstrumentProperties
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FScramInstrumentProperties AScramInstrument::GetInstrumentProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramInstrument.GetInstrumentProperties");
		
		AScramInstrument_GetInstrumentProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramInstrument.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramInstrument::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramInstrument");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003ABCC0
	 * 		Name   -> Function SportsScramble.BaseballInstrument.OnInstrumentBreakEvent
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballInstrument::OnInstrumentBreakEvent(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrument.OnInstrumentBreakEvent");
		
		ABaseballInstrument_OnInstrumentBreakEvent_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003ABC80
	 * 		Name   -> Function SportsScramble.BaseballInstrument.IsPendingRelease
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABaseballInstrument::IsPendingRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrument.IsPendingRelease");
		
		ABaseballInstrument_IsPendingRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BaseballInstrument.InstrumentLowHealth
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              health                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballInstrument::InstrumentLowHealth(float health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrument.InstrumentLowHealth");
		
		ABaseballInstrument_InstrumentLowHealth_Params params {};
		params.health = health;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003AB940
	 * 		Name   -> Function SportsScramble.BaseballInstrument.GetBaseballInstrumentProperties
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBaseballInstrumentProperties ABaseballInstrument::GetBaseballInstrumentProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrument.GetBaseballInstrumentProperties");
		
		ABaseballInstrument_GetBaseballInstrumentProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballInstrument.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballInstrument::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballInstrument");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003AC0E0
	 * 		Name   -> Function SportsScramble.BaseballInstrumentSelector.TrySetInstruments
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FBaseballInstrumentEntryProperties>  instrumentEntries                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ABaseballInstrumentSelector::TrySetInstruments(TArray<struct FBaseballInstrumentEntryProperties> instrumentEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrumentSelector.TrySetInstruments");
		
		ABaseballInstrumentSelector_TrySetInstruments_Params params {};
		params.instrumentEntries = instrumentEntries;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003ABFA0
	 * 		Name   -> Function SportsScramble.BaseballInstrumentSelector.TryChangeInstrumentTable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDataTable*                                  InstrumentTable                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ABaseballInstrumentSelector::TryChangeInstrumentTable(class UDataTable* InstrumentTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrumentSelector.TryChangeInstrumentTable");
		
		ABaseballInstrumentSelector_TryChangeInstrumentTable_Params params {};
		params.InstrumentTable = InstrumentTable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003ABE80
	 * 		Name   -> Function SportsScramble.BaseballInstrumentSelector.SetSelectorVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               visible                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballInstrumentSelector::SetSelectorVisible(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrumentSelector.SetSelectorVisible");
		
		ABaseballInstrumentSelector_SetSelectorVisible_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003ABDA0
	 * 		Name   -> Function SportsScramble.BaseballInstrumentSelector.OnRep_ClientSpawnedInstruments
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ABaseballInstrumentSelector::OnRep_ClientSpawnedInstruments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrumentSelector.OnRep_ClientSpawnedInstruments");
		
		ABaseballInstrumentSelector_OnRep_ClientSpawnedInstruments_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003ABBC0
	 * 		Name   -> Function SportsScramble.BaseballInstrumentSelector.InstrumentSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballInstrumentSelector::InstrumentSelected(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballInstrumentSelector.InstrumentSelected");
		
		ABaseballInstrumentSelector_InstrumentSelected_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballInstrumentSelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballInstrumentSelector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballInstrumentSelector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CAEF0
	 * 		Name   -> Function SportsScramble.ScramGlove.GetGrabberHandedness
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EScramHandedness AScramGlove::GetGrabberHandedness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGlove.GetGrabberHandedness");
		
		AScramGlove_GetGrabberHandedness_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CAD90
	 * 		Name   -> Function SportsScramble.ScramGlove.ForceGrab
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      GrabbableActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramGlove::ForceGrab(class AActor* GrabbableActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGlove.ForceGrab");
		
		AScramGlove_ForceGrab_Params params {};
		params.GrabbableActor = GrabbableActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramGlove.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramGlove::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramGlove");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003ABDC0
	 * 		Name   -> Function SportsScramble.BaseballMitt.OnScrambleBallGrabbed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballMitt::OnScrambleBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballMitt.OnScrambleBallGrabbed");
		
		ABaseballMitt_OnScrambleBallGrabbed_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003ABD80
	 * 		Name   -> Function SportsScramble.BaseballMitt.OnRep_ClientSpawnedBalls
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ABaseballMitt::OnRep_ClientSpawnedBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballMitt.OnRep_ClientSpawnedBalls");
		
		ABaseballMitt_OnRep_ClientSpawnedBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003ABB90
	 * 		Name   -> Function SportsScramble.BaseballMitt.GetScrambleOptionsFull
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABaseballMitt::GetScrambleOptionsFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballMitt.GetScrambleOptionsFull");
		
		ABaseballMitt_GetScrambleOptionsFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003ABB00
	 * 		Name   -> Function SportsScramble.BaseballMitt.GetScrambleOptions
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FMittSpawnInfo> ABaseballMitt::GetScrambleOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballMitt.GetScrambleOptions");
		
		ABaseballMitt_GetScrambleOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003AB900
	 * 		Name   -> Function SportsScramble.BaseballMitt.ClearScrambleOptions
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void ABaseballMitt::ClearScrambleOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballMitt.ClearScrambleOptions");
		
		ABaseballMitt_ClearScrambleOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003AB830
	 * 		Name   -> Function SportsScramble.BaseballMitt.AddScrambleBallWithType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Imbued                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballMitt::AddScrambleBallWithType(class UClass* BallClass, bool Imbued)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballMitt.AddScrambleBallWithType");
		
		ABaseballMitt_AddScrambleBallWithType_Params params {};
		params.BallClass = BallClass;
		params.Imbued = Imbued;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballMitt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballMitt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballMitt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseballPitcherAIAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseballPitcherAIAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballPitcherAIAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B1150
	 * 		Name   -> Function SportsScramble.BaseballPitchingPropManager.SpawnRegisteredObjects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EBaseballBallType                                  BallType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballPitchingPropManager::SpawnRegisteredObjects(EBaseballBallType BallType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballPitchingPropManager.SpawnRegisteredObjects");
		
		ABaseballPitchingPropManager_SpawnRegisteredObjects_Params params {};
		params.BallType = BallType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0380
	 * 		Name   -> Function SportsScramble.BaseballPitchingPropManager.ClearAllObjects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ABaseballPitchingPropManager::ClearAllObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballPitchingPropManager.ClearAllObjects");
		
		ABaseballPitchingPropManager_ClearAllObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballPitchingPropManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballPitchingPropManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballPitchingPropManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramBallTrigger.OnTriggered
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBallTrigger::OnTriggered(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBallTrigger.OnTriggered");
		
		AScramBallTrigger_OnTriggered_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4200
	 * 		Name   -> Function SportsScramble.ScramBallTrigger.IsFutureHitPending
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramBallTrigger::IsFutureHitPending()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBallTrigger.IsFutureHitPending");
		
		AScramBallTrigger_IsFutureHitPending_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramBallTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramBallTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBallTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballPitchingTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballPitchingTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballPitchingTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseballRunnerAIAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseballRunnerAIAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballRunnerAIAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USportState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USportState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.SportState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseballState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseballState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AThrowingGlove.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThrowingGlove::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ThrowingGlove");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0C80
	 * 		Name   -> Function SportsScramble.BaseballThrowingGlove.OnBowlingGloveRelease
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseballThrowingGlove::OnBowlingGloveRelease(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BaseballThrowingGlove.OnBowlingGloveRelease");
		
		ABaseballThrowingGlove_OnBowlingGloveRelease_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballThrowingGlove.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballThrowingGlove::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BaseballThrowingGlove");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0E00
	 * 		Name   -> Function SportsScramble.BattingAvatar.OnSwung
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABattingAvatar::OnSwung(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BattingAvatar.OnSwung");
		
		ABattingAvatar_OnSwung_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0D40
	 * 		Name   -> Function SportsScramble.BattingAvatar.OnHit
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABattingAvatar::OnHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BattingAvatar.OnHit");
		
		ABattingAvatar_OnHit_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABattingAvatar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABattingAvatar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BattingAvatar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramAvatarAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramAvatarAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramAvatarAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBattingAvatarAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBattingAvatarAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BattingAvatarAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0F40
	 * 		Name   -> Function SportsScramble.BlobShadowComponent.ScaleOut
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              scaleOutTime                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlobShadowComponent::ScaleOut(float scaleOutTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BlobShadowComponent.ScaleOut");
		
		UBlobShadowComponent_ScaleOut_Params params {};
		params.scaleOutTime = scaleOutTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0EC0
	 * 		Name   -> Function SportsScramble.BlobShadowComponent.ScaleIn
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              scaleInTime                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlobShadowComponent::ScaleIn(float scaleInTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BlobShadowComponent.ScaleIn");
		
		UBlobShadowComponent_ScaleIn_Params params {};
		params.scaleInTime = scaleInTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B04B0
	 * 		Name   -> Function SportsScramble.BlobShadowComponent.FadeOut
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              fadeOutTime                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlobShadowComponent::FadeOut(float fadeOutTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BlobShadowComponent.FadeOut");
		
		UBlobShadowComponent_FadeOut_Params params {};
		params.fadeOutTime = fadeOutTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0430
	 * 		Name   -> Function SportsScramble.BlobShadowComponent.FadeIn
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              fadeInTime                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlobShadowComponent::FadeIn(float fadeInTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BlobShadowComponent.FadeIn");
		
		UBlobShadowComponent_FadeIn_Params params {};
		params.fadeInTime = fadeInTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlobShadowComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlobShadowComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BlobShadowComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABlobShadowManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABlobShadowManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BlobShadowManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBowlingAIAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBowlingAIAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingAIAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B1040
	 * 		Name   -> Function SportsScramble.BowlingAlley.SetPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingAlley::SetPlayer(class AActor* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.SetPlayer");
		
		ABowlingAlley_SetPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0FC0
	 * 		Name   -> Function SportsScramble.BowlingAlley.SetPinsetter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABowlingPinsetter*                           pinsetter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingAlley::SetPinsetter(class ABowlingPinsetter* pinsetter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.SetPinsetter");
		
		ABowlingAlley_SetPinsetter_Params params {};
		params.pinsetter = pinsetter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0B00
	 * 		Name   -> Function SportsScramble.BowlingAlley.OnBallReleased
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingAlley::OnBallReleased(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.OnBallReleased");
		
		ABowlingAlley_OnBallReleased_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingAlley.OnBallOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingBall*                                Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               pit                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               restricted                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingAlley::OnBallOut(class ABowlingBall* Ball, bool pit, bool restricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.OnBallOut");
		
		ABowlingAlley_OnBallOut_Params params {};
		params.Ball = Ball;
		params.pit = pit;
		params.restricted = restricted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0A40
	 * 		Name   -> Function SportsScramble.BowlingAlley.OnBallGrabbed
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingAlley::OnBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.OnBallGrabbed");
		
		ABowlingAlley_OnBallGrabbed_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B09C0
	 * 		Name   -> Function SportsScramble.BowlingAlley.OnBallDestroyed
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class AActor*                                      pBallActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingAlley::OnBallDestroyed(class AActor* pBallActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.OnBallDestroyed");
		
		ABowlingAlley_OnBallDestroyed_Params params {};
		params.pBallActor = pBallActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingAlley.IsLaneReady
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ABowlingAlley::IsLaneReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.IsLaneReady");
		
		ABowlingAlley_IsLaneReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingAlley.GetScore
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	int32_t ABowlingAlley::GetScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetScore");
		
		ABowlingAlley_GetScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B08F0
	 * 		Name   -> Function SportsScramble.BowlingAlley.GetPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* ABowlingAlley::GetPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetPlayer");
		
		ABowlingAlley_GetPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B08C0
	 * 		Name   -> Function SportsScramble.BowlingAlley.GetFloorZ
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ABowlingAlley::GetFloorZ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetFloorZ");
		
		ABowlingAlley_GetFloorZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0860
	 * 		Name   -> Function SportsScramble.BowlingAlley.GetFloorMaterial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UPhysicalMaterial* ABowlingAlley::GetFloorMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetFloorMaterial");
		
		ABowlingAlley_GetFloorMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B05B0
	 * 		Name   -> Function SportsScramble.BowlingAlley.GetBalls
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class ABowlingBall*> ABowlingAlley::GetBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetBalls");
		
		ABowlingAlley_GetBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingAlley.GetBallReturn
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class ABowlingBallReturn* ABowlingAlley::GetBallReturn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetBallReturn");
		
		ABowlingAlley_GetBallReturn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0530
	 * 		Name   -> Function SportsScramble.BowlingAlley.GetAlley
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ABowlingAlley* ABowlingAlley::STATIC_GetAlley(class AActor* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetAlley");
		
		ABowlingAlley_GetAlley_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingAlley.GetActiveLane
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class ABowlingLane* ABowlingAlley::GetActiveLane()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.GetActiveLane");
		
		ABowlingAlley_GetActiveLane_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B03A0
	 * 		Name   -> Function SportsScramble.BowlingAlley.ClearBalls
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               includeThrownBalls                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingAlley::ClearBalls(bool includeThrownBalls)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.ClearBalls");
		
		ABowlingAlley_ClearBalls_Params params {};
		params.includeThrownBalls = includeThrownBalls;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingAlley.ClearBall
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingBall*                                Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingAlley::ClearBall(class ABowlingBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.ClearBall");
		
		ABowlingAlley_ClearBall_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0350
	 * 		Name   -> Function SportsScramble.BowlingAlley.AnyThrownBallsRemaining
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABowlingAlley::AnyThrownBallsRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.AnyThrownBallsRemaining");
		
		ABowlingAlley_AnyThrownBallsRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingAlley.AddInstigatorBallCode
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingBall*                                Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingAlley::AddInstigatorBallCode(class ABowlingBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.AddInstigatorBallCode");
		
		ABowlingAlley_AddInstigatorBallCode_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B02D0
	 * 		Name   -> Function SportsScramble.BowlingAlley.AddBall
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABowlingBall*                                Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingAlley::AddBall(class ABowlingBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAlley.AddBall");
		
		ABowlingAlley_AddBall_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingAlley.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingAlley::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingAlley");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0BC0
	 * 		Name   -> Function SportsScramble.BowlingAvatar.OnBallReleased
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingAvatar::OnBallReleased(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingAvatar.OnBallReleased");
		
		ABowlingAvatar_OnBallReleased_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingAvatar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingAvatar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingAvatar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBowlingAvatarAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBowlingAvatarAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingAvatarAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B10C0
	 * 		Name   -> Function SportsScramble.BowlingBall.SetValidRoll
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               validRoll                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingBall::SetValidRoll(bool validRoll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.SetValidRoll");
		
		ABowlingBall_SetValidRoll_Params params {};
		params.validRoll = validRoll;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingBall.OnThrowChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABowlingBall::OnThrowChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.OnThrowChanged");
		
		ABowlingBall_OnThrowChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingBall.OnHitPin
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingPin*                                 Pin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingBall::OnHitPin(class ABowlingPin* Pin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.OnHitPin");
		
		ABowlingBall_OnHitPin_Params params {};
		params.Pin = Pin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingBall.OnHitLane
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingLane*                                Lane                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bounceSpeed                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingBall::OnHitLane(class ABowlingLane* Lane, float bounceSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.OnHitLane");
		
		ABowlingBall_OnHitLane_Params params {};
		params.Lane = Lane;
		params.bounceSpeed = bounceSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingBall.OnHitFootballBlocker
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingFootballBlocker*                     FootballBlocker                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingBall::OnHitFootballBlocker(class ABowlingFootballBlocker* FootballBlocker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.OnHitFootballBlocker");
		
		ABowlingBall_OnHitFootballBlocker_Params params {};
		params.FootballBlocker = FootballBlocker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingBall.OnFloorResultChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EFloorResult                                       newFloorResult                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingBall::OnFloorResultChanged(EFloorResult newFloorResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.OnFloorResultChanged");
		
		ABowlingBall_OnFloorResultChanged_Params params {};
		params.newFloorResult = newFloorResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0990
	 * 		Name   -> Function SportsScramble.BowlingBall.IsBouncing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABowlingBall::IsBouncing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.IsBouncing");
		
		ABowlingBall_IsBouncing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0960
	 * 		Name   -> Function SportsScramble.BowlingBall.GetValidRoll
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABowlingBall::GetValidRoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.GetValidRoll");
		
		ABowlingBall_GetValidRoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0920
	 * 		Name   -> Function SportsScramble.BowlingBall.GetThrow
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBowlingThrow ABowlingBall::GetThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.GetThrow");
		
		ABowlingBall_GetThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0890
	 * 		Name   -> Function SportsScramble.BowlingBall.GetFloorResult
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	EFloorResult ABowlingBall::GetFloorResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.GetFloorResult");
		
		ABowlingBall_GetFloorResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B0640
	 * 		Name   -> Function SportsScramble.BowlingBall.GetBowlingBallProperties
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBowlingBallProperties ABowlingBall::GetBowlingBallProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBall.GetBowlingBallProperties");
		
		ABowlingBall_GetBowlingBallProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingBall.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingBall::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingBall");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4BB0
	 * 		Name   -> Function SportsScramble.BowlingBallReturn.SetSlideDirection
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Forward                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingBallReturn::SetSlideDirection(bool Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.SetSlideDirection");
		
		ABowlingBallReturn_SetSlideDirection_Params params {};
		params.Forward = Forward;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4B90
	 * 		Name   -> Function SportsScramble.BowlingBallReturn.ResetBallTable
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void ABowlingBallReturn::ResetBallTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.ResetBallTable");
		
		ABowlingBallReturn_ResetBallTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4B70
	 * 		Name   -> Function SportsScramble.BowlingBallReturn.PreLevelChangeCleanup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ABowlingBallReturn::PreLevelChangeCleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.PreLevelChangeCleanup");
		
		ABowlingBallReturn_PreLevelChangeCleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingBallReturn.OnTrackMotionStop
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABowlingBallReturn::OnTrackMotionStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.OnTrackMotionStop");
		
		ABowlingBallReturn_OnTrackMotionStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingBallReturn.OnTrackMotionStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABowlingBallReturn::OnTrackMotionStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.OnTrackMotionStart");
		
		ABowlingBallReturn_OnTrackMotionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingBallReturn.OnReturnSlideStopped
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABowlingBallReturn::OnReturnSlideStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.OnReturnSlideStopped");
		
		ABowlingBallReturn_OnReturnSlideStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingBallReturn.OnReturnSlideStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABowlingBallReturn::OnReturnSlideStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.OnReturnSlideStarted");
		
		ABowlingBallReturn_OnReturnSlideStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4990
	 * 		Name   -> Function SportsScramble.BowlingBallReturn.IncrementBallSelection
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingBallReturn::IncrementBallSelection(class UClass* BallClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.IncrementBallSelection");
		
		ABowlingBallReturn_IncrementBallSelection_Params params {};
		params.BallClass = BallClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingBallReturn.GetReturnTrack
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	class UBowlingBallReturnTrack* ABowlingBallReturn::GetReturnTrack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.GetReturnTrack");
		
		ABowlingBallReturn_GetReturnTrack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B48C0
	 * 		Name   -> Function SportsScramble.BowlingBallReturn.GetRandomBall
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	class UClass* ABowlingBallReturn::GetRandomBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturn.GetRandomBall");
		
		ABowlingBallReturn_GetRandomBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingBallReturn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingBallReturn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingBallReturn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4B50
	 * 		Name   -> Function SportsScramble.BowlingBallReturnSlot.OnRep_ClientTrack
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ABowlingBallReturnSlot::OnRep_ClientTrack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.OnRep_ClientTrack");
		
		ABowlingBallReturnSlot_OnRep_ClientTrack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4B30
	 * 		Name   -> Function SportsScramble.BowlingBallReturnSlot.OnRep_ClientBall
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ABowlingBallReturnSlot::OnRep_ClientBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.OnRep_ClientBall");
		
		ABowlingBallReturnSlot_OnRep_ClientBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingBallReturnSlot.OnMotionStop
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABowlingBallReturnSlot::OnMotionStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.OnMotionStop");
		
		ABowlingBallReturnSlot_OnMotionStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingBallReturnSlot.OnMotionStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABowlingBallReturnSlot::OnMotionStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.OnMotionStart");
		
		ABowlingBallReturnSlot_OnMotionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4A70
	 * 		Name   -> Function SportsScramble.BowlingBallReturnSlot.OnBallGrabbed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingBallReturnSlot::OnBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.OnBallGrabbed");
		
		ABowlingBallReturnSlot_OnBallGrabbed_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingBallReturnSlot.OnBallAttached
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABowlingBallReturnSlot::OnBallAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.OnBallAttached");
		
		ABowlingBallReturnSlot_OnBallAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4A40
	 * 		Name   -> Function SportsScramble.BowlingBallReturnSlot.IsDisposing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABowlingBallReturnSlot::IsDisposing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.IsDisposing");
		
		ABowlingBallReturnSlot_IsDisposing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4A10
	 * 		Name   -> Function SportsScramble.BowlingBallReturnSlot.IsBallAttached
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABowlingBallReturnSlot::IsBallAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.IsBallAttached");
		
		ABowlingBallReturnSlot_IsBallAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4820
	 * 		Name   -> Function SportsScramble.BowlingBallReturnSlot.GetAttachedBall
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ABowlingBall* ABowlingBallReturnSlot::GetAttachedBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnSlot.GetAttachedBall");
		
		ABowlingBallReturnSlot_GetAttachedBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingBallReturnSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingBallReturnSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingBallReturnSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4C40
	 * 		Name   -> Function SportsScramble.BowlingBallReturnTrack.SetupSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABowlingBall*                                Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      SlotClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBowlingBallReturnTrack::SetupSlot(class ABowlingBall* Ball, class UClass* SlotClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnTrack.SetupSlot");
		
		UBowlingBallReturnTrack_SetupSlot_Params params {};
		params.Ball = Ball;
		params.SlotClass = SlotClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4900
	 * 		Name   -> Function SportsScramble.BowlingBallReturnTrack.HasBall
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ABowlingBall*                                Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBowlingBallReturnTrack::HasBall(class ABowlingBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnTrack.HasBall");
		
		UBowlingBallReturnTrack_HasBall_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4890
	 * 		Name   -> Function SportsScramble.BowlingBallReturnTrack.GetNumOccupiedSlots
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UBowlingBallReturnTrack::GetNumOccupiedSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnTrack.GetNumOccupiedSlots");
		
		UBowlingBallReturnTrack_GetNumOccupiedSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4790
	 * 		Name   -> Function SportsScramble.BowlingBallReturnTrack.FreeLastSlot
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     disposalPoint                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBowlingBallReturnTrack::FreeLastSlot(const struct FVector& disposalPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingBallReturnTrack.FreeLastSlot");
		
		UBowlingBallReturnTrack_FreeLastSlot_Params params {};
		params.disposalPoint = disposalPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBowlingBallReturnTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBowlingBallReturnTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingBallReturnTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingBallTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingBallTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingBallTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingCenterScoreboard.GetTimeRemaining
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	int32_t ABowlingCenterScoreboard::GetTimeRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingCenterScoreboard.GetTimeRemaining");
		
		ABowlingCenterScoreboard_GetTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingCenterScoreboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingCenterScoreboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingCenterScoreboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingConveyor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingConveyor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingConveyor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4EF0
	 * 		Name   -> Function SportsScramble.BowlingFootballBlocker.StopBlocker
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ABowlingFootballBlocker::StopBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingFootballBlocker.StopBlocker");
		
		ABowlingFootballBlocker_StopBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4DB0
	 * 		Name   -> Function SportsScramble.BowlingFootballBlocker.StartBlocker
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  centerTransform                                            (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              initialAngleDegrees                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingFootballBlocker::StartBlocker(const struct FTransform& centerTransform, float initialAngleDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingFootballBlocker.StartBlocker");
		
		ABowlingFootballBlocker_StartBlocker_Params params {};
		params.centerTransform = centerTransform;
		params.initialAngleDegrees = initialAngleDegrees;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B46A0
	 * 		Name   -> Function SportsScramble.BowlingFootballBlocker.DeferredInit
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ABowlingFootballBlocker::DeferredInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingFootballBlocker.DeferredInit");
		
		ABowlingFootballBlocker_DeferredInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingFootballBlocker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingFootballBlocker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingFootballBlocker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingForceMagnet.DirectSuckStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABowlingForceMagnet::DirectSuckStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingForceMagnet.DirectSuckStarted");
		
		ABowlingForceMagnet_DirectSuckStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4680
	 * 		Name   -> Function SportsScramble.BowlingForceMagnet.DeactivateMagnet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ABowlingForceMagnet::DeactivateMagnet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingForceMagnet.DeactivateMagnet");
		
		ABowlingForceMagnet_DeactivateMagnet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4660
	 * 		Name   -> Function SportsScramble.BowlingForceMagnet.ActivateMagnet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ABowlingForceMagnet::ActivateMagnet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingForceMagnet.ActivateMagnet");
		
		ABowlingForceMagnet_ActivateMagnet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingForceMagnet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingForceMagnet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingForceMagnet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBowlingGlobalDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBowlingGlobalDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingGlobalDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingGlove.OnThrowFinalized
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingBall*                                Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingGlove::OnThrowFinalized(class ABowlingBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingGlove.OnThrowFinalized");
		
		ABowlingGlove_OnThrowFinalized_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingGlove.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingGlove::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingGlove");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4D30
	 * 		Name   -> Function SportsScramble.BowlingGutterTracker.SimpleHitActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBowlingGutterTracker::SimpleHitActor(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingGutterTracker.SimpleHitActor");
		
		UBowlingGutterTracker_SimpleHitActor_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B46C0
	 * 		Name   -> Function SportsScramble.BowlingGutterTracker.ForceClearGutter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ClearRight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ClearLeft                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBowlingGutterTracker::ForceClearGutter(bool ClearRight, bool ClearLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingGutterTracker.ForceClearGutter");
		
		UBowlingGutterTracker_ForceClearGutter_Params params {};
		params.ClearRight = ClearRight;
		params.ClearLeft = ClearLeft;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingGutterTracker.FireRightParticle
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBowlingGutterTracker::FireRightParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingGutterTracker.FireRightParticle");
		
		UBowlingGutterTracker_FireRightParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingGutterTracker.FireLeftParticle
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBowlingGutterTracker::FireLeftParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingGutterTracker.FireLeftParticle");
		
		UBowlingGutterTracker_FireLeftParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBowlingGutterTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBowlingGutterTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingGutterTracker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingLane.ShowBaseballLane
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABowlingLane::ShowBaseballLane()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingLane.ShowBaseballLane");
		
		ABowlingLane_ShowBaseballLane_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4D00
	 * 		Name   -> Function SportsScramble.BowlingLane.ShouldUsePins
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABowlingLane::ShouldUsePins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingLane.ShouldUsePins");
		
		ABowlingLane_ShouldUsePins_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingLane.HideBaseballLane
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABowlingLane::HideBaseballLane()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingLane.HideBaseballLane");
		
		ABowlingLane_HideBaseballLane_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B4850
	 * 		Name   -> Function SportsScramble.BowlingLane.GetDownLaneVector
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ABowlingLane::GetDownLaneVector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingLane.GetDownLaneVector");
		
		ABowlingLane_GetDownLaneVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingLane.GetAlley
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	class ABowlingAlley* ABowlingLane::GetAlley()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingLane.GetAlley");
		
		ABowlingLane_GetAlley_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingLane.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingLane::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingLane");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBowlingLaneSpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBowlingLaneSpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingLaneSpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBowlingLaneCurve.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBowlingLaneCurve::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingLaneCurve");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8780
	 * 		Name   -> Function SportsScramble.BowlingLaneFlipper.SetLaunchTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingLaneFlipper::SetLaunchTarget(class USceneComponent* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingLaneFlipper.SetLaunchTarget");
		
		ABowlingLaneFlipper_SetLaunchTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7CB0
	 * 		Name   -> Function SportsScramble.BowlingLaneFlipper.FlipFlipper
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ABowlingLaneFlipper::FlipFlipper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingLaneFlipper.FlipFlipper");
		
		ABowlingLaneFlipper_FlipFlipper_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingLaneFlipper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingLaneFlipper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingLaneFlipper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8CC0
	 * 		Name   -> Function SportsScramble.BowlingPin.WasKnockedDown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABowlingPin::WasKnockedDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPin.WasKnockedDown");
		
		ABowlingPin_WasKnockedDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8990
	 * 		Name   -> Function SportsScramble.BowlingPin.StartCheckingForKnockedDown
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void ABowlingPin::StartCheckingForKnockedDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPin.StartCheckingForKnockedDown");
		
		ABowlingPin_StartCheckingForKnockedDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingPin.OnKnockedDown
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABowlingPin::OnKnockedDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPin.OnKnockedDown");
		
		ABowlingPin_OnKnockedDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B80C0
	 * 		Name   -> Function SportsScramble.BowlingPin.IsAtRest
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABowlingPin::IsAtRest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPin.IsAtRest");
		
		ABowlingPin_IsAtRest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingPin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingPin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingPin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7A00
	 * 		Name   -> Function SportsScramble.BowlingPinsetter.ActivePinsCanBeScored
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABowlingPinsetter::ActivePinsCanBeScored()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPinsetter.ActivePinsCanBeScored");
		
		ABowlingPinsetter_ActivePinsCanBeScored_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingPinsetter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingPinsetter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingPinsetter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingPlinko.ResolveBall
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingPlinkoBall*                          Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              localY                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingPlinko::ResolveBall(class ABowlingPlinkoBall* Ball, float localY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPlinko.ResolveBall");
		
		ABowlingPlinko_ResolveBall_Params params {};
		params.Ball = Ball;
		params.localY = localY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingPlinko.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingPlinko::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingPlinko");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8890
	 * 		Name   -> Function SportsScramble.BowlingPlinkoBall.SetWidget
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingPlinkoBall::SetWidget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPlinkoBall.SetWidget");
		
		ABowlingPlinkoBall_SetWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8800
	 * 		Name   -> Function SportsScramble.BowlingPlinkoBall.SetResolving
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               resolving                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingPlinkoBall::SetResolving(bool resolving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingPlinkoBall.SetResolving");
		
		ABowlingPlinkoBall_SetResolving_Params params {};
		params.resolving = resolving;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingPlinkoBall.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingPlinkoBall::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingPlinkoBall");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8B80
	 * 		Name   -> Function SportsScramble.BowlingScoreKeeper.TryGetFrameScoreStatic
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            score                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBowlingFrameSet                            frameSet                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ABowlingScoreKeeper::STATIC_TryGetFrameScoreStatic(int32_t* score, const struct FBowlingFrameSet& frameSet, int32_t frameIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.TryGetFrameScoreStatic");
		
		ABowlingScoreKeeper_TryGetFrameScoreStatic_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003B8A70
	 * 		Name   -> Function SportsScramble.BowlingScoreKeeper.TryGetFrameScore
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            score                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ABowlingScoreKeeper::TryGetFrameScore(int32_t* score, int32_t Player, int32_t frameIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.TryGetFrameScore");
		
		ABowlingScoreKeeper_TryGetFrameScore_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003B84E0
	 * 		Name   -> Function SportsScramble.BowlingScoreKeeper.ResetFrames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ABowlingScoreKeeper::ResetFrames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.ResetFrames");
		
		ABowlingScoreKeeper_ResetFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B80F0
	 * 		Name   -> Function SportsScramble.BowlingScoreKeeper.IsGameDone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABowlingScoreKeeper::IsGameDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.IsGameDone");
		
		ABowlingScoreKeeper_IsGameDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7F50
	 * 		Name   -> Function SportsScramble.BowlingScoreKeeper.GetGameScore
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ABowlingScoreKeeper::GetGameScore(int32_t Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.GetGameScore");
		
		ABowlingScoreKeeper_GetGameScore_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7E10
	 * 		Name   -> Function SportsScramble.BowlingScoreKeeper.GetFrameScoreUpTo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               complete                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBowlingFrameSet                            frameSet                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            maxFrameIndex                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ABowlingScoreKeeper::STATIC_GetFrameScoreUpTo(bool* complete, const struct FBowlingFrameSet& frameSet, int32_t maxFrameIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.GetFrameScoreUpTo");
		
		ABowlingScoreKeeper_GetFrameScoreUpTo_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003B7DC0
	 * 		Name   -> Function SportsScramble.BowlingScoreKeeper.GetCurrentPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ABowlingScoreKeeper::GetCurrentPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.GetCurrentPlayer");
		
		ABowlingScoreKeeper_GetCurrentPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7D30
	 * 		Name   -> Function SportsScramble.BowlingScoreKeeper.GetCurrentFrameIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ABowlingScoreKeeper::GetCurrentFrameIndex(int32_t Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.GetCurrentFrameIndex");
		
		ABowlingScoreKeeper_GetCurrentFrameIndex_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7B40
	 * 		Name   -> Function SportsScramble.BowlingScoreKeeper.AreFramesDone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ABowlingScoreKeeper::AreFramesDone(int32_t Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.AreFramesDone");
		
		ABowlingScoreKeeper_AreFramesDone_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7A30
	 * 		Name   -> Function SportsScramble.BowlingScoreKeeper.AddRoll
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               frameDone                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Roll                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingScoreKeeper::AddRoll(bool* frameDone, int32_t Player, int32_t Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingScoreKeeper.AddRoll");
		
		ABowlingScoreKeeper_AddRoll_Params params {};
		params.Player = Player;
		params.Roll = Roll;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (frameDone != nullptr)
			*frameDone = params.frameDone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingScoreKeeper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingScoreKeeper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingScoreKeeper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderAlien.UpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABowlingSpaceInvaderAlien::UpdateAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.UpdateAnimation");
		
		ABowlingSpaceInvaderAlien_UpdateAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderAlien.UncoverAlien
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABowlingSpaceInvaderAlien::UncoverAlien()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.UncoverAlien");
		
		ABowlingSpaceInvaderAlien_UncoverAlien_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderAlien.RunScoreFX
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingSpaceInvaderAlien::RunScoreFX(class AActor* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.RunScoreFX");
		
		ABowlingSpaceInvaderAlien_RunScoreFX_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderAlien.RunEndLaneFX
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABowlingSpaceInvaderAlien::RunEndLaneFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.RunEndLaneFX");
		
		ABowlingSpaceInvaderAlien_RunEndLaneFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B84C0
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderAlien.PatternRemover
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void ABowlingSpaceInvaderAlien::PatternRemover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.PatternRemover");
		
		ABowlingSpaceInvaderAlien_PatternRemover_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderAlien.HideAlien
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABowlingSpaceInvaderAlien::HideAlien()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.HideAlien");
		
		ABowlingSpaceInvaderAlien_HideAlien_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8010
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderAlien.GetRelativePosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ABowlingSpaceInvaderAlien::GetRelativePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.GetRelativePosition");
		
		ABowlingSpaceInvaderAlien_GetRelativePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7FE0
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderAlien.GetGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ABowlingSpaceInvaderGroup* ABowlingSpaceInvaderAlien::GetGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.GetGroup");
		
		ABowlingSpaceInvaderAlien_GetGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7D00
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderAlien.GetAlienID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ABowlingSpaceInvaderAlien::GetAlienID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.GetAlienID");
		
		ABowlingSpaceInvaderAlien_GetAlienID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7CD0
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderAlien.GetActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABowlingSpaceInvaderAlien::GetActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.GetActive");
		
		ABowlingSpaceInvaderAlien_GetActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderAlien.AddScore
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ScoreValue                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingSpaceInvaderAlien::AddScore(int32_t ScoreValue, class AActor* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderAlien.AddScore");
		
		ABowlingSpaceInvaderAlien_AddScore_Params params {};
		params.ScoreValue = ScoreValue;
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingSpaceInvaderAlien.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingSpaceInvaderAlien::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingSpaceInvaderAlien");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8700
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderGroup.SetBaseTimeStep
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              newBaseTimeStep                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingSpaceInvaderGroup::SetBaseTimeStep(float newBaseTimeStep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.SetBaseTimeStep");
		
		ABowlingSpaceInvaderGroup_SetBaseTimeStep_Params params {};
		params.newBaseTimeStep = newBaseTimeStep;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderGroup.NotifyResetAlienGroup
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABowlingSpaceInvaderGroup::NotifyResetAlienGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.NotifyResetAlienGroup");
		
		ABowlingSpaceInvaderGroup_NotifyResetAlienGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8220
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderGroup.IsGroupInitialized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABowlingSpaceInvaderGroup::IsGroupInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.IsGroupInitialized");
		
		ABowlingSpaceInvaderGroup_IsGroupInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8140
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderGroup.IsGroupClear
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              clearMargin                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ABowlingSpaceInvaderGroup::IsGroupClear(const struct FVector& WorldPosition, float clearMargin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.IsGroupClear");
		
		ABowlingSpaceInvaderGroup_IsGroupClear_Params params {};
		params.WorldPosition = WorldPosition;
		params.clearMargin = clearMargin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8120
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderGroup.IsGameplayRunning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABowlingSpaceInvaderGroup::IsGameplayRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.IsGameplayRunning");
		
		ABowlingSpaceInvaderGroup_IsGameplayRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7DF0
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderGroup.GetCurrentTimeStep
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ABowlingSpaceInvaderGroup::GetCurrentTimeStep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.GetCurrentTimeStep");
		
		ABowlingSpaceInvaderGroup_GetCurrentTimeStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7C90
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderGroup.EndGameplay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ABowlingSpaceInvaderGroup::EndGameplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.EndGameplay");
		
		ABowlingSpaceInvaderGroup_EndGameplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderGroup.DeferredInitComplete
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABowlingSpaceInvaderGroup::DeferredInitComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.DeferredInitComplete");
		
		ABowlingSpaceInvaderGroup_DeferredInitComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7C70
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderGroup.DeferredInit
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ABowlingSpaceInvaderGroup::DeferredInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.DeferredInit");
		
		ABowlingSpaceInvaderGroup_DeferredInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7BF0
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderGroup.ChangeTimeStep
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              newTimeStep                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingSpaceInvaderGroup::ChangeTimeStep(float newTimeStep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.ChangeTimeStep");
		
		ABowlingSpaceInvaderGroup_ChangeTimeStep_Params params {};
		params.newTimeStep = newTimeStep;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B7BD0
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderGroup.BeginGameplay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ABowlingSpaceInvaderGroup::BeginGameplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderGroup.BeginGameplay");
		
		ABowlingSpaceInvaderGroup_BeginGameplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingSpaceInvaderGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingSpaceInvaderGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingSpaceInvaderGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B85A0
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_UpdateAliens
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		struct FVector_NetQuantize                         newWorldPos                                                (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       newWorldRot                                                (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class USoundBase*                                  pSoundAsset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingSpaceInvaderNetHelper::Server_UpdateAliens(const struct FVector_NetQuantize& newWorldPos, const struct FQuat& newWorldRot, class USoundBase* pSoundAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_UpdateAliens");
		
		ABowlingSpaceInvaderNetHelper_Server_UpdateAliens_Params params {};
		params.newWorldPos = newWorldPos;
		params.newWorldRot = newWorldRot;
		params.pSoundAsset = pSoundAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8550
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_ShutdownAliens
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void ABowlingSpaceInvaderNetHelper::Server_ShutdownAliens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_ShutdownAliens");
		
		ABowlingSpaceInvaderNetHelper_Server_ShutdownAliens_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8500
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_PrepareAliens
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void ABowlingSpaceInvaderNetHelper::Server_PrepareAliens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_PrepareAliens");
		
		ABowlingSpaceInvaderNetHelper_Server_PrepareAliens_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B82E0
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_UpdateAliens
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults, NetValidate)
	 * Parameters:
	 * 		struct FVector_NetQuantize                         newWorldPos                                                (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       newWorldRot                                                (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class USoundBase*                                  pSoundAsset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABowlingSpaceInvaderNetHelper::NetMulticast_UpdateAliens(const struct FVector_NetQuantize& newWorldPos, const struct FQuat& newWorldRot, class USoundBase* pSoundAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_UpdateAliens");
		
		ABowlingSpaceInvaderNetHelper_NetMulticast_UpdateAliens_Params params {};
		params.newWorldPos = newWorldPos;
		params.newWorldRot = newWorldRot;
		params.pSoundAsset = pSoundAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8290
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_ShutdownAliens
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
	 */
	void ABowlingSpaceInvaderNetHelper::NetMulticast_ShutdownAliens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_ShutdownAliens");
		
		ABowlingSpaceInvaderNetHelper_NetMulticast_ShutdownAliens_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8240
	 * 		Name   -> Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_PrepareAliens
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
	 */
	void ABowlingSpaceInvaderNetHelper::NetMulticast_PrepareAliens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_PrepareAliens");
		
		ABowlingSpaceInvaderNetHelper_NetMulticast_PrepareAliens_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingSpaceInvaderNetHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingSpaceInvaderNetHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingSpaceInvaderNetHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8910
	 * 		Name   -> Function SportsScramble.BowlingSpinKicker.SimpleBeginOverlap
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBowlingSpinKicker::SimpleBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingSpinKicker.SimpleBeginOverlap");
		
		UBowlingSpinKicker_SimpleBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBowlingSpinKicker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBowlingSpinKicker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingSpinKicker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBowlingState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBowlingState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B89B0
	 * 		Name   -> Function SportsScramble.BowlingUtils.SwitchHasBowlingAuthority
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBowlingAuthority                                  Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBowlingUtils::STATIC_SwitchHasBowlingAuthority(class UObject* WorldContextObject, EBowlingAuthority* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingUtils.SwitchHasBowlingAuthority");
		
		UBowlingUtils_SwitchHasBowlingAuthority_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8440
	 * 		Name   -> Function SportsScramble.BowlingUtils.ObjectHasBowlingAuthority
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBowlingUtils::STATIC_ObjectHasBowlingAuthority(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingUtils.ObjectHasBowlingAuthority");
		
		UBowlingUtils_ObjectHasBowlingAuthority_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003B8040
	 * 		Name   -> Function SportsScramble.BowlingUtils.HasBowlingAuthority
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBowlingUtils::STATIC_HasBowlingAuthority(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.BowlingUtils.HasBowlingAuthority");
		
		UBowlingUtils_HasBowlingAuthority_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBowlingUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBowlingUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.BowlingUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BC870
	 * 		Name   -> Function SportsScramble.CancelOculusMatchmakingCallbackProxy.CancelOculusMatchmaking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UCancelOculusMatchmakingCallbackProxy* UCancelOculusMatchmakingCallbackProxy::STATIC_CancelOculusMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.CancelOculusMatchmakingCallbackProxy.CancelOculusMatchmaking");
		
		UCancelOculusMatchmakingCallbackProxy_CancelOculusMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCancelOculusMatchmakingCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCancelOculusMatchmakingCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.CancelOculusMatchmakingCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BC8A0
	 * 		Name   -> Function SportsScramble.DestroyOculusSessionCallbackProxy.DestroyOculusSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDestroyOculusSessionCallbackProxy* UDestroyOculusSessionCallbackProxy::STATIC_DestroyOculusSession(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.DestroyOculusSessionCallbackProxy.DestroyOculusSession");
		
		UDestroyOculusSessionCallbackProxy_DestroyOculusSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestroyOculusSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestroyOculusSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.DestroyOculusSessionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDodgeballAIAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDodgeballAIAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.DodgeballAIAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADodgeballAvatar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADodgeballAvatar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.DodgeballAvatar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.DodgeballBall.OnShotChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADodgeballBall::OnShotChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.DodgeballBall.OnShotChanged");
		
		ADodgeballBall_OnShotChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BCAE0
	 * 		Name   -> Function SportsScramble.DodgeballBall.GetShot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FDodgeballShot ADodgeballBall::GetShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.DodgeballBall.GetShot");
		
		ADodgeballBall_GetShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BC960
	 * 		Name   -> Function SportsScramble.DodgeballBall.GetDodgeballBallProperties
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FDodgeballBallProperties ADodgeballBall::GetDodgeballBallProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.DodgeballBall.GetDodgeballBallProperties");
		
		ADodgeballBall_GetDodgeballBallProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADodgeballBall.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADodgeballBall::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.DodgeballBall");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDodgeballCaptainAIAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDodgeballCaptainAIAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.DodgeballCaptainAIAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDodgeballGlobalDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDodgeballGlobalDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.DodgeballGlobalDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BCE60
	 * 		Name   -> Function SportsScramble.DodgeballGlove.PlayHaptic
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UHapticFeedbackEffect_Base*                  haptic                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADodgeballGlove::PlayHaptic(class UHapticFeedbackEffect_Base* haptic, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.DodgeballGlove.PlayHaptic");
		
		ADodgeballGlove_PlayHaptic_Params params {};
		params.haptic = haptic;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.DodgeballGlove.ItemThrown
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADodgeballGlove::ItemThrown(class AActor* Item, const struct FVector& Location, float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.DodgeballGlove.ItemThrown");
		
		ADodgeballGlove_ItemThrown_Params params {};
		params.Item = Item;
		params.Location = Location;
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.DodgeballGlove.ItemPassed
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADodgeballGlove::ItemPassed(class AActor* Item, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.DodgeballGlove.ItemPassed");
		
		ADodgeballGlove_ItemPassed_Params params {};
		params.Item = Item;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.DodgeballGlove.ItemCaught
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADodgeballGlove::ItemCaught(class AActor* Item, const struct FVector& Location, float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.DodgeballGlove.ItemCaught");
		
		ADodgeballGlove_ItemCaught_Params params {};
		params.Item = Item;
		params.Location = Location;
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADodgeballGlove.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADodgeballGlove::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.DodgeballGlove");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADodgeballInstrument.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADodgeballInstrument::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.DodgeballInstrument");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDodgeballPawnAIAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDodgeballPawnAIAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.DodgeballPawnAIAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2E00
	 * 		Name   -> Function SportsScramble.ScramMeshShadow.GetShadowSample
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UScramMeshShadow::GetShadowSample()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramMeshShadow.GetShadowSample");
		
		UScramMeshShadow_GetShadowSample_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramMeshShadow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramMeshShadow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramMeshShadow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BCA50
	 * 		Name   -> Function SportsScramble.FanMeshShadow.GetInstancedMeshFloatValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              shadowSample                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UFanMeshShadow::GetInstancedMeshFloatValue(float shadowSample)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.FanMeshShadow.GetInstancedMeshFloatValue");
		
		UFanMeshShadow_GetInstancedMeshFloatValue_Params params {};
		params.shadowSample = shadowSample;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFanMeshShadow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFanMeshShadow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.FanMeshShadow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BD360
	 * 		Name   -> Function SportsScramble.FieldingPlayerManager.SetTimeScale
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EVerticalFieldZone                                 zone                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMinMaxFloat                                TimeScale                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AFieldingPlayerManager::SetTimeScale(EVerticalFieldZone zone, const struct FMinMaxFloat& TimeScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.FieldingPlayerManager.SetTimeScale");
		
		AFieldingPlayerManager_SetTimeScale_Params params {};
		params.zone = zone;
		params.TimeScale = TimeScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.FieldingPlayerManager.OnBallInPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ABaseballBall*                               Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVerticalFieldZone                                 zone                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFieldingPlayerManager::OnBallInPlay(class ABaseballBall* Ball, EVerticalFieldZone zone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.FieldingPlayerManager.OnBallInPlay");
		
		AFieldingPlayerManager_OnBallInPlay_Params params {};
		params.Ball = Ball;
		params.zone = zone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BCB20
	 * 		Name   -> Function SportsScramble.FieldingPlayerManager.GetTimeScale
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EVerticalFieldZone                                 zone                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FMinMaxFloat AFieldingPlayerManager::GetTimeScale(EVerticalFieldZone zone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.FieldingPlayerManager.GetTimeScale");
		
		AFieldingPlayerManager_GetTimeScale_Params params {};
		params.zone = zone;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFieldingPlayerManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFieldingPlayerManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.FieldingPlayerManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BD290
	 * 		Name   -> Function SportsScramble.FlyTextLabel.SetText
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void AFlyTextLabel::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.FlyTextLabel.SetText");
		
		AFlyTextLabel_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BD190
	 * 		Name   -> Function SportsScramble.FlyTextLabel.SetScore
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        combineTag                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFlyTextLabel::SetScore(int32_t score, bool bonus, const class FName& combineTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.FlyTextLabel.SetScore");
		
		AFlyTextLabel_SetScore_Params params {};
		params.score = score;
		params.bonus = bonus;
		params.combineTag = combineTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFlyTextLabel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlyTextLabel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.FlyTextLabel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BC9A0
	 * 		Name   -> Function SportsScramble.GameInviteUtils.GetFriends
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameInviteUtils::STATIC_GetFriends(const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.GameInviteUtils.GetFriends");
		
		UGameInviteUtils_GetFriends_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameInviteUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameInviteUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.GameInviteUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BD460
	 * 		Name   -> Function SportsScramble.HoopsLaneIndicator.StopIndicator
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHoopsLaneIndicator::StopIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.HoopsLaneIndicator.StopIndicator");
		
		UHoopsLaneIndicator_StopIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BD440
	 * 		Name   -> Function SportsScramble.HoopsLaneIndicator.StartIndicator
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHoopsLaneIndicator::StartIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.HoopsLaneIndicator.StartIndicator");
		
		UHoopsLaneIndicator_StartIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BCF70
	 * 		Name   -> Function SportsScramble.HoopsLaneIndicator.SetFlipper
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABowlingLaneFlipper*                         Flipper                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoopsLaneIndicator::SetFlipper(class ABowlingLaneFlipper* Flipper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.HoopsLaneIndicator.SetFlipper");
		
		UHoopsLaneIndicator_SetFlipper_Params params {};
		params.Flipper = Flipper;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BCF30
	 * 		Name   -> Function SportsScramble.HoopsLaneIndicator.ProgressIndicator
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UHoopsLaneIndicator::ProgressIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.HoopsLaneIndicator.ProgressIndicator");
		
		UHoopsLaneIndicator_ProgressIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoopsLaneIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoopsLaneIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.HoopsLaneIndicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInstancedFanColorRandomizer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstancedFanColorRandomizer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.InstancedFanColorRandomizer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BD4A0
	 * 		Name   -> Function SportsScramble.InstancedMesh.UnregisterInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UInstancedMesh::UnregisterInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.InstancedMesh.UnregisterInstance");
		
		UInstancedMesh_UnregisterInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BCFF0
	 * 		Name   -> Function SportsScramble.InstancedMesh.SetInstanceFloatValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              FloatValue                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInstancedMesh::SetInstanceFloatValue(float FloatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.InstancedMesh.SetInstanceFloatValue");
		
		UInstancedMesh_SetInstanceFloatValue_Params params {};
		params.FloatValue = FloatValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BCF50
	 * 		Name   -> Function SportsScramble.InstancedMesh.RegisterInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UInstancedMesh::RegisterInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.InstancedMesh.RegisterInstance");
		
		UInstancedMesh_RegisterInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInstancedMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstancedMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.InstancedMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInstancedMeshManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInstancedMeshManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.InstancedMeshManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BCBD0
	 * 		Name   -> Function SportsScramble.InviteFriendCallbackProxy.InviteFriend
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScramFriend                                invitedFriend                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UInviteFriendCallbackProxy* UInviteFriendCallbackProxy::STATIC_InviteFriend(class APlayerController* PlayerController, const struct FScramFriend& invitedFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.InviteFriendCallbackProxy.InviteFriend");
		
		UInviteFriendCallbackProxy_InviteFriend_Params params {};
		params.PlayerController = PlayerController;
		params.invitedFriend = invitedFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInviteFriendCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInviteFriendCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.InviteFriendCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BCD00
	 * 		Name   -> Function SportsScramble.JoinOculusSessionCallbackProxy.JoinOculusSession
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintSessionResult                     SearchResult                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UJoinOculusSessionCallbackProxy* UJoinOculusSessionCallbackProxy::STATIC_JoinOculusSession(class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.JoinOculusSessionCallbackProxy.JoinOculusSession");
		
		UJoinOculusSessionCallbackProxy_JoinOculusSession_Params params {};
		params.PlayerController = PlayerController;
		params.SearchResult = SearchResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJoinOculusSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJoinOculusSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.JoinOculusSessionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BD480
	 * 		Name   -> Function SportsScramble.MenuInstrument.TryMakeActiveMenuInstrument
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AMenuInstrument::TryMakeActiveMenuInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MenuInstrument.TryMakeActiveMenuInstrument");
		
		AMenuInstrument_TryMakeActiveMenuInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BD100
	 * 		Name   -> Function SportsScramble.MenuInstrument.SetPointerMenuOption
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               useMenuPointer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMenuInstrument::SetPointerMenuOption(bool useMenuPointer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MenuInstrument.SetPointerMenuOption");
		
		AMenuInstrument_SetPointerMenuOption_Params params {};
		params.useMenuPointer = useMenuPointer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BD070
	 * 		Name   -> Function SportsScramble.MenuInstrument.SetLaserPointerVisibility
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMenuInstrument::SetLaserPointerVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MenuInstrument.SetLaserPointerVisibility");
		
		AMenuInstrument_SetLaserPointerVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.MenuInstrument.OnNotifyInputRelease
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMenuInstrument::OnNotifyInputRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MenuInstrument.OnNotifyInputRelease");
		
		AMenuInstrument_OnNotifyInputRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.MenuInstrument.OnNotifyInputPress
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMenuInstrument::OnNotifyInputPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MenuInstrument.OnNotifyInputPress");
		
		AMenuInstrument_OnNotifyInputPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.MenuInstrument.OnChangePointerType
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMenuInstrument::OnChangePointerType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MenuInstrument.OnChangePointerType");
		
		AMenuInstrument_OnChangePointerType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BCBB0
	 * 		Name   -> Function SportsScramble.MenuInstrument.Initialize
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AMenuInstrument::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MenuInstrument.Initialize");
		
		AMenuInstrument_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMenuInstrument.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMenuInstrument::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.MenuInstrument");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovingLaneAssist.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovingLaneAssist::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.MovingLaneAssist");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2000
	 * 		Name   -> Function SportsScramble.MusicManager.StopMusic
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              FadeTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMusicManager::STATIC_StopMusic(float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.StopMusic");
		
		AMusicManager_StopMusic_Params params {};
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1F80
	 * 		Name   -> Function SportsScramble.MusicManager.Stop
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              FadeTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMusicManager::Stop(float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.Stop");
		
		AMusicManager_Stop_Params params {};
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1A70
	 * 		Name   -> Function SportsScramble.MusicManager.PlayMusicEntry
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        EntryName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMusicManager::STATIC_PlayMusicEntry(const class FName& EntryName, float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.PlayMusicEntry");
		
		AMusicManager_PlayMusicEntry_Params params {};
		params.EntryName = EntryName;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1940
	 * 		Name   -> Function SportsScramble.MusicManager.PlayMusic
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Volume                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMusicManager::STATIC_PlayMusic(class USoundBase* Sound, float StartTime, float Volume, float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.PlayMusic");
		
		AMusicManager_PlayMusic_Params params {};
		params.Sound = Sound;
		params.StartTime = StartTime;
		params.Volume = Volume;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.MusicManager.PlayEntry
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EntryName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMusicManager::PlayEntry(const class FName& EntryName, float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.PlayEntry");
		
		AMusicManager_PlayEntry_Params params {};
		params.EntryName = EntryName;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1580
	 * 		Name   -> Function SportsScramble.MusicManager.Play
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Volume                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMusicManager::Play(class USoundBase* Sound, float StartTime, float Volume, float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.Play");
		
		AMusicManager_Play_Params params {};
		params.Sound = Sound;
		params.StartTime = StartTime;
		params.Volume = Volume;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1050
	 * 		Name   -> Function SportsScramble.MusicManager.IsPlaying
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AMusicManager::IsPlaying(class USoundBase* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.IsPlaying");
		
		AMusicManager_IsPlaying_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0FD0
	 * 		Name   -> Function SportsScramble.MusicManager.IsMusicPlaying
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AMusicManager::STATIC_IsMusicPlaying(class USoundBase* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.MusicManager.IsMusicPlaying");
		
		AMusicManager_IsMusicPlaying_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMusicManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMusicManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.MusicManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1D00
	 * 		Name   -> Function SportsScramble.NetworkMotionStateManager.Server_ApplyReplicatedStates
	 * 		Flags  -> (Final, Net, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		TArray<struct FNetworkMotionState>                 States                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ANetworkMotionStateManager::Server_ApplyReplicatedStates(TArray<struct FNetworkMotionState> States)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.NetworkMotionStateManager.Server_ApplyReplicatedStates");
		
		ANetworkMotionStateManager_Server_ApplyReplicatedStates_Params params {};
		params.States = States;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1560
	 * 		Name   -> Function SportsScramble.NetworkMotionStateManager.OnRep_ReplicatedStates
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ANetworkMotionStateManager::OnRep_ReplicatedStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.NetworkMotionStateManager.OnRep_ReplicatedStates");
		
		ANetworkMotionStateManager_OnRep_ReplicatedStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANetworkMotionStateManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANetworkMotionStateManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.NetworkMotionStateManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C14A0
	 * 		Name   -> Function SportsScramble.PitchingAvatar.OnDrop
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APitchingAvatar::OnDrop(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.PitchingAvatar.OnDrop");
		
		APitchingAvatar_OnDrop_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1320
	 * 		Name   -> Function SportsScramble.PitchingAvatar.OnBaseballEvent
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APitchingAvatar::OnBaseballEvent(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.PitchingAvatar.OnBaseballEvent");
		
		APitchingAvatar_OnBaseballEvent_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1260
	 * 		Name   -> Function SportsScramble.PitchingAvatar.OnBallGrabbed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APitchingAvatar::OnBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.PitchingAvatar.OnBallGrabbed");
		
		APitchingAvatar_OnBallGrabbed_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APitchingAvatar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APitchingAvatar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.PitchingAvatar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPitchingAvatarAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPitchingAvatarAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.PitchingAvatarAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1DC0
	 * 		Name   -> Function SportsScramble.PitchingPropInterface.SetBattingPlayer
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      batterActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPitchingPropInterface::SetBattingPlayer(class AActor* batterActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.PitchingPropInterface.SetBattingPlayer");
		
		UPitchingPropInterface_SetBattingPlayer_Params params {};
		params.batterActor = batterActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPitchingPropInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPitchingPropInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.PitchingPropInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1160
	 * 		Name   -> Function SportsScramble.PlayByPlay.NetMulticast_PlayByPlayEvent
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	 * Parameters:
	 * 		int32_t                                            eventIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlayByPlay::NetMulticast_PlayByPlayEvent(int32_t eventIndex, class AActor* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlay.NetMulticast_PlayByPlayEvent");
		
		APlayByPlay_NetMulticast_PlayByPlayEvent_Params params {};
		params.eventIndex = eventIndex;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C10E0
	 * 		Name   -> Function SportsScramble.PlayByPlay.IsQueuedOrPlaying
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool APlayByPlay::STATIC_IsQueuedOrPlaying(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlay.IsQueuedOrPlaying");
		
		APlayByPlay_IsQueuedOrPlaying_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0D30
	 * 		Name   -> Function SportsScramble.PlayByPlay.CultureChanged
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void APlayByPlay::CultureChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlay.CultureChanged");
		
		APlayByPlay_CultureChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayByPlay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayByPlay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.PlayByPlay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C13E0
	 * 		Name   -> Function SportsScramble.PlayByPlayBaseball.OnBaseballEvent
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlayByPlayBaseball::OnBaseballEvent(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlayBaseball.OnBaseballEvent");
		
		APlayByPlayBaseball_OnBaseballEvent_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0CC0
	 * 		Name   -> Function SportsScramble.PlayByPlayBaseball.BatChange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EBaseballInstrumentType                            newBatType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlayByPlayBaseball::STATIC_BatChange(EBaseballInstrumentType newBatType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlayBaseball.BatChange");
		
		APlayByPlayBaseball_BatChange_Params params {};
		params.newBatType = newBatType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0C50
	 * 		Name   -> Function SportsScramble.PlayByPlayBaseball.BallChange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EBaseballBallType                                  newBallType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlayByPlayBaseball::STATIC_BallChange(EBaseballBallType newBallType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlayBaseball.BallChange");
		
		APlayByPlayBaseball_BallChange_Params params {};
		params.newBallType = newBallType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayByPlayBaseball.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayByPlayBaseball::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.PlayByPlayBaseball");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1C40
	 * 		Name   -> Function SportsScramble.PlayByPlayTennis.SendPlayByPlayEvent
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		ETennisPlayByPlayEvent                             playByPlayEvent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlayByPlayTennis::SendPlayByPlayEvent(ETennisPlayByPlayEvent playByPlayEvent, class AActor* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlayTennis.SendPlayByPlayEvent");
		
		APlayByPlayTennis_SendPlayByPlayEvent_Params params {};
		params.playByPlayEvent = playByPlayEvent;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1B50
	 * 		Name   -> Function SportsScramble.PlayByPlayTennis.RacquetChange
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTennisInstrumentProperties                 instrumentProps                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void APlayByPlayTennis::STATIC_RacquetChange(class AActor* Player, const struct FTennisInstrumentProperties& instrumentProps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.PlayByPlayTennis.RacquetChange");
		
		APlayByPlayTennis_RacquetChange_Params params {};
		params.Player = Player;
		params.instrumentProps = instrumentProps;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayByPlayTennis.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayByPlayTennis::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.PlayByPlayTennis");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramActorFollower.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramActorFollower::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramActorFollower");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramActorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramActorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramActorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramBallAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramBallAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBallAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramBallHitter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramBallHitter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBallHitter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C46D0
	 * 		Name   -> Function SportsScramble.ScramBallManager.SetMaxBalls
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            maxBalls                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBallManager::STATIC_SetMaxBalls(int32_t maxBalls)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBallManager.SetMaxBalls");
		
		AScramBallManager_SetMaxBalls_Params params {};
		params.maxBalls = maxBalls;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramBallManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramBallManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBallManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C45F0
	 * 		Name   -> Function SportsScramble.ScramBaseAI.PlaySpawnAnimation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramBaseAI::PlaySpawnAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseAI.PlaySpawnAnimation");
		
		AScramBaseAI_PlaySpawnAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramBaseAI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramBaseAI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBaseAI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramBaseAIAnimNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramBaseAIAnimNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBaseAIAnimNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramBaseAIAnimNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramBaseAIAnimNotifyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBaseAIAnimNotifyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramBaseballAIAnimNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramBaseballAIAnimNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBaseballAIAnimNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramBaseballAIAnimNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramBaseballAIAnimNotifyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBaseballAIAnimNotifyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramBaseballBatterAI.PlayBatSound
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ABaseballBall*                               Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BallSpeed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBaseballBatterAI::PlayBatSound(class ABaseballBall* Ball, float BallSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballBatterAI.PlayBatSound");
		
		AScramBaseballBatterAI_PlayBatSound_Params params {};
		params.Ball = Ball;
		params.BallSpeed = BallSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramBaseballBatterAI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramBaseballBatterAI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBaseballBatterAI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4740
	 * 		Name   -> Function SportsScramble.ScramBaseballCatcherAI.SetState
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	 * Parameters:
	 * 		ECatcherAIState                                    newState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBaseballCatcherAI::SetState(ECatcherAIState newState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballCatcherAI.SetState");
		
		AScramBaseballCatcherAI_SetState_Params params {};
		params.newState = newState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4610
	 * 		Name   -> Function SportsScramble.ScramBaseballCatcherAI.SetGloveMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECatcherGloveMode                                  gloveMode                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EScramSkill                                        Skill                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBaseballCatcherAI::SetGloveMode(ECatcherGloveMode gloveMode, EScramSkill Skill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballCatcherAI.SetGloveMode");
		
		AScramBaseballCatcherAI_SetGloveMode_Params params {};
		params.gloveMode = gloveMode;
		params.Skill = Skill;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4470
	 * 		Name   -> Function SportsScramble.ScramBaseballCatcherAI.OnBallHit
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBaseballCatcherAI::OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballCatcherAI.OnBallHit");
		
		AScramBaseballCatcherAI_OnBallHit_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C43B0
	 * 		Name   -> Function SportsScramble.ScramBaseballCatcherAI.OnBallDropped
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBaseballCatcherAI::OnBallDropped(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballCatcherAI.OnBallDropped");
		
		AScramBaseballCatcherAI_OnBallDropped_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C42F0
	 * 		Name   -> Function SportsScramble.ScramBaseballCatcherAI.OnBallCaught
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBaseballCatcherAI::OnBallCaught(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballCatcherAI.OnBallCaught");
		
		AScramBaseballCatcherAI_OnBallCaught_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4170
	 * 		Name   -> Function SportsScramble.ScramBaseballCatcherAI.GetGloveMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AScramSportManagerBaseball*                  pBaseball                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECatcherGloveMode AScramBaseballCatcherAI::GetGloveMode(class AScramSportManagerBaseball* pBaseball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballCatcherAI.GetGloveMode");
		
		AScramBaseballCatcherAI_GetGloveMode_Params params {};
		params.pBaseball = pBaseball;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramBaseballCatcherAI.BallCaught
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBaseballBallType                                  BallType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Imbued                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBaseballCatcherAI::BallCaught(class AActor* Ball, const struct FVector& Position, EBaseballBallType BallType, bool Imbued)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballCatcherAI.BallCaught");
		
		AScramBaseballCatcherAI_BallCaught_Params params {};
		params.Ball = Ball;
		params.Position = Position;
		params.BallType = BallType;
		params.Imbued = Imbued;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramBaseballCatcherAI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramBaseballCatcherAI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBaseballCatcherAI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4530
	 * 		Name   -> Function SportsScramble.ScramBaseballFielderAI.OnBaseballEvent
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBaseballFielderAI::OnBaseballEvent(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballFielderAI.OnBaseballEvent");
		
		AScramBaseballFielderAI_OnBaseballEvent_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4240
	 * 		Name   -> Function SportsScramble.ScramBaseballFielderAI.NetMulticast_SetDesiredAnimState
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
	 * Parameters:
	 * 		EBaseballFielderAnimState                          animState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBaseballFielderAI::NetMulticast_SetDesiredAnimState(EBaseballFielderAnimState animState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballFielderAI.NetMulticast_SetDesiredAnimState");
		
		AScramBaseballFielderAI_NetMulticast_SetDesiredAnimState_Params params {};
		params.animState = animState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramBaseballFielderAI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramBaseballFielderAI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBaseballFielderAI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramBaseballPitcherAI.PlayMittSound
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ABaseballBall*                               Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BallSpeed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBaseballPitcherAI::PlayMittSound(class ABaseballBall* Ball, float BallSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballPitcherAI.PlayMittSound");
		
		AScramBaseballPitcherAI_PlayMittSound_Params params {};
		params.Ball = Ball;
		params.BallSpeed = BallSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramBaseballPitcherAI.GetScrambleBallClass
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Ball                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBaseballPitcherAI::GetScrambleBallClass(class UClass** Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballPitcherAI.GetScrambleBallClass");
		
		AScramBaseballPitcherAI_GetScrambleBallClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ball != nullptr)
			*Ball = params.Ball;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramBaseballPitcherAI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramBaseballPitcherAI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBaseballPitcherAI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramBaseballRunnerAI.OnSpawn
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramBaseballRunnerAI::OnSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballRunnerAI.OnSpawn");
		
		AScramBaseballRunnerAI_OnSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramBaseballRunnerAI.OnDespawn
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramBaseballRunnerAI::OnDespawn(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballRunnerAI.OnDespawn");
		
		AScramBaseballRunnerAI_OnDespawn_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C8010
	 * 		Name   -> Function SportsScramble.ScramBaseballRunnerAI.HasReachedHome
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramBaseballRunnerAI::HasReachedHome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballRunnerAI.HasReachedHome");
		
		AScramBaseballRunnerAI_HasReachedHome_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7F10
	 * 		Name   -> Function SportsScramble.ScramBaseballRunnerAI.GetDestinationBase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AScramBaseballRunnerAI::GetDestinationBase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramBaseballRunnerAI.GetDestinationBase");
		
		AScramBaseballRunnerAI_GetDestinationBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramBaseballRunnerAI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramBaseballRunnerAI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBaseballRunnerAI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScrambleTarget.GetAiValue
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		EScrambleTargetAiValue                             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScrambleTarget::GetAiValue(EScrambleTargetAiValue* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScrambleTarget.GetAiValue");
		
		AScrambleTarget_GetAiValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScrambleTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScrambleTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScrambleTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramBounceLighting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramBounceLighting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBounceLighting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC8A0
	 * 		Name   -> Function SportsScramble.TextureSamplerSettings.SampleTexture
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     worldPos                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      DefaultColor                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FColor ATextureSamplerSettings::SampleTexture(const struct FVector& worldPos, const struct FColor& DefaultColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TextureSamplerSettings.SampleTexture");
		
		ATextureSamplerSettings_SampleTexture_Params params {};
		params.worldPos = worldPos;
		params.DefaultColor = DefaultColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATextureSamplerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATextureSamplerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.TextureSamplerSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramBounceLightingSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramBounceLightingSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBounceLightingSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramBowlingAI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramBowlingAI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBowlingAI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramBowlingAIAnimNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramBowlingAIAnimNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBowlingAIAnimNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramBowlingAIAnimNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramBowlingAIAnimNotifyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBowlingAIAnimNotifyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramBoxInteractableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramBoxInteractableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramBoxInteractableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramCableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramCableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramCableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramCameraComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramCameraComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramCameraComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7E80
	 * 		Name   -> Function SportsScramble.ScramCameraCover.EnqueueVignette
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCoverVignette                              vignette                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AScramCameraCover::STATIC_EnqueueVignette(const struct FCoverVignette& vignette)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramCameraCover.EnqueueVignette");
		
		AScramCameraCover_EnqueueVignette_Params params {};
		params.vignette = vignette;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramCameraCover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramCameraCover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramCameraCover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3C50
	 * 		Name   -> Function SportsScramble.ScramTrajectoryInfluencerActor.SetInfluencerEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramTrajectoryInfluencerActor::SetInfluencerEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrajectoryInfluencerActor.SetInfluencerEnabled");
		
		AScramTrajectoryInfluencerActor_SetInfluencerEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramTrajectoryInfluencerActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramTrajectoryInfluencerActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTrajectoryInfluencerActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C8130
	 * 		Name   -> Function SportsScramble.ScramCourt.SetScramCourtMatchType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EScramCourtMatchType                               matchType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramCourt::STATIC_SetScramCourtMatchType(class UObject* pWorldContextObject, EScramCourtMatchType matchType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramCourt.SetScramCourtMatchType");
		
		AScramCourt_SetScramCourtMatchType_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.matchType = matchType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7F60
	 * 		Name   -> Function SportsScramble.ScramCourt.GetScramCourtMatchType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EScramCourtMatchType AScramCourt::STATIC_GetScramCourtMatchType(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramCourt.GetScramCourtMatchType");
		
		AScramCourt_GetScramCourtMatchType_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramCourt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramCourt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramCourt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramDataSingleton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramDataSingleton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramDataSingleton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C8200
	 * 		Name   -> Function SportsScramble.ScramDodgeballAI.SetTeam2
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AScramDodgeballAI::SetTeam2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballAI.SetTeam2");
		
		AScramDodgeballAI_SetTeam2_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C81E0
	 * 		Name   -> Function SportsScramble.ScramDodgeballAI.SetTeam1
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AScramDodgeballAI::SetTeam1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballAI.SetTeam1");
		
		AScramDodgeballAI_SetTeam1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C80B0
	 * 		Name   -> Function SportsScramble.ScramDodgeballAI.SetPositionIndex
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramDodgeballAI::SetPositionIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballAI.SetPositionIndex");
		
		AScramDodgeballAI_SetPositionIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7FE0
	 * 		Name   -> Function SportsScramble.ScramDodgeballAI.GetTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EScramDodgeballTeam AScramDodgeballAI::GetTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballAI.GetTeam");
		
		AScramDodgeballAI_GetTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7F30
	 * 		Name   -> Function SportsScramble.ScramDodgeballAI.GetPositionIndex
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AScramDodgeballAI::GetPositionIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballAI.GetPositionIndex");
		
		AScramDodgeballAI_GetPositionIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramDodgeballAI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramDodgeballAI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramDodgeballAI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramDodgeballAIAnimNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramDodgeballAIAnimNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramDodgeballAIAnimNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramDodgeballAIAnimNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramDodgeballAIAnimNotifyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramDodgeballAIAnimNotifyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramDodgeballCaptainAI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramDodgeballCaptainAI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramDodgeballCaptainAI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C8220
	 * 		Name   -> Function SportsScramble.ScramDodgeballPawnAI.StartGame
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AScramDodgeballPawnAI::StartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballPawnAI.StartGame");
		
		AScramDodgeballPawnAI_StartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C8030
	 * 		Name   -> Function SportsScramble.ScramDodgeballPawnAI.SetDelayBeforeThrowing
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		struct FMinMaxFloat                                delayBeforeThrow                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AScramDodgeballPawnAI::SetDelayBeforeThrowing(const struct FMinMaxFloat& delayBeforeThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballPawnAI.SetDelayBeforeThrowing");
		
		AScramDodgeballPawnAI_SetDelayBeforeThrowing_Params params {};
		params.delayBeforeThrow = delayBeforeThrow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramDodgeballPawnAI.KnockedOut
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramDodgeballPawnAI::KnockedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballPawnAI.KnockedOut");
		
		AScramDodgeballPawnAI_KnockedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramDodgeballPawnAI.BallThrown
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramDodgeballPawnAI::BallThrown(class AActor* Ball, const struct FVector& Location, float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramDodgeballPawnAI.BallThrown");
		
		AScramDodgeballPawnAI_BallThrown_Params params {};
		params.Ball = Ball;
		params.Location = Location;
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramDodgeballPawnAI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramDodgeballPawnAI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramDodgeballPawnAI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramEquipmentSet.PostEquipmentSpawn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPrimitiveGrabbable*                    DominantHandSpawnedEquipment                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AScramPrimitiveGrabbable*                    OffHandSpawnedEquipment                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramEquipmentSet::PostEquipmentSpawn(class AScramPrimitiveGrabbable* DominantHandSpawnedEquipment, class AScramPrimitiveGrabbable* OffHandSpawnedEquipment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEquipmentSet.PostEquipmentSpawn");
		
		AScramEquipmentSet_PostEquipmentSpawn_Params params {};
		params.DominantHandSpawnedEquipment = DominantHandSpawnedEquipment;
		params.OffHandSpawnedEquipment = OffHandSpawnedEquipment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramEquipmentSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramEquipmentSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramEquipmentSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramEventBasePayload.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramEventBasePayload::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramEventBasePayload");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7DC0
	 * 		Name   -> Function SportsScramble.ScramEventObjectPayload.CreateObjectPayload
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UScramEventObjectPayload* UScramEventObjectPayload::STATIC_CreateObjectPayload(class UObject* WorldContextObject, class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEventObjectPayload.CreateObjectPayload");
		
		UScramEventObjectPayload_CreateObjectPayload_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramEventObjectPayload.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramEventObjectPayload::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramEventObjectPayload");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7C70
	 * 		Name   -> Function SportsScramble.ScramEventCollisionPayload.CreateCollisionPayload
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitNormal                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UScramEventCollisionPayload* UScramEventCollisionPayload::STATIC_CreateCollisionPayload(class UObject* WorldContextObject, class AActor* OtherActor, const struct FVector& HitLocation, const struct FVector& HitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEventCollisionPayload.CreateCollisionPayload");
		
		UScramEventCollisionPayload_CreateCollisionPayload_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramEventCollisionPayload.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramEventCollisionPayload::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramEventCollisionPayload");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramEventTennisEventPayload.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramEventTennisEventPayload::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramEventTennisEventPayload");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramEventBaseballEventPayload.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramEventBaseballEventPayload::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramEventBaseballEventPayload");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramEventBowlingEventPayload.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramEventBowlingEventPayload::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramEventBowlingEventPayload");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C8330
	 * 		Name   -> Function SportsScramble.ScramEventManager.UnbindEventFromObjectScramEvent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AScramEventManager::STATIC_UnbindEventFromObjectScramEvent(EScramEvent ScramEvent, class UObject* WorldContextObject, const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEventManager.UnbindEventFromObjectScramEvent");
		
		AScramEventManager_UnbindEventFromObjectScramEvent_Params params {};
		params.ScramEvent = ScramEvent;
		params.WorldContextObject = WorldContextObject;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C8240
	 * 		Name   -> Function SportsScramble.ScramEventManager.UnbindEventFromGlobalScramEvent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AScramEventManager::STATIC_UnbindEventFromGlobalScramEvent(EScramEvent ScramEvent, const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEventManager.UnbindEventFromGlobalScramEvent");
		
		AScramEventManager_UnbindEventFromGlobalScramEvent_Params params {};
		params.ScramEvent = ScramEvent;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7B30
	 * 		Name   -> Function SportsScramble.ScramEventManager.BroadcastScramEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      Payload                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               replicate                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramEventManager::STATIC_BroadcastScramEvent(EScramEvent ScramEvent, class UObject* WorldContextObject, class UScramEventBasePayload* Payload, bool replicate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEventManager.BroadcastScramEvent");
		
		AScramEventManager_BroadcastScramEvent_Params params {};
		params.ScramEvent = ScramEvent;
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		params.replicate = replicate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7A00
	 * 		Name   -> Function SportsScramble.ScramEventManager.BindEventToObjectScramEvent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AScramEventManager::STATIC_BindEventToObjectScramEvent(EScramEvent ScramEvent, class UObject* WorldContextObject, const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEventManager.BindEventToObjectScramEvent");
		
		AScramEventManager_BindEventToObjectScramEvent_Params params {};
		params.ScramEvent = ScramEvent;
		params.WorldContextObject = WorldContextObject;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7910
	 * 		Name   -> Function SportsScramble.ScramEventManager.BindEventToGlobalScramEvent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AScramEventManager::STATIC_BindEventToGlobalScramEvent(EScramEvent ScramEvent, const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramEventManager.BindEventToGlobalScramEvent");
		
		AScramEventManager_BindEventToGlobalScramEvent_Params params {};
		params.ScramEvent = ScramEvent;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramEventManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramEventManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramEventManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC4B0
	 * 		Name   -> Function SportsScramble.ScramGameInstance.StopGameInvitePings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UScramGameInstance::StopGameInvitePings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.StopGameInvitePings");
		
		UScramGameInstance_StopGameInvitePings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC440
	 * 		Name   -> Function SportsScramble.ScramGameInstance.StartOculusAchievementSync
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::STATIC_StartOculusAchievementSync(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.StartOculusAchievementSync");
		
		UScramGameInstance_StartOculusAchievementSync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramGameInstance.ShowDebugMessage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::ShowDebugMessage(const class FString& Message, float LifeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.ShowDebugMessage");
		
		UScramGameInstance_ShowDebugMessage_Params params {};
		params.Message = Message;
		params.LifeTime = LifeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC320
	 * 		Name   -> Function SportsScramble.ScramGameInstance.SetUseVoiceChat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               useVoice                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::SetUseVoiceChat(bool useVoice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.SetUseVoiceChat");
		
		UScramGameInstance_SetUseVoiceChat_Params params {};
		params.useVoice = useVoice;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC210
	 * 		Name   -> Function SportsScramble.ScramGameInstance.SetLocalizationCulture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Culture                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::STATIC_SetLocalizationCulture(class UObject* WorldContextObject, const class FString& Culture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.SetLocalizationCulture");
		
		UScramGameInstance_SetLocalizationCulture_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Culture = Culture;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramGameInstance.SetAvatarLook
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                pPlayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAvatarLook                                 AvatarLook                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::SetAvatarLook(class AScramPlayer* pPlayer, const struct FAvatarLook& AvatarLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.SetAvatarLook");
		
		UScramGameInstance_SetAvatarLook_Params params {};
		params.pPlayer = pPlayer;
		params.AvatarLook = AvatarLook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CBFC0
	 * 		Name   -> Function SportsScramble.ScramGameInstance.SaveGameData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::STATIC_SaveGameData(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.SaveGameData");
		
		UScramGameInstance_SaveGameData_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CBF30
	 * 		Name   -> Function SportsScramble.ScramGameInstance.RemoveShelfActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::STATIC_RemoveShelfActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.RemoveShelfActor");
		
		UScramGameInstance_RemoveShelfActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CBE70
	 * 		Name   -> Function SportsScramble.ScramGameInstance.RefreshGameInvites
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::RefreshGameInvites(const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.RefreshGameInvites");
		
		UScramGameInstance_RefreshGameInvites_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramGameInstance.OnInputFocusReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UScramGameInstance::OnInputFocusReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.OnInputFocusReceived");
		
		UScramGameInstance_OnInputFocusReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramGameInstance.OnInputFocusLost
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UScramGameInstance::OnInputFocusLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.OnInputFocusLost");
		
		UScramGameInstance_OnInputFocusLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramGameInstance.OnHeadsetReconnected
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UScramGameInstance::OnHeadsetReconnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.OnHeadsetReconnected");
		
		UScramGameInstance_OnHeadsetReconnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramGameInstance.OnHeadsetDisconnected
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UScramGameInstance::OnHeadsetDisconnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.OnHeadsetDisconnected");
		
		UScramGameInstance_OnHeadsetDisconnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramGameInstance.OnControllerConnectionChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsConnected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::OnControllerConnectionChanged(bool IsConnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.OnControllerConnectionChanged");
		
		UScramGameInstance_OnControllerConnectionChanged_Params params {};
		params.IsConnected = IsConnected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CBD90
	 * 		Name   -> Function SportsScramble.ScramGameInstance.LocalNetworkVersionOverride
	 * 		Flags  -> (Final, Native, Private)
	 */
	uint32_t UScramGameInstance::LocalNetworkVersionOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.LocalNetworkVersionOverride");
		
		UScramGameInstance_LocalNetworkVersionOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CBC80
	 * 		Name   -> Function SportsScramble.ScramGameInstance.LoadSoftRefTexture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UTexture2D* UScramGameInstance::STATIC_LoadSoftRefTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.LoadSoftRefTexture");
		
		UScramGameInstance_LoadSoftRefTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CBB70
	 * 		Name   -> Function SportsScramble.ScramGameInstance.LoadSoftObject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UObject* UScramGameInstance::STATIC_LoadSoftObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.LoadSoftObject");
		
		UScramGameInstance_LoadSoftObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CBA60
	 * 		Name   -> Function SportsScramble.ScramGameInstance.LoadSoftClassActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UClass* UScramGameInstance::STATIC_LoadSoftClassActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.LoadSoftClassActor");
		
		UScramGameInstance_LoadSoftClassActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB9F0
	 * 		Name   -> Function SportsScramble.ScramGameInstance.LoadGameData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::STATIC_LoadGameData(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.LoadGameData");
		
		UScramGameInstance_LoadGameData_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB8B0
	 * 		Name   -> Function SportsScramble.ScramGameInstance.LoadArrayFromSoftTextures
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UTexture2D*>                          textureList                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UScramGameInstance::STATIC_LoadArrayFromSoftTextures(TArray<class UTexture2D*>* textureList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.LoadArrayFromSoftTextures");
		
		UScramGameInstance_LoadArrayFromSoftTextures_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (textureList != nullptr)
			*textureList = params.textureList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB7B0
	 * 		Name   -> Function SportsScramble.ScramGameInstance.IsHeadsetConnected
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScramGameInstance::STATIC_IsHeadsetConnected(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.IsHeadsetConnected");
		
		UScramGameInstance_IsHeadsetConnected_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB5C0
	 * 		Name   -> Function SportsScramble.ScramGameInstance.InitializePendingGameInvitesComplete
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FScramGameInvite>                    invites                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::InitializePendingGameInvitesComplete(bool wasSuccessful, TArray<struct FScramGameInvite> invites)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.InitializePendingGameInvitesComplete");
		
		UScramGameInstance_InitializePendingGameInvitesComplete_Params params {};
		params.wasSuccessful = wasSuccessful;
		params.invites = invites;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB5A0
	 * 		Name   -> Function SportsScramble.ScramGameInstance.InitializePendingGameInvites
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UScramGameInstance::InitializePendingGameInvites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.InitializePendingGameInvites");
		
		UScramGameInstance_InitializePendingGameInvites_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB4E0
	 * 		Name   -> Function SportsScramble.ScramGameInstance.HasSportStateSaved
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScramGameInstance::STATIC_HasSportStateSaved(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.HasSportStateSaved");
		
		UScramGameInstance_HasSportStateSaved_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB4B0
	 * 		Name   -> Function SportsScramble.ScramGameInstance.HasPendingGameInvites
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UScramGameInstance::HasPendingGameInvites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.HasPendingGameInvites");
		
		UScramGameInstance_HasPendingGameInvites_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB480
	 * 		Name   -> Function SportsScramble.ScramGameInstance.GetUseVoiceChat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UScramGameInstance::GetUseVoiceChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.GetUseVoiceChat");
		
		UScramGameInstance_GetUseVoiceChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB150
	 * 		Name   -> Function SportsScramble.ScramGameInstance.GetSaveData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UScramSaveData* UScramGameInstance::STATIC_GetSaveData(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.GetSaveData");
		
		UScramGameInstance_GetSaveData_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CAF30
	 * 		Name   -> Function SportsScramble.ScramGameInstance.GetLocalizationCulture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UScramGameInstance::STATIC_GetLocalizationCulture(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.GetLocalizationCulture");
		
		UScramGameInstance_GetLocalizationCulture_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CAD10
	 * 		Name   -> Function SportsScramble.ScramGameInstance.DoesUseVoiceChat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScramGameInstance::STATIC_DoesUseVoiceChat(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.DoesUseVoiceChat");
		
		UScramGameInstance_DoesUseVoiceChat_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CABF0
	 * 		Name   -> Function SportsScramble.ScramGameInstance.DismissPendingGameInvite
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScramGameInvite                            invite                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::DismissPendingGameInvite(const struct FScramGameInvite& invite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.DismissPendingGameInvite");
		
		UScramGameInstance_DismissPendingGameInvite_Params params {};
		params.invite = invite;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CABD0
	 * 		Name   -> Function SportsScramble.ScramGameInstance.DismissAllPendingGameInvites
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UScramGameInstance::DismissAllPendingGameInvites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.DismissAllPendingGameInvites");
		
		UScramGameInstance_DismissAllPendingGameInvites_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CAB40
	 * 		Name   -> Function SportsScramble.ScramGameInstance.ClearSavedSportState
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::STATIC_ClearSavedSportState(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.ClearSavedSportState");
		
		UScramGameInstance_ClearSavedSportState_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramGameInstance.ClearDebugMessages
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UScramGameInstance::ClearDebugMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.ClearDebugMessages");
		
		UScramGameInstance_ClearDebugMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramGameInstance.BroadcastLocalAvatarLook
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UScramGameInstance::BroadcastLocalAvatarLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.BroadcastLocalAvatarLook");
		
		UScramGameInstance_BroadcastLocalAvatarLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CAB20
	 * 		Name   -> Function SportsScramble.ScramGameInstance.BeginListeningForDisconnection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UScramGameInstance::BeginListeningForDisconnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.BeginListeningForDisconnection");
		
		UScramGameInstance_BeginListeningForDisconnection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CA9A0
	 * 		Name   -> Function SportsScramble.ScramGameInstance.AsyncLoadObjects
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::STATIC_AsyncLoadObjects(class UObject* WorldContextObject, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.AsyncLoadObjects");
		
		UScramGameInstance_AsyncLoadObjects_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CA820
	 * 		Name   -> Function SportsScramble.ScramGameInstance.AsyncLoadClasses
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              onSuccessEvent                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::STATIC_AsyncLoadClasses(class UObject* WorldContextObject, const class FScriptDelegate& onSuccessEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.AsyncLoadClasses");
		
		UScramGameInstance_AsyncLoadClasses_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.onSuccessEvent = onSuccessEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CA7A0
	 * 		Name   -> Function SportsScramble.ScramGameInstance.AreControllersConnected
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScramGameInstance::STATIC_AreControllersConnected(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.AreControllersConnected");
		
		UScramGameInstance_AreControllersConnected_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CA5F0
	 * 		Name   -> Function SportsScramble.ScramGameInstance.AddShelfActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramGameInstance::STATIC_AddShelfActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameInstance.AddShelfActor");
		
		UScramGameInstance_AddShelfActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC030
	 * 		Name   -> Function SportsScramble.ScramGameMode.ServerTravel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Absolute                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShouldSkipGameNotify                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AScramGameMode::ServerTravel(const class FString& URL, bool Absolute, bool ShouldSkipGameNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameMode.ServerTravel");
		
		AScramGameMode_ServerTravel_Params params {};
		params.URL = URL;
		params.Absolute = Absolute;
		params.ShouldSkipGameNotify = ShouldSkipGameNotify;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CBFA0
	 * 		Name   -> Function SportsScramble.ScramGameMode.ResetMatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramGameMode::ResetMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameMode.ResetMatch");
		
		AScramGameMode_ResetMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CAEB0
	 * 		Name   -> Function SportsScramble.ScramGameMode.GetClientSportPreferences
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FScramSportPreferences AScramGameMode::GetClientSportPreferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameMode.GetClientSportPreferences");
		
		AScramGameMode_GetClientSportPreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CABB0
	 * 		Name   -> Function SportsScramble.ScramGameMode.DisallowMultiplayerLogins
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramGameMode::DisallowMultiplayerLogins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameMode.DisallowMultiplayerLogins");
		
		AScramGameMode_DisallowMultiplayerLogins_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramGameMode.ClientSportPreferencesReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramGameMode::ClientSportPreferencesReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameMode.ClientSportPreferencesReceived");
		
		AScramGameMode_ClientSportPreferencesReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CA780
	 * 		Name   -> Function SportsScramble.ScramGameMode.AllowMatchmakingLogins
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramGameMode::AllowMatchmakingLogins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameMode.AllowMatchmakingLogins");
		
		AScramGameMode_AllowMatchmakingLogins_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CA660
	 * 		Name   -> Function SportsScramble.ScramGameMode.AllowFriendLogin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FScramFriend                                ScramFriend                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void AScramGameMode::AllowFriendLogin(const struct FScramFriend& ScramFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameMode.AllowFriendLogin");
		
		AScramGameMode_AllowFriendLogin_Params params {};
		params.ScramFriend = ScramFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC3F0
	 * 		Name   -> Function SportsScramble.ScramGameState.StartMatch
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	 */
	void AScramGameState::StartMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.StartMatch");
		
		AScramGameState_StartMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC3D0
	 * 		Name   -> Function SportsScramble.ScramGameState.ShowPausedActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramGameState::ShowPausedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.ShowPausedActors");
		
		AScramGameState_ShowPausedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC3B0
	 * 		Name   -> Function SportsScramble.ScramGameState.ShowAllActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramGameState::ShowAllActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.ShowAllActors");
		
		AScramGameState_ShowAllActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC160
	 * 		Name   -> Function SportsScramble.ScramGameState.SetActiveBallClass
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      activeBallClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramGameState::STATIC_SetActiveBallClass(class UObject* pWorldContextObject, class UClass* activeBallClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.SetActiveBallClass");
		
		AScramGameState_SetActiveBallClass_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.activeBallClass = activeBallClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CBE50
	 * 		Name   -> Function SportsScramble.ScramGameState.OnPauseCapsuleRemoved
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AScramGameState::OnPauseCapsuleRemoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.OnPauseCapsuleRemoved");
		
		AScramGameState_OnPauseCapsuleRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CBE30
	 * 		Name   -> Function SportsScramble.ScramGameState.OnPauseCapsuleAdded
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AScramGameState::OnPauseCapsuleAdded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.OnPauseCapsuleAdded");
		
		AScramGameState_OnPauseCapsuleAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CBDC0
	 * 		Name   -> Function SportsScramble.ScramGameState.OnActorSpawned
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramGameState::STATIC_OnActorSpawned(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.OnActorSpawned");
		
		AScramGameState_OnActorSpawned_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB830
	 * 		Name   -> Function SportsScramble.ScramGameState.IsLocalGameStatePaused
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AScramGameState::STATIC_IsLocalGameStatePaused(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.IsLocalGameStatePaused");
		
		AScramGameState_IsLocalGameStatePaused_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB730
	 * 		Name   -> Function SportsScramble.ScramGameState.IsGameStatePaused
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AScramGameState::STATIC_IsGameStatePaused(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.IsGameStatePaused");
		
		AScramGameState_IsGameStatePaused_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB6B0
	 * 		Name   -> Function SportsScramble.ScramGameState.IsActorHidden
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AScramGameState::STATIC_IsActorHidden(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.IsActorHidden");
		
		AScramGameState_IsActorHidden_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB580
	 * 		Name   -> Function SportsScramble.ScramGameState.HidePausedActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramGameState::HidePausedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.HidePausedActors");
		
		AScramGameState_HidePausedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB560
	 * 		Name   -> Function SportsScramble.ScramGameState.HideAllActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramGameState::HideAllActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.HideAllActors");
		
		AScramGameState_HideAllActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB400
	 * 		Name   -> Function SportsScramble.ScramGameState.GetSportManager
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AScramSportManagerBase* AScramGameState::STATIC_GetSportManager(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetSportManager");
		
		AScramGameState_GetSportManager_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB380
	 * 		Name   -> Function SportsScramble.ScramGameState.GetSport
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EScramSport AScramGameState::STATIC_GetSport(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetSport");
		
		AScramGameState_GetSport_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB2F0
	 * 		Name   -> Function SportsScramble.ScramGameState.GetSmoothedPingVariance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AScramGameState::STATIC_GetSmoothedPingVariance(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetSmoothedPingVariance");
		
		AScramGameState_GetSmoothedPingVariance_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB260
	 * 		Name   -> Function SportsScramble.ScramGameState.GetSmoothedPingTime
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AScramGameState::STATIC_GetSmoothedPingTime(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetSmoothedPingTime");
		
		AScramGameState_GetSmoothedPingTime_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB1D0
	 * 		Name   -> Function SportsScramble.ScramGameState.GetScramServerWorldTime
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AScramGameState::STATIC_GetScramServerWorldTime(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetScramServerWorldTime");
		
		AScramGameState_GetScramServerWorldTime_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB0C0
	 * 		Name   -> Function SportsScramble.ScramGameState.GetPingTime
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AScramGameState::STATIC_GetPingTime(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetPingTime");
		
		AScramGameState_GetPingTime_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB000
	 * 		Name   -> Function SportsScramble.ScramGameState.GetPauseCapsuleTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform AScramGameState::STATIC_GetPauseCapsuleTransform(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetPauseCapsuleTransform");
		
		AScramGameState_GetPauseCapsuleTransform_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CAE20
	 * 		Name   -> Function SportsScramble.ScramGameState.GetActiveBallClass
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* AScramGameState::STATIC_GetActiveBallClass(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.GetActiveBallClass");
		
		AScramGameState_GetActiveBallClass_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramGameState.BlueprintCall_OnMultiplayerGameResume
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isCalledByHost                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGamePauseReason                                   reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramGameState::BlueprintCall_OnMultiplayerGameResume(bool isCalledByHost, EGamePauseReason reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.BlueprintCall_OnMultiplayerGameResume");
		
		AScramGameState_BlueprintCall_OnMultiplayerGameResume_Params params {};
		params.isCalledByHost = isCalledByHost;
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramGameState.BlueprintCall_OnMultiplayerGamePaused
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isCalledByHost                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGamePauseReason                                   reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramGameState::BlueprintCall_OnMultiplayerGamePaused(bool isCalledByHost, EGamePauseReason reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramGameState.BlueprintCall_OnMultiplayerGamePaused");
		
		AScramGameState_BlueprintCall_OnMultiplayerGamePaused_Params params {};
		params.isCalledByHost = isCalledByHost;
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramGrabbable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramGrabbable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramGrabbable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramGrabber.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramGrabber::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramGrabber");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramGripSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramGripSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramGripSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramHandshakeActor.ServerReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramHandshakeActor::ServerReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramHandshakeActor.ServerReady");
		
		AScramHandshakeActor_ServerReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramHandshakeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramHandshakeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramHandshakeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramHitManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramHitManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramHitManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramHittableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramHittableActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramHittableActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramHullVisibility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramHullVisibility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramHullVisibility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramInstrumentAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramInstrumentAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramInstrumentAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2E30
	 * 		Name   -> Function SportsScramble.ScramInviteManager.HasAcceptedShellInvite
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool AScramInviteManager::HasAcceptedShellInvite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramInviteManager.HasAcceptedShellInvite");
		
		AScramInviteManager_HasAcceptedShellInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2D90
	 * 		Name   -> Function SportsScramble.ScramInviteManager.GetInviteManager
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class AScramInviteManager* AScramInviteManager::STATIC_GetInviteManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramInviteManager.GetInviteManager");
		
		AScramInviteManager_GetInviteManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramInviteManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramInviteManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramInviteManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramKeyboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramKeyboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramKeyboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D6080
	 * 		Name   -> Function SportsScramble.ScramLauncher.TryCalculateTrajectory
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FScramTrajectory                            outTrajectory                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     launchOrigin                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              horizontalVariance                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              verticalVariance                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AScramLauncher::TryCalculateTrajectory(struct FScramTrajectory* outTrajectory, const struct FVector& launchOrigin, float horizontalVariance, float verticalVariance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramLauncher.TryCalculateTrajectory");
		
		AScramLauncher_TryCalculateTrajectory_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003D6000
	 * 		Name   -> Function SportsScramble.ScramLauncher.SetScrambleMods
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDataTable*                                  DataTable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramLauncher::SetScrambleMods(class UDataTable* DataTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramLauncher.SetScrambleMods");
		
		AScramLauncher_SetScrambleMods_Params params {};
		params.DataTable = DataTable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D5F80
	 * 		Name   -> Function SportsScramble.ScramLauncher.SetMinSpaceBetweenLeftRightMargins
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              minSpace                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramLauncher::SetMinSpaceBetweenLeftRightMargins(float minSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramLauncher.SetMinSpaceBetweenLeftRightMargins");
		
		AScramLauncher_SetMinSpaceBetweenLeftRightMargins_Params params {};
		params.minSpace = minSpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2F30
	 * 		Name   -> Function SportsScramble.ScramLauncher.LaunchWithTrajectory
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScramTrajectory                            trajectory                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class AScramBall* AScramLauncher::LaunchWithTrajectory(const struct FScramTrajectory& trajectory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramLauncher.LaunchWithTrajectory");
		
		AScramLauncher_LaunchWithTrajectory_Params params {};
		params.trajectory = trajectory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2E60
	 * 		Name   -> Function SportsScramble.ScramLauncher.Launch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              horizontalVariance                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              verticalVariance                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AScramBall* AScramLauncher::Launch(float horizontalVariance, float verticalVariance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramLauncher.Launch");
		
		AScramLauncher_Launch_Params params {};
		params.horizontalVariance = horizontalVariance;
		params.verticalVariance = verticalVariance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramLauncher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramLauncher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramLauncher");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramLookAtActivator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramLookAtActivator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramLookAtActivator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramMeshShadowSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramMeshShadowSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramMeshShadowSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D5EB0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.SetAvatarLook
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AScramPlayer*                                pPlayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAvatarLook                                 AvatarLook                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::STATIC_SetAvatarLook(class AScramPlayer* pPlayer, const struct FAvatarLook& AvatarLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.SetAvatarLook");
		
		UScramNetworkHelperComponent_SetAvatarLook_Params params {};
		params.pPlayer = pPlayer;
		params.AvatarLook = AvatarLook;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D5DB0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateTennisBallTrajectory
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class ATennisBall*                                 pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTennisBallNetworkUpdate                    Update                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_UpdateTennisBallTrajectory(class ATennisBall* pBall, const struct FTennisBallNetworkUpdate& Update)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateTennisBallTrajectory");
		
		UScramNetworkHelperComponent_Server_UpdateTennisBallTrajectory_Params params {};
		params.pBall = pBall;
		params.Update = Update;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D5C80
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateStickDrivenCatcherGlove
	 * 		Flags  -> (Net, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class ABaseballThrowingGlove*                      pGlove                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              leftRight                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              upDown                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_UpdateStickDrivenCatcherGlove(class ABaseballThrowingGlove* pGlove, float leftRight, float upDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateStickDrivenCatcherGlove");
		
		UScramNetworkHelperComponent_Server_UpdateStickDrivenCatcherGlove_Params params {};
		params.pGlove = pGlove;
		params.leftRight = leftRight;
		params.upDown = upDown;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D5B20
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateDodgeballBallTrajectory
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class ADodgeballBall*                              pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScramTrajectory                            trajectory                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDodgeballShot                              newShot                                                    (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_UpdateDodgeballBallTrajectory(class ADodgeballBall* pBall, const struct FScramTrajectory& trajectory, const struct FDodgeballShot& newShot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateDodgeballBallTrajectory");
		
		UScramNetworkHelperComponent_Server_UpdateDodgeballBallTrajectory_Params params {};
		params.pBall = pBall;
		params.trajectory = trajectory;
		params.newShot = newShot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D59C0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateBowlingBallTrajectory
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class ABowlingBall*                                pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScramTrajectory                            trajectory                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FBowlingThrow                               newThrow                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_UpdateBowlingBallTrajectory(class ABowlingBall* pBall, const struct FScramTrajectory& trajectory, const struct FBowlingThrow& newThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateBowlingBallTrajectory");
		
		UScramNetworkHelperComponent_Server_UpdateBowlingBallTrajectory_Params params {};
		params.pBall = pBall;
		params.trajectory = trajectory;
		params.newThrow = newThrow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D58C0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateBaseballBallTrajectory
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class ABaseballBall*                               pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBaseballNetworkUpdate                      Update                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_UpdateBaseballBallTrajectory(class ABaseballBall* pBall, const struct FBaseballNetworkUpdate& Update)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateBaseballBallTrajectory");
		
		UScramNetworkHelperComponent_Server_UpdateBaseballBallTrajectory_Params params {};
		params.pBall = pBall;
		params.Update = Update;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D5660
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_StartFollowingTrajectoryWithSlowDown
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        pPrimitive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScramTrajectory                            trajectoryToFollow                                         (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              TimeScale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              maxStepDown                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_StartFollowingTrajectoryWithSlowDown(class AScramPrimitiveActor* pPrimitive, const struct FScramTrajectory& trajectoryToFollow, float TimeScale, float Delay, float Duration, float maxStepDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_StartFollowingTrajectoryWithSlowDown");
		
		UScramNetworkHelperComponent_Server_StartFollowingTrajectoryWithSlowDown_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003D5560
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_StartFollowingTrajectory
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        pPrimitive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScramTrajectory                            trajectoryToFollow                                         (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_StartFollowingTrajectory(class AScramPrimitiveActor* pPrimitive, const struct FScramTrajectory& trajectoryToFollow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_StartFollowingTrajectory");
		
		UScramNetworkHelperComponent_Server_StartFollowingTrajectory_Params params {};
		params.pPrimitive = pPrimitive;
		params.trajectoryToFollow = trajectoryToFollow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D54A0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_SportManagerReady
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AScramSportManagerBase*                      pSportManager                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_SportManagerReady(class AScramSportManagerBase* pSportManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SportManagerReady");
		
		UScramNetworkHelperComponent_Server_SportManagerReady_Params params {};
		params.pSportManager = pSportManager;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D53E0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_SpawnPitcherScrambleOptions
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class ABaseballMitt*                               pMitt                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_SpawnPitcherScrambleOptions(class ABaseballMitt* pMitt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SpawnPitcherScrambleOptions");
		
		UScramNetworkHelperComponent_Server_SpawnPitcherScrambleOptions_Params params {};
		params.pMitt = pMitt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D52E0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_SetTennisBallRallyCount
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class ATennisBall*                                 pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            rallyCount                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_SetTennisBallRallyCount(class ATennisBall* pBall, int32_t rallyCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SetTennisBallRallyCount");
		
		UScramNetworkHelperComponent_Server_SetTennisBallRallyCount_Params params {};
		params.pBall = pBall;
		params.rallyCount = rallyCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D51E0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_SetPlayerPreferences
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPlayer*                                pPlayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScramPlayerPreferences                     preferences                                                (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_SetPlayerPreferences(class AScramPlayer* pPlayer, const struct FScramPlayerPreferences& preferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SetPlayerPreferences");
		
		UScramNetworkHelperComponent_Server_SetPlayerPreferences_Params params {};
		params.pPlayer = pPlayer;
		params.preferences = preferences;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D50A0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_SetPlayerPausedRemote
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPlayer*                                pPlayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGamePauseReason                                   reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               paused                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_SetPlayerPausedRemote(class AScramPlayer* pPlayer, EGamePauseReason reason, bool paused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SetPlayerPausedRemote");
		
		UScramNetworkHelperComponent_Server_SetPlayerPausedRemote_Params params {};
		params.pPlayer = pPlayer;
		params.reason = reason;
		params.paused = paused;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4FF0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_SetFutureBallHit
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		struct FFutureBallHit                              FutureBallHit                                              (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_SetFutureBallHit(const struct FFutureBallHit& FutureBallHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SetFutureBallHit");
		
		UScramNetworkHelperComponent_Server_SetFutureBallHit_Params params {};
		params.FutureBallHit = FutureBallHit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4EE0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_SetAvatarLook
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class AScramPlayer*                                pPlayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAvatarLook                                 AvatarLook                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_SetAvatarLook(class AScramPlayer* pPlayer, const struct FAvatarLook& AvatarLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SetAvatarLook");
		
		UScramNetworkHelperComponent_Server_SetAvatarLook_Params params {};
		params.pPlayer = pPlayer;
		params.AvatarLook = AvatarLook;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4D60
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_ServeTriggerSpawnBall
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPlayerServeTrigger*                    pServeTrigger                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      BallClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_ServeTriggerSpawnBall(class AScramPlayerServeTrigger* pServeTrigger, class UClass* BallClass, const struct FTransform& SpawnTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_ServeTriggerSpawnBall");
		
		UScramNetworkHelperComponent_Server_ServeTriggerSpawnBall_Params params {};
		params.pServeTrigger = pServeTrigger;
		params.BallClass = BallClass;
		params.SpawnTransform = SpawnTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4C60
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_ServeBallSpawned
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPlayerServeTrigger*                    pServeTrigger                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AScramBall*                                  pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_ServeBallSpawned(class AScramPlayerServeTrigger* pServeTrigger, class AScramBall* pBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_ServeBallSpawned");
		
		UScramNetworkHelperComponent_Server_ServeBallSpawned_Params params {};
		params.pServeTrigger = pServeTrigger;
		params.pBall = pBall;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4B60
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_ServeBallGrabbed
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPlayerServeTrigger*                    pServeTrigger                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AScramBall*                                  pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_ServeBallGrabbed(class AScramPlayerServeTrigger* pServeTrigger, class AScramBall* pBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_ServeBallGrabbed");
		
		UScramNetworkHelperComponent_Server_ServeBallGrabbed_Params params {};
		params.pServeTrigger = pServeTrigger;
		params.pBall = pBall;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4A60
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_SendPlayByPlayEvent
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		int32_t                                            eventIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pPlayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_SendPlayByPlayEvent(int32_t eventIndex, class AActor* pPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_SendPlayByPlayEvent");
		
		UScramNetworkHelperComponent_Server_SendPlayByPlayEvent_Params params {};
		params.eventIndex = eventIndex;
		params.pPlayer = pPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D49A0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_RequestAvatarLook
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class AScramPlayer*                                pPlayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_RequestAvatarLook(class AScramPlayer* pPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_RequestAvatarLook");
		
		UScramNetworkHelperComponent_Server_RequestAvatarLook_Params params {};
		params.pPlayer = pPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D48E0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteGameDone
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AScramSportManagerBase*                      pSportManager                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_RemoteGameDone(class AScramSportManagerBase* pSportManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteGameDone");
		
		UScramNetworkHelperComponent_Server_RemoteGameDone_Params params {};
		params.pSportManager = pSportManager;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4890
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillTerminate
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 */
	void UScramNetworkHelperComponent::Server_RemoteApplicationWillTerminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillTerminate");
		
		UScramNetworkHelperComponent_Server_RemoteApplicationWillTerminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4840
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillEnterBackground
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 */
	void UScramNetworkHelperComponent::Server_RemoteApplicationWillEnterBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillEnterBackground");
		
		UScramNetworkHelperComponent_Server_RemoteApplicationWillEnterBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D47F0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillDeactivate
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 */
	void UScramNetworkHelperComponent::Server_RemoteApplicationWillDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillDeactivate");
		
		UScramNetworkHelperComponent_Server_RemoteApplicationWillDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D47A0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationHasReactivated
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 */
	void UScramNetworkHelperComponent::Server_RemoteApplicationHasReactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationHasReactivated");
		
		UScramNetworkHelperComponent_Server_RemoteApplicationHasReactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4750
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationHasEnteredForeground
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 */
	void UScramNetworkHelperComponent::Server_RemoteApplicationHasEnteredForeground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationHasEnteredForeground");
		
		UScramNetworkHelperComponent_Server_RemoteApplicationHasEnteredForeground_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4650
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_ReceiveHeartbeat
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		uint16_t                                           remotePendingNetGeneration                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint16_t                                           remoteEstablishedNetGeneration                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_ReceiveHeartbeat(uint16_t remotePendingNetGeneration, uint16_t remoteEstablishedNetGeneration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_ReceiveHeartbeat");
		
		UScramNetworkHelperComponent_Server_ReceiveHeartbeat_Params params {};
		params.remotePendingNetGeneration = remotePendingNetGeneration;
		params.remoteEstablishedNetGeneration = remoteEstablishedNetGeneration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D45A0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_PingHandShake
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		float                                              clientPingTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_PingHandShake(float clientPingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_PingHandShake");
		
		UScramNetworkHelperComponent_Server_PingHandShake_Params params {};
		params.clientPingTime = clientPingTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D44A0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_MultiplayerGameResume
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		bool                                               isCalledByHost                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGamePauseReason                                   reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_MultiplayerGameResume(bool isCalledByHost, EGamePauseReason reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_MultiplayerGameResume");
		
		UScramNetworkHelperComponent_Server_MultiplayerGameResume_Params params {};
		params.isCalledByHost = isCalledByHost;
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D43A0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_MultiplayerGamePause
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		bool                                               isCalledByHost                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGamePauseReason                                   reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_MultiplayerGamePause(bool isCalledByHost, EGamePauseReason reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_MultiplayerGamePause");
		
		UScramNetworkHelperComponent_Server_MultiplayerGamePause_Params params {};
		params.isCalledByHost = isCalledByHost;
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D42E0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_HandshakeActorReady
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AScramHandshakeActor*                        pHandshakeActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_HandshakeActorReady(class AScramHandshakeActor* pHandshakeActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_HandshakeActorReady");
		
		UScramNetworkHelperComponent_Server_HandshakeActorReady_Params params {};
		params.pHandshakeActor = pHandshakeActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4220
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_GrabberRelease
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      pGrabberActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_GrabberRelease(class AActor* pGrabberActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_GrabberRelease");
		
		UScramNetworkHelperComponent_Server_GrabberRelease_Params params {};
		params.pGrabberActor = pGrabberActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D40E0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_GrabberGrab
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      pGrabberActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pGrabbableActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               snap                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_GrabberGrab(class AActor* pGrabberActor, class AActor* pGrabbableActor, bool snap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_GrabberGrab");
		
		UScramNetworkHelperComponent_Server_GrabberGrab_Params params {};
		params.pGrabberActor = pGrabberActor;
		params.pGrabbableActor = pGrabbableActor;
		params.snap = snap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3ED0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_DrawDebugSphere
	 * 		Flags  -> (Net, Native, Event, Protected, NetServer, HasDefaults, Const, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize10                       Center                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Segments                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_DrawDebugSphere(class AActor* pWorldContextObject, const struct FVector_NetQuantize10& Center, float Radius, int32_t Segments, const struct FColor& Color, float LifeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_DrawDebugSphere");
		
		UScramNetworkHelperComponent_Server_DrawDebugSphere_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003D3D90
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_DestroyPrimitive
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        pPrimitive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               playOut                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_DestroyPrimitive(class AScramPrimitiveActor* pPrimitive, bool playOut, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_DestroyPrimitive");
		
		UScramNetworkHelperComponent_Server_DestroyPrimitive_Params params {};
		params.pPrimitive = pPrimitive;
		params.playOut = playOut;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3CD0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_ClearTennisBallTrajectoryOwnership
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class ATennisBall*                                 pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_ClearTennisBallTrajectoryOwnership(class ATennisBall* pBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_ClearTennisBallTrajectoryOwnership");
		
		UScramNetworkHelperComponent_Server_ClearTennisBallTrajectoryOwnership_Params params {};
		params.pBall = pBall;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3C10
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_ClearPausedTrajectory
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        pPrimitive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_ClearPausedTrajectory(class AScramPrimitiveActor* pPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_ClearPausedTrajectory");
		
		UScramNetworkHelperComponent_Server_ClearPausedTrajectory_Params params {};
		params.pPrimitive = pPrimitive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3B10
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_CallTennisDoubleBounce
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AScramSportManagerTennis*                    pTennisManager                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATennisBall*                                 pTrackedBall                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_CallTennisDoubleBounce(class AScramSportManagerTennis* pTennisManager, class ATennisBall* pTrackedBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_CallTennisDoubleBounce");
		
		UScramNetworkHelperComponent_Server_CallTennisDoubleBounce_Params params {};
		params.pTennisManager = pTennisManager;
		params.pTrackedBall = pTrackedBall;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3990
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Tennis
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETennisEvent                                       TennisEvent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_BroadcastScramEvent_Tennis(EScramEvent ScramEvent, class AActor* pWorldContextObject, int32_t PlayerIndex, ETennisEvent TennisEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Tennis");
		
		UScramNetworkHelperComponent_Server_BroadcastScramEvent_Tennis_Params params {};
		params.ScramEvent = ScramEvent;
		params.pWorldContextObject = pWorldContextObject;
		params.PlayerIndex = PlayerIndex;
		params.TennisEvent = TennisEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3860
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Object
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     pObjectParameter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_BroadcastScramEvent_Object(EScramEvent ScramEvent, class AActor* pWorldContextObject, class UObject* pObjectParameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Object");
		
		UScramNetworkHelperComponent_Server_BroadcastScramEvent_Object_Params params {};
		params.ScramEvent = ScramEvent;
		params.pWorldContextObject = pWorldContextObject;
		params.pObjectParameter = pObjectParameter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3760
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Null
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_BroadcastScramEvent_Null(EScramEvent ScramEvent, class AActor* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Null");
		
		UScramNetworkHelperComponent_Server_BroadcastScramEvent_Null_Params params {};
		params.ScramEvent = ScramEvent;
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3590
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Collision
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, Const, NetValidate)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pOtherActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitLocation                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitNormal                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_BroadcastScramEvent_Collision(EScramEvent ScramEvent, class AActor* pWorldContextObject, class AActor* pOtherActor, const struct FVector& HitLocation, const struct FVector& HitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Collision");
		
		UScramNetworkHelperComponent_Server_BroadcastScramEvent_Collision_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003D33D0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Bowling
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBowlingEvent                                      BowlingEvent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pBowlingBall                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_BroadcastScramEvent_Bowling(EScramEvent ScramEvent, class AActor* pWorldContextObject, int32_t PlayerIndex, EBowlingEvent BowlingEvent, class AActor* pBowlingBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Bowling");
		
		UScramNetworkHelperComponent_Server_BroadcastScramEvent_Bowling_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003D3210
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Baseball
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBaseballEvent                                     BaseballEvent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ABaseballBall*                               pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_BroadcastScramEvent_Baseball(EScramEvent ScramEvent, class AActor* pWorldContextObject, int32_t PlayerIndex, EBaseballEvent BaseballEvent, class ABaseballBall* pBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Baseball");
		
		UScramNetworkHelperComponent_Server_BroadcastScramEvent_Baseball_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003D3110
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_BaseballCatcherCaught
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      pCatcher                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ABaseballBall*                               pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_BaseballCatcherCaught(class AActor* pCatcher, class ABaseballBall* pBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BaseballCatcherCaught");
		
		UScramNetworkHelperComponent_Server_BaseballCatcherCaught_Params params {};
		params.pCatcher = pCatcher;
		params.pBall = pBall;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2FE0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Server_BaseballBallPitched
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, Const, NetValidate)
	 * Parameters:
	 * 		class ABaseballThrowingGlove*                      pGlove                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ABaseballBall*                               pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ThrowSpeed                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Server_BaseballBallPitched(class ABaseballThrowingGlove* pGlove, class ABaseballBall* pBall, float ThrowSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Server_BaseballBallPitched");
		
		UScramNetworkHelperComponent_Server_BaseballBallPitched_Params params {};
		params.pGlove = pGlove;
		params.pBall = pBall;
		params.ThrowSpeed = ThrowSpeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2BD0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisNextPlayerToHitBall
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		int32_t                                            nextPlayerIndex                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AScramSportManagerTennis*                    pTennisManager                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_UpdateTennisNextPlayerToHitBall(int32_t nextPlayerIndex, class AScramSportManagerTennis* pTennisManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisNextPlayerToHitBall");
		
		UScramNetworkHelperComponent_Client_UpdateTennisNextPlayerToHitBall_Params params {};
		params.nextPlayerIndex = nextPlayerIndex;
		params.pTennisManager = pTennisManager;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2AD0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisBallTrajectory
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class ATennisBall*                                 pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTennisBallNetworkUpdate                    Update                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_UpdateTennisBallTrajectory(class ATennisBall* pBall, const struct FTennisBallNetworkUpdate& Update)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisBallTrajectory");
		
		UScramNetworkHelperComponent_Client_UpdateTennisBallTrajectory_Params params {};
		params.pBall = pBall;
		params.Update = Update;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2950
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisBallInPlay
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class ATennisBall*                                 pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATennisBall*                                 pLastBall                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           ballGeneration                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AScramSportManagerTennis*                    pTennisManager                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_UpdateTennisBallInPlay(class ATennisBall* pBall, class ATennisBall* pLastBall, uint32_t ballGeneration, class AScramSportManagerTennis* pTennisManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisBallInPlay");
		
		UScramNetworkHelperComponent_Client_UpdateTennisBallInPlay_Params params {};
		params.pBall = pBall;
		params.pLastBall = pLastBall;
		params.ballGeneration = ballGeneration;
		params.pTennisManager = pTennisManager;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2820
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateStickDrivenCatcherGlove
	 * 		Flags  -> (Net, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class ABaseballThrowingGlove*                      pGlove                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              leftRight                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              upDown                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_UpdateStickDrivenCatcherGlove(class ABaseballThrowingGlove* pGlove, float leftRight, float upDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateStickDrivenCatcherGlove");
		
		UScramNetworkHelperComponent_Client_UpdateStickDrivenCatcherGlove_Params params {};
		params.pGlove = pGlove;
		params.leftRight = leftRight;
		params.upDown = upDown;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D26C0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateBowlingBallTrajectory
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class ABowlingBall*                                pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScramTrajectory                            trajectory                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FBowlingThrow                               newThrow                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_UpdateBowlingBallTrajectory(class ABowlingBall* pBall, const struct FScramTrajectory& trajectory, const struct FBowlingThrow& newThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateBowlingBallTrajectory");
		
		UScramNetworkHelperComponent_Client_UpdateBowlingBallTrajectory_Params params {};
		params.pBall = pBall;
		params.trajectory = trajectory;
		params.newThrow = newThrow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D25C0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateBaseballBallTrajectory
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class ABaseballBall*                               pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBaseballNetworkUpdate                      Update                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_UpdateBaseballBallTrajectory(class ABaseballBall* pBall, const struct FBaseballNetworkUpdate& Update)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateBaseballBallTrajectory");
		
		UScramNetworkHelperComponent_Client_UpdateBaseballBallTrajectory_Params params {};
		params.pBall = pBall;
		params.Update = Update;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2360
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_StartFollowingTrajectoryWithSlowDown
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        pPrimitive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScramTrajectory                            trajectoryToFollow                                         (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              TimeScale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              maxStepDown                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_StartFollowingTrajectoryWithSlowDown(class AScramPrimitiveActor* pPrimitive, const struct FScramTrajectory& trajectoryToFollow, float TimeScale, float Delay, float Duration, float maxStepDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_StartFollowingTrajectoryWithSlowDown");
		
		UScramNetworkHelperComponent_Client_StartFollowingTrajectoryWithSlowDown_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003D2260
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_StartFollowingTrajectory
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        pPrimitive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScramTrajectory                            trajectoryToFollow                                         (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_StartFollowingTrajectory(class AScramPrimitiveActor* pPrimitive, const struct FScramTrajectory& trajectoryToFollow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_StartFollowingTrajectory");
		
		UScramNetworkHelperComponent_Client_StartFollowingTrajectory_Params params {};
		params.pPrimitive = pPrimitive;
		params.trajectoryToFollow = trajectoryToFollow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2160
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_SetTimeScale
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        pPrimitive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeScale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_SetTimeScale(class AScramPrimitiveActor* pPrimitive, float TimeScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_SetTimeScale");
		
		UScramNetworkHelperComponent_Client_SetTimeScale_Params params {};
		params.pPrimitive = pPrimitive;
		params.TimeScale = TimeScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2060
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_SetTennisBallRallyCount
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class ATennisBall*                                 pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            rallyCount                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_SetTennisBallRallyCount(class ATennisBall* pBall, int32_t rallyCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_SetTennisBallRallyCount");
		
		UScramNetworkHelperComponent_Client_SetTennisBallRallyCount_Params params {};
		params.pBall = pBall;
		params.rallyCount = rallyCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1F60
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_SetPlayerPreferences
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPlayer*                                pPlayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScramPlayerPreferences                     preferences                                                (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_SetPlayerPreferences(class AScramPlayer* pPlayer, const struct FScramPlayerPreferences& preferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_SetPlayerPreferences");
		
		UScramNetworkHelperComponent_Client_SetPlayerPreferences_Params params {};
		params.pPlayer = pPlayer;
		params.preferences = preferences;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1E20
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_SetPlayerPausedRemote
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPlayer*                                pPlayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGamePauseReason                                   reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               paused                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_SetPlayerPausedRemote(class AScramPlayer* pPlayer, EGamePauseReason reason, bool paused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_SetPlayerPausedRemote");
		
		UScramNetworkHelperComponent_Client_SetPlayerPausedRemote_Params params {};
		params.pPlayer = pPlayer;
		params.reason = reason;
		params.paused = paused;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1D70
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_SetFutureBallHit
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		struct FFutureBallHit                              FutureBallHit                                              (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_SetFutureBallHit(const struct FFutureBallHit& FutureBallHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_SetFutureBallHit");
		
		UScramNetworkHelperComponent_Client_SetFutureBallHit_Params params {};
		params.FutureBallHit = FutureBallHit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1C60
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_SetAvatarLook
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
	 * Parameters:
	 * 		class AScramPlayer*                                pPlayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAvatarLook                                 AvatarLook                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_SetAvatarLook(class AScramPlayer* pPlayer, const struct FAvatarLook& AvatarLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_SetAvatarLook");
		
		UScramNetworkHelperComponent_Client_SetAvatarLook_Params params {};
		params.pPlayer = pPlayer;
		params.AvatarLook = AvatarLook;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1B60
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_ServeBallSpawned
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPlayerServeTrigger*                    pServeTrigger                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AScramBall*                                  pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_ServeBallSpawned(class AScramPlayerServeTrigger* pServeTrigger, class AScramBall* pBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_ServeBallSpawned");
		
		UScramNetworkHelperComponent_Client_ServeBallSpawned_Params params {};
		params.pServeTrigger = pServeTrigger;
		params.pBall = pBall;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1A60
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_ServeBallGrabbed
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPlayerServeTrigger*                    pServeTrigger                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AScramBall*                                  pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_ServeBallGrabbed(class AScramPlayerServeTrigger* pServeTrigger, class AScramBall* pBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_ServeBallGrabbed");
		
		UScramNetworkHelperComponent_Client_ServeBallGrabbed_Params params {};
		params.pServeTrigger = pServeTrigger;
		params.pBall = pBall;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D19A0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteGameDone
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class AScramSportManagerBase*                      pSportManager                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_RemoteGameDone(class AScramSportManagerBase* pSportManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteGameDone");
		
		UScramNetworkHelperComponent_Client_RemoteGameDone_Params params {};
		params.pSportManager = pSportManager;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1950
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillTerminate
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 */
	void UScramNetworkHelperComponent::Client_RemoteApplicationWillTerminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillTerminate");
		
		UScramNetworkHelperComponent_Client_RemoteApplicationWillTerminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1900
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillEnterBackground
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 */
	void UScramNetworkHelperComponent::Client_RemoteApplicationWillEnterBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillEnterBackground");
		
		UScramNetworkHelperComponent_Client_RemoteApplicationWillEnterBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D18B0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillDeactivate
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 */
	void UScramNetworkHelperComponent::Client_RemoteApplicationWillDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillDeactivate");
		
		UScramNetworkHelperComponent_Client_RemoteApplicationWillDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1860
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationHasReactivated
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 */
	void UScramNetworkHelperComponent::Client_RemoteApplicationHasReactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationHasReactivated");
		
		UScramNetworkHelperComponent_Client_RemoteApplicationHasReactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1810
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationHasEnteredForeground
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 */
	void UScramNetworkHelperComponent::Client_RemoteApplicationHasEnteredForeground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationHasEnteredForeground");
		
		UScramNetworkHelperComponent_Client_RemoteApplicationHasEnteredForeground_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1710
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_ReceiveHeartbeat
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
	 * Parameters:
	 * 		uint16_t                                           remotePendingNetGeneration                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint16_t                                           remoteEstablishedNetGeneration                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_ReceiveHeartbeat(uint16_t remotePendingNetGeneration, uint16_t remoteEstablishedNetGeneration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_ReceiveHeartbeat");
		
		UScramNetworkHelperComponent_Client_ReceiveHeartbeat_Params params {};
		params.remotePendingNetGeneration = remotePendingNetGeneration;
		params.remoteEstablishedNetGeneration = remoteEstablishedNetGeneration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D16C0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_PingHandShake
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 */
	void UScramNetworkHelperComponent::Client_PingHandShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_PingHandShake");
		
		UScramNetworkHelperComponent_Client_PingHandShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1600
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_GrabberRelease
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      pGrabberActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_GrabberRelease(class AActor* pGrabberActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_GrabberRelease");
		
		UScramNetworkHelperComponent_Client_GrabberRelease_Params params {};
		params.pGrabberActor = pGrabberActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D14C0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_GrabberGrab
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      pGrabberActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pGrabbableActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               snap                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_GrabberGrab(class AActor* pGrabberActor, class AActor* pGrabbableActor, bool snap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_GrabberGrab");
		
		UScramNetworkHelperComponent_Client_GrabberGrab_Params params {};
		params.pGrabberActor = pGrabberActor;
		params.pGrabbableActor = pGrabbableActor;
		params.snap = snap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D12B0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_DrawDebugSphere
	 * 		Flags  -> (Net, Native, Event, Protected, HasDefaults, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize10                       Center                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Segments                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_DrawDebugSphere(class AActor* pWorldContextObject, const struct FVector_NetQuantize10& Center, float Radius, int32_t Segments, const struct FColor& Color, float LifeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_DrawDebugSphere");
		
		UScramNetworkHelperComponent_Client_DrawDebugSphere_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003D1170
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_DestroyPrimitive
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        pPrimitive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               playOut                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_DestroyPrimitive(class AScramPrimitiveActor* pPrimitive, bool playOut, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_DestroyPrimitive");
		
		UScramNetworkHelperComponent_Client_DestroyPrimitive_Params params {};
		params.pPrimitive = pPrimitive;
		params.playOut = playOut;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D10B0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_ClearTennisBallTrajectoryOwnership
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class ATennisBall*                                 pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_ClearTennisBallTrajectoryOwnership(class ATennisBall* pBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_ClearTennisBallTrajectoryOwnership");
		
		UScramNetworkHelperComponent_Client_ClearTennisBallTrajectoryOwnership_Params params {};
		params.pBall = pBall;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D0FF0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_ClearPausedTrajectory
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        pPrimitive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_ClearPausedTrajectory(class AScramPrimitiveActor* pPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_ClearPausedTrajectory");
		
		UScramNetworkHelperComponent_Client_ClearPausedTrajectory_Params params {};
		params.pPrimitive = pPrimitive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D0E70
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Tennis
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETennisEvent                                       TennisEvent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_BroadcastScramEvent_Tennis(EScramEvent ScramEvent, class AActor* pWorldContextObject, int32_t PlayerIndex, ETennisEvent TennisEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Tennis");
		
		UScramNetworkHelperComponent_Client_BroadcastScramEvent_Tennis_Params params {};
		params.ScramEvent = ScramEvent;
		params.pWorldContextObject = pWorldContextObject;
		params.PlayerIndex = PlayerIndex;
		params.TennisEvent = TennisEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D0D40
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Object
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     pObjectParameter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_BroadcastScramEvent_Object(EScramEvent ScramEvent, class AActor* pWorldContextObject, class UObject* pObjectParameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Object");
		
		UScramNetworkHelperComponent_Client_BroadcastScramEvent_Object_Params params {};
		params.ScramEvent = ScramEvent;
		params.pWorldContextObject = pWorldContextObject;
		params.pObjectParameter = pObjectParameter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D0C40
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Null
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_BroadcastScramEvent_Null(EScramEvent ScramEvent, class AActor* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Null");
		
		UScramNetworkHelperComponent_Client_BroadcastScramEvent_Null_Params params {};
		params.ScramEvent = ScramEvent;
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D0A70
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Collision
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pOtherActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitLocation                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitNormal                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_BroadcastScramEvent_Collision(EScramEvent ScramEvent, class AActor* pWorldContextObject, class AActor* pOtherActor, const struct FVector& HitLocation, const struct FVector& HitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Collision");
		
		UScramNetworkHelperComponent_Client_BroadcastScramEvent_Collision_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003D08B0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Bowling
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBowlingEvent                                      BowlingEvent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pBowlingBall                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_BroadcastScramEvent_Bowling(EScramEvent ScramEvent, class AActor* pWorldContextObject, int32_t PlayerIndex, EBowlingEvent BowlingEvent, class AActor* pBowlingBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Bowling");
		
		UScramNetworkHelperComponent_Client_BroadcastScramEvent_Bowling_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003D06F0
	 * 		Name   -> Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Baseball
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient, Const, NetValidate)
	 * Parameters:
	 * 		EScramEvent                                        ScramEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBaseballEvent                                     BaseballEvent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ABaseballBall*                               pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramNetworkHelperComponent::Client_BroadcastScramEvent_Baseball(EScramEvent ScramEvent, class AActor* pWorldContextObject, int32_t PlayerIndex, EBaseballEvent BaseballEvent, class ABaseballBall* pBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Baseball");
		
		UScramNetworkHelperComponent_Client_BroadcastScramEvent_Baseball_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramNetworkHelperComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramNetworkHelperComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramNetworkHelperComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPauseCapsule.ShowCapsule
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPauseCapsule::ShowCapsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPauseCapsule.ShowCapsule");
		
		AScramPauseCapsule_ShowCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPauseCapsule.HideCapsule
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPauseCapsule::HideCapsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPauseCapsule.HideCapsule");
		
		AScramPauseCapsule_HideCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPauseCapsule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPauseCapsule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramPauseCapsule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9560
	 * 		Name   -> Function SportsScramble.ScramPauseManager.QueuePauseEvent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              PauseEvent                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AScramPauseManager::STATIC_QueuePauseEvent(const class FScriptDelegate& PauseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPauseManager.QueuePauseEvent");
		
		AScramPauseManager_QueuePauseEvent_Params params {};
		params.PauseEvent = PauseEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPauseManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPauseManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramPauseManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DA0F0
	 * 		Name   -> Function SportsScramble.ScramPlayer.SetWorldTimeDilation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              timeDilation                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayer::SetWorldTimeDilation(float timeDilation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.SetWorldTimeDilation");
		
		AScramPlayer_SetWorldTimeDilation_Params params {};
		params.timeDilation = timeDilation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DA070
	 * 		Name   -> Function SportsScramble.ScramPlayer.SetScriptedFadeOutOpacity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Opacity                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayer::SetScriptedFadeOutOpacity(float Opacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.SetScriptedFadeOutOpacity");
		
		AScramPlayer_SetScriptedFadeOutOpacity_Params params {};
		params.Opacity = Opacity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9FE0
	 * 		Name   -> Function SportsScramble.ScramPlayer.SetNetVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               netVisible                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayer::SetNetVisible(bool netVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.SetNetVisible");
		
		AScramPlayer_SetNetVisible_Params params {};
		params.netVisible = netVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPlayer.SetAvatarMaterials
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAvatarLook                                 AvatarLook                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AScramPlayer::SetAvatarMaterials(const struct FAvatarLook& AvatarLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.SetAvatarMaterials");
		
		AScramPlayer_SetAvatarMaterials_Params params {};
		params.AvatarLook = AvatarLook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9E00
	 * 		Name   -> Function SportsScramble.ScramPlayer.SetAnchor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  anchor                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        minPlayArea                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        maxPlayArea                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        maxHazardArea                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AScramPlayer::SetAnchor(const struct FTransform& anchor, const struct FBox& minPlayArea, const struct FBox& maxPlayArea, const struct FBox& maxHazardArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.SetAnchor");
		
		AScramPlayer_SetAnchor_Params params {};
		params.anchor = anchor;
		params.minPlayArea = minPlayArea;
		params.maxPlayArea = maxPlayArea;
		params.maxHazardArea = maxHazardArea;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9CB0
	 * 		Name   -> Function SportsScramble.ScramPlayer.Server_UpdateTransforms
	 * 		Flags  -> (Net, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FPlayerTransforms                           Transforms                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           updateCounter                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayer::Server_UpdateTransforms(const struct FPlayerTransforms& Transforms, uint32_t updateCounter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Server_UpdateTransforms");
		
		AScramPlayer_Server_UpdateTransforms_Params params {};
		params.Transforms = Transforms;
		params.updateCounter = updateCounter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9C00
	 * 		Name   -> Function SportsScramble.ScramPlayer.Server_UpdatePlayAreaDiagonal
	 * 		Flags  -> (Net, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		float                                              newPlayAreaDiagonal                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayer::Server_UpdatePlayAreaDiagonal(float newPlayAreaDiagonal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Server_UpdatePlayAreaDiagonal");
		
		AScramPlayer_Server_UpdatePlayAreaDiagonal_Params params {};
		params.newPlayAreaDiagonal = newPlayAreaDiagonal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9BB0
	 * 		Name   -> Function SportsScramble.ScramPlayer.Server_SpawnHands
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void AScramPlayer::Server_SpawnHands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Server_SpawnHands");
		
		AScramPlayer_Server_SpawnHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9990
	 * 		Name   -> Function SportsScramble.ScramPlayer.Server_SetTennisReturnData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FPlayerTennisReturn                         newReturnData                                              (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AScramPlayer::Server_SetTennisReturnData(const struct FPlayerTennisReturn& newReturnData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Server_SetTennisReturnData");
		
		AScramPlayer_Server_SetTennisReturnData_Params params {};
		params.newReturnData = newReturnData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9940
	 * 		Name   -> Function SportsScramble.ScramPlayer.Server_SetPlayerReadyForMatch
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable, NetValidate)
	 */
	void AScramPlayer::Server_SetPlayerReadyForMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Server_SetPlayerReadyForMatch");
		
		AScramPlayer_Server_SetPlayerReadyForMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9880
	 * 		Name   -> Function SportsScramble.ScramPlayer.Server_SetNetVisible
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               netVisible                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayer::Server_SetNetVisible(bool netVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Server_SetNetVisible");
		
		AScramPlayer_Server_SetNetVisible_Params params {};
		params.netVisible = netVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9830
	 * 		Name   -> Function SportsScramble.ScramPlayer.Server_ClientSelectedAvatar
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void AScramPlayer::Server_ClientSelectedAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Server_ClientSelectedAvatar");
		
		AScramPlayer_Server_ClientSelectedAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D96B0
	 * 		Name   -> Function SportsScramble.ScramPlayer.SavePreferences
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayer::SavePreferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.SavePreferences");
		
		AScramPlayer_SavePreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9610
	 * 		Name   -> Function SportsScramble.ScramPlayer.ResetAnchor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayer::ResetAnchor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.ResetAnchor");
		
		AScramPlayer_ResetAnchor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPlayer.RecenterDetected
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramPlayer::RecenterDetected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.RecenterDetected");
		
		AScramPlayer_RecenterDetected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9490
	 * 		Name   -> Function SportsScramble.ScramPlayer.PlayerResume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGamePauseReason                                   reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               multiplayer                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayer::PlayerResume(EGamePauseReason reason, bool multiplayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.PlayerResume");
		
		AScramPlayer_PlayerResume_Params params {};
		params.reason = reason;
		params.multiplayer = multiplayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D93C0
	 * 		Name   -> Function SportsScramble.ScramPlayer.PlayerPause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGamePauseReason                                   reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               multiplayer                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayer::PlayerPause(EGamePauseReason reason, bool multiplayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.PlayerPause");
		
		AScramPlayer_PlayerPause_Params params {};
		params.reason = reason;
		params.multiplayer = multiplayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9330
	 * 		Name   -> Function SportsScramble.ScramPlayer.OnRep_TennisReturnData
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AScramPlayer::OnRep_TennisReturnData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.OnRep_TennisReturnData");
		
		AScramPlayer_OnRep_TennisReturnData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9310
	 * 		Name   -> Function SportsScramble.ScramPlayer.OnRep_NetVisible
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AScramPlayer::OnRep_NetVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.OnRep_NetVisible");
		
		AScramPlayer_OnRep_NetVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D92F0
	 * 		Name   -> Function SportsScramble.ScramPlayer.OnRep_ClientTransforms
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AScramPlayer::OnRep_ClientTransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.OnRep_ClientTransforms");
		
		AScramPlayer_OnRep_ClientTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D92B0
	 * 		Name   -> Function SportsScramble.ScramPlayer.OnRep_ClientPlayAreaDiagonal
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AScramPlayer::OnRep_ClientPlayAreaDiagonal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.OnRep_ClientPlayAreaDiagonal");
		
		AScramPlayer_OnRep_ClientPlayAreaDiagonal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9290
	 * 		Name   -> Function SportsScramble.ScramPlayer.OnRecenter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayer::OnRecenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.OnRecenter");
		
		AScramPlayer_OnRecenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPlayer.OnPlayerOutOfBoundary
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  ReturnTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AScramPlayer::OnPlayerOutOfBoundary(const struct FTransform& ReturnTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.OnPlayerOutOfBoundary");
		
		AScramPlayer_OnPlayerOutOfBoundary_Params params {};
		params.ReturnTransform = ReturnTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPlayer.OnPlayerEnterBoundary
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramPlayer::OnPlayerEnterBoundary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.OnPlayerEnterBoundary");
		
		AScramPlayer_OnPlayerEnterBoundary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9130
	 * 		Name   -> Function SportsScramble.ScramPlayer.NetSetPreferences
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScramPlayerPreferences                     preferences                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AScramPlayer::NetSetPreferences(const struct FScramPlayerPreferences& preferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.NetSetPreferences");
		
		AScramPlayer_NetSetPreferences_Params params {};
		params.preferences = preferences;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9110
	 * 		Name   -> Function SportsScramble.ScramPlayer.LocalAvatarSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayer::LocalAvatarSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.LocalAvatarSelected");
		
		AScramPlayer_LocalAvatarSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D90F0
	 * 		Name   -> Function SportsScramble.ScramPlayer.LoadPreferences
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayer::LoadPreferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.LoadPreferences");
		
		AScramPlayer_LoadPreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D90C0
	 * 		Name   -> Function SportsScramble.ScramPlayer.IsPlayerRestricted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPlayer::IsPlayerRestricted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.IsPlayerRestricted");
		
		AScramPlayer_IsPlayerRestricted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9030
	 * 		Name   -> Function SportsScramble.ScramPlayer.IsPlayerPausedExcluded
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EGamePauseReason                                   exludedReason                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AScramPlayer::IsPlayerPausedExcluded(EGamePauseReason exludedReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.IsPlayerPausedExcluded");
		
		AScramPlayer_IsPlayerPausedExcluded_Params params {};
		params.exludedReason = exludedReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9000
	 * 		Name   -> Function SportsScramble.ScramPlayer.IsPlayerPaused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPlayer::IsPlayerPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.IsPlayerPaused");
		
		AScramPlayer_IsPlayerPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8FD0
	 * 		Name   -> Function SportsScramble.ScramPlayer.IsPlayerFadedOut
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPlayer::IsPlayerFadedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.IsPlayerFadedOut");
		
		AScramPlayer_IsPlayerFadedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8FA0
	 * 		Name   -> Function SportsScramble.ScramPlayer.IsInitComplete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool AScramPlayer::IsInitComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.IsInitComplete");
		
		AScramPlayer_IsInitComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0F70
	 * 		Name   -> Function SportsScramble.ScramPlayer.HasBegunPlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPlayer::HasBegunPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.HasBegunPlay");
		
		AScramPlayer_HasBegunPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8F00
	 * 		Name   -> Function SportsScramble.ScramPlayer.GetWorldTimeDilation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AScramPlayer::GetWorldTimeDilation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetWorldTimeDilation");
		
		AScramPlayer_GetWorldTimeDilation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8ED0
	 * 		Name   -> Function SportsScramble.ScramPlayer.GetScriptedFadeOutOpacity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AScramPlayer::GetScriptedFadeOutOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetScriptedFadeOutOpacity");
		
		AScramPlayer_GetScriptedFadeOutOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8EA0
	 * 		Name   -> Function SportsScramble.ScramPlayer.GetPreferredHandedness
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EScramHandedness AScramPlayer::GetPreferredHandedness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetPreferredHandedness");
		
		AScramPlayer_GetPreferredHandedness_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8E60
	 * 		Name   -> Function SportsScramble.ScramPlayer.GetPreferences
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FScramPlayerPreferences AScramPlayer::GetPreferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetPreferences");
		
		AScramPlayer_GetPreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8DF0
	 * 		Name   -> Function SportsScramble.ScramPlayer.GetPlayAreaTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform AScramPlayer::GetPlayAreaTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetPlayAreaTransform");
		
		AScramPlayer_GetPlayAreaTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8DB0
	 * 		Name   -> Function SportsScramble.ScramPlayer.GetOrthogonalAnchor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform AScramPlayer::GetOrthogonalAnchor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetOrthogonalAnchor");
		
		AScramPlayer_GetOrthogonalAnchor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8D20
	 * 		Name   -> Function SportsScramble.ScramPlayer.GetHand
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EScramHandedness                                   Handedness                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AScramPlayerHand* AScramPlayer::GetHand(EScramHandedness Handedness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetHand");
		
		AScramPlayer_GetHand_Params params {};
		params.Handedness = Handedness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8BF0
	 * 		Name   -> Function SportsScramble.ScramPlayer.GetDominantStroke
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EScramStroke AScramPlayer::GetDominantStroke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetDominantStroke");
		
		AScramPlayer_GetDominantStroke_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8BC0
	 * 		Name   -> Function SportsScramble.ScramPlayer.GetDominantHandedness
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EScramHandedness AScramPlayer::GetDominantHandedness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetDominantHandedness");
		
		AScramPlayer_GetDominantHandedness_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8B80
	 * 		Name   -> Function SportsScramble.ScramPlayer.GetAnchor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform AScramPlayer::GetAnchor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.GetAnchor");
		
		AScramPlayer_GetAnchor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8A20
	 * 		Name   -> Function SportsScramble.ScramPlayer.ForceChangeGrabbable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      NewGrabbableClass                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AScramPlayerHand*                            SpecificHand                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AScramPrimitiveGrabbable* AScramPlayer::ForceChangeGrabbable(class UClass* NewGrabbableClass, class AScramPlayerHand* SpecificHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.ForceChangeGrabbable");
		
		AScramPlayer_ForceChangeGrabbable_Params params {};
		params.NewGrabbableClass = NewGrabbableClass;
		params.SpecificHand = SpecificHand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8A00
	 * 		Name   -> Function SportsScramble.ScramPlayer.EnsureHasHands
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayer::EnsureHasHands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.EnsureHasHands");
		
		AScramPlayer_EnsureHasHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8860
	 * 		Name   -> Function SportsScramble.ScramPlayer.DestroyAllGrabbables
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               playOut                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayer::DestroyAllGrabbables(bool playOut, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.DestroyAllGrabbables");
		
		AScramPlayer_DestroyAllGrabbables_Params params {};
		params.playOut = playOut;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8820
	 * 		Name   -> Function SportsScramble.ScramPlayer.DeferredInit
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AScramPlayer::DeferredInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.DeferredInit");
		
		AScramPlayer_DeferredInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D86E0
	 * 		Name   -> Function SportsScramble.ScramPlayer.ConstrainToPlayArea
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AScramPlayer::ConstrainToPlayArea(const struct FVector& Point, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.ConstrainToPlayArea");
		
		AScramPlayer_ConstrainToPlayArea_Params params {};
		params.Point = Point;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8690
	 * 		Name   -> Function SportsScramble.ScramPlayer.Client_ServerSelectedAvatar
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
	 */
	void AScramPlayer::Client_ServerSelectedAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.Client_ServerSelectedAvatar");
		
		AScramPlayer_Client_ServerSelectedAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8580
	 * 		Name   -> Function SportsScramble.ScramPlayer.ChangeAvatarBlueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      avatarClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PlaySpawnAnimation                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AScramPlayer::ChangeAvatarBlueprint(class UClass* avatarClass, bool PlaySpawnAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.ChangeAvatarBlueprint");
		
		AScramPlayer_ChangeAvatarBlueprint_Params params {};
		params.avatarClass = avatarClass;
		params.PlaySpawnAnimation = PlaySpawnAnimation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8550
	 * 		Name   -> Function SportsScramble.ScramPlayer.CanBeSeen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPlayer::CanBeSeen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayer.CanBeSeen");
		
		AScramPlayer_CanBeSeen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9650
	 * 		Name   -> Function SportsScramble.ScramPlayerBoundary.ResetPlayerAnchor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayerBoundary::ResetPlayerAnchor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerBoundary.ResetPlayerAnchor");
		
		AScramPlayerBoundary_ResetPlayerAnchor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9630
	 * 		Name   -> Function SportsScramble.ScramPlayerBoundary.ResetHazardLine
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayerBoundary::ResetHazardLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerBoundary.ResetHazardLine");
		
		AScramPlayerBoundary_ResetHazardLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPlayerBoundary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPlayerBoundary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramPlayerBoundary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPlayerCameraManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPlayerCameraManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramPlayerCameraManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DA2A0
	 * 		Name   -> Function SportsScramble.ScramPlayerController.UnpauseLocalHeartbeat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerController::STATIC_UnpauseLocalHeartbeat(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.UnpauseLocalHeartbeat");
		
		AScramPlayerController_UnpauseLocalHeartbeat_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DA230
	 * 		Name   -> Function SportsScramble.ScramPlayerController.StopLocalHeartbeat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerController::STATIC_StopLocalHeartbeat(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.StopLocalHeartbeat");
		
		AScramPlayerController_StopLocalHeartbeat_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DA210
	 * 		Name   -> Function SportsScramble.ScramPlayerController.StopHeartbeat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayerController::StopHeartbeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.StopHeartbeat");
		
		AScramPlayerController_StopHeartbeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DA1F0
	 * 		Name   -> Function SportsScramble.ScramPlayerController.StartHeartbeat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayerController::StartHeartbeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.StartHeartbeat");
		
		AScramPlayerController_StartHeartbeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9750
	 * 		Name   -> Function SportsScramble.ScramPlayerController.ServerSetSportPreferences
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	 * Parameters:
	 * 		struct FScramSportPreferences                      clientPreferences                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerController::ServerSetSportPreferences(const struct FScramSportPreferences& clientPreferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.ServerSetSportPreferences");
		
		AScramPlayerController_ServerSetSportPreferences_Params params {};
		params.clientPreferences = clientPreferences;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9690
	 * 		Name   -> Function SportsScramble.ScramPlayerController.ResumeHeartbeatEvents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayerController::ResumeHeartbeatEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.ResumeHeartbeatEvents");
		
		AScramPlayerController_ResumeHeartbeatEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9670
	 * 		Name   -> Function SportsScramble.ScramPlayerController.RestartHeartbeat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayerController::RestartHeartbeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.RestartHeartbeat");
		
		AScramPlayerController_RestartHeartbeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9350
	 * 		Name   -> Function SportsScramble.ScramPlayerController.PauseLocalHeartbeat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerController::STATIC_PauseLocalHeartbeat(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.PauseLocalHeartbeat");
		
		AScramPlayerController_PauseLocalHeartbeat_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8F70
	 * 		Name   -> Function SportsScramble.ScramPlayerController.HasStartedHeartbeat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPlayerController::HasStartedHeartbeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.HasStartedHeartbeat");
		
		AScramPlayerController_HasStartedHeartbeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8800
	 * 		Name   -> Function SportsScramble.ScramPlayerController.DEBUGForceHeartbeatTimeout
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayerController::DEBUGForceHeartbeatTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.DEBUGForceHeartbeatTimeout");
		
		AScramPlayerController_DEBUGForceHeartbeatTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8640
	 * 		Name   -> Function SportsScramble.ScramPlayerController.ClientRequestSportPreferences
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable, NetValidate)
	 */
	void AScramPlayerController::ClientRequestSportPreferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerController.ClientRequestSportPreferences");
		
		AScramPlayerController_ClientRequestSportPreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DA170
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.SpawnAndGrabActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      GrabbableClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerHand::SpawnAndGrabActor(class UClass* GrabbableClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.SpawnAndGrabActor");
		
		AScramPlayerHand_SpawnAndGrabActor_Params params {};
		params.GrabbableClass = GrabbableClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D96D0
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.ServerGrabSpawnedActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      GrabbableActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerHand::ServerGrabSpawnedActor(class AActor* GrabbableActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.ServerGrabSpawnedActor");
		
		AScramPlayerHand_ServerGrabSpawnedActor_Params params {};
		params.GrabbableActor = GrabbableActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9A50
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.Server_SpawnAndGrabActor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerHand::Server_SpawnAndGrabActor(class UClass* ActorClass, const struct FTransform& SpawnTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.Server_SpawnAndGrabActor");
		
		AScramPlayerHand_Server_SpawnAndGrabActor_Params params {};
		params.ActorClass = ActorClass;
		params.SpawnTransform = SpawnTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D92D0
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.OnRep_ClientSpawnedActor
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AScramPlayerHand::OnRep_ClientSpawnedActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.OnRep_ClientSpawnedActor");
		
		AScramPlayerHand_OnRep_ClientSpawnedActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D91D0
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.OnGrabbableHit
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerHand::OnGrabbableHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.OnGrabbableHit");
		
		AScramPlayerHand_OnGrabbableHit_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8F30
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.GrabberIsTracked
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPlayerHand::GrabberIsTracked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.GrabberIsTracked");
		
		AScramPlayerHand_GrabberIsTracked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8E30
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.GetPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AScramPlayer* AScramPlayerHand::GetPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.GetPlayer");
		
		AScramPlayerHand_GetPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8CE0
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.GetGrabberVerticalStroke
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EScramStroke AScramPlayerHand::GetGrabberVerticalStroke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.GetGrabberVerticalStroke");
		
		AScramPlayerHand_GetGrabberVerticalStroke_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8CA0
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.GetGrabberStroke
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EScramStroke AScramPlayerHand::GetGrabberStroke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.GetGrabberStroke");
		
		AScramPlayerHand_GetGrabberStroke_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8C60
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.GetGrabberHorizontalStroke
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EScramStroke AScramPlayerHand::GetGrabberHorizontalStroke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.GetGrabberHorizontalStroke");
		
		AScramPlayerHand_GetGrabberHorizontalStroke_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8C20
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.GetGrabberHandedness
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EScramHandedness AScramPlayerHand::GetGrabberHandedness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.GetGrabberHandedness");
		
		AScramPlayerHand_GetGrabberHandedness_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8B60
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.ForceReleaseCurrentGrabbable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayerHand::ForceReleaseCurrentGrabbable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.ForceReleaseCurrentGrabbable");
		
		AScramPlayerHand_ForceReleaseCurrentGrabbable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8AE0
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.ForceGrab
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      GrabbableActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerHand::ForceGrab(class AActor* GrabbableActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.ForceGrab");
		
		AScramPlayerHand_ForceGrab_Params params {};
		params.GrabbableActor = GrabbableActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8930
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.DestroyCurrentGrabbable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               playOut                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerHand::DestroyCurrentGrabbable(bool playOut, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.DestroyCurrentGrabbable");
		
		AScramPlayerHand_DestroyCurrentGrabbable_Params params {};
		params.playOut = playOut;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8840
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.DeferredInit
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AScramPlayerHand::DeferredInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.DeferredInit");
		
		AScramPlayerHand_DeferredInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D87D0
	 * 		Name   -> Function SportsScramble.ScramPlayerHand.CurrentGrabbableActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class AActor* AScramPlayerHand::CurrentGrabbableActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerHand.CurrentGrabbableActor");
		
		AScramPlayerHand_CurrentGrabbableActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPlayerHand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPlayerHand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramPlayerHand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPlayerHandPossessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPlayerHandPossessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramPlayerHandPossessor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPlayerTrigger.OnPlayerStay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerTrigger::OnPlayerStay(class AScramPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerTrigger.OnPlayerStay");
		
		AScramPlayerTrigger_OnPlayerStay_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPlayerTrigger.OnPlayerExit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerTrigger::OnPlayerExit(class AScramPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerTrigger.OnPlayerExit");
		
		AScramPlayerTrigger_OnPlayerExit_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPlayerTrigger.OnPlayerEnter
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerTrigger::OnPlayerEnter(class AScramPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerTrigger.OnPlayerEnter");
		
		AScramPlayerTrigger_OnPlayerEnter_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPlayerTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPlayerTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramPlayerTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.Show
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramPlayerServeTrigger::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.Show");
		
		AScramPlayerServeTrigger_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD5F0
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.SetPlayerServing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               shouldServe                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerServeTrigger::SetPlayerServing(bool shouldServe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.SetPlayerServing");
		
		AScramPlayerServeTrigger_SetPlayerServing_Params params {};
		params.shouldServe = shouldServe;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD560
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.SetAllowRespawn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               canSpawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerServeTrigger::SetAllowRespawn(bool canSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.SetAllowRespawn");
		
		AScramPlayerServeTrigger_SetAllowRespawn_Params params {};
		params.canSpawn = canSpawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.ServeBallSpawned
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerServeTrigger::ServeBallSpawned(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.ServeBallSpawned");
		
		AScramPlayerServeTrigger_ServeBallSpawned_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.ServeBallGrabbed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerServeTrigger::ServeBallGrabbed(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.ServeBallGrabbed");
		
		AScramPlayerServeTrigger_ServeBallGrabbed_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD390
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.RespawnBall
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayerServeTrigger::RespawnBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.RespawnBall");
		
		AScramPlayerServeTrigger_RespawnBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD370
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.ResetServeTrigger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayerServeTrigger::ResetServeTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.ResetServeTrigger");
		
		AScramPlayerServeTrigger_ResetServeTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD2F0
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.OnRep_ClientBall
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AScramPlayerServeTrigger::OnRep_ClientBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.OnRep_ClientBall");
		
		AScramPlayerServeTrigger_OnRep_ClientBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.Hide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramPlayerServeTrigger::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.Hide");
		
		AScramPlayerServeTrigger_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DCEF0
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.HandleServeTrajectory
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerServeTrigger::HandleServeTrajectory(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.HandleServeTrajectory");
		
		AScramPlayerServeTrigger_HandleServeTrajectory_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DCE30
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.HandlePostHit
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerServeTrigger::HandlePostHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.HandlePostHit");
		
		AScramPlayerServeTrigger_HandlePostHit_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DCD70
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.HandleBallGrabbed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramPlayerServeTrigger::HandleBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.HandleBallGrabbed");
		
		AScramPlayerServeTrigger_HandleBallGrabbed_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC5F0
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.GetPlayerServing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPlayerServeTrigger::GetPlayerServing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.GetPlayerServing");
		
		AScramPlayerServeTrigger_GetPlayerServing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC410
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.GetBall
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class AScramBall* AScramPlayerServeTrigger::GetBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.GetBall");
		
		AScramPlayerServeTrigger_GetBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC3E0
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.GetAllowRespawn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramPlayerServeTrigger::GetAllowRespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.GetAllowRespawn");
		
		AScramPlayerServeTrigger_GetAllowRespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC3C0
	 * 		Name   -> Function SportsScramble.ScramPlayerServeTrigger.DespawnCurrentBall
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramPlayerServeTrigger::DespawnCurrentBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramPlayerServeTrigger.DespawnCurrentBall");
		
		AScramPlayerServeTrigger_DespawnCurrentBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPlayerServeTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPlayerServeTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramPlayerServeTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramReturnTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramReturnTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramReturnTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD850
	 * 		Name   -> Function SportsScramble.ScramSaveData.WipeSaveData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UScramSaveData::WipeSaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.WipeSaveData");
		
		UScramSaveData_WipeSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD830
	 * 		Name   -> Function SportsScramble.ScramSaveData.WipeHighScoreData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UScramSaveData::WipeHighScoreData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.WipeHighScoreData");
		
		UScramSaveData_WipeHighScoreData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD7A0
	 * 		Name   -> Function SportsScramble.ScramSaveData.UnlockTraining
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TrainingName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramSaveData::UnlockTraining(const class FName& TrainingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.UnlockTraining");
		
		UScramSaveData_UnlockTraining_Params params {};
		params.TrainingName = TrainingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD4A0
	 * 		Name   -> Function SportsScramble.ScramSaveData.SaveNamedValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramSaveData::SaveNamedValue(const class FName& Name, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.SaveNamedValue");
		
		UScramSaveData_SaveNamedValue_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DD3D0
	 * 		Name   -> Function SportsScramble.ScramSaveData.SaveHighScore
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        GameName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              score                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramSaveData::SaveHighScore(const class FName& GameName, float score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.SaveHighScore");
		
		UScramSaveData_SaveHighScore_Params params {};
		params.GameName = GameName;
		params.score = score;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DCC60
	 * 		Name   -> Function SportsScramble.ScramSaveData.GetTrainingProgression
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        TrainingName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ETrainingProgression UScramSaveData::GetTrainingProgression(const class FName& TrainingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.GetTrainingProgression");
		
		UScramSaveData_GetTrainingProgression_Params params {};
		params.TrainingName = TrainingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC560
	 * 		Name   -> Function SportsScramble.ScramSaveData.GetNamedValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UScramSaveData::GetNamedValue(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.GetNamedValue");
		
		UScramSaveData_GetNamedValue_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC4C0
	 * 		Name   -> Function SportsScramble.ScramSaveData.GetHighScore
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        GameName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UScramSaveData::GetHighScore(const class FName& GameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.GetHighScore");
		
		UScramSaveData_GetHighScore_Params params {};
		params.GameName = GameName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DC2A0
	 * 		Name   -> Function SportsScramble.ScramSaveData.CompleteTraining
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TrainingName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramSaveData::CompleteTraining(const class FName& TrainingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSaveData.CompleteTraining");
		
		UScramSaveData_CompleteTraining_Params params {};
		params.TrainingName = TrainingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramSaveData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramSaveData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramSaveData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramSceneComponentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramSceneComponentInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramSceneComponentInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramSpectatorPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramSpectatorPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramSpectatorPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0EC0
	 * 		Name   -> Function SportsScramble.ScramSportManagerBase.StopSavingSportState
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AScramSportManagerBase::StopSavingSportState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.StopSavingSportState");
		
		AScramSportManagerBase_StopSavingSportState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0E20
	 * 		Name   -> Function SportsScramble.ScramSportManagerBase.SetSelectableBallClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBase::SetSelectableBallClass(class UClass* BallClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.SetSelectableBallClass");
		
		AScramSportManagerBase_SetSelectableBallClass_Params params {};
		params.BallClass = BallClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerBase.ServerReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramSportManagerBase::ServerReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.ServerReady");
		
		AScramSportManagerBase_ServerReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0800
	 * 		Name   -> Function SportsScramble.ScramSportManagerBase.SaveSportState
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AScramSportManagerBase::SaveSportState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.SaveSportState");
		
		AScramSportManagerBase_SaveSportState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E04E0
	 * 		Name   -> Function SportsScramble.ScramSportManagerBase.OnHeartbeatSustained
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AScramPlayerController*                      pPlayerController                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBase::OnHeartbeatSustained(class AScramPlayerController* pPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.OnHeartbeatSustained");
		
		AScramSportManagerBase_OnHeartbeatSustained_Params params {};
		params.pPlayerController = pPlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0460
	 * 		Name   -> Function SportsScramble.ScramSportManagerBase.OnHeartbeatDisconnected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AScramPlayerController*                      pPlayerController                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBase::OnHeartbeatDisconnected(class AScramPlayerController* pPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.OnHeartbeatDisconnected");
		
		AScramSportManagerBase_OnHeartbeatDisconnected_Params params {};
		params.pPlayerController = pPlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerBase.OnGameDone
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramSportManagerBase::OnGameDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.OnGameDone");
		
		AScramSportManagerBase_OnGameDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E02C0
	 * 		Name   -> Function SportsScramble.ScramSportManagerBase.LocalGameDone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramSportManagerBase::LocalGameDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.LocalGameDone");
		
		AScramSportManagerBase_LocalGameDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFF60
	 * 		Name   -> Function SportsScramble.ScramSportManagerBase.GetPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* AScramSportManagerBase::GetPlayer(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.GetPlayer");
		
		AScramSportManagerBase_GetPlayer_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFE70
	 * 		Name   -> Function SportsScramble.ScramSportManagerBase.GetOtherPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* AScramSportManagerBase::GetOtherPlayer(class AActor* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBase.GetOtherPlayer");
		
		AScramSportManagerBase_GetOtherPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramSportManagerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramSportManagerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramSportManagerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0D80
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.SetScrambleBallProperties
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FBaseballBallScrambleProperties>     Properties                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::SetScrambleBallProperties(TArray<struct FBaseballBallScrambleProperties> Properties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.SetScrambleBallProperties");
		
		AScramSportManagerBaseball_SetScrambleBallProperties_Params params {};
		params.Properties = Properties;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0CC0
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.SetBattingSkillOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               shouldOverride                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EScramSkill                                        skillLevel                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::SetBattingSkillOverride(bool shouldOverride, EScramSkill skillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.SetBattingSkillOverride");
		
		AScramSportManagerBaseball_SetBattingSkillOverride_Params params {};
		params.shouldOverride = shouldOverride;
		params.skillLevel = skillLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0C40
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.SetBall
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABaseballBall*                               Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::SetBall(class ABaseballBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.SetBall");
		
		AScramSportManagerBaseball_SetBall_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0AF0
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.SetAllowPitch
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               allowPitch                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::SetAllowPitch(bool allowPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.SetAllowPitch");
		
		AScramSportManagerBaseball_SetAllowPitch_Params params {};
		params.allowPitch = allowPitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0820
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.SendBaseballEvent
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		EBaseballEvent                                     BaseballEvent                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ABaseballBall*                               Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::SendBaseballEvent(EBaseballEvent BaseballEvent, const struct FVector& Location, class ABaseballBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.SendBaseballEvent");
		
		AScramSportManagerBaseball_SendBaseballEvent_Params params {};
		params.BaseballEvent = BaseballEvent;
		params.Location = Location;
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.SaveBaseballState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            VisitorsScore                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HomeScore                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Inning                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TopOfInning                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FirstPitchOfInning                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Outs                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Strikes                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      BatterInstrument                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMittSpawnInfo>                      PitcherScrambleOptions                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::SaveBaseballState(int32_t* VisitorsScore, int32_t* HomeScore, int32_t* Inning, bool* TopOfInning, bool* FirstPitchOfInning, int32_t* Outs, int32_t* Strikes, class UClass** BatterInstrument, TArray<struct FMittSpawnInfo>* PitcherScrambleOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.SaveBaseballState");
		
		AScramSportManagerBaseball_SaveBaseballState_Params params {};
		
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

	/**
	 * Function:
	 * 		RVA    -> 0x003E06C0
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.RestartGame
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               RestoringGame                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::RestartGame(bool RestoringGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.RestartGame");
		
		AScramSportManagerBaseball_RestartGame_Params params {};
		params.RestoringGame = RestoringGame;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0580
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.OnStrikeZoneHit
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ABaseballBall*                               pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EScramStrikeResult                                 Result                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::OnStrikeZoneHit(class ABaseballBall* pBall, EScramStrikeResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.OnStrikeZoneHit");
		
		AScramSportManagerBaseball_OnStrikeZoneHit_Params params {};
		params.pBall = pBall;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.OnRunnerSpawned
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBaseballRunnerAI*                      runner                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::OnRunnerSpawned(class AScramBaseballRunnerAI* runner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.OnRunnerSpawned");
		
		AScramSportManagerBaseball_OnRunnerSpawned_Params params {};
		params.runner = runner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E02E0
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.OnBallHit
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.OnBallHit");
		
		AScramSportManagerBaseball_OnBallHit_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.OnBallDeleted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ABaseballBall*                               Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::OnBallDeleted(class ABaseballBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.OnBallDeleted");
		
		AScramSportManagerBaseball_OnBallDeleted_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.LoadBaseballState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            VisitorsScore                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HomeScore                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Inning                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TopOfInning                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FirstPitchOfInning                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Outs                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Strikes                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      BatterInstrument                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMittSpawnInfo>                      PitcherScrambleOptions                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::LoadBaseballState(int32_t VisitorsScore, int32_t HomeScore, int32_t Inning, bool TopOfInning, bool FirstPitchOfInning, int32_t Outs, int32_t Strikes, class UClass* BatterInstrument, TArray<struct FMittSpawnInfo> PitcherScrambleOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.LoadBaseballState");
		
		AScramSportManagerBaseball_LoadBaseballState_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003E0290
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.GetUnclassifiedBalls
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class ABaseballBall*> AScramSportManagerBaseball::GetUnclassifiedBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetUnclassifiedBalls");
		
		AScramSportManagerBaseball_GetUnclassifiedBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E00C0
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.GetScrambleBallProperties
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FBaseballBallScrambleProperties> AScramSportManagerBaseball::GetScrambleBallProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetScrambleBallProperties");
		
		AScramSportManagerBaseball_GetScrambleBallProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFF30
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.GetPitcher
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* AScramSportManagerBaseball::GetPitcher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetPitcher");
		
		AScramSportManagerBaseball_GetPitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFF00
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.GetPitchedBalls
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class ABaseballBall*> AScramSportManagerBaseball::GetPitchedBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetPitchedBalls");
		
		AScramSportManagerBaseball_GetPitchedBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFDC0
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.GetGameRunning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramSportManagerBaseball::GetGameRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetGameRunning");
		
		AScramSportManagerBaseball_GetGameRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFD90
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.GetFieldedBalls
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class ABaseballBall*> AScramSportManagerBaseball::GetFieldedBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetFieldedBalls");
		
		AScramSportManagerBaseball_GetFieldedBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.GetBatterRunAdvantage
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	int32_t AScramSportManagerBaseball::GetBatterRunAdvantage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetBatterRunAdvantage");
		
		AScramSportManagerBaseball_GetBatterRunAdvantage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFD60
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.GetBatter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* AScramSportManagerBaseball::GetBatter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetBatter");
		
		AScramSportManagerBaseball_GetBatter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFD30
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.GetBalls
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class ABaseballBall*> AScramSportManagerBaseball::GetBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.GetBalls");
		
		AScramSportManagerBaseball_GetBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFC30
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.DeleteBall
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABaseballBall*                               pBall                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               playOut                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::DeleteBall(class ABaseballBall* pBall, bool playOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.DeleteBall");
		
		AScramSportManagerBaseball_DeleteBall_Params params {};
		params.pBall = pBall;
		params.playOut = playOut;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.BaseballEvent
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballEvent                                     BaseballEvent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::BaseballEvent(EBaseballEvent BaseballEvent, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.BaseballEvent");
		
		AScramSportManagerBaseball_BaseballEvent_Params params {};
		params.BaseballEvent = BaseballEvent;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFAF0
	 * 		Name   -> Function SportsScramble.ScramSportManagerBaseball.AssignStrikeZone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AScramStrikeZone*                            strikeZone                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBaseball::AssignStrikeZone(class AScramStrikeZone* strikeZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBaseball.AssignStrikeZone");
		
		AScramSportManagerBaseball_AssignStrikeZone_Params params {};
		params.strikeZone = strikeZone;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramSportManagerBaseball.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramSportManagerBaseball::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramSportManagerBaseball");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0930
	 * 		Name   -> Function SportsScramble.ScramSportManagerBowling.SendBowlingEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBowlingEvent                                      BowlingEvent                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      BallActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBowling::SendBowlingEvent(int32_t Player, EBowlingEvent BowlingEvent, class AActor* BallActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBowling.SendBowlingEvent");
		
		AScramSportManagerBowling_SendBowlingEvent_Params params {};
		params.Player = Player;
		params.BowlingEvent = BowlingEvent;
		params.BallActor = BallActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerBowling.SaveBowlingState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FBowlingScrambleState                       ScrambleState                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBowlingFrameSet>                    TraditionalFrameSets                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBowling::SaveBowlingState(struct FBowlingScrambleState* ScrambleState, TArray<struct FBowlingFrameSet>* TraditionalFrameSets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBowling.SaveBowlingState");
		
		AScramSportManagerBowling_SaveBowlingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScrambleState != nullptr)
			*ScrambleState = params.ScrambleState;
		if (TraditionalFrameSets != nullptr)
			*TraditionalFrameSets = params.TraditionalFrameSets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0750
	 * 		Name   -> Function SportsScramble.ScramSportManagerBowling.RestartGame
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AScramSportManagerBowling::RestartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBowling.RestartGame");
		
		AScramSportManagerBowling_RestartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerBowling.LoadBowlingState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FBowlingScrambleState                       ScrambleState                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBowlingFrameSet>                    TraditionalFrameSets                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBowling::LoadBowlingState(const struct FBowlingScrambleState& ScrambleState, TArray<struct FBowlingFrameSet> TraditionalFrameSets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBowling.LoadBowlingState");
		
		AScramSportManagerBowling_LoadBowlingState_Params params {};
		params.ScrambleState = ScrambleState;
		params.TraditionalFrameSets = TraditionalFrameSets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerBowling.BowlingEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBowlingEvent                                      BowlingEvent                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerBowling::BowlingEvent(int32_t Player, EBowlingEvent BowlingEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerBowling.BowlingEvent");
		
		AScramSportManagerBowling_BowlingEvent_Params params {};
		params.Player = Player;
		params.BowlingEvent = BowlingEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramSportManagerBowling.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramSportManagerBowling::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramSportManagerBowling");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0EA0
	 * 		Name   -> Function SportsScramble.ScramSportManagerDodgeball.StartGame
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AScramSportManagerDodgeball::StartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerDodgeball.StartGame");
		
		AScramSportManagerDodgeball_StartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E03A0
	 * 		Name   -> Function SportsScramble.ScramSportManagerDodgeball.OnBallHit
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerDodgeball::OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerDodgeball.OnBallHit");
		
		AScramSportManagerDodgeball_OnBallHit_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerDodgeball.DodgeballEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EDodgeballEvent                                    DodgeballEvent                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerDodgeball::DodgeballEvent(EDodgeballEvent DodgeballEvent, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerDodgeball.DodgeballEvent");
		
		AScramSportManagerDodgeball_DodgeballEvent_Params params {};
		params.DodgeballEvent = DodgeballEvent;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramSportManagerDodgeball.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramSportManagerDodgeball::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramSportManagerDodgeball");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.TennisEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETennisEvent                                       TennisEvent                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerTennis::TennisEvent(int32_t Player, ETennisEvent TennisEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.TennisEvent");
		
		AScramSportManagerTennis_TennisEvent_Params params {};
		params.Player = Player;
		params.TennisEvent = TennisEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0B80
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.SetAllowServe
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               allowServe                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerTennis::SetAllowServe(int32_t Player, bool allowServe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.SetAllowServe");
		
		AScramSportManagerTennis_SetAllowServe_Params params {};
		params.Player = Player;
		params.allowServe = allowServe;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0A30
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.ServerOnBallHit
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerTennis::ServerOnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.ServerOnBallHit");
		
		AScramSportManagerTennis_ServerOnBallHit_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.SendDebugString
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      S                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerTennis::SendDebugString(const class FString& S)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.SendDebugString");
		
		AScramSportManagerTennis_SendDebugString_Params params {};
		params.S = S;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.SaveTennisState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Ball                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      player1Instrument                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      player2Instrument                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      activeArenaScramble                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerTennis::SaveTennisState(class UClass** Ball, class UClass** player1Instrument, class UClass** player2Instrument, class UClass** activeArenaScramble)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.SaveTennisState");
		
		AScramSportManagerTennis_SaveTennisState_Params params {};
		
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

	/**
	 * Function:
	 * 		RVA    -> 0x003E0770
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.RestartMatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               resetServer                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerTennis::RestartMatch(bool resetServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.RestartMatch");
		
		AScramSportManagerTennis_RestartMatch_Params params {};
		params.resetServer = resetServer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0640
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.ReplaceBallInPlay
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerTennis::ReplaceBallInPlay(class AActor* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.ReplaceBallInPlay");
		
		AScramSportManagerTennis_ReplaceBallInPlay_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0560
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.OnRep_InPlayInfo
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AScramSportManagerTennis::OnRep_InPlayInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.OnRep_InPlayInfo");
		
		AScramSportManagerTennis_OnRep_InPlayInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.LoadTennisState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      player1Instrument                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      player2Instrument                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      activeArenaScramble                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerTennis::LoadTennisState(class UClass* Ball, class UClass* player1Instrument, class UClass* player2Instrument, class UClass* activeArenaScramble)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.LoadTennisState");
		
		AScramSportManagerTennis_LoadTennisState_Params params {};
		params.Ball = Ball;
		params.player1Instrument = player1Instrument;
		params.player2Instrument = player2Instrument;
		params.activeArenaScramble = activeArenaScramble;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0260
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.GetServingPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* AScramSportManagerTennis::GetServingPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetServingPlayer");
		
		AScramSportManagerTennis_GetServingPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0090
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.GetReceivingPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* AScramSportManagerTennis::GetReceivingPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetReceivingPlayer");
		
		AScramSportManagerTennis_GetReceivingPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0060
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.GetPlayerPoints
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t AScramSportManagerTennis::GetPlayerPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetPlayerPoints");
		
		AScramSportManagerTennis_GetPlayerPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0030
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.GetPlayerGames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t AScramSportManagerTennis::GetPlayerGames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetPlayerGames");
		
		AScramSportManagerTennis_GetPlayerGames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E0010
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.GetPlayerDoubleFaults
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t AScramSportManagerTennis::GetPlayerDoubleFaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetPlayerDoubleFaults");
		
		AScramSportManagerTennis_GetPlayerDoubleFaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFFF0
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.GetPlayerAces
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t AScramSportManagerTennis::GetPlayerAces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetPlayerAces");
		
		AScramSportManagerTennis_GetPlayerAces_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFE40
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.GetOpponentPoints
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t AScramSportManagerTennis::GetOpponentPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetOpponentPoints");
		
		AScramSportManagerTennis_GetOpponentPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFE10
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.GetOpponentGames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t AScramSportManagerTennis::GetOpponentGames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetOpponentGames");
		
		AScramSportManagerTennis_GetOpponentGames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFDE0
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.GetNextPlayerToHitBall
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* AScramSportManagerTennis::GetNextPlayerToHitBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetNextPlayerToHitBall");
		
		AScramSportManagerTennis_GetNextPlayerToHitBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFD00
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.GetBallInPlay
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure)
	 */
	class AActor* AScramSportManagerTennis::GetBallInPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.GetBallInPlay");
		
		AScramSportManagerTennis_GetBallInPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003DFB70
	 * 		Name   -> Function SportsScramble.ScramSportManagerTennis.ClientOnBallHit
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramSportManagerTennis::ClientOnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramSportManagerTennis.ClientOnBallHit");
		
		AScramSportManagerTennis_ClientOnBallHit_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramSportManagerTennis.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramSportManagerTennis::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramSportManagerTennis");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramStrikeZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramStrikeZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramStrikeZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3D70
	 * 		Name   -> Function SportsScramble.ScramTennisAI.SetInstrumentProperties
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FTennisInstrumentProperties                 instrumentProperties                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AScramTennisAI::SetInstrumentProperties(const struct FTennisInstrumentProperties& instrumentProperties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTennisAI.SetInstrumentProperties");
		
		AScramTennisAI_SetInstrumentProperties_Params params {};
		params.instrumentProperties = instrumentProperties;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramTennisAI.PlayRacquetSound
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ATennisBall*                                 Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BallSpeed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramTennisAI::PlayRacquetSound(class ATennisBall* Ball, float BallSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTennisAI.PlayRacquetSound");
		
		AScramTennisAI_PlayRacquetSound_Params params {};
		params.Ball = Ball;
		params.BallSpeed = BallSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramTennisAI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramTennisAI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTennisAI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramTennisAIAnimNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramTennisAIAnimNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTennisAIAnimNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramTennisAIAnimNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramTennisAIAnimNotifyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTennisAIAnimNotifyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E40B0
	 * 		Name   -> Function SportsScramble.ScramTimeLineComponent.TimeLineIsRunning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UScramTimeLineComponent::TimeLineIsRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.TimeLineIsRunning");
		
		UScramTimeLineComponent_TimeLineIsRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E4090
	 * 		Name   -> Function SportsScramble.ScramTimeLineComponent.StopTimeLine
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UScramTimeLineComponent::StopTimeLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.StopTimeLine");
		
		UScramTimeLineComponent_StopTimeLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3FC0
	 * 		Name   -> Function SportsScramble.ScramTimeLineComponent.StartTimeLine
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Forward                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramTimeLineComponent::StartTimeLine(bool Forward, float StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.StartTimeLine");
		
		UScramTimeLineComponent_StartTimeLine_Params params {};
		params.Forward = Forward;
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3F40
	 * 		Name   -> Function SportsScramble.ScramTimeLineComponent.SetTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramTimeLineComponent::SetTarget(class USceneComponent* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.SetTarget");
		
		UScramTimeLineComponent_SetTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3B40
	 * 		Name   -> Function SportsScramble.ScramTimeLineComponent.SampleAtTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SampleTime                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramTimeLineComponent::SampleAtTime(float SampleTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.SampleAtTime");
		
		UScramTimeLineComponent_SampleAtTime_Params params {};
		params.SampleTime = SampleTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3B20
	 * 		Name   -> Function SportsScramble.ScramTimeLineComponent.ResumeTimeLine
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UScramTimeLineComponent::ResumeTimeLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.ResumeTimeLine");
		
		UScramTimeLineComponent_ResumeTimeLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3810
	 * 		Name   -> Function SportsScramble.ScramTimeLineComponent.GetTimeLineLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UScramTimeLineComponent::GetTimeLineLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.GetTimeLineLength");
		
		UScramTimeLineComponent_GetTimeLineLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E37E0
	 * 		Name   -> Function SportsScramble.ScramTimeLineComponent.GetRemainingTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UScramTimeLineComponent::GetRemainingTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTimeLineComponent.GetRemainingTime");
		
		UScramTimeLineComponent_GetRemainingTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramTimeLineComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramTimeLineComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTimeLineComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3730
	 * 		Name   -> Function SportsScramble.ScramTrajectoryUtils.GetInitialLinearVelocity
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FScramTrajectory                            trajectory                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FVector UScramTrajectoryUtils::STATIC_GetInitialLinearVelocity(const struct FScramTrajectory& trajectory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrajectoryUtils.GetInitialLinearVelocity");
		
		UScramTrajectoryUtils_GetInitialLinearVelocity_Params params {};
		params.trajectory = trajectory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramTrajectoryUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramTrajectoryUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTrajectoryUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3CE0
	 * 		Name   -> Function SportsScramble.ScramTrajectoryInfluencerComponent.SetInfluencerEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramTrajectoryInfluencerComponent::SetInfluencerEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrajectoryInfluencerComponent.SetInfluencerEnabled");
		
		UScramTrajectoryInfluencerComponent_SetInfluencerEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramTrajectoryInfluencerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramTrajectoryInfluencerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTrajectoryInfluencerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramTrajectoryInfluencerRegion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramTrajectoryInfluencerRegion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTrajectoryInfluencerRegion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3AA0
	 * 		Name   -> Function SportsScramble.ScramTrajectoryInfluencerBaseball.RemoveSkillFlag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EScramSkill                                        Skill                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramTrajectoryInfluencerBaseball::RemoveSkillFlag(EScramSkill Skill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrajectoryInfluencerBaseball.RemoveSkillFlag");
		
		UScramTrajectoryInfluencerBaseball_RemoveSkillFlag_Params params {};
		params.Skill = Skill;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3880
	 * 		Name   -> Function SportsScramble.ScramTrajectoryInfluencerBaseball.HasSkillFlag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EScramSkill                                        Skill                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScramTrajectoryInfluencerBaseball::HasSkillFlag(EScramSkill Skill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrajectoryInfluencerBaseball.HasSkillFlag");
		
		UScramTrajectoryInfluencerBaseball_HasSkillFlag_Params params {};
		params.Skill = Skill;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3550
	 * 		Name   -> Function SportsScramble.ScramTrajectoryInfluencerBaseball.AddSkillFlag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EScramSkill                                        Skill                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramTrajectoryInfluencerBaseball::AddSkillFlag(EScramSkill Skill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrajectoryInfluencerBaseball.AddSkillFlag");
		
		UScramTrajectoryInfluencerBaseball_AddSkillFlag_Params params {};
		params.Skill = Skill;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramTrajectoryInfluencerBaseball.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramTrajectoryInfluencerBaseball::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTrajectoryInfluencerBaseball");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramTrajectoryInfluencerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramTrajectoryInfluencerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTrajectoryInfluencerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramTrajectoryInfluencerManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramTrajectoryInfluencerManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTrajectoryInfluencerManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramTravelCapsule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramTravelCapsule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTravelCapsule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E4100
	 * 		Name   -> Function SportsScramble.ScramTrophy.WasTrophyEarned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramTrophy::WasTrophyEarned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophy.WasTrophyEarned");
		
		AScramTrophy_WasTrophyEarned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramTrophy.OnPlayerStopLookAtTrophy
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramTrophy::OnPlayerStopLookAtTrophy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophy.OnPlayerStopLookAtTrophy");
		
		AScramTrophy_OnPlayerStopLookAtTrophy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramTrophy.OnPlayerLookAtTrophy
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramTrophy::OnPlayerLookAtTrophy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophy.OnPlayerLookAtTrophy");
		
		AScramTrophy_OnPlayerLookAtTrophy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E36D0
	 * 		Name   -> Function SportsScramble.ScramTrophy.CalculateDisplayTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform AScramTrophy::CalculateDisplayTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophy.CalculateDisplayTransform");
		
		AScramTrophy_CalculateDisplayTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramTrophy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramTrophy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTrophy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E40E0
	 * 		Name   -> Function SportsScramble.ScramTrophyGlove.TryMakeActiveTrophyGlove
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramTrophyGlove::TryMakeActiveTrophyGlove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.TryMakeActiveTrophyGlove");
		
		AScramTrophyGlove_TryMakeActiveTrophyGlove_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3EB0
	 * 		Name   -> Function SportsScramble.ScramTrophyGlove.SetLaserPointerVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramTrophyGlove::SetLaserPointerVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.SetLaserPointerVisibility");
		
		AScramTrophyGlove_SetLaserPointerVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3E30
	 * 		Name   -> Function SportsScramble.ScramTrophyGlove.SetLaserLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Length                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramTrophyGlove::SetLaserLength(float Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.SetLaserLength");
		
		AScramTrophyGlove_SetLaserLength_Params params {};
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3BC0
	 * 		Name   -> Function SportsScramble.ScramTrophyGlove.SetEnableGrab
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramTrophyGlove::SetEnableGrab(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.SetEnableGrab");
		
		AScramTrophyGlove_SetEnableGrab_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramTrophyGlove.OnShouldGrab
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ATrophyGrabbable*                            Trophy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramTrophyGlove::OnShouldGrab(class ATrophyGrabbable* Trophy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.OnShouldGrab");
		
		AScramTrophyGlove_OnShouldGrab_Params params {};
		params.Trophy = Trophy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3A70
	 * 		Name   -> Function SportsScramble.ScramTrophyGlove.IsTriggerPressed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramTrophyGlove::IsTriggerPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.IsTriggerPressed");
		
		AScramTrophyGlove_IsTriggerPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3A40
	 * 		Name   -> Function SportsScramble.ScramTrophyGlove.IsTriggerDownThisFrame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramTrophyGlove::IsTriggerDownThisFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.IsTriggerDownThisFrame");
		
		AScramTrophyGlove_IsTriggerDownThisFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3A10
	 * 		Name   -> Function SportsScramble.ScramTrophyGlove.IsActiveGlove
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScramTrophyGlove::IsActiveGlove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.IsActiveGlove");
		
		AScramTrophyGlove_IsActiveGlove_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3990
	 * 		Name   -> Function SportsScramble.ScramTrophyGlove.InputRotateTrophyYaw
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramTrophyGlove::InputRotateTrophyYaw(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.InputRotateTrophyYaw");
		
		AScramTrophyGlove_InputRotateTrophyYaw_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3910
	 * 		Name   -> Function SportsScramble.ScramTrophyGlove.InputRotateTrophyPitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramTrophyGlove::InputRotateTrophyPitch(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.InputRotateTrophyPitch");
		
		AScramTrophyGlove_InputRotateTrophyPitch_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3840
	 * 		Name   -> Function SportsScramble.ScramTrophyGlove.GetTrophyGrabPoint
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 */
	struct FVector AScramTrophyGlove::GetTrophyGrabPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.GetTrophyGrabPoint");
		
		AScramTrophyGlove_GetTrophyGrabPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E3650
	 * 		Name   -> Function SportsScramble.ScramTrophyGlove.BindInputYaw
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AxisName                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramTrophyGlove::BindInputYaw(const class FName& AxisName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.BindInputYaw");
		
		AScramTrophyGlove_BindInputYaw_Params params {};
		params.AxisName = AxisName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E35D0
	 * 		Name   -> Function SportsScramble.ScramTrophyGlove.BindInputPitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AxisName                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramTrophyGlove::BindInputPitch(const class FName& AxisName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyGlove.BindInputPitch");
		
		AScramTrophyGlove_BindInputPitch_Params params {};
		params.AxisName = AxisName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramTrophyGlove.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramTrophyGlove::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTrophyGlove");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E8B50
	 * 		Name   -> Function SportsScramble.ScramTrophyManager.WasTrophyEarned
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        TrophyID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AScramTrophyManager::STATIC_WasTrophyEarned(const class FName& TrophyID, class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.WasTrophyEarned");
		
		AScramTrophyManager_WasTrophyEarned_Params params {};
		params.TrophyID = TrophyID;
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E8A90
	 * 		Name   -> Function SportsScramble.ScramTrophyManager.WasAvatarEarned
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        avatarID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AScramTrophyManager::STATIC_WasAvatarEarned(const class FName& avatarID, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.WasAvatarEarned");
		
		AScramTrophyManager_WasAvatarEarned_Params params {};
		params.avatarID = avatarID;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E8980
	 * 		Name   -> Function SportsScramble.ScramTrophyManager.TryGetTrophyEarnedDate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDateTime                                   date                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TrophyID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AScramTrophyManager::STATIC_TryGetTrophyEarnedDate(struct FDateTime* date, const class FName& TrophyID, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.TryGetTrophyEarnedDate");
		
		AScramTrophyManager_TryGetTrophyEarnedDate_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramTrophyManager.SpawnTrophyNotificationFX
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramTrophyManager::SpawnTrophyNotificationFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.SpawnTrophyNotificationFX");
		
		AScramTrophyManager_SpawnTrophyNotificationFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7CB0
	 * 		Name   -> Function SportsScramble.ScramTrophyManager.ResetAllTrophy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramTrophyManager::ResetAllTrophy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.ResetAllTrophy");
		
		AScramTrophyManager_ResetAllTrophy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramTrophyManager.OnNotifyTrophyEarned
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramTrophyManager::OnNotifyTrophyEarned(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.OnNotifyTrophyEarned");
		
		AScramTrophyManager_OnNotifyTrophyEarned_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramTrophyManager.OnNotifyOculusUpload
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramTrophyManager::OnNotifyOculusUpload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.OnNotifyOculusUpload");
		
		AScramTrophyManager_OnNotifyOculusUpload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.ScramTrophyManager.OnNotifyOculusUpdate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramTrophyManager::OnNotifyOculusUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.OnNotifyOculusUpdate");
		
		AScramTrophyManager_OnNotifyOculusUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7640
	 * 		Name   -> Function SportsScramble.ScramTrophyManager.InitializeTrophyAwardListeners
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramTrophyManager::InitializeTrophyAwardListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.InitializeTrophyAwardListeners");
		
		AScramTrophyManager_InitializeTrophyAwardListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7480
	 * 		Name   -> Function SportsScramble.ScramTrophyManager.GetTrophyRequirement
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TrophyID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AScramTrophyManager::STATIC_GetTrophyRequirement(const class FName& TrophyID, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.GetTrophyRequirement");
		
		AScramTrophyManager_GetTrophyRequirement_Params params {};
		params.TrophyID = TrophyID;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6B30
	 * 		Name   -> Function SportsScramble.ScramTrophyManager.GetEarnedTrophyCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AScramTrophyManager::STATIC_GetEarnedTrophyCount(class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.GetEarnedTrophyCount");
		
		AScramTrophyManager_GetEarnedTrophyCount_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6780
	 * 		Name   -> Function SportsScramble.ScramTrophyManager.EarnTrophy
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TrophyName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramTrophyManager::STATIC_EarnTrophy(const class FName& TrophyName, class UObject* pWorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.EarnTrophy");
		
		AScramTrophyManager_EarnTrophy_Params params {};
		params.TrophyName = TrophyName;
		params.pWorldContextObject = pWorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E66E0
	 * 		Name   -> Function SportsScramble.ScramTrophyManager.DeferNotifications
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramTrophyManager::DeferNotifications(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.DeferNotifications");
		
		AScramTrophyManager_DeferNotifications_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6450
	 * 		Name   -> Function SportsScramble.ScramTrophyManager.ClearAwardListeners
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AScramTrophyManager::ClearAwardListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramTrophyManager.ClearAwardListeners");
		
		AScramTrophyManager_ClearAwardListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramTrophyManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramTrophyManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramTrophyManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E88D0
	 * 		Name   -> Function SportsScramble.ScramUtils.TryGetOculusID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScramUtils::STATIC_TryGetOculusID(class FString* UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.TryGetOculusID");
		
		UScramUtils_TryGetOculusID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueId != nullptr)
			*UniqueId = params.UniqueId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E8360
	 * 		Name   -> Function SportsScramble.ScramUtils.ShowDebugMessage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramUtils::STATIC_ShowDebugMessage(class UObject* WorldContextObject, const class FString& Message, float LifeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.ShowDebugMessage");
		
		UScramUtils_ShowDebugMessage_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Message = Message;
		params.LifeTime = LifeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E8280
	 * 		Name   -> Function SportsScramble.ScramUtils.SetShaderCacheModeFast
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UScramUtils::STATIC_SetShaderCacheModeFast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.SetShaderCacheModeFast");
		
		UScramUtils_SetShaderCacheModeFast_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E8260
	 * 		Name   -> Function SportsScramble.ScramUtils.SetShaderCacheModeBackground
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UScramUtils::STATIC_SetShaderCacheModeBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.SetShaderCacheModeBackground");
		
		UScramUtils_SetShaderCacheModeBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E8170
	 * 		Name   -> Function SportsScramble.ScramUtils.SetOnlineSessionCustomSetting
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SettingValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramUtils::STATIC_SetOnlineSessionCustomSetting(class UObject* WorldContextObject, const class FName& SettingName, int32_t SettingValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.SetOnlineSessionCustomSetting");
		
		UScramUtils_SetOnlineSessionCustomSetting_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SettingName = SettingName;
		params.SettingValue = SettingValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E8030
	 * 		Name   -> Function SportsScramble.ScramUtils.SetInstancedVisibility
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramUtils::STATIC_SetInstancedVisibility(class UStaticMeshComponent* Target, bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.SetInstancedVisibility");
		
		UScramUtils_SetInstancedVisibility_Params params {};
		params.Target = Target;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7E90
	 * 		Name   -> Function SportsScramble.ScramUtils.SavePipelineCache
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UScramUtils::STATIC_SavePipelineCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.SavePipelineCache");
		
		UScramUtils_SavePipelineCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7CF0
	 * 		Name   -> Function SportsScramble.ScramUtils.SampleTexture
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              U                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              V                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                pixelColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESuccessFailure                                    Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramUtils::STATIC_SampleTexture(class UTexture2D* Texture, float U, float V, struct FLinearColor* pixelColor, ESuccessFailure* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.SampleTexture");
		
		UScramUtils_SampleTexture_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x003E7BC0
	 * 		Name   -> Function SportsScramble.ScramUtils.RandomSharedSport
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FScramSportPreferences                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FScramSportPreferences                      B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EScramSport UScramUtils::STATIC_RandomSharedSport(const struct FScramSportPreferences& A, const struct FScramSportPreferences& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.RandomSharedSport");
		
		UScramUtils_RandomSharedSport_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7AB0
	 * 		Name   -> Function SportsScramble.ScramUtils.PickDestinationPointOnSpline
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      SplineFollower                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USplineComponent*                            Spline                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LookAheadDistance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UScramUtils::STATIC_PickDestinationPointOnSpline(class AActor* SplineFollower, class USplineComponent* Spline, float LookAheadDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.PickDestinationPointOnSpline");
		
		UScramUtils_PickDestinationPointOnSpline_Params params {};
		params.SplineFollower = SplineFollower;
		params.Spline = Spline;
		params.LookAheadDistance = LookAheadDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7A90
	 * 		Name   -> Function SportsScramble.ScramUtils.PauseShaderCacheCompilation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UScramUtils::STATIC_PauseShaderCacheCompilation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.PauseShaderCacheCompilation");
		
		UScramUtils_PauseShaderCacheCompilation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7910
	 * 		Name   -> Function SportsScramble.ScramUtils.MakeActorsFaceLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      subClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramUtils::STATIC_MakeActorsFaceLocation(class UObject* WorldContextObject, class UClass* subClass, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.MakeActorsFaceLocation");
		
		UScramUtils_MakeActorsFaceLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.subClass = subClass;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7540
	 * 		Name   -> Function SportsScramble.ScramUtils.LaunchOtherApp
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      appID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramUtils::STATIC_LaunchOtherApp(const class FString& appID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.LaunchOtherApp");
		
		UScramUtils_LaunchOtherApp_Params params {};
		params.appID = appID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6660
	 * 		Name   -> Function SportsScramble.ScramUtils.IsShipping
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EYesNo                                             Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramUtils::STATIC_IsShipping(EYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.IsShipping");
		
		UScramUtils_IsShipping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7870
	 * 		Name   -> Function SportsScramble.ScramUtils.IsShaderCacheReady
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UScramUtils::STATIC_IsShaderCacheReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.IsShaderCacheReady");
		
		UScramUtils_IsShaderCacheReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E77A0
	 * 		Name   -> Function SportsScramble.ScramUtils.IsHitFloor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        Primitive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScramUtils::STATIC_IsHitFloor(class AScramPrimitiveActor* Primitive, const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.IsHitFloor");
		
		UScramUtils_IsHitFloor_Params params {};
		params.Primitive = Primitive;
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7720
	 * 		Name   -> Function SportsScramble.ScramUtils.IsHitEnvironmental
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      hitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScramUtils::STATIC_IsHitEnvironmental(class AActor* hitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.IsHitEnvironmental");
		
		UScramUtils_IsHitEnvironmental_Params params {};
		params.hitActor = hitActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7660
	 * 		Name   -> Function SportsScramble.ScramUtils.IsChargeShotPossible
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ATennisInstrument*                           Instrument                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATennisBall*                                 Ball                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScramUtils::STATIC_IsChargeShotPossible(class ATennisInstrument* Instrument, class ATennisBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.IsChargeShotPossible");
		
		UScramUtils_IsChargeShotPossible_Params params {};
		params.Instrument = Instrument;
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7610
	 * 		Name   -> Function SportsScramble.ScramUtils.HasBinaryShaderCache
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UScramUtils::STATIC_HasBinaryShaderCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.HasBinaryShaderCache");
		
		UScramUtils_HasBinaryShaderCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7540
	 * 		Name   -> Function SportsScramble.ScramUtils.GoToStore
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      uriPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramUtils::STATIC_GoToStore(const class FString& uriPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GoToStore");
		
		UScramUtils_GoToStore_Params params {};
		params.uriPath = uriPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7450
	 * 		Name   -> Function SportsScramble.ScramUtils.GetSkipLogos
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UScramUtils::STATIC_GetSkipLogos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetSkipLogos");
		
		UScramUtils_GetSkipLogos_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7390
	 * 		Name   -> Function SportsScramble.ScramUtils.GetSingleActorExec
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UScramUtils::STATIC_GetSingleActorExec(class UObject* WorldContextObject, class UClass* ActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetSingleActorExec");
		
		UScramUtils_GetSingleActorExec_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7390
	 * 		Name   -> Function SportsScramble.ScramUtils.GetSingleActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UScramUtils::STATIC_GetSingleActor(class UObject* WorldContextObject, class UClass* ActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetSingleActor");
		
		UScramUtils_GetSingleActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7310
	 * 		Name   -> Function SportsScramble.ScramUtils.GetScramPlayer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AScramPlayer* UScramUtils::STATIC_GetScramPlayer(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetScramPlayer");
		
		UScramUtils_GetScramPlayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E72E0
	 * 		Name   -> Function SportsScramble.ScramUtils.GetScramNetworkVersion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UScramUtils::STATIC_GetScramNetworkVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetScramNetworkVersion");
		
		UScramUtils_GetScramNetworkVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7260
	 * 		Name   -> Function SportsScramble.ScramUtils.GetScramGameMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AScramGameMode* UScramUtils::STATIC_GetScramGameMode(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetScramGameMode");
		
		UScramUtils_GetScramGameMode_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E71E0
	 * 		Name   -> Function SportsScramble.ScramUtils.GetRemoteScramPlayer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AScramPlayer* UScramUtils::STATIC_GetRemoteScramPlayer(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetRemoteScramPlayer");
		
		UScramUtils_GetRemoteScramPlayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7080
	 * 		Name   -> Function SportsScramble.ScramUtils.GetPlayerTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OffsetLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OffsetRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform UScramUtils::STATIC_GetPlayerTransform(class UObject* WorldContextObject, const struct FVector& OffsetLocation, const struct FRotator& OffsetRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetPlayerTransform");
		
		UScramUtils_GetPlayerTransform_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.OffsetLocation = OffsetLocation;
		params.OffsetRotation = OffsetRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7000
	 * 		Name   -> Function SportsScramble.ScramUtils.GetPlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EScramPlatform UScramUtils::STATIC_GetPlatform(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetPlatform");
		
		UScramUtils_GetPlatform_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6E90
	 * 		Name   -> Function SportsScramble.ScramUtils.GetOnlineSessionCustomSetting
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UScramUtils::STATIC_GetOnlineSessionCustomSetting(const struct FBlueprintSessionResult& Result, const class FName& SettingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetOnlineSessionCustomSetting");
		
		UScramUtils_GetOnlineSessionCustomSetting_Params params {};
		params.Result = Result;
		params.SettingName = SettingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6D90
	 * 		Name   -> Function SportsScramble.ScramUtils.GetNumShaderCompilesRemaining
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UScramUtils::STATIC_GetNumShaderCompilesRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetNumShaderCompilesRemaining");
		
		UScramUtils_GetNumShaderCompilesRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6DC0
	 * 		Name   -> Function SportsScramble.ScramUtils.GetNumberOfLines
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UScramUtils::STATIC_GetNumberOfLines(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetNumberOfLines");
		
		UScramUtils_GetNumberOfLines_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6D60
	 * 		Name   -> Function SportsScramble.ScramUtils.GetMatchmakingPool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UScramUtils::STATIC_GetMatchmakingPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetMatchmakingPool");
		
		UScramUtils_GetMatchmakingPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6CE0
	 * 		Name   -> Function SportsScramble.ScramUtils.GetLocalScramPlayer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AScramPlayer* UScramUtils::STATIC_GetLocalScramPlayer(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetLocalScramPlayer");
		
		UScramUtils_GetLocalScramPlayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6C10
	 * 		Name   -> Function SportsScramble.ScramUtils.GetLengthOfLongestLine
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UScramUtils::STATIC_GetLengthOfLongestLine(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetLengthOfLongestLine");
		
		UScramUtils_GetLengthOfLongestLine_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6BE0
	 * 		Name   -> Function SportsScramble.ScramUtils.GetIsShipping
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UScramUtils::STATIC_GetIsShipping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetIsShipping");
		
		UScramUtils_GetIsShipping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6BB0
	 * 		Name   -> Function SportsScramble.ScramUtils.GetIsEditor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UScramUtils::STATIC_GetIsEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetIsEditor");
		
		UScramUtils_GetIsEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6BB0
	 * 		Name   -> Function SportsScramble.ScramUtils.GetIsAndroid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UScramUtils::STATIC_GetIsAndroid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetIsAndroid");
		
		UScramUtils_GetIsAndroid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6B00
	 * 		Name   -> Function SportsScramble.ScramUtils.GetEarlyAccess
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UScramUtils::STATIC_GetEarlyAccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetEarlyAccess");
		
		UScramUtils_GetEarlyAccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6AD0
	 * 		Name   -> Function SportsScramble.ScramUtils.GetDemoMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UScramUtils::STATIC_GetDemoMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetDemoMode");
		
		UScramUtils_GetDemoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6A50
	 * 		Name   -> Function SportsScramble.ScramUtils.GetDefaultObject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      ObjectClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UScramUtils::STATIC_GetDefaultObject(class UClass* ObjectClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetDefaultObject");
		
		UScramUtils_GetDefaultObject_Params params {};
		params.ObjectClass = ObjectClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6A20
	 * 		Name   -> Function SportsScramble.ScramUtils.GetDebugMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UScramUtils::STATIC_GetDebugMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetDebugMode");
		
		UScramUtils_GetDebugMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6910
	 * 		Name   -> Function SportsScramble.ScramUtils.GetAttachedActorsExec
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UScramUtils::STATIC_GetAttachedActorsExec(class AActor* Actor, TArray<class AActor*>* OutActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetAttachedActorsExec");
		
		UScramUtils_GetAttachedActorsExec_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6850
	 * 		Name   -> Function SportsScramble.ScramUtils.GetAppropriateTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UScramUtils::STATIC_GetAppropriateTransform(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.GetAppropriateTransform");
		
		UScramUtils_GetAppropriateTransform_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6660
	 * 		Name   -> Function SportsScramble.ScramUtils.ControllerIsConnected
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EYesNo                                             Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramUtils::STATIC_ControllerIsConnected(EYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.ControllerIsConnected");
		
		UScramUtils_ControllerIsConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6470
	 * 		Name   -> Function SportsScramble.ScramUtils.ClearDebugMessages
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScramUtils::STATIC_ClearDebugMessages(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramUtils.ClearDebugMessages");
		
		UScramUtils_ClearDebugMessages_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E82A0
	 * 		Name   -> Function SportsScramble.ScramVoiceChat.SetVoiceChatMuted
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               muted                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramVoiceChat::STATIC_SetVoiceChatMuted(class UObject* WorldContextObject, bool muted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramVoiceChat.SetVoiceChatMuted");
		
		AScramVoiceChat_SetVoiceChatMuted_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.muted = muted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7F70
	 * 		Name   -> Function SportsScramble.ScramVoiceChat.Server_SetClientVoiceChatDesired
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               clientVoiceChatDesired                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramVoiceChat::Server_SetClientVoiceChatDesired(bool clientVoiceChatDesired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramVoiceChat.Server_SetClientVoiceChatDesired");
		
		AScramVoiceChat_Server_SetClientVoiceChatDesired_Params params {};
		params.clientVoiceChatDesired = clientVoiceChatDesired;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7EB0
	 * 		Name   -> Function SportsScramble.ScramVoiceChat.Server_InitializeVoiceChat
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               clientVoiceChatDesired                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramVoiceChat::Server_InitializeVoiceChat(bool clientVoiceChatDesired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramVoiceChat.Server_InitializeVoiceChat");
		
		AScramVoiceChat_Server_InitializeVoiceChat_Params params {};
		params.clientVoiceChatDesired = clientVoiceChatDesired;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E78A0
	 * 		Name   -> Function SportsScramble.ScramVoiceChat.KillVoiceChat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramVoiceChat::STATIC_KillVoiceChat(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramVoiceChat.KillVoiceChat");
		
		AScramVoiceChat_KillVoiceChat_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6760
	 * 		Name   -> Function SportsScramble.ScramVoiceChat.DeferredInit
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AScramVoiceChat::DeferredInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramVoiceChat.DeferredInit");
		
		AScramVoiceChat_DeferredInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E65A0
	 * 		Name   -> Function SportsScramble.ScramVoiceChat.Client_SetServerVoiceChatDesired
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
	 * Parameters:
	 * 		bool                                               serverVoiceChatDesired                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramVoiceChat::Client_SetServerVoiceChatDesired(bool serverVoiceChatDesired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramVoiceChat.Client_SetServerVoiceChatDesired");
		
		AScramVoiceChat_Client_SetServerVoiceChatDesired_Params params {};
		params.serverVoiceChatDesired = serverVoiceChatDesired;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E64E0
	 * 		Name   -> Function SportsScramble.ScramVoiceChat.Client_InitializeVoiceChat
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
	 * Parameters:
	 * 		bool                                               serverVoiceChatDesired                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScramVoiceChat::Client_InitializeVoiceChat(bool serverVoiceChatDesired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramVoiceChat.Client_InitializeVoiceChat");
		
		AScramVoiceChat_Client_InitializeVoiceChat_Params params {};
		params.serverVoiceChatDesired = serverVoiceChatDesired;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramVoiceChat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramVoiceChat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramVoiceChat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E6830
	 * 		Name   -> Function SportsScramble.ScramWidgetComponent.ExternalInitWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UScramWidgetComponent::ExternalInitWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.ScramWidgetComponent.ExternalInitWidget");
		
		UScramWidgetComponent_ExternalInitWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScramWidgetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramWidgetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.ScramWidgetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E80F0
	 * 		Name   -> Function SportsScramble.SkiBallTrigger.SetIsPositive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               positive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASkiBallTrigger::SetIsPositive(bool positive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.SkiBallTrigger.SetIsPositive");
		
		ASkiBallTrigger_SetIsPositive_Params params {};
		params.positive = positive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASkiBallTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASkiBallTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.SkiBallTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E84C0
	 * 		Name   -> Function SportsScramble.SpectateSessionCallbackProxy.SpectateSession
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintSessionResult                     SearchResult                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class USpectateSessionCallbackProxy* USpectateSessionCallbackProxy::STATIC_SpectateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.SpectateSessionCallbackProxy.SpectateSession");
		
		USpectateSessionCallbackProxy_SpectateSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.SearchResult = SearchResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpectateSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpectateSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.SpectateSessionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E87C0
	 * 		Name   -> Function SportsScramble.SplineMoverComponent.StartOnSpline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USplineComponent*                            SplineComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineMoverComponent::StartOnSpline(class USplineComponent* SplineComponent, class USceneComponent* SceneComponent, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.SplineMoverComponent.StartOnSpline");
		
		USplineMoverComponent_StartOnSpline_Params params {};
		params.SplineComponent = SplineComponent;
		params.SceneComponent = SceneComponent;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7CD0
	 * 		Name   -> Function SportsScramble.SplineMoverComponent.Restart
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USplineMoverComponent::Restart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.SplineMoverComponent.Restart");
		
		USplineMoverComponent_Restart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E69F0
	 * 		Name   -> Function SportsScramble.SplineMoverComponent.GetCurrentSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USplineMoverComponent::GetCurrentSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.SplineMoverComponent.GetCurrentSpeed");
		
		USplineMoverComponent_GetCurrentSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplineMoverComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplineMoverComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.SplineMoverComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E8660
	 * 		Name   -> Function SportsScramble.StartOculusMatchmakingCallbackProxy.StartOculusMatchmaking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      poolKey                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UStartOculusMatchmakingCallbackProxy* UStartOculusMatchmakingCallbackProxy::STATIC_StartOculusMatchmaking(class APlayerController* PlayerController, const class FString& poolKey, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.StartOculusMatchmakingCallbackProxy.StartOculusMatchmaking");
		
		UStartOculusMatchmakingCallbackProxy_StartOculusMatchmaking_Params params {};
		params.PlayerController = PlayerController;
		params.poolKey = poolKey;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003E7A10
	 * 		Name   -> Function SportsScramble.StartOculusMatchmakingCallbackProxy.MatchmakingClientConnect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UStartOculusMatchmakingCallbackProxy::STATIC_MatchmakingClientConnect(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.StartOculusMatchmakingCallbackProxy.MatchmakingClientConnect");
		
		UStartOculusMatchmakingCallbackProxy_MatchmakingClientConnect_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStartOculusMatchmakingCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartOculusMatchmakingCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.StartOculusMatchmakingCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.SwapIndicator.OnHandednessSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EScramHandedness                                   Handedness                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASwapIndicator::OnHandednessSet(EScramHandedness Handedness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.SwapIndicator.OnHandednessSet");
		
		ASwapIndicator_OnHandednessSet_Params params {};
		params.Handedness = Handedness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.SwapIndicator.OnConfirmSwap
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASwapIndicator::OnConfirmSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.SwapIndicator.OnConfirmSwap");
		
		ASwapIndicator_OnConfirmSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.SwapIndicator.OnBeginSwap
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASwapIndicator::OnBeginSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.SwapIndicator.OnBeginSwap");
		
		ASwapIndicator_OnBeginSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASwapIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASwapIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.SwapIndicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTennisAIAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTennisAIAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.TennisAIAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC680
	 * 		Name   -> Function SportsScramble.TennisAvatar.OnBallHit
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UObject*                                     pWorldContextObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScramEventBasePayload*                      pPayload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATennisAvatar::OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisAvatar.OnBallHit");
		
		ATennisAvatar_OnBallHit_Params params {};
		params.pWorldContextObject = pWorldContextObject;
		params.pPayload = pPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATennisAvatar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisAvatar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.TennisAvatar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTennisAvatarAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTennisAvatarAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.TennisAvatarAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.TennisBall.OnShotChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATennisBall::OnShotChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisBall.OnShotChanged");
		
		ATennisBall_OnShotChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.TennisBall.OnRallyCountChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATennisBall::OnRallyCountChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisBall.OnRallyCountChanged");
		
		ATennisBall_OnRallyCountChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC5B0
	 * 		Name   -> Function SportsScramble.TennisBall.GetTennisBallProperties
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTennisBallProperties ATennisBall::GetTennisBallProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisBall.GetTennisBallProperties");
		
		ATennisBall_GetTennisBallProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC580
	 * 		Name   -> Function SportsScramble.TennisBall.GetTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* ATennisBall::GetTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisBall.GetTarget");
		
		ATennisBall_GetTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC540
	 * 		Name   -> Function SportsScramble.TennisBall.GetShot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTennisShot ATennisBall::GetShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisBall.GetShot");
		
		ATennisBall_GetShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC510
	 * 		Name   -> Function SportsScramble.TennisBall.GetSender
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* ATennisBall::GetSender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisBall.GetSender");
		
		ATennisBall_GetSender_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC4E0
	 * 		Name   -> Function SportsScramble.TennisBall.GetRallyCount
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATennisBall::GetRallyCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisBall.GetRallyCount");
		
		ATennisBall_GetRallyCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATennisBall.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisBall::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.TennisBall");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTennisBoxComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTennisBoxComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.TennisBoxComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTennisGlobalDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTennisGlobalDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.TennisGlobalDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC5F0
	 * 		Name   -> Function SportsScramble.TennisInstrument.GetTennisInstrumentProperties
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTennisInstrumentProperties ATennisInstrument::GetTennisInstrumentProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TennisInstrument.GetTennisInstrumentProperties");
		
		ATennisInstrument_GetTennisInstrumentProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATennisInstrument.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisInstrument::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.TennisInstrument");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTennisState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTennisState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.TennisState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC380
	 * 		Name   -> Function SportsScramble.TimeDisplayWidget.FormatTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UTimeDisplayWidget::FormatTime(float Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TimeDisplayWidget.FormatTime");
		
		UTimeDisplayWidget_FormatTime_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeDisplayWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeDisplayWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.TimeDisplayWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATravelSpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATravelSpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.TravelSpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC9B0
	 * 		Name   -> Function SportsScramble.TrophyAwardListenerBase.UpdateProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATrophyAwardListenerBase::UpdateProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyAwardListenerBase.UpdateProgress");
		
		ATrophyAwardListenerBase_UpdateProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC990
	 * 		Name   -> Function SportsScramble.TrophyAwardListenerBase.SaveProgressToSaveData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATrophyAwardListenerBase::SaveProgressToSaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyAwardListenerBase.SaveProgressToSaveData");
		
		ATrophyAwardListenerBase_SaveProgressToSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC860
	 * 		Name   -> Function SportsScramble.TrophyAwardListenerBase.Refresh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATrophyAwardListenerBase::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyAwardListenerBase.Refresh");
		
		ATrophyAwardListenerBase_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC650
	 * 		Name   -> Function SportsScramble.TrophyAwardListenerBase.LoadProgressFromSaveData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t ATrophyAwardListenerBase::LoadProgressFromSaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyAwardListenerBase.LoadProgressFromSaveData");
		
		ATrophyAwardListenerBase_LoadProgressFromSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.TrophyAwardListenerBase.Initialize
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrophyAwardListenerBase::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyAwardListenerBase.Initialize");
		
		ATrophyAwardListenerBase_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC630
	 * 		Name   -> Function SportsScramble.TrophyAwardListenerBase.IncreaseProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATrophyAwardListenerBase::IncreaseProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyAwardListenerBase.IncreaseProgress");
		
		ATrophyAwardListenerBase_IncreaseProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC360
	 * 		Name   -> Function SportsScramble.TrophyAwardListenerBase.AwardTrophy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATrophyAwardListenerBase::AwardTrophy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyAwardListenerBase.AwardTrophy");
		
		ATrophyAwardListenerBase_AwardTrophy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrophyAwardListenerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrophyAwardListenerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.TrophyAwardListenerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC9D0
	 * 		Name   -> Function SportsScramble.TrophyGrabbable.WasTrophyEarned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATrophyGrabbable::WasTrophyEarned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.WasTrophyEarned");
		
		ATrophyGrabbable_WasTrophyEarned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC880
	 * 		Name   -> Function SportsScramble.TrophyGrabbable.RespawnTrophy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATrophyGrabbable::RespawnTrophy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.RespawnTrophy");
		
		ATrophyGrabbable_RespawnTrophy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC7D0
	 * 		Name   -> Function SportsScramble.TrophyGrabbable.OverrideInitialRotation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    overrideRotation                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ATrophyGrabbable::OverrideInitialRotation(const struct FRotator& overrideRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.OverrideInitialRotation");
		
		ATrophyGrabbable_OverrideInitialRotation_Params params {};
		params.overrideRotation = overrideRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC740
	 * 		Name   -> Function SportsScramble.TrophyGrabbable.OverrideInitialPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     overridePosition                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATrophyGrabbable::OverrideInitialPosition(const struct FVector& overridePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.OverrideInitialPosition");
		
		ATrophyGrabbable_OverrideInitialPosition_Params params {};
		params.overridePosition = overridePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.TrophyGrabbable.OnTrophyRespawnToOriginalPosition
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATrophyGrabbable::OnTrophyRespawnToOriginalPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.OnTrophyRespawnToOriginalPosition");
		
		ATrophyGrabbable_OnTrophyRespawnToOriginalPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.TrophyGrabbable.OnTrophyReleased
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATrophyGrabbable::OnTrophyReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.OnTrophyReleased");
		
		ATrophyGrabbable_OnTrophyReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.TrophyGrabbable.OnTrophyGrabbed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATrophyGrabbable::OnTrophyGrabbed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.OnTrophyGrabbed");
		
		ATrophyGrabbable_OnTrophyGrabbed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.TrophyGrabbable.OnStopPointingAt
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATrophyGrabbable::OnStopPointingAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.OnStopPointingAt");
		
		ATrophyGrabbable_OnStopPointingAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SportsScramble.TrophyGrabbable.OnStartPointingAt
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATrophyGrabbable::OnStartPointingAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.OnStartPointingAt");
		
		ATrophyGrabbable_OnStartPointingAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC4A0
	 * 		Name   -> Function SportsScramble.TrophyGrabbable.GetInitialRotation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FRotator ATrophyGrabbable::GetInitialRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.GetInitialRotation");
		
		ATrophyGrabbable_GetInitialRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003EC460
	 * 		Name   -> Function SportsScramble.TrophyGrabbable.GetInitialPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ATrophyGrabbable::GetInitialPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.TrophyGrabbable.GetInitialPosition");
		
		ATrophyGrabbable_GetInitialPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrophyGrabbable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrophyGrabbable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.TrophyGrabbable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003ECBA0
	 * 		Name   -> Function SportsScramble.UpdateSessionCallbackProxyAdvanced.UpdateSession
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PublicConnections                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PrivateConnections                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLAN                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowInvites                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowJoinInProgress                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRefreshOnlineData                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsDedicatedServer                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpdateSessionCallbackProxyAdvanced* UUpdateSessionCallbackProxyAdvanced::STATIC_UpdateSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SportsScramble.UpdateSessionCallbackProxyAdvanced.UpdateSession");
		
		UUpdateSessionCallbackProxyAdvanced_UpdateSession_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpdateSessionCallbackProxyAdvanced.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpdateSessionCallbackProxyAdvanced::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SportsScramble.UpdateSessionCallbackProxyAdvanced");
		return ptr;
	}

}


