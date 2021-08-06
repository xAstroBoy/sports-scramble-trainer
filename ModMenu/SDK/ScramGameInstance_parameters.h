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

// Function ScramGameInstance.ScramGameInstance_C.SpawnErrorMessage
struct UScramGameInstance_C_SpawnErrorMessage_Params
{
	struct FText                                       ErrorMessage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ScramGameInstance.ScramGameInstance_C.LoadReflectionLevel
struct UScramGameInstance_C_LoadReflectionLevel_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.UnloadLevels
struct UScramGameInstance_C_UnloadLevels_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.SetAnchorToArena
struct UScramGameInstance_C_SetAnchorToArena_Params
{
	struct FName                                       RowName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHost;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.CreateTravelCapsuleNoTeleport
struct UScramGameInstance_C_CreateTravelCapsuleNoTeleport_Params
{
	struct FTransform                                  OverrideTransform;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	bool                                               UseOverrideTransform;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               StartRed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATravelcapsule_C*                            TravelCapsule;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AlreadyExisted;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.CheckIsSpectator
struct UScramGameInstance_C_CheckIsSpectator_Params
{
	bool                                               IsSpectator;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.PrepareInstrumentReinit
struct UScramGameInstance_C_PrepareInstrumentReinit_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.SetSportType
struct UScramGameInstance_C_SetSportType_Params
{
	SportsScramble_EScramSport                         Sport;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               KeepInstruments;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.EnableMusic
struct UScramGameInstance_C_EnableMusic_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.DisableMusic
struct UScramGameInstance_C_DisableMusic_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.ForceChangeInstrument
struct UScramGameInstance_C_ForceChangeInstrument_Params
{
	class UClass*                                      NewInstrumentClass;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DropOldInstrument;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AScramPlayerHand*                            HandActor_Optional;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseHandedness;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AScramInstrument*                            NewInstrument;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameInstance.ScramGameInstance_C.DisplayDebugString
struct UScramGameInstance_C_DisplayDebugString_Params
{
	struct FString                                     DebugString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Durtation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_A6825E2046D1EE4480D53F85A160D238
struct UScramGameInstance_C_OnFailure_A6825E2046D1EE4480D53F85A160D238_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_A6825E2046D1EE4480D53F85A160D238
struct UScramGameInstance_C_OnSuccess_A6825E2046D1EE4480D53F85A160D238_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_E218766E479159D426108DB79AE5A05D
struct UScramGameInstance_C_OnFailure_E218766E479159D426108DB79AE5A05D_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_E218766E479159D426108DB79AE5A05D
struct UScramGameInstance_C_OnSuccess_E218766E479159D426108DB79AE5A05D_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_A6825E2046D1EE4480D53F85CD6B33B6
struct UScramGameInstance_C_OnFailure_A6825E2046D1EE4480D53F85CD6B33B6_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_A6825E2046D1EE4480D53F85CD6B33B6
struct UScramGameInstance_C_OnSuccess_A6825E2046D1EE4480D53F85CD6B33B6_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_E218766E479159D426108DB7F6EE41D3
struct UScramGameInstance_C_OnFailure_E218766E479159D426108DB7F6EE41D3_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_E218766E479159D426108DB7F6EE41D3
struct UScramGameInstance_C_OnSuccess_E218766E479159D426108DB7F6EE41D3_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_A6825E2046D1EE4480D53F85A91F0ECD
struct UScramGameInstance_C_OnFailure_A6825E2046D1EE4480D53F85A91F0ECD_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_A6825E2046D1EE4480D53F85A91F0ECD
struct UScramGameInstance_C_OnSuccess_A6825E2046D1EE4480D53F85A91F0ECD_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_E218766E479159D426108DB7929A7CA8
struct UScramGameInstance_C_OnFailure_E218766E479159D426108DB7929A7CA8_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_E218766E479159D426108DB7929A7CA8
struct UScramGameInstance_C_OnSuccess_E218766E479159D426108DB7929A7CA8_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_195EB2254E8E108525A7CCA39EDA45EB
struct UScramGameInstance_C_OnFailure_195EB2254E8E108525A7CCA39EDA45EB_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_195EB2254E8E108525A7CCA39EDA45EB
struct UScramGameInstance_C_OnSuccess_195EB2254E8E108525A7CCA39EDA45EB_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_2068A73A4E27B76D6515A3A4308C2A02
struct UScramGameInstance_C_OnFailure_2068A73A4E27B76D6515A3A4308C2A02_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_2068A73A4E27B76D6515A3A4308C2A02
struct UScramGameInstance_C_OnSuccess_2068A73A4E27B76D6515A3A4308C2A02_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_FFC99656425C039A8BCC99955A3E5515
struct UScramGameInstance_C_OnFailure_FFC99656425C039A8BCC99955A3E5515_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_FFC99656425C039A8BCC99955A3E5515
struct UScramGameInstance_C_OnSuccess_FFC99656425C039A8BCC99955A3E5515_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_F9E172BA4FE1D5A046DC01BD48DACA9B
struct UScramGameInstance_C_OnFailure_F9E172BA4FE1D5A046DC01BD48DACA9B_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_F9E172BA4FE1D5A046DC01BD48DACA9B
struct UScramGameInstance_C_OnSuccess_F9E172BA4FE1D5A046DC01BD48DACA9B_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_EAD2016E4E26B32FAABA1FA5F88D9CB4
struct UScramGameInstance_C_OnFailure_EAD2016E4E26B32FAABA1FA5F88D9CB4_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_EAD2016E4E26B32FAABA1FA5F88D9CB4
struct UScramGameInstance_C_OnSuccess_EAD2016E4E26B32FAABA1FA5F88D9CB4_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_2E9EF70F49117325F129FCAEC8708411
struct UScramGameInstance_C_OnFailure_2E9EF70F49117325F129FCAEC8708411_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_2E9EF70F49117325F129FCAEC8708411
struct UScramGameInstance_C_OnSuccess_2E9EF70F49117325F129FCAEC8708411_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_28C0B15B470A9AA54E923CAC6773937B
struct UScramGameInstance_C_OnFailure_28C0B15B470A9AA54E923CAC6773937B_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_28C0B15B470A9AA54E923CAC6773937B
struct UScramGameInstance_C_OnSuccess_28C0B15B470A9AA54E923CAC6773937B_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_1933FE3C43C128FAB9B71398D3ED0723
struct UScramGameInstance_C_OnFailure_1933FE3C43C128FAB9B71398D3ED0723_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_1933FE3C43C128FAB9B71398D3ED0723
struct UScramGameInstance_C_OnSuccess_1933FE3C43C128FAB9B71398D3ED0723_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnFailure_B64C966143C1313AC5BD979ACFAE5B69
struct UScramGameInstance_C_OnFailure_B64C966143C1313AC5BD979ACFAE5B69_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScramGameInstance.ScramGameInstance_C.OnSuccess_B64C966143C1313AC5BD979ACFAE5B69
struct UScramGameInstance_C_OnSuccess_B64C966143C1313AC5BD979ACFAE5B69_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScramGameInstance.ScramGameInstance_C.OnLoaded_A155B1A0419914351D88EF9C6B11F64C
struct UScramGameInstance_C_OnLoaded_A155B1A0419914351D88EF9C6B11F64C_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameInstance.ScramGameInstance_C.LoadArena
struct UScramGameInstance_C_LoadArena_Params
{
	struct FName                                       Level;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NoRender;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.GeoLevelLoadComplete
struct UScramGameInstance_C_GeoLevelLoadComplete_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.PrimaryLevelLoadComplete
struct UScramGameInstance_C_PrimaryLevelLoadComplete_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.SetLevelVisibility
struct UScramGameInstance_C_SetLevelVisibility_Params
{
	bool                                               visible;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.LoadArenaGameplayAndGeo
struct UScramGameInstance_C_LoadArenaGameplayAndGeo_Params
{
	SportsScramble_EScramSport                         Sport;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Training;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.LoadArenaGeo
struct UScramGameInstance_C_LoadArenaGeo_Params
{
	struct FName                                       NewPrimaryLevel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameInstance.ScramGameInstance_C.GeoLevelShown
struct UScramGameInstance_C_GeoLevelShown_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.TeleportPlayArea
struct UScramGameInstance_C_TeleportPlayArea_Params
{
	struct FVector                                     Play_Area_Transform_Location;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Play_Area_Transform_Rotation;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseTransitionDuration;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TransitionDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBox                                        minPlayArea;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FBox                                        maxPlayArea;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FBox                                        maxHazardArea;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.TeleportReady
struct UScramGameInstance_C_TeleportReady_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.TeleportComplete
struct UScramGameInstance_C_TeleportComplete_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.HidePlayer
struct UScramGameInstance_C_HidePlayer_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.Host_Game
struct UScramGameInstance_C_Host_Game_Params
{
	bool                                               LAN;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Level;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameInstance.ScramGameInstance_C.GetSessions
struct UScramGameInstance_C_GetSessions_Params
{
	bool                                               LAN;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.JoinMatch
struct UScramGameInstance_C_JoinMatch_Params
{
	struct FString                                     ServerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               LAN;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.EndMultiplayer
struct UScramGameInstance_C_EndMultiplayer_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.ShowDebugMessage
struct UScramGameInstance_C_ShowDebugMessage_Params
{
	struct FString                                     Message;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	float                                              LifeTime;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameInstance.ScramGameInstance_C.OCDemo_FindSession
struct UScramGameInstance_C_OCDemo_FindSession_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OCDemo_Host
struct UScramGameInstance_C_OCDemo_Host_Params
{
	struct FName                                       LevelName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Absolute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.OCDemo_Join
struct UScramGameInstance_C_OCDemo_Join_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.DebugOCDemoServerList
struct UScramGameInstance_C_DebugOCDemoServerList_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.FindAndJoin
struct UScramGameInstance_C_FindAndJoin_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.AttemptToJoin
struct UScramGameInstance_C_AttemptToJoin_Params
{
	TArray<struct FString>                             SessionsFound;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScramGameInstance.ScramGameInstance_C.SelfSessionsUnbind
struct UScramGameInstance_C_SelfSessionsUnbind_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.TryAnother
struct UScramGameInstance_C_TryAnother_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.CheckConnection
struct UScramGameInstance_C_CheckConnection_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.CheckSessionFailed
struct UScramGameInstance_C_CheckSessionFailed_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.CheckSessionFound
struct UScramGameInstance_C_CheckSessionFound_Params
{
	TArray<struct FString>                             SessionsFound;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScramGameInstance.ScramGameInstance_C.CheckSessionSuccessNoValid
struct UScramGameInstance_C_CheckSessionSuccessNoValid_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.HandleTravelError
struct UScramGameInstance_C_HandleTravelError_Params
{
	TEnumAsByte<Engine_ETravelFailure>                 failureType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameInstance.ScramGameInstance_C.HandleNetworkError
struct UScramGameInstance_C_HandleNetworkError_Params
{
	TEnumAsByte<Engine_ENetworkFailure>                failureType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsServer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.ReceiveInit
struct UScramGameInstance_C_ReceiveInit_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.AppWillEnterBackground
struct UScramGameInstance_C_AppWillEnterBackground_Params
{
	bool                                               LocalEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.AppHasEnteredForeground
struct UScramGameInstance_C_AppHasEnteredForeground_Params
{
	bool                                               LocalEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.AppWillDeactivate
struct UScramGameInstance_C_AppWillDeactivate_Params
{
	bool                                               LocalEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.AppHasReactivated
struct UScramGameInstance_C_AppHasReactivated_Params
{
	bool                                               LocalEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.AppWillTerminate
struct UScramGameInstance_C_AppWillTerminate_Params
{
	bool                                               LocalEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.SetAvatarLook
struct UScramGameInstance_C_SetAvatarLook_Params
{
	class AScramPlayer*                                pPlayer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAvatarLook                                 AvatarLook;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.BroadcastLocalAvatarLook
struct UScramGameInstance_C_BroadcastLocalAvatarLook_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.GameInvitePing
struct UScramGameInstance_C_GameInvitePing_Params
{
	int                                                pingCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameInstance.ScramGameInstance_C.ClearDebugMessages
struct UScramGameInstance_C_ClearDebugMessages_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnShellInviteAccepted
struct UScramGameInstance_C_OnShellInviteAccepted_Params
{
	struct FScramGameInvite                            GameInvite;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ScramGameInstance.ScramGameInstance_C.BindShellInviteAcceptedEvent
struct UScramGameInstance_C_BindShellInviteAcceptedEvent_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnControllerConnectionChanged
struct UScramGameInstance_C_OnControllerConnectionChanged_Params
{
	bool                                               IsConnected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.OnHeadsetReconnected
struct UScramGameInstance_C_OnHeadsetReconnected_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnHeadsetDisconnected
struct UScramGameInstance_C_OnHeadsetDisconnected_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnInputFocusLost
struct UScramGameInstance_C_OnInputFocusLost_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OnInputFocusReceived
struct UScramGameInstance_C_OnInputFocusReceived_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.Focus Recieved PauseEvent
struct UScramGameInstance_C_Focus_Recieved_PauseEvent_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.Focus Lost PauseEvent
struct UScramGameInstance_C_Focus_Lost_PauseEvent_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.PreliminaryConnectionCheck
struct UScramGameInstance_C_PreliminaryConnectionCheck_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.ShowErrorMessageOnSpectatorScreen
struct UScramGameInstance_C_ShowErrorMessageOnSpectatorScreen_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.HideSpectatorMessage
struct UScramGameInstance_C_HideSpectatorMessage_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.ExecuteUbergraph_ScramGameInstance
struct UScramGameInstance_C_ExecuteUbergraph_ScramGameInstance_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameInstance.ScramGameInstance_C.ControllerConnectionChanged__DelegateSignature
struct UScramGameInstance_C_ControllerConnectionChanged__DelegateSignature_Params
{
	bool                                               IsConnected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.HeadsetStatusChanged__DelegateSignature
struct UScramGameInstance_C_HeadsetStatusChanged__DelegateSignature_Params
{
	bool                                               Disconnected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.LevelsUnloaded__DelegateSignature
struct UScramGameInstance_C_LevelsUnloaded__DelegateSignature_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.CheckConnectionResult__DelegateSignature
struct UScramGameInstance_C_CheckConnectionResult__DelegateSignature_Params
{
	bool                                               ConnectionOk;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramGameInstance.ScramGameInstance_C.FindSessionsFailed__DelegateSignature
struct UScramGameInstance_C_FindSessionsFailed__DelegateSignature_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.HostingFailed__DelegateSignature
struct UScramGameInstance_C_HostingFailed__DelegateSignature_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.JoinFailedAll__DelegateSignature
struct UScramGameInstance_C_JoinFailedAll__DelegateSignature_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.ExistingTeleportTransitionReady__DelegateSignature
struct UScramGameInstance_C_ExistingTeleportTransitionReady__DelegateSignature_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.LevelBPDispatch__DelegateSignature
struct UScramGameInstance_C_LevelBPDispatch__DelegateSignature_Params
{
	int                                                DispatchId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameInstance.ScramGameInstance_C.OCDemoSessionNotFound__DelegateSignature
struct UScramGameInstance_C_OCDemoSessionNotFound__DelegateSignature_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.OCDemoSessionFound__DelegateSignature
struct UScramGameInstance_C_OCDemoSessionFound__DelegateSignature_Params
{
	struct FBlueprintSessionResult                     Session;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ScramGameInstance.ScramGameInstance_C.GeoLevelChanged__DelegateSignature
struct UScramGameInstance_C_GeoLevelChanged__DelegateSignature_Params
{
	struct FName                                       NewGeoLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameInstance.ScramGameInstance_C.PrimaryLevelChanged__DelegateSignature
struct UScramGameInstance_C_PrimaryLevelChanged__DelegateSignature_Params
{
	struct FName                                       NewPrimaryLevel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameInstance.ScramGameInstance_C.TeleportTransitionComplete__DelegateSignature
struct UScramGameInstance_C_TeleportTransitionComplete__DelegateSignature_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.TeleportTransitionReady__DelegateSignature
struct UScramGameInstance_C_TeleportTransitionReady__DelegateSignature_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.JoinSuccess__DelegateSignature
struct UScramGameInstance_C_JoinSuccess__DelegateSignature_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.JoinFailed__DelegateSignature
struct UScramGameInstance_C_JoinFailed__DelegateSignature_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.NoSessionsFound__DelegateSignature
struct UScramGameInstance_C_NoSessionsFound__DelegateSignature_Params
{
};

// Function ScramGameInstance.ScramGameInstance_C.MultiplayerSessionsFound__DelegateSignature
struct UScramGameInstance_C_MultiplayerSessionsFound__DelegateSignature_Params
{
	TArray<struct FString>                             SessionsFound;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
