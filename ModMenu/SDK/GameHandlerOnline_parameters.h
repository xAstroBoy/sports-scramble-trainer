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

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnSevereMessageMenu
struct AGameHandlerOnline_C_SpawnSevereMessageMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.RemoveErrorMenu
struct AGameHandlerOnline_C_RemoveErrorMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ClosePauseMenu
struct AGameHandlerOnline_C_ClosePauseMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.FailsafeDoubleMenu
struct AGameHandlerOnline_C_FailsafeDoubleMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.RepairLocalClientState
struct AGameHandlerOnline_C_RepairLocalClientState_Params
{
	TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> NewClientState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.UnbindPause
struct AGameHandlerOnline_C_UnbindPause_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.BindPause
struct AGameHandlerOnline_C_BindPause_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.CheckRemotePlayerClientState
struct AGameHandlerOnline_C_CheckRemotePlayerClientState_Params
{
	struct FScriptDelegate                             RemotePlayerClientState;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.ResetStatusBools
struct AGameHandlerOnline_C_ResetStatusBools_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnExitButton
struct AGameHandlerOnline_C_SpawnExitButton_Params
{
	bool                                               StaticPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptDelegate                             ExitEvent;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.ShowMenus
struct AGameHandlerOnline_C_ShowMenus_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.HideMenus
struct AGameHandlerOnline_C_HideMenus_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.RemoveAvatarButtons
struct AGameHandlerOnline_C_RemoveAvatarButtons_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarButtons
struct AGameHandlerOnline_C_SpawnAvatarButtons_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnConfirmationMenu
struct AGameHandlerOnline_C_SpawnConfirmationMenu_Params
{
	struct FName                                       LocText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       OverrideText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScriptDelegate                             Selection;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	bool                                               Static;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnTextTwoMenu
struct AGameHandlerOnline_C_SpawnTextTwoMenu_Params
{
	struct FName                                       LocText0;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LocText1;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             SelectionFinished;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.PlayerReady?
struct AGameHandlerOnline_C_PlayerReady__Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ready;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnSportOptionsMenu
struct AGameHandlerOnline_C_SpawnSportOptionsMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnChooseSportMenu
struct AGameHandlerOnline_C_SpawnChooseSportMenu_Params
{
	struct FScriptDelegate                             ChoiceEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.SetFindMatchGameOptions
struct AGameHandlerOnline_C_SetFindMatchGameOptions_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnBowlingGloves
struct AGameHandlerOnline_C_SpawnBowlingGloves_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnMessageMenu
struct AGameHandlerOnline_C_SpawnMessageMenu_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Static;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnAwardMenu
struct AGameHandlerOnline_C_SpawnAwardMenu_Params
{
	struct FScriptDelegate                             AwardReadyEvent;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.AwardsEarned?
struct AGameHandlerOnline_C_AwardsEarned__Params
{
	bool                                               AwardWaiting;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnResultsMenu
struct AGameHandlerOnline_C_SpawnResultsMenu_Params
{
	struct FScriptDelegate                             ResultsCompleteEvent;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	struct FResultsData                                ResultsData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.PrepSport
struct AGameHandlerOnline_C_PrepSport_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.RevealRemoteAvatar
struct AGameHandlerOnline_C_RevealRemoteAvatar_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnGameManager
struct AGameHandlerOnline_C_SpawnGameManager_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnSportIconMenu
struct AGameHandlerOnline_C_SpawnSportIconMenu_Params
{
	class AMenu_MpSportIcon_C*                         Menu;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnMpReadyMenu
struct AGameHandlerOnline_C_SpawnMpReadyMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarChoiceMenu
struct AGameHandlerOnline_C_SpawnAvatarChoiceMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.NextMenu
struct AGameHandlerOnline_C_NextMenu_Params
{
	struct FScriptDelegate                             Event;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.RemoveNavigationButtons
struct AGameHandlerOnline_C_RemoveNavigationButtons_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.DisableActiveMenuInput
struct AGameHandlerOnline_C_DisableActiveMenuInput_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnNavigationButtons
struct AGameHandlerOnline_C_SpawnNavigationButtons_Params
{
	bool                                               Ok;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptDelegate                             OkEvent;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	bool                                               WideSpacing;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Next;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptDelegate                             NextEvent;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	bool                                               Trophy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Home;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               FocusNext;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.EnableActiveMenuInput
struct AGameHandlerOnline_C_EnableActiveMenuInput_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnHeader
struct AGameHandlerOnline_C_SpawnHeader_Params
{
	struct FScriptDelegate                             InitialMenu_Event;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	bool                                               StartOpen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.Initialize
struct AGameHandlerOnline_C_Initialize_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.UserConstructionScript
struct AGameHandlerOnline_C_UserConstructionScript_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.Timeline_MenuScale__FinishedFunc
struct AGameHandlerOnline_C_Timeline_MenuScale__FinishedFunc_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.Timeline_MenuScale__UpdateFunc
struct AGameHandlerOnline_C_Timeline_MenuScale__UpdateFunc_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnFailure_CB7A18C444F2E804805EC3A08673C765
struct AGameHandlerOnline_C_OnFailure_CB7A18C444F2E804805EC3A08673C765_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnSuccess_CB7A18C444F2E804805EC3A08673C765
struct AGameHandlerOnline_C_OnSuccess_CB7A18C444F2E804805EC3A08673C765_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnFailure_FE43AE584DB619A31AB35583C4B33B9D
struct AGameHandlerOnline_C_OnFailure_FE43AE584DB619A31AB35583C4B33B9D_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnSuccess_FE43AE584DB619A31AB35583C4B33B9D
struct AGameHandlerOnline_C_OnSuccess_FE43AE584DB619A31AB35583C4B33B9D_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnLoaded_3BE7A01644B7D6F446DF06B53AF96672
struct AGameHandlerOnline_C_OnLoaded_3BE7A01644B7D6F446DF06B53AF96672_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.ReceiveBeginPlay
struct AGameHandlerOnline_C_ReceiveBeginPlay_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.InitialMenu
struct AGameHandlerOnline_C_InitialMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ScaleUpMenu
struct AGameHandlerOnline_C_ScaleUpMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ScaleDownMenu
struct AGameHandlerOnline_C_ScaleDownMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ButtonPressed
struct AGameHandlerOnline_C_ButtonPressed_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.HomeButtonPressed
struct AGameHandlerOnline_C_HomeButtonPressed_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.AvatarChoiceMenuOpened
struct AGameHandlerOnline_C_AvatarChoiceMenuOpened_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.AvatarSelected
struct AGameHandlerOnline_C_AvatarSelected_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnReadyMenu
struct AGameHandlerOnline_C_SpawnReadyMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ReadyMenuOpened
struct AGameHandlerOnline_C_ReadyMenuOpened_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.AllPlayersReady
struct AGameHandlerOnline_C_AllPlayersReady_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.CloseReadyMenu
struct AGameHandlerOnline_C_CloseReadyMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnIconMenu
struct AGameHandlerOnline_C_SpawnIconMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.TennisMatchComplete
struct AGameHandlerOnline_C_TennisMatchComplete_Params
{
	TEnumAsByte<GameResult_EGameResult>                Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.ShowResults
struct AGameHandlerOnline_C_ShowResults_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.GameOver
struct AGameHandlerOnline_C_GameOver_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnCapsule
struct AGameHandlerOnline_C_SpawnCapsule_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.CapsuleOn
struct AGameHandlerOnline_C_CapsuleOn_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SetResults
struct AGameHandlerOnline_C_SetResults_Params
{
	TEnumAsByte<GameResult_EGameResult>                Results_Game_Result;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.TrophyComplete
struct AGameHandlerOnline_C_TrophyComplete_Params
{
	bool                                               AllAwardsComplete;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.TrophyReadyToSpawn
struct AGameHandlerOnline_C_TrophyReadyToSpawn_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.CreateTrophyMenu
struct AGameHandlerOnline_C_CreateTrophyMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.TrophyLoop
struct AGameHandlerOnline_C_TrophyLoop_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.CreateNextFromResultsButton
struct AGameHandlerOnline_C_CreateNextFromResultsButton_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ResultsDoneSelected
struct AGameHandlerOnline_C_ResultsDoneSelected_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.RemotePlayerReplayRequested
struct AGameHandlerOnline_C_RemotePlayerReplayRequested_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.RestartMatch
struct AGameHandlerOnline_C_RestartMatch_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.WaitingForRematch
struct AGameHandlerOnline_C_WaitingForRematch_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.WaitingForRematchDisplayed
struct AGameHandlerOnline_C_WaitingForRematchDisplayed_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.DoNothing
struct AGameHandlerOnline_C_DoNothing_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.BowlingMatchComplete
struct AGameHandlerOnline_C_BowlingMatchComplete_Params
{
	TEnumAsByte<GameResult_EGameResult>                MatchResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player1GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.BaseballMatchComplete
struct AGameHandlerOnline_C_BaseballMatchComplete_Params
{
	bool                                               LocalPlayerVictory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AwayScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HomeScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.HeaderHandoffComplete
struct AGameHandlerOnline_C_HeaderHandoffComplete_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarMenu
struct AGameHandlerOnline_C_SpawnAvatarMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsSelected
struct AGameHandlerOnline_C_SportOptionsSelected_Params
{
	SportsScramble_EScramSport                         Sport;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BBHostIsHomeTeam;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.Sport Chosen
struct AGameHandlerOnline_C_Sport_Chosen_Params
{
	SportsScramble_EScramSport                         Sport;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnGameOptionsMenu
struct AGameHandlerOnline_C_SpawnGameOptionsMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsMenuDisplayed
struct AGameHandlerOnline_C_SportOptionsMenuDisplayed_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsChosen
struct AGameHandlerOnline_C_SportOptionsChosen_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnGeoLevelChanged
struct AGameHandlerOnline_C_OnGeoLevelChanged_Params
{
	struct FName                                       NewGeoLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.PlayerInitComplete
struct AGameHandlerOnline_C_PlayerInitComplete_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnMatchStart
struct AGameHandlerOnline_C_OnMatchStart_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ReceiveEndPlay
struct AGameHandlerOnline_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.FadeComplete
struct AGameHandlerOnline_C_FadeComplete_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.Shutdown
struct AGameHandlerOnline_C_Shutdown_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnInitialPlayerInitComplete
struct AGameHandlerOnline_C_OnInitialPlayerInitComplete_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnRemoteAvatarSelected
struct AGameHandlerOnline_C_OnRemoteAvatarSelected_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.ResultsDisplayComplete
struct AGameHandlerOnline_C_ResultsDisplayComplete_Params
{
	bool                                               WideNextButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.PlayMatchBeginAudio
struct AGameHandlerOnline_C_PlayMatchBeginAudio_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatConnected
struct AGameHandlerOnline_C_HeartbeatConnected_Params
{
	class AScramPlayerController*                      PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatDisconnected
struct AGameHandlerOnline_C_HeartbeatDisconnected_Params
{
	class AScramPlayerController*                      PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatTravelCapsuleClosed
struct AGameHandlerOnline_C_HeartbeatTravelCapsuleClosed_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatReconnected
struct AGameHandlerOnline_C_HeartbeatReconnected_Params
{
	class AScramPlayerController*                      PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnMenuInstruments
struct AGameHandlerOnline_C_SpawnMenuInstruments_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.Net_AllPlayersReconnected
struct AGameHandlerOnline_C_Net_AllPlayersReconnected_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Local
struct AGameHandlerOnline_C_OnDisconnect_Local_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote
struct AGameHandlerOnline_C_OnDisconnect_Remote_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote_Menu0
struct AGameHandlerOnline_C_OnDisconnect_Remote_Menu0_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote_Menu1
struct AGameHandlerOnline_C_OnDisconnect_Remote_Menu1_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnGameOverMenu
struct AGameHandlerOnline_C_OnGameOverMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnRematchOrResetMenu
struct AGameHandlerOnline_C_SpawnRematchOrResetMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.RematchWithFriendSelectionMade
struct AGameHandlerOnline_C_RematchWithFriendSelectionMade_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.RematchWithFriendOpened
struct AGameHandlerOnline_C_RematchWithFriendOpened_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ReplayChooseSport
struct AGameHandlerOnline_C_ReplayChooseSport_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.MulticastReselectSport
struct AGameHandlerOnline_C_MulticastReselectSport_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnRematchMenu
struct AGameHandlerOnline_C_SpawnRematchMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.RematchChoiceMenu
struct AGameHandlerOnline_C_RematchChoiceMenu_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.DisconnectPauseEvent
struct AGameHandlerOnline_C_DisconnectPauseEvent_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.MatchBeginning
struct AGameHandlerOnline_C_MatchBeginning_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnNetworkFailure
struct AGameHandlerOnline_C_OnNetworkFailure_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.TrySpawnNetworkFailureMenu
struct AGameHandlerOnline_C_TrySpawnNetworkFailureMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnNetworkFailureMenu
struct AGameHandlerOnline_C_SpawnNetworkFailureMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.NetworkFailureTravelCapsuleClosed
struct AGameHandlerOnline_C_NetworkFailureTravelCapsuleClosed_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.GamePaused
struct AGameHandlerOnline_C_GamePaused_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.GameUnpaused
struct AGameHandlerOnline_C_GameUnpaused_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.OnRemoteAvatarUnselected
struct AGameHandlerOnline_C_OnRemoteAvatarUnselected_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ExitConfirmResult
struct AGameHandlerOnline_C_ExitConfirmResult_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.WaitinForHostMessageReady
struct AGameHandlerOnline_C_WaitinForHostMessageReady_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.QuitSelectedPauseMenu
struct AGameHandlerOnline_C_QuitSelectedPauseMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.OverrideHostReady
struct AGameHandlerOnline_C_OverrideHostReady_Params
{
	bool                                               Ready;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.OverrideClientReady
struct AGameHandlerOnline_C_OverrideClientReady_Params
{
	bool                                               Ready;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.RemotePlayerReadyAgain
struct AGameHandlerOnline_C_RemotePlayerReadyAgain_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.QuitViaPause
struct AGameHandlerOnline_C_QuitViaPause_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ResetFromPauseMenu
struct AGameHandlerOnline_C_ResetFromPauseMenu_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SendClientExpectedState
struct AGameHandlerOnline_C_SendClientExpectedState_Params
{
	TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> ExpectedClientState;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.SendHostExpectedState
struct AGameHandlerOnline_C_SendHostExpectedState_Params
{
	TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> ExpectedClientState;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.RequestHostExpectedState
struct AGameHandlerOnline_C_RequestHostExpectedState_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.RequestClientExpected
struct AGameHandlerOnline_C_RequestClientExpected_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsSelectedClientOnly
struct AGameHandlerOnline_C_SportOptionsSelectedClientOnly_Params
{
	SportsScramble_EScramSport                         Sport;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BBHostIsHomeTeam;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameHandlerOnline.GameHandlerOnline_C.RequestSportOptionsSelected
struct AGameHandlerOnline_C_RequestSportOptionsSelected_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ForfeitResults
struct AGameHandlerOnline_C_ForfeitResults_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnChooseSport
struct AGameHandlerOnline_C_SpawnChooseSport_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.InitialMessageDisplayed
struct AGameHandlerOnline_C_InitialMessageDisplayed_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ShowConnctionMessage
struct AGameHandlerOnline_C_ShowConnctionMessage_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.NetworkFailureExit
struct AGameHandlerOnline_C_NetworkFailureExit_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnNetworkFailure
struct AGameHandlerOnline_C_SpawnNetworkFailure_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.PlayForfeitMusic
struct AGameHandlerOnline_C_PlayForfeitMusic_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.MatchBeginTravelCapsuleOpened
struct AGameHandlerOnline_C_MatchBeginTravelCapsuleOpened_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ServerReady
struct AGameHandlerOnline_C_ServerReady_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.Multi_Initialize
struct AGameHandlerOnline_C_Multi_Initialize_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.BackToChooseSport
struct AGameHandlerOnline_C_BackToChooseSport_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.StartTravel
struct AGameHandlerOnline_C_StartTravel_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SetClientCanTravel
struct AGameHandlerOnline_C_SetClientCanTravel_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.BeginMatch
struct AGameHandlerOnline_C_BeginMatch_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.SetClientCanBeginMatch
struct AGameHandlerOnline_C_SetClientCanBeginMatch_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.Multi_BeginMatchOpenCapsule
struct AGameHandlerOnline_C_Multi_BeginMatchOpenCapsule_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ConnectionMessageOpened
struct AGameHandlerOnline_C_ConnectionMessageOpened_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ConnectionMessage
struct AGameHandlerOnline_C_ConnectionMessage_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.ExecuteUbergraph_GameHandlerOnline
struct AGameHandlerOnline_C_ExecuteUbergraph_GameHandlerOnline_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.ReturnExpectedClientState__DelegateSignature
struct AGameHandlerOnline_C_ReturnExpectedClientState__DelegateSignature_Params
{
	TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> RemotePlayerExpectedClientState;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerOnline.GameHandlerOnline_C.OldMenuClear__DelegateSignature
struct AGameHandlerOnline_C_OldMenuClear__DelegateSignature_Params
{
};

// Function GameHandlerOnline.GameHandlerOnline_C.MenuOpened__DelegateSignature
struct AGameHandlerOnline_C_MenuOpened__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
