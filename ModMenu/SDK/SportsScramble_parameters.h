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
// Parameters
//---------------------------------------------------------------------------

// Function SportsScramble.AcceptInviteCallbackProxy.FriendInviteClientConnect
struct UAcceptInviteCallbackProxy_FriendInviteClientConnect_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AcceptInviteCallbackProxy.AcceptInvite
struct UAcceptInviteCallbackProxy_AcceptInvite_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScramGameInvite                            invite;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UAcceptInviteCallbackProxy*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ActorSet.ResetActors
struct UActorSet_ResetActors_Params
{
};

// Function SportsScramble.ActorSet.GetNextActor
struct UActorSet_GetNextActor_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ActorSet.AvoidActor
struct UActorSet_AvoidActor_Params
{
	class UClass*                                      ActorClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.UniqueNetIdToString
struct UAdvancedSessionsLibrary_UniqueNetIdToString_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     String;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.SetPlayerName
struct UAdvancedSessionsLibrary_SetPlayerName_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
struct UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Params
{
	struct FSessionPropertyKeyPair                     SessionSearchProperty;                                     // (Parm, NativeAccessSpecifierPublic)
	SportsScramble_EOnlineComparisonOpRedux            ComparisonOp;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionsSearchSetting                      ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Params
{
	struct FName                                       Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionPropertyKeyPair                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Params
{
	struct FName                                       Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionPropertyKeyPair                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Params
{
	struct FName                                       Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionPropertyKeyPair                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Params
{
	struct FName                                       Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionPropertyKeyPair                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Params
{
	struct FName                                       Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionPropertyKeyPair                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.IsValidUniqueNetID
struct UAdvancedSessionsLibrary_IsValidUniqueNetID_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.IsValidSession
struct UAdvancedSessionsLibrary_IsValidSession_Params
{
	struct FBlueprintSessionResult                     SessionResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.IsPlayerInSession
struct UAdvancedSessionsLibrary_IsPlayerInSession_Params
{
	struct FBPUniqueNetId                              PlayerToCheck;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bIsInSession;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.HasOnlineSubsystem
struct UAdvancedSessionsLibrary_HasOnlineSubsystem_Params
{
	struct FName                                       SubSystemName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
struct UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Params
{
	class APlayerState*                                PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              UniqueNetId;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetUniqueNetID
struct UAdvancedSessionsLibrary_GetUniqueNetID_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              UniqueNetId;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetUniqueBuildID
struct UAdvancedSessionsLibrary_GetUniqueBuildID_Params
{
	struct FBlueprintSessionResult                     SessionResult;                                             // (Parm, NativeAccessSpecifierPublic)
	int                                                UniqueBuildId;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetSessionState
struct UAdvancedSessionsLibrary_GetSessionState_Params
{
	SportsScramble_EBPOnlineSessionState               SessionState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetSessionSettings
struct UAdvancedSessionsLibrary_GetSessionSettings_Params
{
	int                                                NumConnections;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPrivateConnections;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLAN;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDedicated;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowInvites;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowJoinInProgress;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAnticheatEnabled;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BuildUniqueID;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	SportsScramble_EBlueprintResultSwitch              Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyString
struct UAdvancedSessionsLibrary_GetSessionPropertyString_Params
{
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ESessionSettingSearchResult         SearchResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SettingValue;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyKey
struct UAdvancedSessionsLibrary_GetSessionPropertyKey_Params
{
	struct FSessionPropertyKeyPair                     SessionProperty;                                           // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyInt
struct UAdvancedSessionsLibrary_GetSessionPropertyInt_Params
{
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ESessionSettingSearchResult         SearchResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SettingValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyFloat
struct UAdvancedSessionsLibrary_GetSessionPropertyFloat_Params
{
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ESessionSettingSearchResult         SearchResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SettingValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyByte
struct UAdvancedSessionsLibrary_GetSessionPropertyByte_Params
{
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ESessionSettingSearchResult         SearchResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SettingValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyBool
struct UAdvancedSessionsLibrary_GetSessionPropertyBool_Params
{
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ESessionSettingSearchResult         SearchResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SettingValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetPlayerName
struct UAdvancedSessionsLibrary_GetPlayerName_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
struct UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumNetPlayers;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetNetPlayerIndex
struct UAdvancedSessionsLibrary_GetNetPlayerIndex_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NetPlayerIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetExtraSettings
struct UAdvancedSessionsLibrary_GetExtraSettings_Params
{
	struct FBlueprintSessionResult                     SessionResult;                                             // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
struct UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Params
{
	int                                                UniqueBuildId;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
struct UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Params
{
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBlueprintResultSwitch              Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutIndex;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.FindSessionPropertyByName
struct UAdvancedSessionsLibrary_FindSessionPropertyByName_Params
{
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingsName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBlueprintResultSwitch              Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionPropertyKeyPair                     OutProperty;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
struct UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Params
{
	struct FBPUniqueNetId                              A;                                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              B;                                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.AdvancedSessionsLibrary.AddOrModifyExtraSettings
struct UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Params
{
	TArray<struct FSessionPropertyKeyPair>             SettingsArray;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>             NewOrChangedSettings;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>             ModifiedSettingsArray;                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramActor.PlayManagedSoundAtLocation
struct AScramActor_PlayManagedSoundAtLocation_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramActor.HasBegunPlay
struct AScramActor_HasBegunPlay_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramActor.AttachSound2D
struct AScramActor_AttachSound2D_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUiSound;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramAvatar.PlaySpawnAnimation
struct AScramAvatar_PlaySpawnAnimation_Params
{
};

// Function SportsScramble.ScramAvatar.GetPlayerIndex
struct AScramAvatar_GetPlayerIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramAvatar.GetPlayer
struct AScramAvatar_GetPlayer_Params
{
	class AScramPlayer*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramAvatar.GetGlobalColor
struct AScramAvatar_GetGlobalColor_Params
{
	struct FName                                       globalColorName;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramMeshActor.HasBegunPlay
struct AScramMeshActor_HasBegunPlay_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.SetPrimitiveTrajectory
struct AScramPrimitiveActor_SetPrimitiveTrajectory_Params
{
	struct FScramTrajectory                            trajectory;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.ResumeTrajectory
struct AScramPrimitiveActor_ResumeTrajectory_Params
{
};

// Function SportsScramble.ScramPrimitiveActor.RecreatePhysicsState
struct AScramPrimitiveActor_RecreatePhysicsState_Params
{
};

// Function SportsScramble.ScramPrimitiveActor.PauseTrajectory
struct AScramPrimitiveActor_PauseTrajectory_Params
{
};

// Function SportsScramble.ScramPrimitiveActor.OnRep_ClientTrajectoryPaused
struct AScramPrimitiveActor_OnRep_ClientTrajectoryPaused_Params
{
};

// Function SportsScramble.ScramPrimitiveActor.NotifyPrimitiveDestroyed
struct AScramPrimitiveActor_NotifyPrimitiveDestroyed_Params
{
};

// Function SportsScramble.ScramPrimitiveActor.NetResumeTrajectory
struct AScramPrimitiveActor_NetResumeTrajectory_Params
{
};

// Function SportsScramble.ScramPrimitiveActor.NetPauseTrajectory
struct AScramPrimitiveActor_NetPauseTrajectory_Params
{
};

// Function SportsScramble.ScramPrimitiveActor.NetDestroyPrimitive
struct AScramPrimitiveActor_NetDestroyPrimitive_Params
{
	bool                                               playOut;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.IsPrimitiveSimulatingPhysics
struct AScramPrimitiveActor_IsPrimitiveSimulatingPhysics_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.IsPrimitivePendingDestroy
struct AScramPrimitiveActor_IsPrimitivePendingDestroy_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.IsPrimitiveInMotion
struct AScramPrimitiveActor_IsPrimitiveInMotion_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.IsPrimitiveFollowingSpline
struct AScramPrimitiveActor_IsPrimitiveFollowingSpline_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.IsPrimitiveDestroyed
struct AScramPrimitiveActor_IsPrimitiveDestroyed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.InitializePrimitiveTrajectory
struct AScramPrimitiveActor_InitializePrimitiveTrajectory_Params
{
	struct FScramTrajectory                            trajectory;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.GetTrajectoryPaused
struct AScramPrimitiveActor_GetTrajectoryPaused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveVisMesh
struct AScramPrimitiveActor_GetPrimitiveVisMesh_Params
{
	class UMeshComponent*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveTrajectory
struct AScramPrimitiveActor_GetPrimitiveTrajectory_Params
{
	struct FScramTrajectory                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveRotation
struct AScramPrimitiveActor_GetPrimitiveRotation_Params
{
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveProperties
struct AScramPrimitiveActor_GetPrimitiveProperties_Params
{
	struct FScramPrimitiveProperties                   ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.GetPrimitivePhysicalAngularVelocity
struct AScramPrimitiveActor_GetPrimitivePhysicalAngularVelocity_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveMotionState
struct AScramPrimitiveActor_GetPrimitiveMotionState_Params
{
	struct FMotionState                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveLocation
struct AScramPrimitiveActor_GetPrimitiveLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveLinearVelocity
struct AScramPrimitiveActor_GetPrimitiveLinearVelocity_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.GetPrimitiveComponent
struct AScramPrimitiveActor_GetPrimitiveComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.GetFloorBouncesWithCurrentTrajectory
struct AScramPrimitiveActor_GetFloorBouncesWithCurrentTrajectory_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.GetEnvironmentBouncesWithCurrentTrajectory
struct AScramPrimitiveActor_GetEnvironmentBouncesWithCurrentTrajectory_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveActor.DestroyPrimitive
struct AScramPrimitiveActor_DestroyPrimitive_Params
{
	bool                                               playOut;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveGrabbable.SetProxyGrabbable
struct AScramPrimitiveGrabbable_SetProxyGrabbable_Params
{
	class AScramPrimitiveGrabbable*                    grabbable;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveGrabbable.OnGrabbableDeactivated
struct AScramPrimitiveGrabbable_OnGrabbableDeactivated_Params
{
};

// Function SportsScramble.ScramPrimitiveGrabbable.OnGrabbableActivated
struct AScramPrimitiveGrabbable_OnGrabbableActivated_Params
{
};

// Function SportsScramble.ScramPrimitiveGrabbable.IsLocallyGrabbed
struct AScramPrimitiveGrabbable_IsLocallyGrabbed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveGrabbable.InitialGrabInProgress
struct AScramPrimitiveGrabbable_InitialGrabInProgress_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveGrabbable.GrabbableIsTracked
struct AScramPrimitiveGrabbable_GrabbableIsTracked_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveGrabbable.GetProxyGrabbable
struct AScramPrimitiveGrabbable_GetProxyGrabbable_Params
{
	class AScramPrimitiveGrabbable*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveGrabbable.GetHidesAvatarHands
struct AScramPrimitiveGrabbable_GetHidesAvatarHands_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveGrabbable.CurrentPlayer
struct AScramPrimitiveGrabbable_CurrentPlayer_Params
{
	class AScramPlayer*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveGrabbable.CurrentHand
struct AScramPrimitiveGrabbable_CurrentHand_Params
{
	class AScramPlayerHand*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPrimitiveGrabbable.CurrentGrabberActor
struct AScramPrimitiveGrabbable_CurrentGrabberActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBall.SetImmuneToInstruments
struct AScramBall_SetImmuneToInstruments_Params
{
	bool                                               immune;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBall.SetHitsBallHitters
struct AScramBall_SetHitsBallHitters_Params
{
	bool                                               hits;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBall.SetHitByInstrument
struct AScramBall_SetHitByInstrument_Params
{
};

// Function SportsScramble.ScramBall.IsImmuneToInstruments
struct AScramBall_IsImmuneToInstruments_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBall.GetHitsBallHitters
struct AScramBall_GetHitsBallHitters_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBall.GetBallProperties
struct AScramBall_GetBallProperties_Params
{
	struct FScramBallProperties                        ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBall.EverHitByInstrument
struct AScramBall_EverHitByInstrument_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.TrySetFutureHit
struct ABaseballBall_TrySetFutureHit_Params
{
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.SetVerticalFieldZone
struct ABaseballBall_SetVerticalFieldZone_Params
{
	SportsScramble_EVerticalFieldZone                  verticalFieldZone;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.SetIsThrow
struct ABaseballBall_SetIsThrow_Params
{
	bool                                               isThrow;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.SetForceCharge
struct ABaseballBall_SetForceCharge_Params
{
	bool                                               shouldCharge;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.SetBallImbued
struct ABaseballBall_SetBallImbued_Params
{
	bool                                               Imbued;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.OnShotChanged
struct ABaseballBall_OnShotChanged_Params
{
};

// Function SportsScramble.BaseballBall.OnRep_NetworkMotionState
struct ABaseballBall_OnRep_NetworkMotionState_Params
{
};

// Function SportsScramble.BaseballBall.OnRep_BowlingBall
struct ABaseballBall_OnRep_BowlingBall_Params
{
};

// Function SportsScramble.BaseballBall.OnImbuedChanged
struct ABaseballBall_OnImbuedChanged_Params
{
};

// Function SportsScramble.BaseballBall.OnHit
struct ABaseballBall_OnHit_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.OnFloorResultChanged
struct ABaseballBall_OnFloorResultChanged_Params
{
	SportsScramble_EFloorResult                        newFloorResult;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.IsRollingPitch
struct ABaseballBall_IsRollingPitch_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.IsBallImbued
struct ABaseballBall_IsBallImbued_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.GetVerticalFieldZone
struct ABaseballBall_GetVerticalFieldZone_Params
{
	SportsScramble_EVerticalFieldZone                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.GetShot
struct ABaseballBall_GetShot_Params
{
	struct FBaseballShot                               ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.GetIsThrow
struct ABaseballBall_GetIsThrow_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.GetForceCharge
struct ABaseballBall_GetForceCharge_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.GetFloorResult
struct ABaseballBall_GetFloorResult_Params
{
	SportsScramble_EFloorResult                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBall.GetBaseballBallProperties
struct ABaseballBall_GetBaseballBallProperties_Params
{
	struct FBaseballBallProperties                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBallClassifier.OnBallHit
struct ABaseballBallClassifier_OnBallHit_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBallClassifier.OnBallBounced
struct ABaseballBallClassifier_OnBallBounced_Params
{
	SportsScramble_EBallState                          ballState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                numBounces;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBallScrambleDisplay.SetIcon
struct ABaseballBallScrambleDisplay_SetIcon_Params
{
	int                                                Index;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Icon;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBallScrambleDisplay.GoAway
struct ABaseballBallScrambleDisplay_GoAway_Params
{
};

// Function SportsScramble.BaseballBallSelector.TrySpawnScrambleTargets
struct ABaseballBallSelector_TrySpawnScrambleTargets_Params
{
	TArray<SportsScramble_EBaseballScrambleTargetLocations> validDisplays;                                             // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                numToSpawn;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChance                                     imbueChance;                                               // (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               localPlayerIsBatter;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBallSelector.TrySetBalls
struct ABaseballBallSelector_TrySetBalls_Params
{
	TArray<struct FBaseballBallScrambleProperties>     ballProperties;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBallSelector.TryChangeBallTable
struct ABaseballBallSelector_TryChangeBallTable_Params
{
	class UDataTable*                                  BallTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballBallSelector.ClearScrambleTargets
struct ABaseballBallSelector_ClearScrambleTargets_Params
{
};

// Function SportsScramble.BaseballGlobalDataAsset.GetBatterPlayAreas
struct UBaseballGlobalDataAsset_GetBatterPlayAreas_Params
{
	struct FBox                                        minPlayArea;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        maxPlayArea;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        maxHazardArea;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	SportsScramble_EBattingSide                        Side;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramInstrument.GetLeverVelocity
struct AScramInstrument_GetLeverVelocity_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramInstrument.GetInstrumentProperties
struct AScramInstrument_GetInstrumentProperties_Params
{
	struct FScramInstrumentProperties                  ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballInstrument.OnInstrumentBreakEvent
struct ABaseballInstrument_OnInstrumentBreakEvent_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballInstrument.IsPendingRelease
struct ABaseballInstrument_IsPendingRelease_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballInstrument.InstrumentLowHealth
struct ABaseballInstrument_InstrumentLowHealth_Params
{
	float                                              health;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballInstrument.GetBaseballInstrumentProperties
struct ABaseballInstrument_GetBaseballInstrumentProperties_Params
{
	struct FBaseballInstrumentProperties               ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballInstrumentSelector.TrySetInstruments
struct ABaseballInstrumentSelector_TrySetInstruments_Params
{
	TArray<struct FBaseballInstrumentEntryProperties>  instrumentEntries;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballInstrumentSelector.TryChangeInstrumentTable
struct ABaseballInstrumentSelector_TryChangeInstrumentTable_Params
{
	class UDataTable*                                  InstrumentTable;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballInstrumentSelector.SetSelectorVisible
struct ABaseballInstrumentSelector_SetSelectorVisible_Params
{
	bool                                               visible;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballInstrumentSelector.OnRep_ClientSpawnedInstruments
struct ABaseballInstrumentSelector_OnRep_ClientSpawnedInstruments_Params
{
};

// Function SportsScramble.BaseballInstrumentSelector.InstrumentSelected
struct ABaseballInstrumentSelector_InstrumentSelected_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGlove.GetGrabberHandedness
struct AScramGlove_GetGrabberHandedness_Params
{
	SportsScramble_EScramHandedness                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGlove.ForceGrab
struct AScramGlove_ForceGrab_Params
{
	class AActor*                                      GrabbableActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballMitt.OnScrambleBallGrabbed
struct ABaseballMitt_OnScrambleBallGrabbed_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballMitt.OnRep_ClientSpawnedBalls
struct ABaseballMitt_OnRep_ClientSpawnedBalls_Params
{
};

// Function SportsScramble.BaseballMitt.GetScrambleOptionsFull
struct ABaseballMitt_GetScrambleOptionsFull_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballMitt.GetScrambleOptions
struct ABaseballMitt_GetScrambleOptions_Params
{
	TArray<struct FMittSpawnInfo>                      ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballMitt.ClearScrambleOptions
struct ABaseballMitt_ClearScrambleOptions_Params
{
};

// Function SportsScramble.BaseballMitt.AddScrambleBallWithType
struct ABaseballMitt_AddScrambleBallWithType_Params
{
	class UClass*                                      BallClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Imbued;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballPitchingPropManager.SpawnRegisteredObjects
struct ABaseballPitchingPropManager_SpawnRegisteredObjects_Params
{
	SportsScramble_EBaseballBallType                   BallType;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballPitchingPropManager.ClearAllObjects
struct ABaseballPitchingPropManager_ClearAllObjects_Params
{
};

// Function SportsScramble.ScramBallTrigger.OnTriggered
struct AScramBallTrigger_OnTriggered_Params
{
	class AScramBall*                                  Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBallTrigger.IsFutureHitPending
struct AScramBallTrigger_IsFutureHitPending_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BaseballThrowingGlove.OnBowlingGloveRelease
struct ABaseballThrowingGlove_OnBowlingGloveRelease_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BattingAvatar.OnSwung
struct ABattingAvatar_OnSwung_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BattingAvatar.OnHit
struct ABattingAvatar_OnHit_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BlobShadowComponent.ScaleOut
struct UBlobShadowComponent_ScaleOut_Params
{
	float                                              scaleOutTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BlobShadowComponent.ScaleIn
struct UBlobShadowComponent_ScaleIn_Params
{
	float                                              scaleInTime;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BlobShadowComponent.FadeOut
struct UBlobShadowComponent_FadeOut_Params
{
	float                                              fadeOutTime;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BlobShadowComponent.FadeIn
struct UBlobShadowComponent_FadeIn_Params
{
	float                                              fadeInTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.SetPlayer
struct ABowlingAlley_SetPlayer_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.SetPinsetter
struct ABowlingAlley_SetPinsetter_Params
{
	class ABowlingPinsetter*                           pinsetter;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.OnBallReleased
struct ABowlingAlley_OnBallReleased_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.OnBallOut
struct ABowlingAlley_OnBallOut_Params
{
	class ABowlingBall*                                Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               pit;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               restricted;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.OnBallGrabbed
struct ABowlingAlley_OnBallGrabbed_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.OnBallDestroyed
struct ABowlingAlley_OnBallDestroyed_Params
{
	class AActor*                                      pBallActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.IsLaneReady
struct ABowlingAlley_IsLaneReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.GetScore
struct ABowlingAlley_GetScore_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.GetPlayer
struct ABowlingAlley_GetPlayer_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.GetFloorZ
struct ABowlingAlley_GetFloorZ_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.GetFloorMaterial
struct ABowlingAlley_GetFloorMaterial_Params
{
	class UPhysicalMaterial*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.GetBalls
struct ABowlingAlley_GetBalls_Params
{
	TArray<class ABowlingBall*>                        ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.GetBallReturn
struct ABowlingAlley_GetBallReturn_Params
{
	class ABowlingBallReturn*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.GetAlley
struct ABowlingAlley_GetAlley_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABowlingAlley*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.GetActiveLane
struct ABowlingAlley_GetActiveLane_Params
{
	class ABowlingLane*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.ClearBalls
struct ABowlingAlley_ClearBalls_Params
{
	bool                                               includeThrownBalls;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.ClearBall
struct ABowlingAlley_ClearBall_Params
{
	class ABowlingBall*                                Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.AnyThrownBallsRemaining
struct ABowlingAlley_AnyThrownBallsRemaining_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.AddInstigatorBallCode
struct ABowlingAlley_AddInstigatorBallCode_Params
{
	class ABowlingBall*                                Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAlley.AddBall
struct ABowlingAlley_AddBall_Params
{
	class ABowlingBall*                                Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingAvatar.OnBallReleased
struct ABowlingAvatar_OnBallReleased_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBall.SetValidRoll
struct ABowlingBall_SetValidRoll_Params
{
	bool                                               validRoll;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBall.OnThrowChanged
struct ABowlingBall_OnThrowChanged_Params
{
};

// Function SportsScramble.BowlingBall.OnHitPin
struct ABowlingBall_OnHitPin_Params
{
	class ABowlingPin*                                 Pin;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBall.OnHitLane
struct ABowlingBall_OnHitLane_Params
{
	class ABowlingLane*                                Lane;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              bounceSpeed;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBall.OnHitFootballBlocker
struct ABowlingBall_OnHitFootballBlocker_Params
{
	class ABowlingFootballBlocker*                     FootballBlocker;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBall.OnFloorResultChanged
struct ABowlingBall_OnFloorResultChanged_Params
{
	SportsScramble_EFloorResult                        newFloorResult;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBall.IsBouncing
struct ABowlingBall_IsBouncing_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBall.GetValidRoll
struct ABowlingBall_GetValidRoll_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBall.GetThrow
struct ABowlingBall_GetThrow_Params
{
	struct FBowlingThrow                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBall.GetFloorResult
struct ABowlingBall_GetFloorResult_Params
{
	SportsScramble_EFloorResult                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBall.GetBowlingBallProperties
struct ABowlingBall_GetBowlingBallProperties_Params
{
	struct FBowlingBallProperties                      ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBallReturn.SetSlideDirection
struct ABowlingBallReturn_SetSlideDirection_Params
{
	bool                                               Forward;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBallReturn.ResetBallTable
struct ABowlingBallReturn_ResetBallTable_Params
{
};

// Function SportsScramble.BowlingBallReturn.PreLevelChangeCleanup
struct ABowlingBallReturn_PreLevelChangeCleanup_Params
{
};

// Function SportsScramble.BowlingBallReturn.OnTrackMotionStop
struct ABowlingBallReturn_OnTrackMotionStop_Params
{
};

// Function SportsScramble.BowlingBallReturn.OnTrackMotionStart
struct ABowlingBallReturn_OnTrackMotionStart_Params
{
};

// Function SportsScramble.BowlingBallReturn.OnReturnSlideStopped
struct ABowlingBallReturn_OnReturnSlideStopped_Params
{
};

// Function SportsScramble.BowlingBallReturn.OnReturnSlideStarted
struct ABowlingBallReturn_OnReturnSlideStarted_Params
{
};

// Function SportsScramble.BowlingBallReturn.IncrementBallSelection
struct ABowlingBallReturn_IncrementBallSelection_Params
{
	class UClass*                                      BallClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBallReturn.GetReturnTrack
struct ABowlingBallReturn_GetReturnTrack_Params
{
	class UBowlingBallReturnTrack*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBallReturn.GetRandomBall
struct ABowlingBallReturn_GetRandomBall_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBallReturnSlot.OnRep_ClientTrack
struct ABowlingBallReturnSlot_OnRep_ClientTrack_Params
{
};

// Function SportsScramble.BowlingBallReturnSlot.OnRep_ClientBall
struct ABowlingBallReturnSlot_OnRep_ClientBall_Params
{
};

// Function SportsScramble.BowlingBallReturnSlot.OnMotionStop
struct ABowlingBallReturnSlot_OnMotionStop_Params
{
};

// Function SportsScramble.BowlingBallReturnSlot.OnMotionStart
struct ABowlingBallReturnSlot_OnMotionStart_Params
{
};

// Function SportsScramble.BowlingBallReturnSlot.OnBallGrabbed
struct ABowlingBallReturnSlot_OnBallGrabbed_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBallReturnSlot.OnBallAttached
struct ABowlingBallReturnSlot_OnBallAttached_Params
{
};

// Function SportsScramble.BowlingBallReturnSlot.IsDisposing
struct ABowlingBallReturnSlot_IsDisposing_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBallReturnSlot.IsBallAttached
struct ABowlingBallReturnSlot_IsBallAttached_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBallReturnSlot.GetAttachedBall
struct ABowlingBallReturnSlot_GetAttachedBall_Params
{
	class ABowlingBall*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrajectoryUtils.GetInitialLinearVelocity
struct UScramTrajectoryUtils_GetInitialLinearVelocity_Params
{
	struct FScramTrajectory                            trajectory;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrajectoryInfluencerComponent.SetInfluencerEnabled
struct UScramTrajectoryInfluencerComponent_SetInfluencerEnabled_Params
{
	bool                                               Enabled;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrajectoryInfluencerBaseball.RemoveSkillFlag
struct UScramTrajectoryInfluencerBaseball_RemoveSkillFlag_Params
{
	SportsScramble_EScramSkill                         Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrajectoryInfluencerBaseball.HasSkillFlag
struct UScramTrajectoryInfluencerBaseball_HasSkillFlag_Params
{
	SportsScramble_EScramSkill                         Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrajectoryInfluencerBaseball.AddSkillFlag
struct UScramTrajectoryInfluencerBaseball_AddSkillFlag_Params
{
	SportsScramble_EScramSkill                         Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBallReturnTrack.SetupSlot
struct UBowlingBallReturnTrack_SetupSlot_Params
{
	class ABowlingBall*                                Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SlotClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBallReturnTrack.HasBall
struct UBowlingBallReturnTrack_HasBall_Params
{
	class ABowlingBall*                                Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBallReturnTrack.GetNumOccupiedSlots
struct UBowlingBallReturnTrack_GetNumOccupiedSlots_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingBallReturnTrack.FreeLastSlot
struct UBowlingBallReturnTrack_FreeLastSlot_Params
{
	struct FVector                                     disposalPoint;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingCenterScoreboard.GetTimeRemaining
struct ABowlingCenterScoreboard_GetTimeRemaining_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingFootballBlocker.StopBlocker
struct ABowlingFootballBlocker_StopBlocker_Params
{
};

// Function SportsScramble.BowlingFootballBlocker.StartBlocker
struct ABowlingFootballBlocker_StartBlocker_Params
{
	struct FTransform                                  centerTransform;                                           // (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              initialAngleDegrees;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingFootballBlocker.DeferredInit
struct ABowlingFootballBlocker_DeferredInit_Params
{
};

// Function SportsScramble.BowlingForceMagnet.DirectSuckStarted
struct ABowlingForceMagnet_DirectSuckStarted_Params
{
};

// Function SportsScramble.BowlingForceMagnet.DeactivateMagnet
struct ABowlingForceMagnet_DeactivateMagnet_Params
{
};

// Function SportsScramble.BowlingForceMagnet.ActivateMagnet
struct ABowlingForceMagnet_ActivateMagnet_Params
{
};

// Function SportsScramble.BowlingGlove.OnThrowFinalized
struct ABowlingGlove_OnThrowFinalized_Params
{
	class ABowlingBall*                                Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingGutterTracker.SimpleHitActor
struct UBowlingGutterTracker_SimpleHitActor_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingGutterTracker.ForceClearGutter
struct UBowlingGutterTracker_ForceClearGutter_Params
{
	bool                                               ClearRight;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingGutterTracker.FireRightParticle
struct UBowlingGutterTracker_FireRightParticle_Params
{
};

// Function SportsScramble.BowlingGutterTracker.FireLeftParticle
struct UBowlingGutterTracker_FireLeftParticle_Params
{
};

// Function SportsScramble.BowlingLane.ShowBaseballLane
struct ABowlingLane_ShowBaseballLane_Params
{
};

// Function SportsScramble.BowlingLane.ShouldUsePins
struct ABowlingLane_ShouldUsePins_Params
{
	bool                                               ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingLane.HideBaseballLane
struct ABowlingLane_HideBaseballLane_Params
{
};

// Function SportsScramble.BowlingLane.GetDownLaneVector
struct ABowlingLane_GetDownLaneVector_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingLane.GetAlley
struct ABowlingLane_GetAlley_Params
{
	class ABowlingAlley*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingLaneFlipper.SetLaunchTarget
struct ABowlingLaneFlipper_SetLaunchTarget_Params
{
	class USceneComponent*                             Target;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingLaneFlipper.FlipFlipper
struct ABowlingLaneFlipper_FlipFlipper_Params
{
};

// Function SportsScramble.BowlingPin.WasKnockedDown
struct ABowlingPin_WasKnockedDown_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingPin.StartCheckingForKnockedDown
struct ABowlingPin_StartCheckingForKnockedDown_Params
{
};

// Function SportsScramble.BowlingPin.OnKnockedDown
struct ABowlingPin_OnKnockedDown_Params
{
};

// Function SportsScramble.BowlingPin.IsAtRest
struct ABowlingPin_IsAtRest_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingPinsetter.ActivePinsCanBeScored
struct ABowlingPinsetter_ActivePinsCanBeScored_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingPlinko.ResolveBall
struct ABowlingPlinko_ResolveBall_Params
{
	class ABowlingPlinkoBall*                          Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              localY;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingPlinkoBall.SetWidget
struct ABowlingPlinkoBall_SetWidget_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingPlinkoBall.SetResolving
struct ABowlingPlinkoBall_SetResolving_Params
{
	bool                                               resolving;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingScoreKeeper.TryGetFrameScoreStatic
struct ABowlingScoreKeeper_TryGetFrameScoreStatic_Params
{
	int                                                score;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBowlingFrameSet                            frameSet;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingScoreKeeper.TryGetFrameScore
struct ABowlingScoreKeeper_TryGetFrameScore_Params
{
	int                                                score;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingScoreKeeper.ResetFrames
struct ABowlingScoreKeeper_ResetFrames_Params
{
};

// Function SportsScramble.BowlingScoreKeeper.IsGameDone
struct ABowlingScoreKeeper_IsGameDone_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingScoreKeeper.GetGameScore
struct ABowlingScoreKeeper_GetGameScore_Params
{
	int                                                Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingScoreKeeper.GetFrameScoreUpTo
struct ABowlingScoreKeeper_GetFrameScoreUpTo_Params
{
	bool                                               complete;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBowlingFrameSet                            frameSet;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                maxFrameIndex;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingScoreKeeper.GetCurrentPlayer
struct ABowlingScoreKeeper_GetCurrentPlayer_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingScoreKeeper.GetCurrentFrameIndex
struct ABowlingScoreKeeper_GetCurrentFrameIndex_Params
{
	int                                                Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingScoreKeeper.AreFramesDone
struct ABowlingScoreKeeper_AreFramesDone_Params
{
	int                                                Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingScoreKeeper.AddRoll
struct ABowlingScoreKeeper_AddRoll_Params
{
	bool                                               frameDone;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Roll;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderAlien.UpdateAnimation
struct ABowlingSpaceInvaderAlien_UpdateAnimation_Params
{
};

// Function SportsScramble.BowlingSpaceInvaderAlien.UncoverAlien
struct ABowlingSpaceInvaderAlien_UncoverAlien_Params
{
};

// Function SportsScramble.BowlingSpaceInvaderAlien.RunScoreFX
struct ABowlingSpaceInvaderAlien_RunScoreFX_Params
{
	class AActor*                                      Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderAlien.RunEndLaneFX
struct ABowlingSpaceInvaderAlien_RunEndLaneFX_Params
{
};

// Function SportsScramble.BowlingSpaceInvaderAlien.PatternRemover
struct ABowlingSpaceInvaderAlien_PatternRemover_Params
{
};

// Function SportsScramble.BowlingSpaceInvaderAlien.HideAlien
struct ABowlingSpaceInvaderAlien_HideAlien_Params
{
};

// Function SportsScramble.BowlingSpaceInvaderAlien.GetRelativePosition
struct ABowlingSpaceInvaderAlien_GetRelativePosition_Params
{
	struct FVector                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderAlien.GetGroup
struct ABowlingSpaceInvaderAlien_GetGroup_Params
{
	class ABowlingSpaceInvaderGroup*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderAlien.GetAlienID
struct ABowlingSpaceInvaderAlien_GetAlienID_Params
{
	int                                                ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderAlien.GetActive
struct ABowlingSpaceInvaderAlien_GetActive_Params
{
	bool                                               ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderAlien.AddScore
struct ABowlingSpaceInvaderAlien_AddScore_Params
{
	int                                                ScoreValue;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderGroup.SetBaseTimeStep
struct ABowlingSpaceInvaderGroup_SetBaseTimeStep_Params
{
	float                                              newBaseTimeStep;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderGroup.NotifyResetAlienGroup
struct ABowlingSpaceInvaderGroup_NotifyResetAlienGroup_Params
{
};

// Function SportsScramble.BowlingSpaceInvaderGroup.IsGroupInitialized
struct ABowlingSpaceInvaderGroup_IsGroupInitialized_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderGroup.IsGroupClear
struct ABowlingSpaceInvaderGroup_IsGroupClear_Params
{
	struct FVector                                     WorldPosition;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              clearMargin;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderGroup.IsGameplayRunning
struct ABowlingSpaceInvaderGroup_IsGameplayRunning_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderGroup.GetCurrentTimeStep
struct ABowlingSpaceInvaderGroup_GetCurrentTimeStep_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderGroup.EndGameplay
struct ABowlingSpaceInvaderGroup_EndGameplay_Params
{
};

// Function SportsScramble.BowlingSpaceInvaderGroup.DeferredInitComplete
struct ABowlingSpaceInvaderGroup_DeferredInitComplete_Params
{
};

// Function SportsScramble.BowlingSpaceInvaderGroup.DeferredInit
struct ABowlingSpaceInvaderGroup_DeferredInit_Params
{
};

// Function SportsScramble.BowlingSpaceInvaderGroup.ChangeTimeStep
struct ABowlingSpaceInvaderGroup_ChangeTimeStep_Params
{
	float                                              newTimeStep;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderGroup.BeginGameplay
struct ABowlingSpaceInvaderGroup_BeginGameplay_Params
{
};

// Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_UpdateAliens
struct ABowlingSpaceInvaderNetHelper_Server_UpdateAliens_Params
{
	struct FVector_NetQuantize                         newWorldPos;                                               // (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                       newWorldRot;                                               // (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class USoundBase*                                  pSoundAsset;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_ShutdownAliens
struct ABowlingSpaceInvaderNetHelper_Server_ShutdownAliens_Params
{
};

// Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_PrepareAliens
struct ABowlingSpaceInvaderNetHelper_Server_PrepareAliens_Params
{
};

// Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_UpdateAliens
struct ABowlingSpaceInvaderNetHelper_NetMulticast_UpdateAliens_Params
{
	struct FVector_NetQuantize                         newWorldPos;                                               // (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                       newWorldRot;                                               // (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class USoundBase*                                  pSoundAsset;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_ShutdownAliens
struct ABowlingSpaceInvaderNetHelper_NetMulticast_ShutdownAliens_Params
{
};

// Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_PrepareAliens
struct ABowlingSpaceInvaderNetHelper_NetMulticast_PrepareAliens_Params
{
};

// Function SportsScramble.BowlingSpinKicker.SimpleBeginOverlap
struct UBowlingSpinKicker_SimpleBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingUtils.SwitchHasBowlingAuthority
struct UBowlingUtils_SwitchHasBowlingAuthority_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBowlingAuthority                   Branch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingUtils.ObjectHasBowlingAuthority
struct UBowlingUtils_ObjectHasBowlingAuthority_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.BowlingUtils.HasBowlingAuthority
struct UBowlingUtils_HasBowlingAuthority_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.CancelOculusMatchmakingCallbackProxy.CancelOculusMatchmaking
struct UCancelOculusMatchmakingCallbackProxy_CancelOculusMatchmaking_Params
{
	class UCancelOculusMatchmakingCallbackProxy*       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.DestroyOculusSessionCallbackProxy.DestroyOculusSession
struct UDestroyOculusSessionCallbackProxy_DestroyOculusSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDestroyOculusSessionCallbackProxy*          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.DodgeballBall.OnShotChanged
struct ADodgeballBall_OnShotChanged_Params
{
};

// Function SportsScramble.DodgeballBall.GetShot
struct ADodgeballBall_GetShot_Params
{
	struct FDodgeballShot                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.DodgeballBall.GetDodgeballBallProperties
struct ADodgeballBall_GetDodgeballBallProperties_Params
{
	struct FDodgeballBallProperties                    ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.DodgeballGlove.PlayHaptic
struct ADodgeballGlove_PlayHaptic_Params
{
	class UHapticFeedbackEffect_Base*                  haptic;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.DodgeballGlove.ItemThrown
struct ADodgeballGlove_ItemThrown_Params
{
	class AActor*                                      Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Speed;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.DodgeballGlove.ItemPassed
struct ADodgeballGlove_ItemPassed_Params
{
	class AActor*                                      Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.DodgeballGlove.ItemCaught
struct ADodgeballGlove_ItemCaught_Params
{
	class AActor*                                      Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Speed;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramMeshShadow.GetShadowSample
struct UScramMeshShadow_GetShadowSample_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.FanMeshShadow.GetInstancedMeshFloatValue
struct UFanMeshShadow_GetInstancedMeshFloatValue_Params
{
	float                                              shadowSample;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.FieldingPlayerManager.SetTimeScale
struct AFieldingPlayerManager_SetTimeScale_Params
{
	SportsScramble_EVerticalFieldZone                  zone;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinMaxFloat                                TimeScale;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.FieldingPlayerManager.OnBallInPlay
struct AFieldingPlayerManager_OnBallInPlay_Params
{
	class ABaseballBall*                               Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EVerticalFieldZone                  zone;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.FieldingPlayerManager.GetTimeScale
struct AFieldingPlayerManager_GetTimeScale_Params
{
	SportsScramble_EVerticalFieldZone                  zone;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinMaxFloat                                ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.FlyTextLabel.SetText
struct AFlyTextLabel_SetText_Params
{
	struct FText                                       Text;                                                      // (Parm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.FlyTextLabel.SetScore
struct AFlyTextLabel_SetScore_Params
{
	int                                                score;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bonus;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       combineTag;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.GameInviteUtils.GetFriends
struct UGameInviteUtils_GetFriends_Params
{
	struct FScriptDelegate                             Event;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.HoopsLaneIndicator.StopIndicator
struct UHoopsLaneIndicator_StopIndicator_Params
{
};

// Function SportsScramble.HoopsLaneIndicator.StartIndicator
struct UHoopsLaneIndicator_StartIndicator_Params
{
};

// Function SportsScramble.HoopsLaneIndicator.SetFlipper
struct UHoopsLaneIndicator_SetFlipper_Params
{
	class ABowlingLaneFlipper*                         Flipper;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.HoopsLaneIndicator.ProgressIndicator
struct UHoopsLaneIndicator_ProgressIndicator_Params
{
};

// Function SportsScramble.InstancedMesh.UnregisterInstance
struct UInstancedMesh_UnregisterInstance_Params
{
};

// Function SportsScramble.InstancedMesh.SetInstanceFloatValue
struct UInstancedMesh_SetInstanceFloatValue_Params
{
	float                                              FloatValue;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.InstancedMesh.RegisterInstance
struct UInstancedMesh_RegisterInstance_Params
{
};

// Function SportsScramble.InviteFriendCallbackProxy.InviteFriend
struct UInviteFriendCallbackProxy_InviteFriend_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScramFriend                                invitedFriend;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UInviteFriendCallbackProxy*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.JoinOculusSessionCallbackProxy.JoinOculusSession
struct UJoinOculusSessionCallbackProxy_JoinOculusSession_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     SearchResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UJoinOculusSessionCallbackProxy*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.MenuInstrument.TryMakeActiveMenuInstrument
struct AMenuInstrument_TryMakeActiveMenuInstrument_Params
{
};

// Function SportsScramble.MenuInstrument.SetPointerMenuOption
struct AMenuInstrument_SetPointerMenuOption_Params
{
	bool                                               useMenuPointer;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.MenuInstrument.SetLaserPointerVisibility
struct AMenuInstrument_SetLaserPointerVisibility_Params
{
	bool                                               IsVisible;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.MenuInstrument.OnNotifyInputRelease
struct AMenuInstrument_OnNotifyInputRelease_Params
{
};

// Function SportsScramble.MenuInstrument.OnNotifyInputPress
struct AMenuInstrument_OnNotifyInputPress_Params
{
};

// Function SportsScramble.MenuInstrument.OnChangePointerType
struct AMenuInstrument_OnChangePointerType_Params
{
};

// Function SportsScramble.MenuInstrument.Initialize
struct AMenuInstrument_Initialize_Params
{
};

// Function SportsScramble.MusicManager.StopMusic
struct AMusicManager_StopMusic_Params
{
	float                                              FadeTime;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.MusicManager.Stop
struct AMusicManager_Stop_Params
{
	float                                              FadeTime;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.MusicManager.PlayMusicEntry
struct AMusicManager_PlayMusicEntry_Params
{
	struct FName                                       EntryName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeTime;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.MusicManager.PlayMusic
struct AMusicManager_PlayMusic_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeTime;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.MusicManager.PlayEntry
struct AMusicManager_PlayEntry_Params
{
	struct FName                                       EntryName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeTime;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.MusicManager.Play
struct AMusicManager_Play_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeTime;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.MusicManager.IsPlaying
struct AMusicManager_IsPlaying_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.MusicManager.IsMusicPlaying
struct AMusicManager_IsMusicPlaying_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.NetworkMotionStateManager.Server_ApplyReplicatedStates
struct ANetworkMotionStateManager_Server_ApplyReplicatedStates_Params
{
	TArray<struct FNetworkMotionState>                 States;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.NetworkMotionStateManager.OnRep_ReplicatedStates
struct ANetworkMotionStateManager_OnRep_ReplicatedStates_Params
{
};

// Function SportsScramble.PitchingAvatar.OnDrop
struct APitchingAvatar_OnDrop_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.PitchingAvatar.OnBaseballEvent
struct APitchingAvatar_OnBaseballEvent_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.PitchingAvatar.OnBallGrabbed
struct APitchingAvatar_OnBallGrabbed_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.PitchingPropInterface.SetBattingPlayer
struct UPitchingPropInterface_SetBattingPlayer_Params
{
	class AActor*                                      batterActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.PlayByPlay.NetMulticast_PlayByPlayEvent
struct APlayByPlay_NetMulticast_PlayByPlayEvent_Params
{
	int                                                eventIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.PlayByPlay.IsQueuedOrPlaying
struct APlayByPlay_IsQueuedOrPlaying_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.PlayByPlay.CultureChanged
struct APlayByPlay_CultureChanged_Params
{
};

// Function SportsScramble.PlayByPlayBaseball.OnBaseballEvent
struct APlayByPlayBaseball_OnBaseballEvent_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.PlayByPlayBaseball.BatChange
struct APlayByPlayBaseball_BatChange_Params
{
	SportsScramble_EBaseballInstrumentType             newBatType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.PlayByPlayBaseball.BallChange
struct APlayByPlayBaseball_BallChange_Params
{
	SportsScramble_EBaseballBallType                   newBallType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TennisBall.OnShotChanged
struct ATennisBall_OnShotChanged_Params
{
};

// Function SportsScramble.TennisBall.OnRallyCountChanged
struct ATennisBall_OnRallyCountChanged_Params
{
};

// Function SportsScramble.TennisBall.GetTennisBallProperties
struct ATennisBall_GetTennisBallProperties_Params
{
	struct FTennisBallProperties                       ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TennisBall.GetTarget
struct ATennisBall_GetTarget_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TennisBall.GetShot
struct ATennisBall_GetShot_Params
{
	struct FTennisShot                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TennisBall.GetSender
struct ATennisBall_GetSender_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TennisBall.GetRallyCount
struct ATennisBall_GetRallyCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.PlayByPlayTennis.SendPlayByPlayEvent
struct APlayByPlayTennis_SendPlayByPlayEvent_Params
{
	SportsScramble_ETennisPlayByPlayEvent              playByPlayEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.PlayByPlayTennis.RacquetChange
struct APlayByPlayTennis_RacquetChange_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTennisInstrumentProperties                 instrumentProps;                                           // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBallManager.SetMaxBalls
struct AScramBallManager_SetMaxBalls_Params
{
	int                                                maxBalls;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseAI.PlaySpawnAnimation
struct AScramBaseAI_PlaySpawnAnimation_Params
{
};

// Function SportsScramble.ScramBaseballBatterAI.PlayBatSound
struct AScramBaseballBatterAI_PlayBatSound_Params
{
	class ABaseballBall*                               Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BallSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseballCatcherAI.SetState
struct AScramBaseballCatcherAI_SetState_Params
{
	SportsScramble_ECatcherAIState                     newState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseballCatcherAI.SetGloveMode
struct AScramBaseballCatcherAI_SetGloveMode_Params
{
	SportsScramble_ECatcherGloveMode                   gloveMode;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramSkill                         Skill;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseballCatcherAI.OnBallHit
struct AScramBaseballCatcherAI_OnBallHit_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseballCatcherAI.OnBallDropped
struct AScramBaseballCatcherAI_OnBallDropped_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseballCatcherAI.OnBallCaught
struct AScramBaseballCatcherAI_OnBallCaught_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseballCatcherAI.GetGloveMode
struct AScramBaseballCatcherAI_GetGloveMode_Params
{
	class AScramSportManagerBaseball*                  pBaseball;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ECatcherGloveMode                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseballCatcherAI.BallCaught
struct AScramBaseballCatcherAI_BallCaught_Params
{
	class AActor*                                      Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBaseballBallType                   BallType;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Imbued;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseballFielderAI.OnBaseballEvent
struct AScramBaseballFielderAI_OnBaseballEvent_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseballFielderAI.NetMulticast_SetDesiredAnimState
struct AScramBaseballFielderAI_NetMulticast_SetDesiredAnimState_Params
{
	SportsScramble_EBaseballFielderAnimState           animState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseballPitcherAI.PlayMittSound
struct AScramBaseballPitcherAI_PlayMittSound_Params
{
	class ABaseballBall*                               Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BallSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseballPitcherAI.GetScrambleBallClass
struct AScramBaseballPitcherAI_GetScrambleBallClass_Params
{
	class UClass*                                      Ball;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseballRunnerAI.OnSpawn
struct AScramBaseballRunnerAI_OnSpawn_Params
{
};

// Function SportsScramble.ScramBaseballRunnerAI.OnDespawn
struct AScramBaseballRunnerAI_OnDespawn_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseballRunnerAI.HasReachedHome
struct AScramBaseballRunnerAI_HasReachedHome_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramBaseballRunnerAI.GetDestinationBase
struct AScramBaseballRunnerAI_GetDestinationBase_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScrambleTarget.GetAiValue
struct AScrambleTarget_GetAiValue_Params
{
	SportsScramble_EScrambleTargetAiValue              Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TextureSamplerSettings.SampleTexture
struct ATextureSamplerSettings_SampleTexture_Params
{
	struct FVector                                     worldPos;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      DefaultColor;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramCameraCover.EnqueueVignette
struct AScramCameraCover_EnqueueVignette_Params
{
	struct FCoverVignette                              vignette;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrajectoryInfluencerActor.SetInfluencerEnabled
struct AScramTrajectoryInfluencerActor_SetInfluencerEnabled_Params
{
	bool                                               Enabled;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramCourt.SetScramCourtMatchType
struct AScramCourt_SetScramCourtMatchType_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramCourtMatchType                matchType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramCourt.GetScramCourtMatchType
struct AScramCourt_GetScramCourtMatchType_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramCourtMatchType                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramDodgeballAI.SetTeam2
struct AScramDodgeballAI_SetTeam2_Params
{
};

// Function SportsScramble.ScramDodgeballAI.SetTeam1
struct AScramDodgeballAI_SetTeam1_Params
{
};

// Function SportsScramble.ScramDodgeballAI.SetPositionIndex
struct AScramDodgeballAI_SetPositionIndex_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramDodgeballAI.GetTeam
struct AScramDodgeballAI_GetTeam_Params
{
	SportsScramble_EScramDodgeballTeam                 ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramDodgeballAI.GetPositionIndex
struct AScramDodgeballAI_GetPositionIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramDodgeballPawnAI.StartGame
struct AScramDodgeballPawnAI_StartGame_Params
{
};

// Function SportsScramble.ScramDodgeballPawnAI.SetDelayBeforeThrowing
struct AScramDodgeballPawnAI_SetDelayBeforeThrowing_Params
{
	struct FMinMaxFloat                                delayBeforeThrow;                                          // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramDodgeballPawnAI.KnockedOut
struct AScramDodgeballPawnAI_KnockedOut_Params
{
};

// Function SportsScramble.ScramDodgeballPawnAI.BallThrown
struct AScramDodgeballPawnAI_BallThrown_Params
{
	class AActor*                                      Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Speed;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramEquipmentSet.PostEquipmentSpawn
struct AScramEquipmentSet_PostEquipmentSpawn_Params
{
	class AScramPrimitiveGrabbable*                    DominantHandSpawnedEquipment;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramPrimitiveGrabbable*                    OffHandSpawnedEquipment;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramEventObjectPayload.CreateObjectPayload
struct UScramEventObjectPayload_CreateObjectPayload_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventObjectPayload*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramEventCollisionPayload.CreateCollisionPayload
struct UScramEventCollisionPayload_CreateCollisionPayload_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitNormal;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventCollisionPayload*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramEventManager.UnbindEventFromObjectScramEvent
struct AScramEventManager_UnbindEventFromObjectScramEvent_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Event;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramEventManager.UnbindEventFromGlobalScramEvent
struct AScramEventManager_UnbindEventFromGlobalScramEvent_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Event;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramEventManager.BroadcastScramEvent
struct AScramEventManager_BroadcastScramEvent_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      Payload;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               replicate;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramEventManager.BindEventToObjectScramEvent
struct AScramEventManager_BindEventToObjectScramEvent_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Event;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramEventManager.BindEventToGlobalScramEvent
struct AScramEventManager_BindEventToGlobalScramEvent_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Event;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.StopGameInvitePings
struct UScramGameInstance_StopGameInvitePings_Params
{
};

// Function SportsScramble.ScramGameInstance.StartOculusAchievementSync
struct UScramGameInstance_StartOculusAchievementSync_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.ShowDebugMessage
struct UScramGameInstance_ShowDebugMessage_Params
{
	struct FString                                     Message;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeTime;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.SetUseVoiceChat
struct UScramGameInstance_SetUseVoiceChat_Params
{
	bool                                               useVoice;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.SetLocalizationCulture
struct UScramGameInstance_SetLocalizationCulture_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Culture;                                                   // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.SetAvatarLook
struct UScramGameInstance_SetAvatarLook_Params
{
	class AScramPlayer*                                pPlayer;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAvatarLook                                 AvatarLook;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.SaveGameData
struct UScramGameInstance_SaveGameData_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.RemoveShelfActor
struct UScramGameInstance_RemoveShelfActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.RefreshGameInvites
struct UScramGameInstance_RefreshGameInvites_Params
{
	struct FScriptDelegate                             Event;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.OnInputFocusReceived
struct UScramGameInstance_OnInputFocusReceived_Params
{
};

// Function SportsScramble.ScramGameInstance.OnInputFocusLost
struct UScramGameInstance_OnInputFocusLost_Params
{
};

// Function SportsScramble.ScramGameInstance.OnHeadsetReconnected
struct UScramGameInstance_OnHeadsetReconnected_Params
{
};

// Function SportsScramble.ScramGameInstance.OnHeadsetDisconnected
struct UScramGameInstance_OnHeadsetDisconnected_Params
{
};

// Function SportsScramble.ScramGameInstance.OnControllerConnectionChanged
struct UScramGameInstance_OnControllerConnectionChanged_Params
{
	bool                                               IsConnected;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.LocalNetworkVersionOverride
struct UScramGameInstance_LocalNetworkVersionOverride_Params
{
	uint32_t                                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.LoadSoftRefTexture
struct UScramGameInstance_LoadSoftRefTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.LoadSoftObject
struct UScramGameInstance_LoadSoftObject_Params
{
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.LoadSoftClassActor
struct UScramGameInstance_LoadSoftClassActor_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.LoadGameData
struct UScramGameInstance_LoadGameData_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.LoadArrayFromSoftTextures
struct UScramGameInstance_LoadArrayFromSoftTextures_Params
{
	TArray<class UTexture2D*>                          textureList;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.IsHeadsetConnected
struct UScramGameInstance_IsHeadsetConnected_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.InitializePendingGameInvitesComplete
struct UScramGameInstance_InitializePendingGameInvitesComplete_Params
{
	bool                                               wasSuccessful;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FScramGameInvite>                    invites;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.InitializePendingGameInvites
struct UScramGameInstance_InitializePendingGameInvites_Params
{
};

// Function SportsScramble.ScramGameInstance.HasSportStateSaved
struct UScramGameInstance_HasSportStateSaved_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.HasPendingGameInvites
struct UScramGameInstance_HasPendingGameInvites_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.GetUseVoiceChat
struct UScramGameInstance_GetUseVoiceChat_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.GetSaveData
struct UScramGameInstance_GetSaveData_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramSaveData*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.GetLocalizationCulture
struct UScramGameInstance_GetLocalizationCulture_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.DoesUseVoiceChat
struct UScramGameInstance_DoesUseVoiceChat_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.DismissPendingGameInvite
struct UScramGameInstance_DismissPendingGameInvite_Params
{
	struct FScramGameInvite                            invite;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.DismissAllPendingGameInvites
struct UScramGameInstance_DismissAllPendingGameInvites_Params
{
};

// Function SportsScramble.ScramGameInstance.ClearSavedSportState
struct UScramGameInstance_ClearSavedSportState_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.ClearDebugMessages
struct UScramGameInstance_ClearDebugMessages_Params
{
};

// Function SportsScramble.ScramGameInstance.BroadcastLocalAvatarLook
struct UScramGameInstance_BroadcastLocalAvatarLook_Params
{
};

// Function SportsScramble.ScramGameInstance.BeginListeningForDisconnection
struct UScramGameInstance_BeginListeningForDisconnection_Params
{
};

// Function SportsScramble.ScramGameInstance.AsyncLoadObjects
struct UScramGameInstance_AsyncLoadObjects_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.AsyncLoadClasses
struct UScramGameInstance_AsyncLoadClasses_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             onSuccessEvent;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.AreControllersConnected
struct UScramGameInstance_AreControllersConnected_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameInstance.AddShelfActor
struct UScramGameInstance_AddShelfActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameMode.ServerTravel
struct AScramGameMode_ServerTravel_Params
{
	struct FString                                     URL;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Absolute;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldSkipGameNotify;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameMode.ResetMatch
struct AScramGameMode_ResetMatch_Params
{
};

// Function SportsScramble.ScramGameMode.GetClientSportPreferences
struct AScramGameMode_GetClientSportPreferences_Params
{
	struct FScramSportPreferences                      ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameMode.DisallowMultiplayerLogins
struct AScramGameMode_DisallowMultiplayerLogins_Params
{
};

// Function SportsScramble.ScramGameMode.ClientSportPreferencesReceived
struct AScramGameMode_ClientSportPreferencesReceived_Params
{
};

// Function SportsScramble.ScramGameMode.AllowMatchmakingLogins
struct AScramGameMode_AllowMatchmakingLogins_Params
{
};

// Function SportsScramble.ScramGameMode.AllowFriendLogin
struct AScramGameMode_AllowFriendLogin_Params
{
	struct FScramFriend                                ScramFriend;                                               // (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.StartMatch
struct AScramGameState_StartMatch_Params
{
};

// Function SportsScramble.ScramGameState.ShowPausedActors
struct AScramGameState_ShowPausedActors_Params
{
};

// Function SportsScramble.ScramGameState.ShowAllActors
struct AScramGameState_ShowAllActors_Params
{
};

// Function SportsScramble.ScramGameState.SetActiveBallClass
struct AScramGameState_SetActiveBallClass_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      activeBallClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.OnPauseCapsuleRemoved
struct AScramGameState_OnPauseCapsuleRemoved_Params
{
};

// Function SportsScramble.ScramGameState.OnPauseCapsuleAdded
struct AScramGameState_OnPauseCapsuleAdded_Params
{
};

// Function SportsScramble.ScramGameState.OnActorSpawned
struct AScramGameState_OnActorSpawned_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.IsLocalGameStatePaused
struct AScramGameState_IsLocalGameStatePaused_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.IsGameStatePaused
struct AScramGameState_IsGameStatePaused_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.IsActorHidden
struct AScramGameState_IsActorHidden_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.HidePausedActors
struct AScramGameState_HidePausedActors_Params
{
};

// Function SportsScramble.ScramGameState.HideAllActors
struct AScramGameState_HideAllActors_Params
{
};

// Function SportsScramble.ScramGameState.GetSportManager
struct AScramGameState_GetSportManager_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramSportManagerBase*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.GetSport
struct AScramGameState_GetSport_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramSport                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.GetSmoothedPingVariance
struct AScramGameState_GetSmoothedPingVariance_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.GetSmoothedPingTime
struct AScramGameState_GetSmoothedPingTime_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.GetScramServerWorldTime
struct AScramGameState_GetScramServerWorldTime_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.GetPingTime
struct AScramGameState_GetPingTime_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.GetPauseCapsuleTransform
struct AScramGameState_GetPauseCapsuleTransform_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.GetActiveBallClass
struct AScramGameState_GetActiveBallClass_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.BlueprintCall_OnMultiplayerGameResume
struct AScramGameState_BlueprintCall_OnMultiplayerGameResume_Params
{
	bool                                               isCalledByHost;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EGamePauseReason                    reason;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramGameState.BlueprintCall_OnMultiplayerGamePaused
struct AScramGameState_BlueprintCall_OnMultiplayerGamePaused_Params
{
	bool                                               isCalledByHost;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EGamePauseReason                    reason;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramHandshakeActor.ServerReady
struct AScramHandshakeActor_ServerReady_Params
{
};

// Function SportsScramble.ScramInviteManager.HasAcceptedShellInvite
struct AScramInviteManager_HasAcceptedShellInvite_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramInviteManager.GetInviteManager
struct AScramInviteManager_GetInviteManager_Params
{
	class AScramInviteManager*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramLauncher.TryCalculateTrajectory
struct AScramLauncher_TryCalculateTrajectory_Params
{
	struct FScramTrajectory                            outTrajectory;                                             // (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FVector                                     launchOrigin;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              horizontalVariance;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              verticalVariance;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramLauncher.SetScrambleMods
struct AScramLauncher_SetScrambleMods_Params
{
	class UDataTable*                                  DataTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramLauncher.SetMinSpaceBetweenLeftRightMargins
struct AScramLauncher_SetMinSpaceBetweenLeftRightMargins_Params
{
	float                                              minSpace;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramLauncher.LaunchWithTrajectory
struct AScramLauncher_LaunchWithTrajectory_Params
{
	struct FScramTrajectory                            trajectory;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AScramBall*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramLauncher.Launch
struct AScramLauncher_Launch_Params
{
	float                                              horizontalVariance;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              verticalVariance;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramBall*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.SetAvatarLook
struct UScramNetworkHelperComponent_SetAvatarLook_Params
{
	class AScramPlayer*                                pPlayer;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAvatarLook                                 AvatarLook;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateTennisBallTrajectory
struct UScramNetworkHelperComponent_Server_UpdateTennisBallTrajectory_Params
{
	class ATennisBall*                                 pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTennisBallNetworkUpdate                    Update;                                                    // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateStickDrivenCatcherGlove
struct UScramNetworkHelperComponent_Server_UpdateStickDrivenCatcherGlove_Params
{
	class ABaseballThrowingGlove*                      pGlove;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              leftRight;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              upDown;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateDodgeballBallTrajectory
struct UScramNetworkHelperComponent_Server_UpdateDodgeballBallTrajectory_Params
{
	class ADodgeballBall*                              pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScramTrajectory                            trajectory;                                                // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FDodgeballShot                              newShot;                                                   // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateBowlingBallTrajectory
struct UScramNetworkHelperComponent_Server_UpdateBowlingBallTrajectory_Params
{
	class ABowlingBall*                                pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScramTrajectory                            trajectory;                                                // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBowlingThrow                               newThrow;                                                  // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateBaseballBallTrajectory
struct UScramNetworkHelperComponent_Server_UpdateBaseballBallTrajectory_Params
{
	class ABaseballBall*                               pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBaseballNetworkUpdate                      Update;                                                    // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_StartFollowingTrajectoryWithSlowDown
struct UScramNetworkHelperComponent_Server_StartFollowingTrajectoryWithSlowDown_Params
{
	class AScramPrimitiveActor*                        pPrimitive;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScramTrajectory                            trajectoryToFollow;                                        // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              TimeScale;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              maxStepDown;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_StartFollowingTrajectory
struct UScramNetworkHelperComponent_Server_StartFollowingTrajectory_Params
{
	class AScramPrimitiveActor*                        pPrimitive;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScramTrajectory                            trajectoryToFollow;                                        // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_SportManagerReady
struct UScramNetworkHelperComponent_Server_SportManagerReady_Params
{
	class AScramSportManagerBase*                      pSportManager;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_SpawnPitcherScrambleOptions
struct UScramNetworkHelperComponent_Server_SpawnPitcherScrambleOptions_Params
{
	class ABaseballMitt*                               pMitt;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_SetTennisBallRallyCount
struct UScramNetworkHelperComponent_Server_SetTennisBallRallyCount_Params
{
	class ATennisBall*                                 pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                rallyCount;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_SetPlayerPreferences
struct UScramNetworkHelperComponent_Server_SetPlayerPreferences_Params
{
	class AScramPlayer*                                pPlayer;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScramPlayerPreferences                     preferences;                                               // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_SetPlayerPausedRemote
struct UScramNetworkHelperComponent_Server_SetPlayerPausedRemote_Params
{
	class AScramPlayer*                                pPlayer;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EGamePauseReason                    reason;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               paused;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_SetFutureBallHit
struct UScramNetworkHelperComponent_Server_SetFutureBallHit_Params
{
	struct FFutureBallHit                              FutureBallHit;                                             // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_SetAvatarLook
struct UScramNetworkHelperComponent_Server_SetAvatarLook_Params
{
	class AScramPlayer*                                pPlayer;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAvatarLook                                 AvatarLook;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_ServeTriggerSpawnBall
struct UScramNetworkHelperComponent_Server_ServeTriggerSpawnBall_Params
{
	class AScramPlayerServeTrigger*                    pServeTrigger;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BallClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  SpawnTransform;                                            // (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_ServeBallSpawned
struct UScramNetworkHelperComponent_Server_ServeBallSpawned_Params
{
	class AScramPlayerServeTrigger*                    pServeTrigger;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramBall*                                  pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_ServeBallGrabbed
struct UScramNetworkHelperComponent_Server_ServeBallGrabbed_Params
{
	class AScramPlayerServeTrigger*                    pServeTrigger;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramBall*                                  pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_SendPlayByPlayEvent
struct UScramNetworkHelperComponent_Server_SendPlayByPlayEvent_Params
{
	int                                                eventIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pPlayer;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_RequestAvatarLook
struct UScramNetworkHelperComponent_Server_RequestAvatarLook_Params
{
	class AScramPlayer*                                pPlayer;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteGameDone
struct UScramNetworkHelperComponent_Server_RemoteGameDone_Params
{
	class AScramSportManagerBase*                      pSportManager;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillTerminate
struct UScramNetworkHelperComponent_Server_RemoteApplicationWillTerminate_Params
{
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillEnterBackground
struct UScramNetworkHelperComponent_Server_RemoteApplicationWillEnterBackground_Params
{
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillDeactivate
struct UScramNetworkHelperComponent_Server_RemoteApplicationWillDeactivate_Params
{
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationHasReactivated
struct UScramNetworkHelperComponent_Server_RemoteApplicationHasReactivated_Params
{
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationHasEnteredForeground
struct UScramNetworkHelperComponent_Server_RemoteApplicationHasEnteredForeground_Params
{
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_ReceiveHeartbeat
struct UScramNetworkHelperComponent_Server_ReceiveHeartbeat_Params
{
	uint16_t                                           remotePendingNetGeneration;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           remoteEstablishedNetGeneration;                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_PingHandShake
struct UScramNetworkHelperComponent_Server_PingHandShake_Params
{
	float                                              clientPingTime;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_MultiplayerGameResume
struct UScramNetworkHelperComponent_Server_MultiplayerGameResume_Params
{
	bool                                               isCalledByHost;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EGamePauseReason                    reason;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_MultiplayerGamePause
struct UScramNetworkHelperComponent_Server_MultiplayerGamePause_Params
{
	bool                                               isCalledByHost;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EGamePauseReason                    reason;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_HandshakeActorReady
struct UScramNetworkHelperComponent_Server_HandshakeActorReady_Params
{
	class AScramHandshakeActor*                        pHandshakeActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_GrabberRelease
struct UScramNetworkHelperComponent_Server_GrabberRelease_Params
{
	class AActor*                                      pGrabberActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_GrabberGrab
struct UScramNetworkHelperComponent_Server_GrabberGrab_Params
{
	class AActor*                                      pGrabberActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pGrabbableActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               snap;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_DrawDebugSphere
struct UScramNetworkHelperComponent_Server_DrawDebugSphere_Params
{
	class AActor*                                      pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Center;                                                    // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Segments;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeTime;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_DestroyPrimitive
struct UScramNetworkHelperComponent_Server_DestroyPrimitive_Params
{
	class AScramPrimitiveActor*                        pPrimitive;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               playOut;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_ClearTennisBallTrajectoryOwnership
struct UScramNetworkHelperComponent_Server_ClearTennisBallTrajectoryOwnership_Params
{
	class ATennisBall*                                 pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_ClearPausedTrajectory
struct UScramNetworkHelperComponent_Server_ClearPausedTrajectory_Params
{
	class AScramPrimitiveActor*                        pPrimitive;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_CallTennisDoubleBounce
struct UScramNetworkHelperComponent_Server_CallTennisDoubleBounce_Params
{
	class AScramSportManagerTennis*                    pTennisManager;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATennisBall*                                 pTrackedBall;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Tennis
struct UScramNetworkHelperComponent_Server_BroadcastScramEvent_Tennis_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ETennisEvent                        TennisEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Object
struct UScramNetworkHelperComponent_Server_BroadcastScramEvent_Object_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     pObjectParameter;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Null
struct UScramNetworkHelperComponent_Server_BroadcastScramEvent_Null_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Collision
struct UScramNetworkHelperComponent_Server_BroadcastScramEvent_Collision_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pOtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitNormal;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Bowling
struct UScramNetworkHelperComponent_Server_BroadcastScramEvent_Bowling_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBowlingEvent                       BowlingEvent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pBowlingBall;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Baseball
struct UScramNetworkHelperComponent_Server_BroadcastScramEvent_Baseball_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBaseballEvent                      BaseballEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseballBall*                               pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_BaseballCatcherCaught
struct UScramNetworkHelperComponent_Server_BaseballCatcherCaught_Params
{
	class AActor*                                      pCatcher;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseballBall*                               pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Server_BaseballBallPitched
struct UScramNetworkHelperComponent_Server_BaseballBallPitched_Params
{
	class ABaseballThrowingGlove*                      pGlove;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseballBall*                               pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrowSpeed;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisNextPlayerToHitBall
struct UScramNetworkHelperComponent_Client_UpdateTennisNextPlayerToHitBall_Params
{
	int                                                nextPlayerIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramSportManagerTennis*                    pTennisManager;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisBallTrajectory
struct UScramNetworkHelperComponent_Client_UpdateTennisBallTrajectory_Params
{
	class ATennisBall*                                 pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTennisBallNetworkUpdate                    Update;                                                    // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisBallInPlay
struct UScramNetworkHelperComponent_Client_UpdateTennisBallInPlay_Params
{
	class ATennisBall*                                 pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATennisBall*                                 pLastBall;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           ballGeneration;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramSportManagerTennis*                    pTennisManager;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateStickDrivenCatcherGlove
struct UScramNetworkHelperComponent_Client_UpdateStickDrivenCatcherGlove_Params
{
	class ABaseballThrowingGlove*                      pGlove;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              leftRight;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              upDown;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateBowlingBallTrajectory
struct UScramNetworkHelperComponent_Client_UpdateBowlingBallTrajectory_Params
{
	class ABowlingBall*                                pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScramTrajectory                            trajectory;                                                // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBowlingThrow                               newThrow;                                                  // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateBaseballBallTrajectory
struct UScramNetworkHelperComponent_Client_UpdateBaseballBallTrajectory_Params
{
	class ABaseballBall*                               pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBaseballNetworkUpdate                      Update;                                                    // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_StartFollowingTrajectoryWithSlowDown
struct UScramNetworkHelperComponent_Client_StartFollowingTrajectoryWithSlowDown_Params
{
	class AScramPrimitiveActor*                        pPrimitive;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScramTrajectory                            trajectoryToFollow;                                        // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              TimeScale;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              maxStepDown;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_StartFollowingTrajectory
struct UScramNetworkHelperComponent_Client_StartFollowingTrajectory_Params
{
	class AScramPrimitiveActor*                        pPrimitive;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScramTrajectory                            trajectoryToFollow;                                        // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_SetTimeScale
struct UScramNetworkHelperComponent_Client_SetTimeScale_Params
{
	class AScramPrimitiveActor*                        pPrimitive;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeScale;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_SetTennisBallRallyCount
struct UScramNetworkHelperComponent_Client_SetTennisBallRallyCount_Params
{
	class ATennisBall*                                 pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                rallyCount;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_SetPlayerPreferences
struct UScramNetworkHelperComponent_Client_SetPlayerPreferences_Params
{
	class AScramPlayer*                                pPlayer;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScramPlayerPreferences                     preferences;                                               // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_SetPlayerPausedRemote
struct UScramNetworkHelperComponent_Client_SetPlayerPausedRemote_Params
{
	class AScramPlayer*                                pPlayer;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EGamePauseReason                    reason;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               paused;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_SetFutureBallHit
struct UScramNetworkHelperComponent_Client_SetFutureBallHit_Params
{
	struct FFutureBallHit                              FutureBallHit;                                             // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_SetAvatarLook
struct UScramNetworkHelperComponent_Client_SetAvatarLook_Params
{
	class AScramPlayer*                                pPlayer;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAvatarLook                                 AvatarLook;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_ServeBallSpawned
struct UScramNetworkHelperComponent_Client_ServeBallSpawned_Params
{
	class AScramPlayerServeTrigger*                    pServeTrigger;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramBall*                                  pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_ServeBallGrabbed
struct UScramNetworkHelperComponent_Client_ServeBallGrabbed_Params
{
	class AScramPlayerServeTrigger*                    pServeTrigger;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramBall*                                  pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteGameDone
struct UScramNetworkHelperComponent_Client_RemoteGameDone_Params
{
	class AScramSportManagerBase*                      pSportManager;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillTerminate
struct UScramNetworkHelperComponent_Client_RemoteApplicationWillTerminate_Params
{
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillEnterBackground
struct UScramNetworkHelperComponent_Client_RemoteApplicationWillEnterBackground_Params
{
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillDeactivate
struct UScramNetworkHelperComponent_Client_RemoteApplicationWillDeactivate_Params
{
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationHasReactivated
struct UScramNetworkHelperComponent_Client_RemoteApplicationHasReactivated_Params
{
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationHasEnteredForeground
struct UScramNetworkHelperComponent_Client_RemoteApplicationHasEnteredForeground_Params
{
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_ReceiveHeartbeat
struct UScramNetworkHelperComponent_Client_ReceiveHeartbeat_Params
{
	uint16_t                                           remotePendingNetGeneration;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           remoteEstablishedNetGeneration;                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_PingHandShake
struct UScramNetworkHelperComponent_Client_PingHandShake_Params
{
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_GrabberRelease
struct UScramNetworkHelperComponent_Client_GrabberRelease_Params
{
	class AActor*                                      pGrabberActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_GrabberGrab
struct UScramNetworkHelperComponent_Client_GrabberGrab_Params
{
	class AActor*                                      pGrabberActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pGrabbableActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               snap;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_DrawDebugSphere
struct UScramNetworkHelperComponent_Client_DrawDebugSphere_Params
{
	class AActor*                                      pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Center;                                                    // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Segments;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeTime;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_DestroyPrimitive
struct UScramNetworkHelperComponent_Client_DestroyPrimitive_Params
{
	class AScramPrimitiveActor*                        pPrimitive;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               playOut;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_ClearTennisBallTrajectoryOwnership
struct UScramNetworkHelperComponent_Client_ClearTennisBallTrajectoryOwnership_Params
{
	class ATennisBall*                                 pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_ClearPausedTrajectory
struct UScramNetworkHelperComponent_Client_ClearPausedTrajectory_Params
{
	class AScramPrimitiveActor*                        pPrimitive;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Tennis
struct UScramNetworkHelperComponent_Client_BroadcastScramEvent_Tennis_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ETennisEvent                        TennisEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Object
struct UScramNetworkHelperComponent_Client_BroadcastScramEvent_Object_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     pObjectParameter;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Null
struct UScramNetworkHelperComponent_Client_BroadcastScramEvent_Null_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Collision
struct UScramNetworkHelperComponent_Client_BroadcastScramEvent_Collision_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pOtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitNormal;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Bowling
struct UScramNetworkHelperComponent_Client_BroadcastScramEvent_Bowling_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBowlingEvent                       BowlingEvent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pBowlingBall;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Baseball
struct UScramNetworkHelperComponent_Client_BroadcastScramEvent_Baseball_Params
{
	SportsScramble_EScramEvent                         ScramEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBaseballEvent                      BaseballEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseballBall*                               pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPauseCapsule.ShowCapsule
struct AScramPauseCapsule_ShowCapsule_Params
{
};

// Function SportsScramble.ScramPauseCapsule.HideCapsule
struct AScramPauseCapsule_HideCapsule_Params
{
};

// Function SportsScramble.ScramPauseManager.QueuePauseEvent
struct AScramPauseManager_QueuePauseEvent_Params
{
	struct FScriptDelegate                             PauseEvent;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.SetWorldTimeDilation
struct AScramPlayer_SetWorldTimeDilation_Params
{
	float                                              timeDilation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.SetScriptedFadeOutOpacity
struct AScramPlayer_SetScriptedFadeOutOpacity_Params
{
	float                                              Opacity;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.SetNetVisible
struct AScramPlayer_SetNetVisible_Params
{
	bool                                               netVisible;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.SetAvatarMaterials
struct AScramPlayer_SetAvatarMaterials_Params
{
	struct FAvatarLook                                 AvatarLook;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.SetAnchor
struct AScramPlayer_SetAnchor_Params
{
	struct FTransform                                  anchor;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        minPlayArea;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        maxPlayArea;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        maxHazardArea;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.Server_UpdateTransforms
struct AScramPlayer_Server_UpdateTransforms_Params
{
	struct FPlayerTransforms                           Transforms;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint32_t                                           updateCounter;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.Server_UpdatePlayAreaDiagonal
struct AScramPlayer_Server_UpdatePlayAreaDiagonal_Params
{
	float                                              newPlayAreaDiagonal;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.Server_SpawnHands
struct AScramPlayer_Server_SpawnHands_Params
{
};

// Function SportsScramble.ScramPlayer.Server_SetTennisReturnData
struct AScramPlayer_Server_SetTennisReturnData_Params
{
	struct FPlayerTennisReturn                         newReturnData;                                             // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.Server_SetPlayerReadyForMatch
struct AScramPlayer_Server_SetPlayerReadyForMatch_Params
{
};

// Function SportsScramble.ScramPlayer.Server_SetNetVisible
struct AScramPlayer_Server_SetNetVisible_Params
{
	bool                                               netVisible;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.Server_ClientSelectedAvatar
struct AScramPlayer_Server_ClientSelectedAvatar_Params
{
};

// Function SportsScramble.ScramPlayer.SavePreferences
struct AScramPlayer_SavePreferences_Params
{
};

// Function SportsScramble.ScramPlayer.ResetAnchor
struct AScramPlayer_ResetAnchor_Params
{
};

// Function SportsScramble.ScramPlayer.RecenterDetected
struct AScramPlayer_RecenterDetected_Params
{
};

// Function SportsScramble.ScramPlayer.PlayerResume
struct AScramPlayer_PlayerResume_Params
{
	SportsScramble_EGamePauseReason                    reason;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               multiplayer;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.PlayerPause
struct AScramPlayer_PlayerPause_Params
{
	SportsScramble_EGamePauseReason                    reason;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               multiplayer;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.OnRep_TennisReturnData
struct AScramPlayer_OnRep_TennisReturnData_Params
{
};

// Function SportsScramble.ScramPlayer.OnRep_NetVisible
struct AScramPlayer_OnRep_NetVisible_Params
{
};

// Function SportsScramble.ScramPlayer.OnRep_ClientTransforms
struct AScramPlayer_OnRep_ClientTransforms_Params
{
};

// Function SportsScramble.ScramPlayer.OnRep_ClientPlayAreaDiagonal
struct AScramPlayer_OnRep_ClientPlayAreaDiagonal_Params
{
};

// Function SportsScramble.ScramPlayer.OnRecenter
struct AScramPlayer_OnRecenter_Params
{
};

// Function SportsScramble.ScramPlayer.OnPlayerOutOfBoundary
struct AScramPlayer_OnPlayerOutOfBoundary_Params
{
	struct FTransform                                  ReturnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.OnPlayerEnterBoundary
struct AScramPlayer_OnPlayerEnterBoundary_Params
{
};

// Function SportsScramble.ScramPlayer.NetSetPreferences
struct AScramPlayer_NetSetPreferences_Params
{
	struct FScramPlayerPreferences                     preferences;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.LocalAvatarSelected
struct AScramPlayer_LocalAvatarSelected_Params
{
};

// Function SportsScramble.ScramPlayer.LoadPreferences
struct AScramPlayer_LoadPreferences_Params
{
};

// Function SportsScramble.ScramPlayer.IsPlayerRestricted
struct AScramPlayer_IsPlayerRestricted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.IsPlayerPausedExcluded
struct AScramPlayer_IsPlayerPausedExcluded_Params
{
	SportsScramble_EGamePauseReason                    exludedReason;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.IsPlayerPaused
struct AScramPlayer_IsPlayerPaused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.IsPlayerFadedOut
struct AScramPlayer_IsPlayerFadedOut_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.IsInitComplete
struct AScramPlayer_IsInitComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.HasBegunPlay
struct AScramPlayer_HasBegunPlay_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.GetWorldTimeDilation
struct AScramPlayer_GetWorldTimeDilation_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.GetScriptedFadeOutOpacity
struct AScramPlayer_GetScriptedFadeOutOpacity_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.GetPreferredHandedness
struct AScramPlayer_GetPreferredHandedness_Params
{
	SportsScramble_EScramHandedness                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.GetPreferences
struct AScramPlayer_GetPreferences_Params
{
	struct FScramPlayerPreferences                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.GetPlayAreaTransform
struct AScramPlayer_GetPlayAreaTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.GetOrthogonalAnchor
struct AScramPlayer_GetOrthogonalAnchor_Params
{
	struct FTransform                                  ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.GetHand
struct AScramPlayer_GetHand_Params
{
	SportsScramble_EScramHandedness                    Handedness;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramPlayerHand*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.GetDominantStroke
struct AScramPlayer_GetDominantStroke_Params
{
	SportsScramble_EScramStroke                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.GetDominantHandedness
struct AScramPlayer_GetDominantHandedness_Params
{
	SportsScramble_EScramHandedness                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.GetAnchor
struct AScramPlayer_GetAnchor_Params
{
	struct FTransform                                  ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.ForceChangeGrabbable
struct AScramPlayer_ForceChangeGrabbable_Params
{
	class UClass*                                      NewGrabbableClass;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramPlayerHand*                            SpecificHand;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramPrimitiveGrabbable*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.EnsureHasHands
struct AScramPlayer_EnsureHasHands_Params
{
};

// Function SportsScramble.ScramPlayer.DestroyAllGrabbables
struct AScramPlayer_DestroyAllGrabbables_Params
{
	bool                                               playOut;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.DeferredInit
struct AScramPlayer_DeferredInit_Params
{
};

// Function SportsScramble.ScramPlayer.ConstrainToPlayArea
struct AScramPlayer_ConstrainToPlayArea_Params
{
	struct FVector                                     Point;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.Client_ServerSelectedAvatar
struct AScramPlayer_Client_ServerSelectedAvatar_Params
{
};

// Function SportsScramble.ScramPlayer.ChangeAvatarBlueprint
struct AScramPlayer_ChangeAvatarBlueprint_Params
{
	class UClass*                                      avatarClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PlaySpawnAnimation;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayer.CanBeSeen
struct AScramPlayer_CanBeSeen_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerBoundary.ResetPlayerAnchor
struct AScramPlayerBoundary_ResetPlayerAnchor_Params
{
};

// Function SportsScramble.ScramPlayerBoundary.ResetHazardLine
struct AScramPlayerBoundary_ResetHazardLine_Params
{
};

// Function SportsScramble.ScramPlayerController.UnpauseLocalHeartbeat
struct AScramPlayerController_UnpauseLocalHeartbeat_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerController.StopLocalHeartbeat
struct AScramPlayerController_StopLocalHeartbeat_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerController.StopHeartbeat
struct AScramPlayerController_StopHeartbeat_Params
{
};

// Function SportsScramble.ScramPlayerController.StartHeartbeat
struct AScramPlayerController_StartHeartbeat_Params
{
};

// Function SportsScramble.ScramPlayerController.ServerSetSportPreferences
struct AScramPlayerController_ServerSetSportPreferences_Params
{
	struct FScramSportPreferences                      clientPreferences;                                         // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerController.ResumeHeartbeatEvents
struct AScramPlayerController_ResumeHeartbeatEvents_Params
{
};

// Function SportsScramble.ScramPlayerController.RestartHeartbeat
struct AScramPlayerController_RestartHeartbeat_Params
{
};

// Function SportsScramble.ScramPlayerController.PauseLocalHeartbeat
struct AScramPlayerController_PauseLocalHeartbeat_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerController.HasStartedHeartbeat
struct AScramPlayerController_HasStartedHeartbeat_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerController.DEBUGForceHeartbeatTimeout
struct AScramPlayerController_DEBUGForceHeartbeatTimeout_Params
{
};

// Function SportsScramble.ScramPlayerController.ClientRequestSportPreferences
struct AScramPlayerController_ClientRequestSportPreferences_Params
{
};

// Function SportsScramble.ScramPlayerHand.SpawnAndGrabActor
struct AScramPlayerHand_SpawnAndGrabActor_Params
{
	class UClass*                                      GrabbableClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerHand.ServerGrabSpawnedActor
struct AScramPlayerHand_ServerGrabSpawnedActor_Params
{
	class AActor*                                      GrabbableActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerHand.Server_SpawnAndGrabActor
struct AScramPlayerHand_Server_SpawnAndGrabActor_Params
{
	class UClass*                                      ActorClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  SpawnTransform;                                            // (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerHand.OnRep_ClientSpawnedActor
struct AScramPlayerHand_OnRep_ClientSpawnedActor_Params
{
};

// Function SportsScramble.ScramPlayerHand.OnGrabbableHit
struct AScramPlayerHand_OnGrabbableHit_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerHand.GrabberIsTracked
struct AScramPlayerHand_GrabberIsTracked_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerHand.GetPlayer
struct AScramPlayerHand_GetPlayer_Params
{
	class AScramPlayer*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerHand.GetGrabberVerticalStroke
struct AScramPlayerHand_GetGrabberVerticalStroke_Params
{
	SportsScramble_EScramStroke                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerHand.GetGrabberStroke
struct AScramPlayerHand_GetGrabberStroke_Params
{
	SportsScramble_EScramStroke                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerHand.GetGrabberHorizontalStroke
struct AScramPlayerHand_GetGrabberHorizontalStroke_Params
{
	SportsScramble_EScramStroke                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerHand.GetGrabberHandedness
struct AScramPlayerHand_GetGrabberHandedness_Params
{
	SportsScramble_EScramHandedness                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerHand.ForceReleaseCurrentGrabbable
struct AScramPlayerHand_ForceReleaseCurrentGrabbable_Params
{
};

// Function SportsScramble.ScramPlayerHand.ForceGrab
struct AScramPlayerHand_ForceGrab_Params
{
	class AActor*                                      GrabbableActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerHand.DestroyCurrentGrabbable
struct AScramPlayerHand_DestroyCurrentGrabbable_Params
{
	bool                                               playOut;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerHand.DeferredInit
struct AScramPlayerHand_DeferredInit_Params
{
};

// Function SportsScramble.ScramPlayerHand.CurrentGrabbableActor
struct AScramPlayerHand_CurrentGrabbableActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerTrigger.OnPlayerStay
struct AScramPlayerTrigger_OnPlayerStay_Params
{
	class AScramPlayer*                                Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerTrigger.OnPlayerExit
struct AScramPlayerTrigger_OnPlayerExit_Params
{
	class AScramPlayer*                                Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerTrigger.OnPlayerEnter
struct AScramPlayerTrigger_OnPlayerEnter_Params
{
	class AScramPlayer*                                Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerServeTrigger.Show
struct AScramPlayerServeTrigger_Show_Params
{
};

// Function SportsScramble.ScramPlayerServeTrigger.SetPlayerServing
struct AScramPlayerServeTrigger_SetPlayerServing_Params
{
	bool                                               shouldServe;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerServeTrigger.SetAllowRespawn
struct AScramPlayerServeTrigger_SetAllowRespawn_Params
{
	bool                                               canSpawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerServeTrigger.ServeBallSpawned
struct AScramPlayerServeTrigger_ServeBallSpawned_Params
{
	class AScramBall*                                  Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerServeTrigger.ServeBallGrabbed
struct AScramPlayerServeTrigger_ServeBallGrabbed_Params
{
	class AScramBall*                                  Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerServeTrigger.RespawnBall
struct AScramPlayerServeTrigger_RespawnBall_Params
{
};

// Function SportsScramble.ScramPlayerServeTrigger.ResetServeTrigger
struct AScramPlayerServeTrigger_ResetServeTrigger_Params
{
};

// Function SportsScramble.ScramPlayerServeTrigger.OnRep_ClientBall
struct AScramPlayerServeTrigger_OnRep_ClientBall_Params
{
};

// Function SportsScramble.ScramPlayerServeTrigger.Hide
struct AScramPlayerServeTrigger_Hide_Params
{
};

// Function SportsScramble.ScramPlayerServeTrigger.HandleServeTrajectory
struct AScramPlayerServeTrigger_HandleServeTrajectory_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerServeTrigger.HandlePostHit
struct AScramPlayerServeTrigger_HandlePostHit_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerServeTrigger.HandleBallGrabbed
struct AScramPlayerServeTrigger_HandleBallGrabbed_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerServeTrigger.GetPlayerServing
struct AScramPlayerServeTrigger_GetPlayerServing_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerServeTrigger.GetBall
struct AScramPlayerServeTrigger_GetBall_Params
{
	class AScramBall*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerServeTrigger.GetAllowRespawn
struct AScramPlayerServeTrigger_GetAllowRespawn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramPlayerServeTrigger.DespawnCurrentBall
struct AScramPlayerServeTrigger_DespawnCurrentBall_Params
{
};

// Function SportsScramble.ScramTrophy.WasTrophyEarned
struct AScramTrophy_WasTrophyEarned_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophy.OnPlayerStopLookAtTrophy
struct AScramTrophy_OnPlayerStopLookAtTrophy_Params
{
};

// Function SportsScramble.ScramTrophy.OnPlayerLookAtTrophy
struct AScramTrophy_OnPlayerLookAtTrophy_Params
{
};

// Function SportsScramble.ScramTrophy.CalculateDisplayTransform
struct AScramTrophy_CalculateDisplayTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyGlove.TryMakeActiveTrophyGlove
struct AScramTrophyGlove_TryMakeActiveTrophyGlove_Params
{
};

// Function SportsScramble.ScramTrophyGlove.SetLaserPointerVisibility
struct AScramTrophyGlove_SetLaserPointerVisibility_Params
{
	bool                                               IsVisible;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyGlove.SetLaserLength
struct AScramTrophyGlove_SetLaserLength_Params
{
	float                                              Length;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyGlove.SetEnableGrab
struct AScramTrophyGlove_SetEnableGrab_Params
{
	bool                                               Enabled;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyGlove.OnShouldGrab
struct AScramTrophyGlove_OnShouldGrab_Params
{
	class ATrophyGrabbable*                            Trophy;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyGlove.IsTriggerPressed
struct AScramTrophyGlove_IsTriggerPressed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyGlove.IsTriggerDownThisFrame
struct AScramTrophyGlove_IsTriggerDownThisFrame_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyGlove.IsActiveGlove
struct AScramTrophyGlove_IsActiveGlove_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyGlove.InputRotateTrophyYaw
struct AScramTrophyGlove_InputRotateTrophyYaw_Params
{
	float                                              AxisValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyGlove.InputRotateTrophyPitch
struct AScramTrophyGlove_InputRotateTrophyPitch_Params
{
	float                                              AxisValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyGlove.GetTrophyGrabPoint
struct AScramTrophyGlove_GetTrophyGrabPoint_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyGlove.BindInputYaw
struct AScramTrophyGlove_BindInputYaw_Params
{
	struct FName                                       AxisName;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyGlove.BindInputPitch
struct AScramTrophyGlove_BindInputPitch_Params
{
	struct FName                                       AxisName;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyManager.WasTrophyEarned
struct AScramTrophyManager_WasTrophyEarned_Params
{
	struct FName                                       TrophyID;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyManager.WasAvatarEarned
struct AScramTrophyManager_WasAvatarEarned_Params
{
	struct FName                                       avatarID;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyManager.TryGetTrophyEarnedDate
struct AScramTrophyManager_TryGetTrophyEarnedDate_Params
{
	struct FDateTime                                   date;                                                      // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TrophyID;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyManager.SpawnTrophyNotificationFX
struct AScramTrophyManager_SpawnTrophyNotificationFX_Params
{
};

// Function SportsScramble.ScramTrophyManager.ResetAllTrophy
struct AScramTrophyManager_ResetAllTrophy_Params
{
};

// Function SportsScramble.ScramTrophyManager.OnNotifyTrophyEarned
struct AScramTrophyManager_OnNotifyTrophyEarned_Params
{
	struct FName                                       Name;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyManager.OnNotifyOculusUpload
struct AScramTrophyManager_OnNotifyOculusUpload_Params
{
};

// Function SportsScramble.ScramTrophyManager.OnNotifyOculusUpdate
struct AScramTrophyManager_OnNotifyOculusUpdate_Params
{
};

// Function SportsScramble.ScramTrophyManager.InitializeTrophyAwardListeners
struct AScramTrophyManager_InitializeTrophyAwardListeners_Params
{
};

// Function SportsScramble.ScramTrophyManager.GetTrophyRequirement
struct AScramTrophyManager_GetTrophyRequirement_Params
{
	struct FName                                       TrophyID;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyManager.GetEarnedTrophyCount
struct AScramTrophyManager_GetEarnedTrophyCount_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyManager.EarnTrophy
struct AScramTrophyManager_EarnTrophy_Params
{
	struct FName                                       TrophyName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyManager.DeferNotifications
struct AScramTrophyManager_DeferNotifications_Params
{
	float                                              Duration;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTrophyManager.ClearAwardListeners
struct AScramTrophyManager_ClearAwardListeners_Params
{
};

// Function SportsScramble.ScramUtils.TryGetOculusID
struct UScramUtils_TryGetOculusID_Params
{
	struct FString                                     UniqueId;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.ShowDebugMessage
struct UScramUtils_ShowDebugMessage_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeTime;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.SetShaderCacheModeFast
struct UScramUtils_SetShaderCacheModeFast_Params
{
};

// Function SportsScramble.ScramUtils.SetShaderCacheModeBackground
struct UScramUtils_SetShaderCacheModeBackground_Params
{
};

// Function SportsScramble.ScramUtils.SetOnlineSessionCustomSetting
struct UScramUtils_SetOnlineSessionCustomSetting_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SettingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SettingValue;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.SetInstancedVisibility
struct UScramUtils_SetInstancedVisibility_Params
{
	class UStaticMeshComponent*                        Target;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Visibility;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.SavePipelineCache
struct UScramUtils_SavePipelineCache_Params
{
};

// Function SportsScramble.ScramUtils.SampleTexture
struct UScramUtils_SampleTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              U;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              V;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                pixelColor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ESuccessFailure                     Branch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.RandomSharedSport
struct UScramUtils_RandomSharedSport_Params
{
	struct FScramSportPreferences                      A;                                                         // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScramSportPreferences                      B;                                                         // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	SportsScramble_EScramSport                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.PickDestinationPointOnSpline
struct UScramUtils_PickDestinationPointOnSpline_Params
{
	class AActor*                                      SplineFollower;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USplineComponent*                            Spline;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LookAheadDistance;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.PauseShaderCacheCompilation
struct UScramUtils_PauseShaderCacheCompilation_Params
{
};

// Function SportsScramble.ScramUtils.MakeActorsFaceLocation
struct UScramUtils_MakeActorsFaceLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      subClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.LaunchOtherApp
struct UScramUtils_LaunchOtherApp_Params
{
	struct FString                                     appID;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.IsShipping
struct UScramUtils_IsShipping_Params
{
	SportsScramble_EYesNo                              Branch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.IsShaderCacheReady
struct UScramUtils_IsShaderCacheReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.IsHitFloor
struct UScramUtils_IsHitFloor_Params
{
	class AScramPrimitiveActor*                        Primitive;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.IsHitEnvironmental
struct UScramUtils_IsHitEnvironmental_Params
{
	class AActor*                                      hitActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.IsChargeShotPossible
struct UScramUtils_IsChargeShotPossible_Params
{
	class ATennisInstrument*                           Instrument;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATennisBall*                                 Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.HasBinaryShaderCache
struct UScramUtils_HasBinaryShaderCache_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GoToStore
struct UScramUtils_GoToStore_Params
{
	struct FString                                     uriPath;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetSkipLogos
struct UScramUtils_GetSkipLogos_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetSingleActorExec
struct UScramUtils_GetSingleActorExec_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ActorClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetSingleActor
struct UScramUtils_GetSingleActor_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ActorClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetScramPlayer
struct UScramUtils_GetScramPlayer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramPlayer*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetScramNetworkVersion
struct UScramUtils_GetScramNetworkVersion_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetScramGameMode
struct UScramUtils_GetScramGameMode_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramGameMode*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetRemoteScramPlayer
struct UScramUtils_GetRemoteScramPlayer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramPlayer*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetPlayerTransform
struct UScramUtils_GetPlayerTransform_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OffsetLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    OffsetRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetPlatform
struct UScramUtils_GetPlatform_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramPlatform                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetOnlineSessionCustomSetting
struct UScramUtils_GetOnlineSessionCustomSetting_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetNumShaderCompilesRemaining
struct UScramUtils_GetNumShaderCompilesRemaining_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetNumberOfLines
struct UScramUtils_GetNumberOfLines_Params
{
	struct FText                                       Text;                                                      // (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetMatchmakingPool
struct UScramUtils_GetMatchmakingPool_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetLocalScramPlayer
struct UScramUtils_GetLocalScramPlayer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AScramPlayer*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetLengthOfLongestLine
struct UScramUtils_GetLengthOfLongestLine_Params
{
	struct FText                                       Text;                                                      // (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetIsShipping
struct UScramUtils_GetIsShipping_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetIsEditor
struct UScramUtils_GetIsEditor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetIsAndroid
struct UScramUtils_GetIsAndroid_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetEarlyAccess
struct UScramUtils_GetEarlyAccess_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetDemoMode
struct UScramUtils_GetDemoMode_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetDefaultObject
struct UScramUtils_GetDefaultObject_Params
{
	class UClass*                                      ObjectClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetDebugMode
struct UScramUtils_GetDebugMode_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetAttachedActorsExec
struct UScramUtils_GetAttachedActorsExec_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              OutActors;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.GetAppropriateTransform
struct UScramUtils_GetAppropriateTransform_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.ControllerIsConnected
struct UScramUtils_ControllerIsConnected_Params
{
	SportsScramble_EYesNo                              Branch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramUtils.ClearDebugMessages
struct UScramUtils_ClearDebugMessages_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramVoiceChat.SetVoiceChatMuted
struct AScramVoiceChat_SetVoiceChatMuted_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               muted;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramVoiceChat.Server_SetClientVoiceChatDesired
struct AScramVoiceChat_Server_SetClientVoiceChatDesired_Params
{
	bool                                               clientVoiceChatDesired;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramVoiceChat.Server_InitializeVoiceChat
struct AScramVoiceChat_Server_InitializeVoiceChat_Params
{
	bool                                               clientVoiceChatDesired;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramVoiceChat.KillVoiceChat
struct AScramVoiceChat_KillVoiceChat_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramVoiceChat.DeferredInit
struct AScramVoiceChat_DeferredInit_Params
{
};

// Function SportsScramble.ScramVoiceChat.Client_SetServerVoiceChatDesired
struct AScramVoiceChat_Client_SetServerVoiceChatDesired_Params
{
	bool                                               serverVoiceChatDesired;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramVoiceChat.Client_InitializeVoiceChat
struct AScramVoiceChat_Client_InitializeVoiceChat_Params
{
	bool                                               serverVoiceChatDesired;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramWidgetComponent.ExternalInitWidget
struct UScramWidgetComponent_ExternalInitWidget_Params
{
};

// Function SportsScramble.SkiBallTrigger.SetIsPositive
struct ASkiBallTrigger_SetIsPositive_Params
{
	bool                                               positive;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.SpectateSessionCallbackProxy.SpectateSession
struct USpectateSessionCallbackProxy_SpectateSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     SearchResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USpectateSessionCallbackProxy*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.SplineMoverComponent.StartOnSpline
struct USplineMoverComponent_StartOnSpline_Params
{
	class USplineComponent*                            SplineComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             SceneComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.SplineMoverComponent.Restart
struct USplineMoverComponent_Restart_Params
{
};

// Function SportsScramble.SplineMoverComponent.GetCurrentSpeed
struct USplineMoverComponent_GetCurrentSpeed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.StartOculusMatchmakingCallbackProxy.StartOculusMatchmaking
struct UStartOculusMatchmakingCallbackProxy_StartOculusMatchmaking_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     poolKey;                                                   // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timeout;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStartOculusMatchmakingCallbackProxy*        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.StartOculusMatchmakingCallbackProxy.MatchmakingClientConnect
struct UStartOculusMatchmakingCallbackProxy_MatchmakingClientConnect_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.SwapIndicator.OnHandednessSet
struct ASwapIndicator_OnHandednessSet_Params
{
	SportsScramble_EScramHandedness                    Handedness;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.SwapIndicator.OnConfirmSwap
struct ASwapIndicator_OnConfirmSwap_Params
{
};

// Function SportsScramble.SwapIndicator.OnBeginSwap
struct ASwapIndicator_OnBeginSwap_Params
{
};

// Function SportsScramble.ScramSaveData.WipeSaveData
struct UScramSaveData_WipeSaveData_Params
{
};

// Function SportsScramble.ScramSaveData.WipeHighScoreData
struct UScramSaveData_WipeHighScoreData_Params
{
};

// Function SportsScramble.ScramSaveData.UnlockTraining
struct UScramSaveData_UnlockTraining_Params
{
	struct FName                                       TrainingName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSaveData.SaveNamedValue
struct UScramSaveData_SaveNamedValue_Params
{
	struct FName                                       Name;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSaveData.SaveHighScore
struct UScramSaveData_SaveHighScore_Params
{
	struct FName                                       GameName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              score;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSaveData.GetTrainingProgression
struct UScramSaveData_GetTrainingProgression_Params
{
	struct FName                                       TrainingName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ETrainingProgression                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSaveData.GetNamedValue
struct UScramSaveData_GetNamedValue_Params
{
	struct FName                                       Name;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSaveData.GetHighScore
struct UScramSaveData_GetHighScore_Params
{
	struct FName                                       GameName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSaveData.CompleteTraining
struct UScramSaveData_CompleteTraining_Params
{
	struct FName                                       TrainingName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBase.StopSavingSportState
struct AScramSportManagerBase_StopSavingSportState_Params
{
};

// Function SportsScramble.ScramSportManagerBase.SetSelectableBallClass
struct AScramSportManagerBase_SetSelectableBallClass_Params
{
	class UClass*                                      BallClass;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBase.ServerReady
struct AScramSportManagerBase_ServerReady_Params
{
};

// Function SportsScramble.ScramSportManagerBase.SaveSportState
struct AScramSportManagerBase_SaveSportState_Params
{
};

// Function SportsScramble.ScramSportManagerBase.OnHeartbeatSustained
struct AScramSportManagerBase_OnHeartbeatSustained_Params
{
	class AScramPlayerController*                      pPlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBase.OnHeartbeatDisconnected
struct AScramSportManagerBase_OnHeartbeatDisconnected_Params
{
	class AScramPlayerController*                      pPlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBase.OnGameDone
struct AScramSportManagerBase_OnGameDone_Params
{
};

// Function SportsScramble.ScramSportManagerBase.LocalGameDone
struct AScramSportManagerBase_LocalGameDone_Params
{
};

// Function SportsScramble.ScramSportManagerBase.GetPlayer
struct AScramSportManagerBase_GetPlayer_Params
{
	int                                                Index;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBase.GetOtherPlayer
struct AScramSportManagerBase_GetOtherPlayer_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.SetScrambleBallProperties
struct AScramSportManagerBaseball_SetScrambleBallProperties_Params
{
	TArray<struct FBaseballBallScrambleProperties>     Properties;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.SetBattingSkillOverride
struct AScramSportManagerBaseball_SetBattingSkillOverride_Params
{
	bool                                               shouldOverride;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramSkill                         skillLevel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.SetBall
struct AScramSportManagerBaseball_SetBall_Params
{
	class ABaseballBall*                               Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.SetAllowPitch
struct AScramSportManagerBaseball_SetAllowPitch_Params
{
	bool                                               allowPitch;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.SendBaseballEvent
struct AScramSportManagerBaseball_SendBaseballEvent_Params
{
	SportsScramble_EBaseballEvent                      BaseballEvent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseballBall*                               Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.SaveBaseballState
struct AScramSportManagerBaseball_SaveBaseballState_Params
{
	int                                                VisitorsScore;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HomeScore;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Inning;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TopOfInning;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FirstPitchOfInning;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Outs;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Strikes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BatterInstrument;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMittSpawnInfo>                      PitcherScrambleOptions;                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.RestartGame
struct AScramSportManagerBaseball_RestartGame_Params
{
	bool                                               RestoringGame;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.OnStrikeZoneHit
struct AScramSportManagerBaseball_OnStrikeZoneHit_Params
{
	class ABaseballBall*                               pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramStrikeResult                  Result;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.OnRunnerSpawned
struct AScramSportManagerBaseball_OnRunnerSpawned_Params
{
	class AScramBaseballRunnerAI*                      runner;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.OnBallHit
struct AScramSportManagerBaseball_OnBallHit_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.OnBallDeleted
struct AScramSportManagerBaseball_OnBallDeleted_Params
{
	class ABaseballBall*                               Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.LoadBaseballState
struct AScramSportManagerBaseball_LoadBaseballState_Params
{
	int                                                VisitorsScore;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HomeScore;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Inning;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TopOfInning;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FirstPitchOfInning;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Outs;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Strikes;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BatterInstrument;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMittSpawnInfo>                      PitcherScrambleOptions;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.GetUnclassifiedBalls
struct AScramSportManagerBaseball_GetUnclassifiedBalls_Params
{
	TArray<class ABaseballBall*>                       ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.GetScrambleBallProperties
struct AScramSportManagerBaseball_GetScrambleBallProperties_Params
{
	TArray<struct FBaseballBallScrambleProperties>     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.GetPitcher
struct AScramSportManagerBaseball_GetPitcher_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.GetPitchedBalls
struct AScramSportManagerBaseball_GetPitchedBalls_Params
{
	TArray<class ABaseballBall*>                       ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.GetGameRunning
struct AScramSportManagerBaseball_GetGameRunning_Params
{
	bool                                               ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.GetFieldedBalls
struct AScramSportManagerBaseball_GetFieldedBalls_Params
{
	TArray<class ABaseballBall*>                       ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.GetBatterRunAdvantage
struct AScramSportManagerBaseball_GetBatterRunAdvantage_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.GetBatter
struct AScramSportManagerBaseball_GetBatter_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.GetBalls
struct AScramSportManagerBaseball_GetBalls_Params
{
	TArray<class ABaseballBall*>                       ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.DeleteBall
struct AScramSportManagerBaseball_DeleteBall_Params
{
	class ABaseballBall*                               pBall;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               playOut;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.BaseballEvent
struct AScramSportManagerBaseball_BaseballEvent_Params
{
	SportsScramble_EBaseballEvent                      BaseballEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBaseball.AssignStrikeZone
struct AScramSportManagerBaseball_AssignStrikeZone_Params
{
	class AScramStrikeZone*                            strikeZone;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBowling.SendBowlingEvent
struct AScramSportManagerBowling_SendBowlingEvent_Params
{
	int                                                Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBowlingEvent                       BowlingEvent;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      BallActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBowling.SaveBowlingState
struct AScramSportManagerBowling_SaveBowlingState_Params
{
	struct FBowlingScrambleState                       ScrambleState;                                             // (Parm, OutParm, NativeAccessSpecifierPublic)
	TArray<struct FBowlingFrameSet>                    TraditionalFrameSets;                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBowling.RestartGame
struct AScramSportManagerBowling_RestartGame_Params
{
};

// Function SportsScramble.ScramSportManagerBowling.LoadBowlingState
struct AScramSportManagerBowling_LoadBowlingState_Params
{
	struct FBowlingScrambleState                       ScrambleState;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FBowlingFrameSet>                    TraditionalFrameSets;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerBowling.BowlingEvent
struct AScramSportManagerBowling_BowlingEvent_Params
{
	int                                                Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBowlingEvent                       BowlingEvent;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerDodgeball.StartGame
struct AScramSportManagerDodgeball_StartGame_Params
{
};

// Function SportsScramble.ScramSportManagerDodgeball.OnBallHit
struct AScramSportManagerDodgeball_OnBallHit_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerDodgeball.DodgeballEvent
struct AScramSportManagerDodgeball_DodgeballEvent_Params
{
	SportsScramble_EDodgeballEvent                     DodgeballEvent;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.TennisEvent
struct AScramSportManagerTennis_TennisEvent_Params
{
	int                                                Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ETennisEvent                        TennisEvent;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.SetAllowServe
struct AScramSportManagerTennis_SetAllowServe_Params
{
	int                                                Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               allowServe;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.ServerOnBallHit
struct AScramSportManagerTennis_ServerOnBallHit_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.SendDebugString
struct AScramSportManagerTennis_SendDebugString_Params
{
	struct FString                                     S;                                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.SaveTennisState
struct AScramSportManagerTennis_SaveTennisState_Params
{
	class UClass*                                      Ball;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      player1Instrument;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      player2Instrument;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      activeArenaScramble;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.RestartMatch
struct AScramSportManagerTennis_RestartMatch_Params
{
	bool                                               resetServer;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.ReplaceBallInPlay
struct AScramSportManagerTennis_ReplaceBallInPlay_Params
{
	class AActor*                                      Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.OnRep_InPlayInfo
struct AScramSportManagerTennis_OnRep_InPlayInfo_Params
{
};

// Function SportsScramble.ScramSportManagerTennis.LoadTennisState
struct AScramSportManagerTennis_LoadTennisState_Params
{
	class UClass*                                      Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      player1Instrument;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      player2Instrument;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      activeArenaScramble;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.GetServingPlayer
struct AScramSportManagerTennis_GetServingPlayer_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.GetReceivingPlayer
struct AScramSportManagerTennis_GetReceivingPlayer_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.GetPlayerPoints
struct AScramSportManagerTennis_GetPlayerPoints_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.GetPlayerGames
struct AScramSportManagerTennis_GetPlayerGames_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.GetPlayerDoubleFaults
struct AScramSportManagerTennis_GetPlayerDoubleFaults_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.GetPlayerAces
struct AScramSportManagerTennis_GetPlayerAces_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.GetOpponentPoints
struct AScramSportManagerTennis_GetOpponentPoints_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.GetOpponentGames
struct AScramSportManagerTennis_GetOpponentGames_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.GetNextPlayerToHitBall
struct AScramSportManagerTennis_GetNextPlayerToHitBall_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.GetBallInPlay
struct AScramSportManagerTennis_GetBallInPlay_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramSportManagerTennis.ClientOnBallHit
struct AScramSportManagerTennis_ClientOnBallHit_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTennisAI.SetInstrumentProperties
struct AScramTennisAI_SetInstrumentProperties_Params
{
	struct FTennisInstrumentProperties                 instrumentProperties;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTennisAI.PlayRacquetSound
struct AScramTennisAI_PlayRacquetSound_Params
{
	class ATennisBall*                                 Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BallSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTimeLineComponent.TimeLineIsRunning
struct UScramTimeLineComponent_TimeLineIsRunning_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTimeLineComponent.StopTimeLine
struct UScramTimeLineComponent_StopTimeLine_Params
{
};

// Function SportsScramble.ScramTimeLineComponent.StartTimeLine
struct UScramTimeLineComponent_StartTimeLine_Params
{
	bool                                               Forward;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTimeLineComponent.SetTarget
struct UScramTimeLineComponent_SetTarget_Params
{
	class USceneComponent*                             Target;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTimeLineComponent.SampleAtTime
struct UScramTimeLineComponent_SampleAtTime_Params
{
	float                                              SampleTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTimeLineComponent.ResumeTimeLine
struct UScramTimeLineComponent_ResumeTimeLine_Params
{
};

// Function SportsScramble.ScramTimeLineComponent.GetTimeLineLength
struct UScramTimeLineComponent_GetTimeLineLength_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.ScramTimeLineComponent.GetRemainingTime
struct UScramTimeLineComponent_GetRemainingTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TennisAvatar.OnBallHit
struct ATennisAvatar_OnBallHit_Params
{
	class UObject*                                     pWorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScramEventBasePayload*                      pPayload;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TennisInstrument.GetTennisInstrumentProperties
struct ATennisInstrument_GetTennisInstrumentProperties_Params
{
	struct FTennisInstrumentProperties                 ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TimeDisplayWidget.FormatTime
struct UTimeDisplayWidget_FormatTime_Params
{
	float                                              Seconds;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TrophyAwardListenerBase.UpdateProgress
struct ATrophyAwardListenerBase_UpdateProgress_Params
{
};

// Function SportsScramble.TrophyAwardListenerBase.SaveProgressToSaveData
struct ATrophyAwardListenerBase_SaveProgressToSaveData_Params
{
};

// Function SportsScramble.TrophyAwardListenerBase.Refresh
struct ATrophyAwardListenerBase_Refresh_Params
{
};

// Function SportsScramble.TrophyAwardListenerBase.LoadProgressFromSaveData
struct ATrophyAwardListenerBase_LoadProgressFromSaveData_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TrophyAwardListenerBase.Initialize
struct ATrophyAwardListenerBase_Initialize_Params
{
};

// Function SportsScramble.TrophyAwardListenerBase.IncreaseProgress
struct ATrophyAwardListenerBase_IncreaseProgress_Params
{
};

// Function SportsScramble.TrophyAwardListenerBase.AwardTrophy
struct ATrophyAwardListenerBase_AwardTrophy_Params
{
};

// Function SportsScramble.TrophyGrabbable.WasTrophyEarned
struct ATrophyGrabbable_WasTrophyEarned_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TrophyGrabbable.RespawnTrophy
struct ATrophyGrabbable_RespawnTrophy_Params
{
};

// Function SportsScramble.TrophyGrabbable.OverrideInitialRotation
struct ATrophyGrabbable_OverrideInitialRotation_Params
{
	struct FRotator                                    overrideRotation;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TrophyGrabbable.OverrideInitialPosition
struct ATrophyGrabbable_OverrideInitialPosition_Params
{
	struct FVector                                     overridePosition;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TrophyGrabbable.OnTrophyRespawnToOriginalPosition
struct ATrophyGrabbable_OnTrophyRespawnToOriginalPosition_Params
{
};

// Function SportsScramble.TrophyGrabbable.OnTrophyReleased
struct ATrophyGrabbable_OnTrophyReleased_Params
{
};

// Function SportsScramble.TrophyGrabbable.OnTrophyGrabbed
struct ATrophyGrabbable_OnTrophyGrabbed_Params
{
};

// Function SportsScramble.TrophyGrabbable.OnStopPointingAt
struct ATrophyGrabbable_OnStopPointingAt_Params
{
};

// Function SportsScramble.TrophyGrabbable.OnStartPointingAt
struct ATrophyGrabbable_OnStartPointingAt_Params
{
};

// Function SportsScramble.TrophyGrabbable.GetInitialRotation
struct ATrophyGrabbable_GetInitialRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SportsScramble.TrophyGrabbable.GetInitialPosition
struct ATrophyGrabbable_GetInitialPosition_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SportsScramble.UpdateSessionCallbackProxyAdvanced.UpdateSession
struct UUpdateSessionCallbackProxyAdvanced_UpdateSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                PublicConnections;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PrivateConnections;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLAN;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowInvites;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowJoinInProgress;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRefreshOnlineData;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDedicatedServer;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUpdateSessionCallbackProxyAdvanced*         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
