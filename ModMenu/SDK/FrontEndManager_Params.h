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
	 * Function FrontEndManager.FrontEndManager_C.SetDemoVars
	 */
	struct AFrontEndManager_C_SetDemoVars_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.PlayThemeMusic
	 */
	struct AFrontEndManager_C_PlayThemeMusic_Params
	{
	public:
		bool                                                       PlayIntro;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7MPP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      FadeTime;                                                // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.SpawnMenuStand
	 */
	struct AFrontEndManager_C_SpawnMenuStand_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.TeleportPlayAreaToArena
	 */
	struct AFrontEndManager_C_TeleportPlayAreaToArena_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseTransitionDuration;                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MUQW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TransitionDuration;                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.RemoveLogo
	 */
	struct AFrontEndManager_C_RemoveLogo_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.SpawnLogo
	 */
	struct AFrontEndManager_C_SpawnLogo_Params
	{
	public:
		bool                                                       LogoOnly;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G19A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.SpawnGame
	 */
	struct AFrontEndManager_C_SpawnGame_Params
	{
	public:
		class AGameHandlerBase_C*                                  GameplayHandler;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QAWB[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.SpawnTempMenu
	 */
	struct AFrontEndManager_C_SpawnTempMenu_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.DemoStart
	 */
	struct AFrontEndManager_C_DemoStart_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.CheckDebugMode
	 */
	struct AFrontEndManager_C_CheckDebugMode_Params
	{
	public:
		bool                                                       DebugActive;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HDR0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.CheckDemoMode
	 */
	struct AFrontEndManager_C_CheckDemoMode_Params
	{
	public:
		bool                                                       DemoActive;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8ZG6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.Initialize
	 */
	struct AFrontEndManager_C_Initialize_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.UserConstructionScript
	 */
	struct AFrontEndManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.Timeline_RotateAnnouncer__FinishedFunc
	 */
	struct AFrontEndManager_C_Timeline_RotateAnnouncer__FinishedFunc_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.Timeline_RotateAnnouncer__UpdateFunc
	 */
	struct AFrontEndManager_C_Timeline_RotateAnnouncer__UpdateFunc_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.Timeline_ErrorMessageScale__FinishedFunc
	 */
	struct AFrontEndManager_C_Timeline_ErrorMessageScale__FinishedFunc_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.Timeline_ErrorMessageScale__UpdateFunc
	 */
	struct AFrontEndManager_C_Timeline_ErrorMessageScale__UpdateFunc_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OnFailure_FE43AE584DB619A31AB35583454BD2A5
	 */
	struct AFrontEndManager_C_OnFailure_FE43AE584DB619A31AB35583454BD2A5_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OnSuccess_FE43AE584DB619A31AB35583454BD2A5
	 */
	struct AFrontEndManager_C_OnSuccess_FE43AE584DB619A31AB35583454BD2A5_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OnFailure_CB7A18C444F2E804805EC3A0078B2E5D
	 */
	struct AFrontEndManager_C_OnFailure_CB7A18C444F2E804805EC3A0078B2E5D_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OnSuccess_CB7A18C444F2E804805EC3A0078B2E5D
	 */
	struct AFrontEndManager_C_OnSuccess_CB7A18C444F2E804805EC3A0078B2E5D_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OnLoaded_67BCE369435FE89733A9EA9A9E7BE47D
	 */
	struct AFrontEndManager_C_OnLoaded_67BCE369435FE89733A9EA9A9E7BE47D_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OnLoaded_4D0F72764B0410B81B87F38AD33A1025
	 */
	struct AFrontEndManager_C_OnLoaded_4D0F72764B0410B81B87F38AD33A1025_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.InpActEvt_DebugButton_K2Node_InputActionEvent_2
	 */
	struct AFrontEndManager_C_InpActEvt_DebugButton_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OnFailure_CB7A18C444F2E804805EC3A01E43AE2F
	 */
	struct AFrontEndManager_C_OnFailure_CB7A18C444F2E804805EC3A01E43AE2F_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OnSuccess_CB7A18C444F2E804805EC3A01E43AE2F
	 */
	struct AFrontEndManager_C_OnSuccess_CB7A18C444F2E804805EC3A01E43AE2F_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OnFailure_FE43AE584DB619A31AB355835C8352D7
	 */
	struct AFrontEndManager_C_OnFailure_FE43AE584DB619A31AB355835C8352D7_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OnSuccess_FE43AE584DB619A31AB355835C8352D7
	 */
	struct AFrontEndManager_C_OnSuccess_FE43AE584DB619A31AB355835C8352D7_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.InpActEvt_Pause_K2Node_InputActionEvent_1
	 */
	struct AFrontEndManager_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OnFailure_9E6C8D1F493095BCB7D1C4B4615CCC02
	 */
	struct AFrontEndManager_C_OnFailure_9E6C8D1F493095BCB7D1C4B4615CCC02_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OnSuccess_9E6C8D1F493095BCB7D1C4B4615CCC02
	 */
	struct AFrontEndManager_C_OnSuccess_9E6C8D1F493095BCB7D1C4B4615CCC02_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.SpawnDemoMainMenu
	 */
	struct AFrontEndManager_C_SpawnDemoMainMenu_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.DemoMainMenuChoiceMade
	 */
	struct AFrontEndManager_C_DemoMainMenuChoiceMade_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.BuyNow
	 */
	struct AFrontEndManager_C_BuyNow_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.BuyNowPositionReady
	 */
	struct AFrontEndManager_C_BuyNowPositionReady_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.BuyNowReady
	 */
	struct AFrontEndManager_C_BuyNowReady_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.CustomEvent_4
	 */
	struct AFrontEndManager_C_CustomEvent_4_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.SpawnFeaturesMenu
	 */
	struct AFrontEndManager_C_SpawnFeaturesMenu_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.DestroyFeaturesMenu
	 */
	struct AFrontEndManager_C_DestroyFeaturesMenu_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.Features
	 */
	struct AFrontEndManager_C_Features_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.FeaturePositionReady
	 */
	struct AFrontEndManager_C_FeaturePositionReady_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ShowFeatures
	 */
	struct AFrontEndManager_C_ShowFeatures_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.BeginIntro
	 */
	struct AFrontEndManager_C_BeginIntro_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.StartAnnouncerAudio
	 */
	struct AFrontEndManager_C_StartAnnouncerAudio_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.AnnouncerReveal
	 */
	struct AFrontEndManager_C_AnnouncerReveal_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.AnnouncerTransform
	 */
	struct AFrontEndManager_C_AnnouncerTransform_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.TransformComplete
	 */
	struct AFrontEndManager_C_TransformComplete_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.AnnouncerExitComplete
	 */
	struct AFrontEndManager_C_AnnouncerExitComplete_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ShortIntroBegin
	 */
	struct AFrontEndManager_C_ShortIntroBegin_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.NuxIntroBegin
	 */
	struct AFrontEndManager_C_NuxIntroBegin_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.Hub01AnimComplete
	 */
	struct AFrontEndManager_C_Hub01AnimComplete_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.Hub02AnimComplete
	 */
	struct AFrontEndManager_C_Hub02AnimComplete_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.Hub03AnimComplete
	 */
	struct AFrontEndManager_C_Hub03AnimComplete_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.Hub04AnimComplete
	 */
	struct AFrontEndManager_C_Hub04AnimComplete_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ReturnAnnouncerToSpawn
	 */
	struct AFrontEndManager_C_ReturnAnnouncerToSpawn_Params
	{
	public:
		bool                                                       UseHubExit;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ShortIntroClipComplete
	 */
	struct AFrontEndManager_C_ShortIntroClipComplete_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.RevealBeacon
	 */
	struct AFrontEndManager_C_RevealBeacon_Params
	{
	public:
		EHubMenuChoices                                            BeaconType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.RotateAnnouncer
	 */
	struct AFrontEndManager_C_RotateAnnouncer_Params
	{
	public:
		EHubMenuChoices                                            Choice;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KKUN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Angle;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.StartShortAnnouncer
	 */
	struct AFrontEndManager_C_StartShortAnnouncer_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.Start Reveal
	 */
	struct AFrontEndManager_C_StartReveal_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.BeginIntroTimer
	 */
	struct AFrontEndManager_C_BeginIntroTimer_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.Reveal Timer Return
	 */
	struct AFrontEndManager_C_RevealTimerReturn_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.TeleportToVenue
	 */
	struct AFrontEndManager_C_TeleportToVenue_Params
	{
	public:
		EScramSport                                                Sport;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TrainingLevel;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8SF9[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                LevelOverride;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.LoadGameplayLevel
	 */
	struct AFrontEndManager_C_LoadGameplayLevel_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.RemoveTravelTunnel
	 */
	struct AFrontEndManager_C_RemoveTravelTunnel_Params
	{
	public:
		class FName                                                NewGeoLevel;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.CustomLevelLoaded
	 */
	struct AFrontEndManager_C_CustomLevelLoaded_Params
	{
	public:
		class FName                                                NewPrimaryLevel;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ReadyToStartGame
	 */
	struct AFrontEndManager_C_ReadyToStartGame_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.GameHandlerTeleport
	 */
	struct AFrontEndManager_C_GameHandlerTeleport_Params
	{
	public:
		EScramSport                                                Sport;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TrainingLevel;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1TG2[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                LevelOverride;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.Reset Gameplay Level
	 */
	struct AFrontEndManager_C_ResetGameplayLevel_Params
	{
	public:
		class FName                                                SpawnLocOverride;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ReceiveBeginPlay
	 */
	struct AFrontEndManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.AllowSwap
	 */
	struct AFrontEndManager_C_AllowSwap_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.CreateMainMenu
	 */
	struct AFrontEndManager_C_CreateMainMenu_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ShowLogoScreen
	 */
	struct AFrontEndManager_C_ShowLogoScreen_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ToggleDebugMenu
	 */
	struct AFrontEndManager_C_ToggleDebugMenu_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.DisallowSwap
	 */
	struct AFrontEndManager_C_DisallowSwap_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.CreateDebugMenu
	 */
	struct AFrontEndManager_C_CreateDebugMenu_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.MainMenuSelectionMade
	 */
	struct AFrontEndManager_C_MainMenuSelectionMade_Params
	{
	public:
		EMainMenuChoices                                           Choice;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.SpawnHubMenu
	 */
	struct AFrontEndManager_C_SpawnHubMenu_Params
	{
	public:
		bool                                                       NUX;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.HubMenuSelection
	 */
	struct AFrontEndManager_C_HubMenuSelection_Params
	{
	public:
		EHubMenuChoices                                            Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.CreateDetailsMenu
	 */
	struct AFrontEndManager_C_CreateDetailsMenu_Params
	{
	public:
		ESelectionDetailsMenuType                                  MenuType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EScramSport                                                Sport;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGameModeTypes                                             ResultsType;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.GameSelectionMade
	 */
	struct AFrontEndManager_C_GameSelectionMade_Params
	{
	public:
		EScramSport                                                Sport;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SinglePlayer;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ReturnToHub
	 */
	struct AFrontEndManager_C_ReturnToHub_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ReadyToReturnToHub
	 */
	struct AFrontEndManager_C_ReadyToReturnToHub_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.PlayerHasReturnedToHub
	 */
	struct AFrontEndManager_C_PlayerHasReturnedToHub_Params
	{
	public:
		class FName                                                NewPrimaryLevel;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ReloadHub
	 */
	struct AFrontEndManager_C_ReloadHub_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.HiddenHubLoaded
	 */
	struct AFrontEndManager_C_HiddenHubLoaded_Params
	{
	public:
		class FName                                                NewPrimaryLevel;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.LevelChanged
	 */
	struct AFrontEndManager_C_LevelChanged_Params
	{
	public:
		class FName                                                Level;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.SpawnResultsScreen
	 */
	struct AFrontEndManager_C_SpawnResultsScreen_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ReceiveTick
	 */
	struct AFrontEndManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.TrophyRoomLoaded
	 */
	struct AFrontEndManager_C_TrophyRoomLoaded_Params
	{
	public:
		class FName                                                NewPrimaryLevel;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.GoToTrophyRoom
	 */
	struct AFrontEndManager_C_GoToTrophyRoom_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.TrophyRoomPositionConfirmed
	 */
	struct AFrontEndManager_C_TrophyRoomPositionConfirmed_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ReadyToLoadTrophyRoom
	 */
	struct AFrontEndManager_C_ReadyToLoadTrophyRoom_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ExitTrophies
	 */
	struct AFrontEndManager_C_ExitTrophies_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.DebugResetTrophies
	 */
	struct AFrontEndManager_C_DebugResetTrophies_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.SetupDone
	 */
	struct AFrontEndManager_C_SetupDone_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.QuitGame
	 */
	struct AFrontEndManager_C_QuitGame_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ShowQuitConfirmation
	 */
	struct AFrontEndManager_C_ShowQuitConfirmation_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ReadyToShowConfirmation
	 */
	struct AFrontEndManager_C_ReadyToShowConfirmation_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.QuitChoiceMade
	 */
	struct AFrontEndManager_C_QuitChoiceMade_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.PlayerReadyForIntro
	 */
	struct AFrontEndManager_C_PlayerReadyForIntro_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.PlayerFadedOut
	 */
	struct AFrontEndManager_C_PlayerFadedOut_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OptionMenuPostionConfirmed
	 */
	struct AFrontEndManager_C_OptionMenuPostionConfirmed_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ReadyToSpawnOptionsMenu
	 */
	struct AFrontEndManager_C_ReadyToSpawnOptionsMenu_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ShowOptionsMenu
	 */
	struct AFrontEndManager_C_ShowOptionsMenu_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OptionsMenuDestroyed
	 */
	struct AFrontEndManager_C_OptionsMenuDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.StandButtonPressed
	 */
	struct AFrontEndManager_C_StandButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.StandSelectionMade
	 */
	struct AFrontEndManager_C_StandSelectionMade_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.CloseMenuStnad
	 */
	struct AFrontEndManager_C_CloseMenuStnad_Params
	{
	public:
		EHubMenuChoices                                            Choice;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CYTV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Angle;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.SpawnIntroOnlyConfettiCannonVFX
	 */
	struct AFrontEndManager_C_SpawnIntroOnlyConfettiCannonVFX_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.LevelsUnloaded
	 */
	struct AFrontEndManager_C_LevelsUnloaded_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.HubSelectionStarted
	 */
	struct AFrontEndManager_C_HubSelectionStarted_Params
	{
	public:
		EHubMenuChoices                                            Choice;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0YO0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Angle;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.StartLoopingConfetti
	 */
	struct AFrontEndManager_C_StartLoopingConfetti_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.StopLoopingConfetti
	 */
	struct AFrontEndManager_C_StopLoopingConfetti_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ShellInviteFromRelaunchFailed
	 */
	struct AFrontEndManager_C_ShellInviteFromRelaunchFailed_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.OnShellInviteAccepted
	 */
	struct AFrontEndManager_C_OnShellInviteAccepted_Params
	{
	public:
		struct FScramGameInvite                                    GameInvite;                                              // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ClientUnrealJoinFailed
	 */
	struct AFrontEndManager_C_ClientUnrealJoinFailed_Params
	{
	public:
		EScramPendingGameFailure                                   failureType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ErrorMessageComplete
	 */
	struct AFrontEndManager_C_ErrorMessageComplete_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ScaleUpErrorMessage
	 */
	struct AFrontEndManager_C_ScaleUpErrorMessage_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ScaleDownErrorMessage
	 */
	struct AFrontEndManager_C_ScaleDownErrorMessage_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.DisplayErrorMessage
	 */
	struct AFrontEndManager_C_DisplayErrorMessage_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.SpawnErrorMenu
	 */
	struct AFrontEndManager_C_SpawnErrorMenu_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ErrorButtonPressed
	 */
	struct AFrontEndManager_C_ErrorButtonPressed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.DisplayIntroMessage
	 */
	struct AFrontEndManager_C_DisplayIntroMessage_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.EndIntroMessage
	 */
	struct AFrontEndManager_C_EndIntroMessage_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ContinueSetup
	 */
	struct AFrontEndManager_C_ContinueSetup_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ContinueIntro
	 */
	struct AFrontEndManager_C_ContinueIntro_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ChooseLanguage
	 */
	struct AFrontEndManager_C_ChooseLanguage_Params
	{	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.LanguageSelected
	 */
	struct AFrontEndManager_C_LanguageSelected_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndManager.FrontEndManager_C.ExecuteUbergraph_FrontEndManager
	 */
	struct AFrontEndManager_C_ExecuteUbergraph_FrontEndManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7N3U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
