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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ScramGameInstance.ScramGameInstance_C.SpawnErrorMessage
	 */
	struct UScramGameInstance_C_SpawnErrorMessage_Params
	{
	public:
		class FText                                                ErrorMessage;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		unsigned char                                              UnknownData_Q48E[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.LoadReflectionLevel
	 */
	struct UScramGameInstance_C_LoadReflectionLevel_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.UnloadLevels
	 */
	struct UScramGameInstance_C_UnloadLevels_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.SetAnchorToArena
	 */
	struct UScramGameInstance_C_SetAnchorToArena_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsHost;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.CreateTravelCapsuleNoTeleport
	 */
	struct UScramGameInstance_C_CreateTravelCapsuleNoTeleport_Params
	{
	public:
		struct FTransform                                          OverrideTransform;                                       // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		bool                                                       UseOverrideTransform;                                    // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Instant;                                                 // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StartRed;                                                // 0x0032(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZQQR[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATravelcapsule_C*                                    TravelCapsule;                                           // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AlreadyExisted;                                          // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.CheckIsSpectator
	 */
	struct UScramGameInstance_C_CheckIsSpectator_Params
	{
	public:
		bool                                                       IsSpectator;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OI9N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.PrepareInstrumentReinit
	 */
	struct UScramGameInstance_C_PrepareInstrumentReinit_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.SetSportType
	 */
	struct UScramGameInstance_C_SetSportType_Params
	{
	public:
		EScramSport                                                Sport;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       KeepInstruments;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.EnableMusic
	 */
	struct UScramGameInstance_C_EnableMusic_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.DisableMusic
	 */
	struct UScramGameInstance_C_DisableMusic_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.ForceChangeInstrument
	 */
	struct UScramGameInstance_C_ForceChangeInstrument_Params
	{
	public:
		class UClass*                                              NewInstrumentClass;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DropOldInstrument;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WINE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AScramPlayerHand*                                    HandActorOptional;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseHandedness;                                           // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C5YP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AScramInstrument*                                    NewInstrument;                                           // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.DisplayDebugString
	 */
	struct UScramGameInstance_C_DisplayDebugString_Params
	{
	public:
		class FString                                              DebugString;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Durtation;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_74FI[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_A6825E2046D1EE4480D53F85A160D238
	 */
	struct UScramGameInstance_C_OnFailure_A6825E2046D1EE4480D53F85A160D238_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_A6825E2046D1EE4480D53F85A160D238
	 */
	struct UScramGameInstance_C_OnSuccess_A6825E2046D1EE4480D53F85A160D238_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_E218766E479159D426108DB79AE5A05D
	 */
	struct UScramGameInstance_C_OnFailure_E218766E479159D426108DB79AE5A05D_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_E218766E479159D426108DB79AE5A05D
	 */
	struct UScramGameInstance_C_OnSuccess_E218766E479159D426108DB79AE5A05D_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_A6825E2046D1EE4480D53F85CD6B33B6
	 */
	struct UScramGameInstance_C_OnFailure_A6825E2046D1EE4480D53F85CD6B33B6_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_A6825E2046D1EE4480D53F85CD6B33B6
	 */
	struct UScramGameInstance_C_OnSuccess_A6825E2046D1EE4480D53F85CD6B33B6_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_E218766E479159D426108DB7F6EE41D3
	 */
	struct UScramGameInstance_C_OnFailure_E218766E479159D426108DB7F6EE41D3_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_E218766E479159D426108DB7F6EE41D3
	 */
	struct UScramGameInstance_C_OnSuccess_E218766E479159D426108DB7F6EE41D3_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_A6825E2046D1EE4480D53F85A91F0ECD
	 */
	struct UScramGameInstance_C_OnFailure_A6825E2046D1EE4480D53F85A91F0ECD_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_A6825E2046D1EE4480D53F85A91F0ECD
	 */
	struct UScramGameInstance_C_OnSuccess_A6825E2046D1EE4480D53F85A91F0ECD_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_E218766E479159D426108DB7929A7CA8
	 */
	struct UScramGameInstance_C_OnFailure_E218766E479159D426108DB7929A7CA8_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_E218766E479159D426108DB7929A7CA8
	 */
	struct UScramGameInstance_C_OnSuccess_E218766E479159D426108DB7929A7CA8_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_195EB2254E8E108525A7CCA39EDA45EB
	 */
	struct UScramGameInstance_C_OnFailure_195EB2254E8E108525A7CCA39EDA45EB_Params
	{
	public:
		TArray<struct FBlueprintSessionResult>                     Results;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_195EB2254E8E108525A7CCA39EDA45EB
	 */
	struct UScramGameInstance_C_OnSuccess_195EB2254E8E108525A7CCA39EDA45EB_Params
	{
	public:
		TArray<struct FBlueprintSessionResult>                     Results;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_2068A73A4E27B76D6515A3A4308C2A02
	 */
	struct UScramGameInstance_C_OnFailure_2068A73A4E27B76D6515A3A4308C2A02_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_2068A73A4E27B76D6515A3A4308C2A02
	 */
	struct UScramGameInstance_C_OnSuccess_2068A73A4E27B76D6515A3A4308C2A02_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_FFC99656425C039A8BCC99955A3E5515
	 */
	struct UScramGameInstance_C_OnFailure_FFC99656425C039A8BCC99955A3E5515_Params
	{
	public:
		TArray<struct FBlueprintSessionResult>                     Results;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_FFC99656425C039A8BCC99955A3E5515
	 */
	struct UScramGameInstance_C_OnSuccess_FFC99656425C039A8BCC99955A3E5515_Params
	{
	public:
		TArray<struct FBlueprintSessionResult>                     Results;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_F9E172BA4FE1D5A046DC01BD48DACA9B
	 */
	struct UScramGameInstance_C_OnFailure_F9E172BA4FE1D5A046DC01BD48DACA9B_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_F9E172BA4FE1D5A046DC01BD48DACA9B
	 */
	struct UScramGameInstance_C_OnSuccess_F9E172BA4FE1D5A046DC01BD48DACA9B_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_EAD2016E4E26B32FAABA1FA5F88D9CB4
	 */
	struct UScramGameInstance_C_OnFailure_EAD2016E4E26B32FAABA1FA5F88D9CB4_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_EAD2016E4E26B32FAABA1FA5F88D9CB4
	 */
	struct UScramGameInstance_C_OnSuccess_EAD2016E4E26B32FAABA1FA5F88D9CB4_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_2E9EF70F49117325F129FCAEC8708411
	 */
	struct UScramGameInstance_C_OnFailure_2E9EF70F49117325F129FCAEC8708411_Params
	{
	public:
		TArray<struct FBlueprintSessionResult>                     Results;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_2E9EF70F49117325F129FCAEC8708411
	 */
	struct UScramGameInstance_C_OnSuccess_2E9EF70F49117325F129FCAEC8708411_Params
	{
	public:
		TArray<struct FBlueprintSessionResult>                     Results;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_28C0B15B470A9AA54E923CAC6773937B
	 */
	struct UScramGameInstance_C_OnFailure_28C0B15B470A9AA54E923CAC6773937B_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_28C0B15B470A9AA54E923CAC6773937B
	 */
	struct UScramGameInstance_C_OnSuccess_28C0B15B470A9AA54E923CAC6773937B_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_1933FE3C43C128FAB9B71398D3ED0723
	 */
	struct UScramGameInstance_C_OnFailure_1933FE3C43C128FAB9B71398D3ED0723_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_1933FE3C43C128FAB9B71398D3ED0723
	 */
	struct UScramGameInstance_C_OnSuccess_1933FE3C43C128FAB9B71398D3ED0723_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnFailure_B64C966143C1313AC5BD979ACFAE5B69
	 */
	struct UScramGameInstance_C_OnFailure_B64C966143C1313AC5BD979ACFAE5B69_Params
	{
	public:
		TArray<struct FBlueprintSessionResult>                     Results;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnSuccess_B64C966143C1313AC5BD979ACFAE5B69
	 */
	struct UScramGameInstance_C_OnSuccess_B64C966143C1313AC5BD979ACFAE5B69_Params
	{
	public:
		TArray<struct FBlueprintSessionResult>                     Results;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnLoaded_A155B1A0419914351D88EF9C6B11F64C
	 */
	struct UScramGameInstance_C_OnLoaded_A155B1A0419914351D88EF9C6B11F64C_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.LoadArena
	 */
	struct UScramGameInstance_C_LoadArena_Params
	{
	public:
		class FName                                                Level;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NoRender;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.GeoLevelLoadComplete
	 */
	struct UScramGameInstance_C_GeoLevelLoadComplete_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.PrimaryLevelLoadComplete
	 */
	struct UScramGameInstance_C_PrimaryLevelLoadComplete_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.SetLevelVisibility
	 */
	struct UScramGameInstance_C_SetLevelVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.LoadArenaGameplayAndGeo
	 */
	struct UScramGameInstance_C_LoadArenaGameplayAndGeo_Params
	{
	public:
		EScramSport                                                Sport;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Training;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.LoadArenaGeo
	 */
	struct UScramGameInstance_C_LoadArenaGeo_Params
	{
	public:
		class FName                                                NewPrimaryLevel;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.GeoLevelShown
	 */
	struct UScramGameInstance_C_GeoLevelShown_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.TeleportPlayArea
	 */
	struct UScramGameInstance_C_TeleportPlayArea_Params
	{
	public:
		struct FVector                                             PlayAreaTransformLocation;                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            PlayAreaTransformRotation;                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseTransitionDuration;                                   // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XKZB[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TransitionDuration;                                      // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBox                                                minPlayArea;                                             // 0x0020(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBox                                                maxPlayArea;                                             // 0x003C(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBox                                                maxHazardArea;                                           // 0x0058(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.TeleportReady
	 */
	struct UScramGameInstance_C_TeleportReady_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.TeleportComplete
	 */
	struct UScramGameInstance_C_TeleportComplete_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.HidePlayer
	 */
	struct UScramGameInstance_C_HidePlayer_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.Host_Game
	 */
	struct UScramGameInstance_C_Host_Game_Params
	{
	public:
		bool                                                       LAN;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YWTC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Level;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.GetSessions
	 */
	struct UScramGameInstance_C_GetSessions_Params
	{
	public:
		bool                                                       LAN;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.JoinMatch
	 */
	struct UScramGameInstance_C_JoinMatch_Params
	{
	public:
		class FString                                              ServerName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       LAN;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.EndMultiplayer
	 */
	struct UScramGameInstance_C_EndMultiplayer_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.ShowDebugMessage
	 */
	struct UScramGameInstance_C_ShowDebugMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		float                                                      LifeTime;                                                // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OCDemo_FindSession
	 */
	struct UScramGameInstance_C_OCDemo_FindSession_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OCDemo_Host
	 */
	struct UScramGameInstance_C_OCDemo_Host_Params
	{
	public:
		class FName                                                LevelName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Absolute;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OCDemo_Join
	 */
	struct UScramGameInstance_C_OCDemo_Join_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.DebugOCDemoServerList
	 */
	struct UScramGameInstance_C_DebugOCDemoServerList_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.FindAndJoin
	 */
	struct UScramGameInstance_C_FindAndJoin_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.AttemptToJoin
	 */
	struct UScramGameInstance_C_AttemptToJoin_Params
	{
	public:
		TArray<class FString>                                      SessionsFound;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.SelfSessionsUnbind
	 */
	struct UScramGameInstance_C_SelfSessionsUnbind_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.TryAnother
	 */
	struct UScramGameInstance_C_TryAnother_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.CheckConnection
	 */
	struct UScramGameInstance_C_CheckConnection_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.CheckSessionFailed
	 */
	struct UScramGameInstance_C_CheckSessionFailed_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.CheckSessionFound
	 */
	struct UScramGameInstance_C_CheckSessionFound_Params
	{
	public:
		TArray<class FString>                                      SessionsFound;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.CheckSessionSuccessNoValid
	 */
	struct UScramGameInstance_C_CheckSessionSuccessNoValid_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.HandleTravelError
	 */
	struct UScramGameInstance_C_HandleTravelError_Params
	{
	public:
		ETravelFailure                                             failureType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.HandleNetworkError
	 */
	struct UScramGameInstance_C_HandleNetworkError_Params
	{
	public:
		ENetworkFailure                                            failureType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsServer;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.ReceiveInit
	 */
	struct UScramGameInstance_C_ReceiveInit_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.AppWillEnterBackground
	 */
	struct UScramGameInstance_C_AppWillEnterBackground_Params
	{
	public:
		bool                                                       LocalEvent;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.AppHasEnteredForeground
	 */
	struct UScramGameInstance_C_AppHasEnteredForeground_Params
	{
	public:
		bool                                                       LocalEvent;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.AppWillDeactivate
	 */
	struct UScramGameInstance_C_AppWillDeactivate_Params
	{
	public:
		bool                                                       LocalEvent;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.AppHasReactivated
	 */
	struct UScramGameInstance_C_AppHasReactivated_Params
	{
	public:
		bool                                                       LocalEvent;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.AppWillTerminate
	 */
	struct UScramGameInstance_C_AppWillTerminate_Params
	{
	public:
		bool                                                       LocalEvent;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.SetAvatarLook
	 */
	struct UScramGameInstance_C_SetAvatarLook_Params
	{
	public:
		class AScramPlayer*                                        pPlayer;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAvatarLook                                         AvatarLook;                                              // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.BroadcastLocalAvatarLook
	 */
	struct UScramGameInstance_C_BroadcastLocalAvatarLook_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.GameInvitePing
	 */
	struct UScramGameInstance_C_GameInvitePing_Params
	{
	public:
		int32_t                                                    pingCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.ClearDebugMessages
	 */
	struct UScramGameInstance_C_ClearDebugMessages_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnShellInviteAccepted
	 */
	struct UScramGameInstance_C_OnShellInviteAccepted_Params
	{
	public:
		struct FScramGameInvite                                    GameInvite;                                              // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.BindShellInviteAcceptedEvent
	 */
	struct UScramGameInstance_C_BindShellInviteAcceptedEvent_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnControllerConnectionChanged
	 */
	struct UScramGameInstance_C_OnControllerConnectionChanged_Params
	{
	public:
		bool                                                       IsConnected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnHeadsetReconnected
	 */
	struct UScramGameInstance_C_OnHeadsetReconnected_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnHeadsetDisconnected
	 */
	struct UScramGameInstance_C_OnHeadsetDisconnected_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnInputFocusLost
	 */
	struct UScramGameInstance_C_OnInputFocusLost_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OnInputFocusReceived
	 */
	struct UScramGameInstance_C_OnInputFocusReceived_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.Focus Recieved PauseEvent
	 */
	struct UScramGameInstance_C_FocusRecievedPauseEvent_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.Focus Lost PauseEvent
	 */
	struct UScramGameInstance_C_FocusLostPauseEvent_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.PreliminaryConnectionCheck
	 */
	struct UScramGameInstance_C_PreliminaryConnectionCheck_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.ShowErrorMessageOnSpectatorScreen
	 */
	struct UScramGameInstance_C_ShowErrorMessageOnSpectatorScreen_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.HideSpectatorMessage
	 */
	struct UScramGameInstance_C_HideSpectatorMessage_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.ExecuteUbergraph_ScramGameInstance
	 */
	struct UScramGameInstance_C_ExecuteUbergraph_ScramGameInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YE2Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.ControllerConnectionChanged__DelegateSignature
	 */
	struct UScramGameInstance_C_ControllerConnectionChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsConnected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.HeadsetStatusChanged__DelegateSignature
	 */
	struct UScramGameInstance_C_HeadsetStatusChanged__DelegateSignature_Params
	{
	public:
		bool                                                       Disconnected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.LevelsUnloaded__DelegateSignature
	 */
	struct UScramGameInstance_C_LevelsUnloaded__DelegateSignature_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.CheckConnectionResult__DelegateSignature
	 */
	struct UScramGameInstance_C_CheckConnectionResult__DelegateSignature_Params
	{
	public:
		bool                                                       ConnectionOk;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.FindSessionsFailed__DelegateSignature
	 */
	struct UScramGameInstance_C_FindSessionsFailed__DelegateSignature_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.HostingFailed__DelegateSignature
	 */
	struct UScramGameInstance_C_HostingFailed__DelegateSignature_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.JoinFailedAll__DelegateSignature
	 */
	struct UScramGameInstance_C_JoinFailedAll__DelegateSignature_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.ExistingTeleportTransitionReady__DelegateSignature
	 */
	struct UScramGameInstance_C_ExistingTeleportTransitionReady__DelegateSignature_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.LevelBPDispatch__DelegateSignature
	 */
	struct UScramGameInstance_C_LevelBPDispatch__DelegateSignature_Params
	{
	public:
		int32_t                                                    DispatchId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OCDemoSessionNotFound__DelegateSignature
	 */
	struct UScramGameInstance_C_OCDemoSessionNotFound__DelegateSignature_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.OCDemoSessionFound__DelegateSignature
	 */
	struct UScramGameInstance_C_OCDemoSessionFound__DelegateSignature_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.GeoLevelChanged__DelegateSignature
	 */
	struct UScramGameInstance_C_GeoLevelChanged__DelegateSignature_Params
	{
	public:
		class FName                                                NewGeoLevel;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.PrimaryLevelChanged__DelegateSignature
	 */
	struct UScramGameInstance_C_PrimaryLevelChanged__DelegateSignature_Params
	{
	public:
		class FName                                                NewPrimaryLevel;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.TeleportTransitionComplete__DelegateSignature
	 */
	struct UScramGameInstance_C_TeleportTransitionComplete__DelegateSignature_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.TeleportTransitionReady__DelegateSignature
	 */
	struct UScramGameInstance_C_TeleportTransitionReady__DelegateSignature_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.JoinSuccess__DelegateSignature
	 */
	struct UScramGameInstance_C_JoinSuccess__DelegateSignature_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.JoinFailed__DelegateSignature
	 */
	struct UScramGameInstance_C_JoinFailed__DelegateSignature_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.NoSessionsFound__DelegateSignature
	 */
	struct UScramGameInstance_C_NoSessionsFound__DelegateSignature_Params
	{	};

	/**
	 * Function ScramGameInstance.ScramGameInstance_C.MultiplayerSessionsFound__DelegateSignature
	 */
	struct UScramGameInstance_C_MultiplayerSessionsFound__DelegateSignature_Params
	{
	public:
		TArray<class FString>                                      SessionsFound;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
