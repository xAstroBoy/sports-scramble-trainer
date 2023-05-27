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
	 * Function PauseMenu.PauseMenu_C.UnloadReflection
	 */
	struct APauseMenu_C_UnloadReflection_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.LoadReflection
	 */
	struct APauseMenu_C_LoadReflection_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnTempIntroButton
	 */
	struct APauseMenu_C_SpawnTempIntroButton_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnAudioButton
	 */
	struct APauseMenu_C_SpawnAudioButton_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnAudioOptions
	 */
	struct APauseMenu_C_SpawnAudioOptions_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnExtras
	 */
	struct APauseMenu_C_SpawnExtras_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.GetCurrentLanguage
	 */
	struct APauseMenu_C_GetCurrentLanguage_Params
	{
	public:
		class FText                                                Language;                                                // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnLanguageMenu
	 */
	struct APauseMenu_C_SpawnLanguageMenu_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnPointerButton
	 */
	struct APauseMenu_C_SpawnPointerButton_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.UpdatePointerType
	 */
	struct APauseMenu_C_UpdatePointerType_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.RestartGame
	 */
	struct APauseMenu_C_RestartGame_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnRestartButton
	 */
	struct APauseMenu_C_SpawnRestartButton_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnSportOptionButton
	 */
	struct APauseMenu_C_SpawnSportOptionButton_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.ShowDebugMsg
	 */
	struct APauseMenu_C_ShowDebugMsg_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      LifeTime;                                                // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SetSport
	 */
	struct APauseMenu_C_SetSport_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnJoinInviteMenu
	 */
	struct APauseMenu_C_SpawnJoinInviteMenu_Params
	{
	public:
		class FScriptDelegate                                      JoinEvent;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      DeclineAllEvent;                                         // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnGripButton
	 */
	struct APauseMenu_C_SpawnGripButton_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnAvatarOptionsButton
	 */
	struct APauseMenu_C_SpawnAvatarOptionsButton_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnAvatarMenu
	 */
	struct APauseMenu_C_SpawnAvatarMenu_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnTrainingOpMenu
	 */
	struct APauseMenu_C_SpawnTrainingOpMenu_Params
	{
	public:
		bool                                                       GoWide;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnTrainingOptionsButton
	 */
	struct APauseMenu_C_SpawnTrainingOptionsButton_Params
	{
	public:
		bool                                                       Back;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_06GI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Event;                                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SwapThrowingGlove
	 */
	struct APauseMenu_C_SwapThrowingGlove_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SwapInstrumentHand
	 */
	struct APauseMenu_C_SwapInstrumentHand_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.ShowInstrument
	 */
	struct APauseMenu_C_ShowInstrument_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.HideInstrument
	 */
	struct APauseMenu_C_HideInstrument_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.GetPnpPreferences
	 */
	struct APauseMenu_C_GetPnpPreferences_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.NextMenu
	 */
	struct APauseMenu_C_NextMenu_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnConfirmationMenu
	 */
	struct APauseMenu_C_SpawnConfirmationMenu_Params
	{
	public:
		class FName                                                LocText;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      Event;                                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_CNMT[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PauseMenu.PauseMenu_C.UpdateVoiceSetting
	 */
	struct APauseMenu_C_UpdateVoiceSetting_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.RemoveNavButtons
	 */
	struct APauseMenu_C_RemoveNavButtons_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.ShowNoPauseIcon
	 */
	struct APauseMenu_C_ShowNoPauseIcon_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SaveOptions
	 */
	struct APauseMenu_C_SaveOptions_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.EnableMenuInput
	 */
	struct APauseMenu_C_EnableMenuInput_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnHeader
	 */
	struct APauseMenu_C_SpawnHeader_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.UpdateBoundarySetting
	 */
	struct APauseMenu_C_UpdateBoundarySetting_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.DestroyMenuActors
	 */
	struct APauseMenu_C_DestroyMenuActors_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.DisableMenuInput
	 */
	struct APauseMenu_C_DisableMenuInput_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnQuarterPanel
	 */
	struct APauseMenu_C_SpawnQuarterPanel_Params
	{
	public:
		class USceneComponent*                                     Loc;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                LocString;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SetColumns
	 */
	struct APauseMenu_C_SetColumns_Params
	{
	public:
		bool                                                       HasAvatarButton;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.GetAnchors
	 */
	struct APauseMenu_C_GetAnchors_Params
	{
	public:
		class USceneComponent*                                     QpPos;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     ButtonPos;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnBackButtons
	 */
	struct APauseMenu_C_SpawnBackButtons_Params
	{
	public:
		class FScriptDelegate                                      EventBack;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnQuitButton
	 */
	struct APauseMenu_C_SpawnQuitButton_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnVoiceChatButton
	 */
	struct APauseMenu_C_SpawnVoiceChatButton_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnSportButtons
	 */
	struct APauseMenu_C_SpawnSportButtons_Params
	{
	public:
		EScramSport                                                Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7BTG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnSharedButtons
	 */
	struct APauseMenu_C_SpawnSharedButtons_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.ResetGameSelector
	 */
	struct APauseMenu_C_ResetGameSelector_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.GetDebugGameSelectors
	 */
	struct APauseMenu_C_GetDebugGameSelectors_Params
	{
	public:
		bool                                                       DebugSelectorExists;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ResetAllowed;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6P5K[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PauseMenu.PauseMenu_C.EndGame
	 */
	struct APauseMenu_C_EndGame_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.Initialize
	 */
	struct APauseMenu_C_Initialize_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.UserConstructionScript
	 */
	struct APauseMenu_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.Timeline_ScaleMenu__FinishedFunc
	 */
	struct APauseMenu_C_Timeline_ScaleMenu__FinishedFunc_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.Timeline_ScaleMenu__UpdateFunc
	 */
	struct APauseMenu_C_Timeline_ScaleMenu__UpdateFunc_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.InpActEvt_Pause_K2Node_InputActionEvent_1
	 */
	struct APauseMenu_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.OnFailure_CB7A18C444F2E804805EC3A042280AA5
	 */
	struct APauseMenu_C_OnFailure_CB7A18C444F2E804805EC3A042280AA5_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.OnSuccess_CB7A18C444F2E804805EC3A042280AA5
	 */
	struct APauseMenu_C_OnSuccess_CB7A18C444F2E804805EC3A042280AA5_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.OnFailure_1BED71814B71FE0478E2F1AAE838DA9E
	 */
	struct APauseMenu_C_OnFailure_1BED71814B71FE0478E2F1AAE838DA9E_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.OnSuccess_1BED71814B71FE0478E2F1AAE838DA9E
	 */
	struct APauseMenu_C_OnSuccess_1BED71814B71FE0478E2F1AAE838DA9E_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.OnFailure_FE43AE584DB619A31AB3558300E8F65D
	 */
	struct APauseMenu_C_OnFailure_FE43AE584DB619A31AB3558300E8F65D_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.OnSuccess_FE43AE584DB619A31AB3558300E8F65D
	 */
	struct APauseMenu_C_OnSuccess_FE43AE584DB619A31AB3558300E8F65D_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.BoundaryLineChanged
	 */
	struct APauseMenu_C_BoundaryLineChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.VoiceChatChanged
	 */
	struct APauseMenu_C_VoiceChatChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.PitcherHandChanged
	 */
	struct APauseMenu_C_PitcherHandChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.TennisHandChanged
	 */
	struct APauseMenu_C_TennisHandChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.BattingSideChanged
	 */
	struct APauseMenu_C_BattingSideChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.BattingHandChanged
	 */
	struct APauseMenu_C_BattingHandChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.TennisSkillChanged
	 */
	struct APauseMenu_C_TennisSkillChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.BattingSkillChanged
	 */
	struct APauseMenu_C_BattingSkillChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.PitchingSkillChanged
	 */
	struct APauseMenu_C_PitchingSkillChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.CatchingSkillChanged
	 */
	struct APauseMenu_C_CatchingSkillChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.BowlingSkillChanged
	 */
	struct APauseMenu_C_BowlingSkillChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.GripChanged
	 */
	struct APauseMenu_C_GripChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.TennisServeStyleChanged
	 */
	struct APauseMenu_C_TennisServeStyleChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.PointerTypeChanged
	 */
	struct APauseMenu_C_PointerTypeChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.VoiceConfirmationConfirmed
	 */
	struct APauseMenu_C_VoiceConfirmationConfirmed_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.TipsChanged
	 */
	struct APauseMenu_C_TipsChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.GameVolumeChanged
	 */
	struct APauseMenu_C_GameVolumeChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.ShortIntroChanged
	 */
	struct APauseMenu_C_ShortIntroChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.VoipVolumeChanged
	 */
	struct APauseMenu_C_VoipVolumeChanged_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.ReceiveBeginPlay
	 */
	struct APauseMenu_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.ReceiveTick
	 */
	struct APauseMenu_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.ScaleUpMenu
	 */
	struct APauseMenu_C_ScaleUpMenu_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.ScaleDownMenu
	 */
	struct APauseMenu_C_ScaleDownMenu_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.HeaderDestroyed
	 */
	struct APauseMenu_C_HeaderDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.OpenFirstMenu
	 */
	struct APauseMenu_C_OpenFirstMenu_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.TopMenuOpen
	 */
	struct APauseMenu_C_TopMenuOpen_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.DisableInputOnButtonPress
	 */
	struct APauseMenu_C_DisableInputOnButtonPress_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.CloseMenu
	 */
	struct APauseMenu_C_CloseMenu_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.CloseMenuButtonPressed
	 */
	struct APauseMenu_C_CloseMenuButtonPressed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SwapToVoiceConfirmation
	 */
	struct APauseMenu_C_SwapToVoiceConfirmation_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.QuitMultiplayer
	 */
	struct APauseMenu_C_QuitMultiplayer_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnVoiceConfirmation
	 */
	struct APauseMenu_C_SpawnVoiceConfirmation_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.VoiceConfirmatinoButtonSelected
	 */
	struct APauseMenu_C_VoiceConfirmatinoButtonSelected_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.ConfirmationMenuReady
	 */
	struct APauseMenu_C_ConfirmationMenuReady_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.BackToTop
	 */
	struct APauseMenu_C_BackToTop_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.ShowForfeit
	 */
	struct APauseMenu_C_ShowForfeit_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.ForfeitConfirmationMade
	 */
	struct APauseMenu_C_ForfeitConfirmationMade_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.ForfeitSelected
	 */
	struct APauseMenu_C_ForfeitSelected_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.QuitSelected
	 */
	struct APauseMenu_C_QuitSelected_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.ReceiveEndPlay
	 */
	struct APauseMenu_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnTrainingOptions
	 */
	struct APauseMenu_C_SpawnTrainingOptions_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.TrainingOptionsSelected
	 */
	struct APauseMenu_C_TrainingOptionsSelected_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.TrainingOptionsOpened
	 */
	struct APauseMenu_C_TrainingOptionsOpened_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.CreateAvatarMenu
	 */
	struct APauseMenu_C_CreateAvatarMenu_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.AvatarButtonSelected
	 */
	struct APauseMenu_C_AvatarButtonSelected_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.AvataMenuOpened
	 */
	struct APauseMenu_C_AvataMenuOpened_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.OpenMainOptionsMenu
	 */
	struct APauseMenu_C_OpenMainOptionsMenu_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.CreateJoinInviteMenu
	 */
	struct APauseMenu_C_CreateJoinInviteMenu_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.InvitesChecked
	 */
	struct APauseMenu_C_InvitesChecked_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q8IA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FScramGameInvite>                            invites;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.JoinGame
	 */
	struct APauseMenu_C_JoinGame_Params
	{
	public:
		struct FScramGameInvite                                    JoinPlayer;                                              // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.DeclineAll
	 */
	struct APauseMenu_C_DeclineAll_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.JoinTheMatch
	 */
	struct APauseMenu_C_JoinTheMatch_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.NoInvitesFound
	 */
	struct APauseMenu_C_NoInvitesFound_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SportOptionsButtonPressed
	 */
	struct APauseMenu_C_SportOptionsButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.ShowSportOptions
	 */
	struct APauseMenu_C_ShowSportOptions_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.SportOptionsOpened
	 */
	struct APauseMenu_C_SportOptionsOpened_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.RestartConfirmation
	 */
	struct APauseMenu_C_RestartConfirmation_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.RestartConfirmationChoiceMade
	 */
	struct APauseMenu_C_RestartConfirmationChoiceMade_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.RestartChallengeSelected
	 */
	struct APauseMenu_C_RestartChallengeSelected_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.RecenterMenu
	 */
	struct APauseMenu_C_RecenterMenu_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.ClientUnrealJoinFailed
	 */
	struct APauseMenu_C_ClientUnrealJoinFailed_Params
	{
	public:
		EScramPendingGameFailure                                   failureType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.UnrealJoinFailed
	 */
	struct APauseMenu_C_UnrealJoinFailed_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.LanguageOptionButtonPressed
	 */
	struct APauseMenu_C_LanguageOptionButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.ShowLanguageOptions
	 */
	struct APauseMenu_C_ShowLanguageOptions_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.ExtrasButtonPressed
	 */
	struct APauseMenu_C_ExtrasButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnExtrasMenu
	 */
	struct APauseMenu_C_SpawnExtrasMenu_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.CustomEvent
	 */
	struct APauseMenu_C_CustomEvent_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.AudioButtonSelected
	 */
	struct APauseMenu_C_AudioButtonSelected_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.SpawnAudioMenu
	 */
	struct APauseMenu_C_SpawnAudioMenu_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu
	 */
	struct APauseMenu_C_ExecuteUbergraph_PauseMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.PauseMenuCleared__DelegateSignature
	 */
	struct APauseMenu_C_PauseMenuCleared__DelegateSignature_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.PauseMenuOpened__DelegateSignature
	 */
	struct APauseMenu_C_PauseMenuOpened__DelegateSignature_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.UnPauseReady__DelegateSignature
	 */
	struct APauseMenu_C_UnPauseReady__DelegateSignature_Params
	{
	public:
		bool                                                       ForceKeepTravelCapsule;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.AllButtonsDestroyed__DelegateSignature
	 */
	struct APauseMenu_C_AllButtonsDestroyed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
