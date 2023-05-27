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
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnSevereMessageMenu
	 */
	struct AGameHandlerOnline_C_SpawnSevereMessageMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.RemoveErrorMenu
	 */
	struct AGameHandlerOnline_C_RemoveErrorMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ClosePauseMenu
	 */
	struct AGameHandlerOnline_C_ClosePauseMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.FailsafeDoubleMenu
	 */
	struct AGameHandlerOnline_C_FailsafeDoubleMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.RepairLocalClientState
	 */
	struct AGameHandlerOnline_C_RepairLocalClientState_Params
	{
	public:
		EOnlineGameHandlerClientStates                             NewClientState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.UnbindPause
	 */
	struct AGameHandlerOnline_C_UnbindPause_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.BindPause
	 */
	struct AGameHandlerOnline_C_BindPause_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.CheckRemotePlayerClientState
	 */
	struct AGameHandlerOnline_C_CheckRemotePlayerClientState_Params
	{
	public:
		class FScriptDelegate                                      RemotePlayerClientState;                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ResetStatusBools
	 */
	struct AGameHandlerOnline_C_ResetStatusBools_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnExitButton
	 */
	struct AGameHandlerOnline_C_SpawnExitButton_Params
	{
	public:
		bool                                                       StaticPosition;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BVXK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      ExitEvent;                                               // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ShowMenus
	 */
	struct AGameHandlerOnline_C_ShowMenus_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.HideMenus
	 */
	struct AGameHandlerOnline_C_HideMenus_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.RemoveAvatarButtons
	 */
	struct AGameHandlerOnline_C_RemoveAvatarButtons_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarButtons
	 */
	struct AGameHandlerOnline_C_SpawnAvatarButtons_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnConfirmationMenu
	 */
	struct AGameHandlerOnline_C_SpawnConfirmationMenu_Params
	{
	public:
		class FName                                                LocText;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                OverrideText;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FScriptDelegate                                      Selection;                                               // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		bool                                                       Static;                                                  // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnTextTwoMenu
	 */
	struct AGameHandlerOnline_C_SpawnTextTwoMenu_Params
	{
	public:
		class FName                                                LocText0;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                LocText1;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      SelectionFinished;                                       // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.PlayerReady?
	 */
	struct AGameHandlerOnline_C_PlayerReady_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Ready;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnSportOptionsMenu
	 */
	struct AGameHandlerOnline_C_SpawnSportOptionsMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnChooseSportMenu
	 */
	struct AGameHandlerOnline_C_SpawnChooseSportMenu_Params
	{
	public:
		class FScriptDelegate                                      ChoiceEvent;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SetFindMatchGameOptions
	 */
	struct AGameHandlerOnline_C_SetFindMatchGameOptions_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnBowlingGloves
	 */
	struct AGameHandlerOnline_C_SpawnBowlingGloves_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnMessageMenu
	 */
	struct AGameHandlerOnline_C_SpawnMessageMenu_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Static;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnAwardMenu
	 */
	struct AGameHandlerOnline_C_SpawnAwardMenu_Params
	{
	public:
		class FScriptDelegate                                      AwardReadyEvent;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.AwardsEarned?
	 */
	struct AGameHandlerOnline_C_AwardsEarned_Params
	{
	public:
		bool                                                       AwardWaiting;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NAZT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnResultsMenu
	 */
	struct AGameHandlerOnline_C_SpawnResultsMenu_Params
	{
	public:
		class FScriptDelegate                                      ResultsCompleteEvent;                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		struct FResultsData                                        ResultsData;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.PrepSport
	 */
	struct AGameHandlerOnline_C_PrepSport_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.RevealRemoteAvatar
	 */
	struct AGameHandlerOnline_C_RevealRemoteAvatar_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnGameManager
	 */
	struct AGameHandlerOnline_C_SpawnGameManager_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnSportIconMenu
	 */
	struct AGameHandlerOnline_C_SpawnSportIconMenu_Params
	{
	public:
		class AMenu_MpSportIcon_C*                                 Menu;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WVYR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnMpReadyMenu
	 */
	struct AGameHandlerOnline_C_SpawnMpReadyMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarChoiceMenu
	 */
	struct AGameHandlerOnline_C_SpawnAvatarChoiceMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.NextMenu
	 */
	struct AGameHandlerOnline_C_NextMenu_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.RemoveNavigationButtons
	 */
	struct AGameHandlerOnline_C_RemoveNavigationButtons_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.DisableActiveMenuInput
	 */
	struct AGameHandlerOnline_C_DisableActiveMenuInput_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnNavigationButtons
	 */
	struct AGameHandlerOnline_C_SpawnNavigationButtons_Params
	{
	public:
		bool                                                       Ok;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4RLE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OkEvent;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		bool                                                       WideSpacing;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Next;                                                    // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QBHU[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      NextEvent;                                               // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		bool                                                       Trophy;                                                  // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Home;                                                    // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FocusNext;                                               // 0x0032(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.EnableActiveMenuInput
	 */
	struct AGameHandlerOnline_C_EnableActiveMenuInput_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnHeader
	 */
	struct AGameHandlerOnline_C_SpawnHeader_Params
	{
	public:
		class FScriptDelegate                                      InitialMenuEvent;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		bool                                                       StartOpen;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.Initialize
	 */
	struct AGameHandlerOnline_C_Initialize_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.UserConstructionScript
	 */
	struct AGameHandlerOnline_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.Timeline_MenuScale__FinishedFunc
	 */
	struct AGameHandlerOnline_C_Timeline_MenuScale__FinishedFunc_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.Timeline_MenuScale__UpdateFunc
	 */
	struct AGameHandlerOnline_C_Timeline_MenuScale__UpdateFunc_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnFailure_CB7A18C444F2E804805EC3A08673C765
	 */
	struct AGameHandlerOnline_C_OnFailure_CB7A18C444F2E804805EC3A08673C765_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnSuccess_CB7A18C444F2E804805EC3A08673C765
	 */
	struct AGameHandlerOnline_C_OnSuccess_CB7A18C444F2E804805EC3A08673C765_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnFailure_FE43AE584DB619A31AB35583C4B33B9D
	 */
	struct AGameHandlerOnline_C_OnFailure_FE43AE584DB619A31AB35583C4B33B9D_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnSuccess_FE43AE584DB619A31AB35583C4B33B9D
	 */
	struct AGameHandlerOnline_C_OnSuccess_FE43AE584DB619A31AB35583C4B33B9D_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnLoaded_3BE7A01644B7D6F446DF06B53AF96672
	 */
	struct AGameHandlerOnline_C_OnLoaded_3BE7A01644B7D6F446DF06B53AF96672_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ReceiveBeginPlay
	 */
	struct AGameHandlerOnline_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.InitialMenu
	 */
	struct AGameHandlerOnline_C_InitialMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ScaleUpMenu
	 */
	struct AGameHandlerOnline_C_ScaleUpMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ScaleDownMenu
	 */
	struct AGameHandlerOnline_C_ScaleDownMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ButtonPressed
	 */
	struct AGameHandlerOnline_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.HomeButtonPressed
	 */
	struct AGameHandlerOnline_C_HomeButtonPressed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.AvatarChoiceMenuOpened
	 */
	struct AGameHandlerOnline_C_AvatarChoiceMenuOpened_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.AvatarSelected
	 */
	struct AGameHandlerOnline_C_AvatarSelected_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnReadyMenu
	 */
	struct AGameHandlerOnline_C_SpawnReadyMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ReadyMenuOpened
	 */
	struct AGameHandlerOnline_C_ReadyMenuOpened_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.AllPlayersReady
	 */
	struct AGameHandlerOnline_C_AllPlayersReady_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.CloseReadyMenu
	 */
	struct AGameHandlerOnline_C_CloseReadyMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnIconMenu
	 */
	struct AGameHandlerOnline_C_SpawnIconMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.TennisMatchComplete
	 */
	struct AGameHandlerOnline_C_TennisMatchComplete_Params
	{
	public:
		EGameResult                                                Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ShowResults
	 */
	struct AGameHandlerOnline_C_ShowResults_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.GameOver
	 */
	struct AGameHandlerOnline_C_GameOver_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnCapsule
	 */
	struct AGameHandlerOnline_C_SpawnCapsule_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.CapsuleOn
	 */
	struct AGameHandlerOnline_C_CapsuleOn_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SetResults
	 */
	struct AGameHandlerOnline_C_SetResults_Params
	{
	public:
		EGameResult                                                ResultsGameResult;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.TrophyComplete
	 */
	struct AGameHandlerOnline_C_TrophyComplete_Params
	{
	public:
		bool                                                       AllAwardsComplete;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.TrophyReadyToSpawn
	 */
	struct AGameHandlerOnline_C_TrophyReadyToSpawn_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.CreateTrophyMenu
	 */
	struct AGameHandlerOnline_C_CreateTrophyMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.TrophyLoop
	 */
	struct AGameHandlerOnline_C_TrophyLoop_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.CreateNextFromResultsButton
	 */
	struct AGameHandlerOnline_C_CreateNextFromResultsButton_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ResultsDoneSelected
	 */
	struct AGameHandlerOnline_C_ResultsDoneSelected_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.RemotePlayerReplayRequested
	 */
	struct AGameHandlerOnline_C_RemotePlayerReplayRequested_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.RestartMatch
	 */
	struct AGameHandlerOnline_C_RestartMatch_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.WaitingForRematch
	 */
	struct AGameHandlerOnline_C_WaitingForRematch_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.WaitingForRematchDisplayed
	 */
	struct AGameHandlerOnline_C_WaitingForRematchDisplayed_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.DoNothing
	 */
	struct AGameHandlerOnline_C_DoNothing_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.BowlingMatchComplete
	 */
	struct AGameHandlerOnline_C_BowlingMatchComplete_Params
	{
	public:
		EGameResult                                                MatchResult;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0ICW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Player1GamesWon;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2GamesWon;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.BaseballMatchComplete
	 */
	struct AGameHandlerOnline_C_BaseballMatchComplete_Params
	{
	public:
		bool                                                       LocalPlayerVictory;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BPWW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AwayScore;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HomeScore;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.HeaderHandoffComplete
	 */
	struct AGameHandlerOnline_C_HeaderHandoffComplete_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarMenu
	 */
	struct AGameHandlerOnline_C_SpawnAvatarMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsSelected
	 */
	struct AGameHandlerOnline_C_SportOptionsSelected_Params
	{
	public:
		EScramSport                                                Sport;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BBHostIsHomeTeam;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.Sport Chosen
	 */
	struct AGameHandlerOnline_C_SportChosen_Params
	{
	public:
		EScramSport                                                Sport;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnGameOptionsMenu
	 */
	struct AGameHandlerOnline_C_SpawnGameOptionsMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsMenuDisplayed
	 */
	struct AGameHandlerOnline_C_SportOptionsMenuDisplayed_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsChosen
	 */
	struct AGameHandlerOnline_C_SportOptionsChosen_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnGeoLevelChanged
	 */
	struct AGameHandlerOnline_C_OnGeoLevelChanged_Params
	{
	public:
		class FName                                                NewGeoLevel;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.PlayerInitComplete
	 */
	struct AGameHandlerOnline_C_PlayerInitComplete_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnMatchStart
	 */
	struct AGameHandlerOnline_C_OnMatchStart_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ReceiveEndPlay
	 */
	struct AGameHandlerOnline_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.FadeComplete
	 */
	struct AGameHandlerOnline_C_FadeComplete_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.Shutdown
	 */
	struct AGameHandlerOnline_C_Shutdown_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnInitialPlayerInitComplete
	 */
	struct AGameHandlerOnline_C_OnInitialPlayerInitComplete_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnRemoteAvatarSelected
	 */
	struct AGameHandlerOnline_C_OnRemoteAvatarSelected_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ResultsDisplayComplete
	 */
	struct AGameHandlerOnline_C_ResultsDisplayComplete_Params
	{
	public:
		bool                                                       WideNextButton;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.PlayMatchBeginAudio
	 */
	struct AGameHandlerOnline_C_PlayMatchBeginAudio_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatConnected
	 */
	struct AGameHandlerOnline_C_HeartbeatConnected_Params
	{
	public:
		class AScramPlayerController*                              PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatDisconnected
	 */
	struct AGameHandlerOnline_C_HeartbeatDisconnected_Params
	{
	public:
		class AScramPlayerController*                              PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatTravelCapsuleClosed
	 */
	struct AGameHandlerOnline_C_HeartbeatTravelCapsuleClosed_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatReconnected
	 */
	struct AGameHandlerOnline_C_HeartbeatReconnected_Params
	{
	public:
		class AScramPlayerController*                              PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnMenuInstruments
	 */
	struct AGameHandlerOnline_C_SpawnMenuInstruments_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.Net_AllPlayersReconnected
	 */
	struct AGameHandlerOnline_C_Net_AllPlayersReconnected_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Local
	 */
	struct AGameHandlerOnline_C_OnDisconnect_Local_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote
	 */
	struct AGameHandlerOnline_C_OnDisconnect_Remote_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote_Menu0
	 */
	struct AGameHandlerOnline_C_OnDisconnect_Remote_Menu0_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote_Menu1
	 */
	struct AGameHandlerOnline_C_OnDisconnect_Remote_Menu1_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnGameOverMenu
	 */
	struct AGameHandlerOnline_C_OnGameOverMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnRematchOrResetMenu
	 */
	struct AGameHandlerOnline_C_SpawnRematchOrResetMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.RematchWithFriendSelectionMade
	 */
	struct AGameHandlerOnline_C_RematchWithFriendSelectionMade_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.RematchWithFriendOpened
	 */
	struct AGameHandlerOnline_C_RematchWithFriendOpened_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ReplayChooseSport
	 */
	struct AGameHandlerOnline_C_ReplayChooseSport_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.MulticastReselectSport
	 */
	struct AGameHandlerOnline_C_MulticastReselectSport_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnRematchMenu
	 */
	struct AGameHandlerOnline_C_SpawnRematchMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.RematchChoiceMenu
	 */
	struct AGameHandlerOnline_C_RematchChoiceMenu_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.DisconnectPauseEvent
	 */
	struct AGameHandlerOnline_C_DisconnectPauseEvent_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.MatchBeginning
	 */
	struct AGameHandlerOnline_C_MatchBeginning_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnNetworkFailure
	 */
	struct AGameHandlerOnline_C_OnNetworkFailure_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.TrySpawnNetworkFailureMenu
	 */
	struct AGameHandlerOnline_C_TrySpawnNetworkFailureMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnNetworkFailureMenu
	 */
	struct AGameHandlerOnline_C_SpawnNetworkFailureMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.NetworkFailureTravelCapsuleClosed
	 */
	struct AGameHandlerOnline_C_NetworkFailureTravelCapsuleClosed_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.GamePaused
	 */
	struct AGameHandlerOnline_C_GamePaused_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.GameUnpaused
	 */
	struct AGameHandlerOnline_C_GameUnpaused_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OnRemoteAvatarUnselected
	 */
	struct AGameHandlerOnline_C_OnRemoteAvatarUnselected_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ExitConfirmResult
	 */
	struct AGameHandlerOnline_C_ExitConfirmResult_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.WaitinForHostMessageReady
	 */
	struct AGameHandlerOnline_C_WaitinForHostMessageReady_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.QuitSelectedPauseMenu
	 */
	struct AGameHandlerOnline_C_QuitSelectedPauseMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OverrideHostReady
	 */
	struct AGameHandlerOnline_C_OverrideHostReady_Params
	{
	public:
		bool                                                       Ready;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OverrideClientReady
	 */
	struct AGameHandlerOnline_C_OverrideClientReady_Params
	{
	public:
		bool                                                       Ready;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.RemotePlayerReadyAgain
	 */
	struct AGameHandlerOnline_C_RemotePlayerReadyAgain_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.QuitViaPause
	 */
	struct AGameHandlerOnline_C_QuitViaPause_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ResetFromPauseMenu
	 */
	struct AGameHandlerOnline_C_ResetFromPauseMenu_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SendClientExpectedState
	 */
	struct AGameHandlerOnline_C_SendClientExpectedState_Params
	{
	public:
		EOnlineGameHandlerClientStates                             ExpectedClientState;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SendHostExpectedState
	 */
	struct AGameHandlerOnline_C_SendHostExpectedState_Params
	{
	public:
		EOnlineGameHandlerClientStates                             ExpectedClientState;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.RequestHostExpectedState
	 */
	struct AGameHandlerOnline_C_RequestHostExpectedState_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.RequestClientExpected
	 */
	struct AGameHandlerOnline_C_RequestClientExpected_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsSelectedClientOnly
	 */
	struct AGameHandlerOnline_C_SportOptionsSelectedClientOnly_Params
	{
	public:
		EScramSport                                                Sport;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BBHostIsHomeTeam;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.RequestSportOptionsSelected
	 */
	struct AGameHandlerOnline_C_RequestSportOptionsSelected_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ForfeitResults
	 */
	struct AGameHandlerOnline_C_ForfeitResults_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnChooseSport
	 */
	struct AGameHandlerOnline_C_SpawnChooseSport_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.InitialMessageDisplayed
	 */
	struct AGameHandlerOnline_C_InitialMessageDisplayed_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ShowConnctionMessage
	 */
	struct AGameHandlerOnline_C_ShowConnctionMessage_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.NetworkFailureExit
	 */
	struct AGameHandlerOnline_C_NetworkFailureExit_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SpawnNetworkFailure
	 */
	struct AGameHandlerOnline_C_SpawnNetworkFailure_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.PlayForfeitMusic
	 */
	struct AGameHandlerOnline_C_PlayForfeitMusic_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.MatchBeginTravelCapsuleOpened
	 */
	struct AGameHandlerOnline_C_MatchBeginTravelCapsuleOpened_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ServerReady
	 */
	struct AGameHandlerOnline_C_ServerReady_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.Multi_Initialize
	 */
	struct AGameHandlerOnline_C_Multi_Initialize_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.BackToChooseSport
	 */
	struct AGameHandlerOnline_C_BackToChooseSport_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.StartTravel
	 */
	struct AGameHandlerOnline_C_StartTravel_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SetClientCanTravel
	 */
	struct AGameHandlerOnline_C_SetClientCanTravel_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.BeginMatch
	 */
	struct AGameHandlerOnline_C_BeginMatch_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.SetClientCanBeginMatch
	 */
	struct AGameHandlerOnline_C_SetClientCanBeginMatch_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.Multi_BeginMatchOpenCapsule
	 */
	struct AGameHandlerOnline_C_Multi_BeginMatchOpenCapsule_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ConnectionMessageOpened
	 */
	struct AGameHandlerOnline_C_ConnectionMessageOpened_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ConnectionMessage
	 */
	struct AGameHandlerOnline_C_ConnectionMessage_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ExecuteUbergraph_GameHandlerOnline
	 */
	struct AGameHandlerOnline_C_ExecuteUbergraph_GameHandlerOnline_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TP5J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.ReturnExpectedClientState__DelegateSignature
	 */
	struct AGameHandlerOnline_C_ReturnExpectedClientState__DelegateSignature_Params
	{
	public:
		EOnlineGameHandlerClientStates                             RemotePlayerExpectedClientState;                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.OldMenuClear__DelegateSignature
	 */
	struct AGameHandlerOnline_C_OldMenuClear__DelegateSignature_Params
	{	};

	/**
	 * Function GameHandlerOnline.GameHandlerOnline_C.MenuOpened__DelegateSignature
	 */
	struct AGameHandlerOnline_C_MenuOpened__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
