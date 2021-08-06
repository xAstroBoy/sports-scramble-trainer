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

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.SaveTennisState
struct AScramSportManagerTennis_Blueprint_C_SaveTennisState_Params
{
	class UClass*                                      Ball;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      player1Instrument;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      player2Instrument;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      activeArenaScramble;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.InitializeSpectator
struct AScramSportManagerTennis_Blueprint_C_InitializeSpectator_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ResetActiveScrambles
struct AScramSportManagerTennis_Blueprint_C_ResetActiveScrambles_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BindExistingServeLocationIndicator
struct AScramSportManagerTennis_Blueprint_C_BindExistingServeLocationIndicator_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnRep_ServeLocationIndicator
struct AScramSportManagerTennis_Blueprint_C_OnRep_ServeLocationIndicator_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BindNewServeLocationIndicator
struct AScramSportManagerTennis_Blueprint_C_BindNewServeLocationIndicator_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ShowDebugInfo
struct AScramSportManagerTennis_Blueprint_C_ShowDebugInfo_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.CreateServeLocation
struct AScramSportManagerTennis_Blueprint_C_CreateServeLocation_Params
{
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.AllowAIServe
struct AScramSportManagerTennis_Blueprint_C_AllowAIServe_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.CreateReceiveLocation
struct AScramSportManagerTennis_Blueprint_C_CreateReceiveLocation_Params
{
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GetGameStatus
struct AScramSportManagerTennis_Blueprint_C_GetGameStatus_Params
{
	struct FText                                       StatusText;                                                // (Parm, OutParm)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GetPointType
struct AScramSportManagerTennis_Blueprint_C_GetPointType_Params
{
	struct FName                                       PointType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ResetResultBools
struct AScramSportManagerTennis_Blueprint_C_ResetResultBools_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Cleanup
struct AScramSportManagerTennis_Blueprint_C_Cleanup_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Initialize
struct AScramSportManagerTennis_Blueprint_C_Initialize_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UserConstructionScript
struct AScramSportManagerTennis_Blueprint_C_UserConstructionScript_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Timeline_Fade__FinishedFunc
struct AScramSportManagerTennis_Blueprint_C_Timeline_Fade__FinishedFunc_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Timeline_Fade__UpdateFunc
struct AScramSportManagerTennis_Blueprint_C_Timeline_Fade__UpdateFunc_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_38F84231481C3446BB8F2BBBF214C4CE
struct AScramSportManagerTennis_Blueprint_C_OnLoaded_38F84231481C3446BB8F2BBBF214C4CE_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_A90B74D8415A762510668AB9493CBDF6
struct AScramSportManagerTennis_Blueprint_C_OnLoaded_A90B74D8415A762510668AB9493CBDF6_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_0D0A114843992570557A2E82FF9BA28B
struct AScramSportManagerTennis_Blueprint_C_OnLoaded_0D0A114843992570557A2E82FF9BA28B_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ReceiveBeginPlay
struct AScramSportManagerTennis_Blueprint_C_ReceiveBeginPlay_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.TennisEvent
struct AScramSportManagerTennis_Blueprint_C_TennisEvent_Params
{
	int                                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_ETennisEvent                        TennisEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ReceiveEndPlay
struct AScramSportManagerTennis_Blueprint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PointMade
struct AScramSportManagerTennis_Blueprint_C_PointMade_Params
{
	int                                                P1Score;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                P2Score;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LET
struct AScramSportManagerTennis_Blueprint_C_LET_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.WaitForOpponentServe
struct AScramSportManagerTennis_Blueprint_C_WaitForOpponentServe_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.InPlay
struct AScramSportManagerTennis_Blueprint_C_InPlay_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Fault
struct AScramSportManagerTennis_Blueprint_C_Fault_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PrePareServe
struct AScramSportManagerTennis_Blueprint_C_PrePareServe_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.StartOrgan
struct AScramSportManagerTennis_Blueprint_C_StartOrgan_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.StopOrgan
struct AScramSportManagerTennis_Blueprint_C_StopOrgan_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallGrabbed
struct AScramSportManagerTennis_Blueprint_C_BallGrabbed_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallSpawned
struct AScramSportManagerTennis_Blueprint_C_BallSpawned_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.SendDebugString
struct AScramSportManagerTennis_Blueprint_C_SendDebugString_Params
{
	struct FString                                     S;                                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GameIntroSequence
struct AScramSportManagerTennis_Blueprint_C_GameIntroSequence_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayDoubleFaultSFX
struct AScramSportManagerTennis_Blueprint_C_PlayDoubleFaultSFX_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayOutSFX
struct AScramSportManagerTennis_Blueprint_C_PlayOutSFX_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeSwitch
struct AScramSportManagerTennis_Blueprint_C_ServeSwitch_Params
{
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LoopOrgan
struct AScramSportManagerTennis_Blueprint_C_LoopOrgan_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_DisplayPointResults
struct AScramSportManagerTennis_Blueprint_C_MC_DisplayPointResults_Params
{
	struct FName                                       PointType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                P1Score;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                P2Score;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Winner;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TextOnly;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_MatchComplete
struct AScramSportManagerTennis_Blueprint_C_MC_MatchComplete_Params
{
	bool                                               OC5Demo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                P1GamesWon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                P2GamesWon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_GameComplete
struct AScramSportManagerTennis_Blueprint_C_MC_GameComplete_Params
{
	int                                                GameCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                P1GamesWon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                P2GamesWon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_ShowPreServeInfo
struct AScramSportManagerTennis_Blueprint_C_MC_ShowPreServeInfo_Params
{
	struct FText                                       GameStatusText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_CreateStandLocations
struct AScramSportManagerTennis_Blueprint_C_MC_CreateStandLocations_Params
{
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeChangeCommunicated
struct AScramSportManagerTennis_Blueprint_C_ServeChangeCommunicated_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UpdatePauseInfo
struct AScramSportManagerTennis_Blueprint_C_UpdatePauseInfo_Params
{
	bool                                               IsPaused;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WasPausedByMe;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UpdatePauseBubble
struct AScramSportManagerTennis_Blueprint_C_UpdatePauseBubble_Params
{
	bool                                               IsPaused;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGameResume
struct AScramSportManagerTennis_Blueprint_C_OnGameResume_Params
{
	bool                                               WasPausedByMe;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGamePause
struct AScramSportManagerTennis_Blueprint_C_OnGamePause_Params
{
	bool                                               WasPausedByMe;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LoadTennisState
struct AScramSportManagerTennis_Blueprint_C_LoadTennisState_Params
{
	class UClass*                                      Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      player1Instrument;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      player2Instrument;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      activeArenaScramble;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Multi_RestoreState
struct AScramSportManagerTennis_Blueprint_C_Multi_RestoreState_Params
{
	int                                                P1Score;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                P2Score;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player1Games;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2Games;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Player2Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServerReady
struct AScramSportManagerTennis_Blueprint_C_ServerReady_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGameDone
struct AScramSportManagerTennis_Blueprint_C_OnGameDone_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.NetDisablePause
struct AScramSportManagerTennis_Blueprint_C_NetDisablePause_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayPoint
struct AScramSportManagerTennis_Blueprint_C_PlayPoint_Params
{
	bool                                               UseUmpVox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ExecuteUbergraph_ScramSportManagerTennis_Blueprint
struct AScramSportManagerTennis_Blueprint_C_ExecuteUbergraph_ScramSportManagerTennis_Blueprint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.FaultServeResult__DelegateSignature
struct AScramSportManagerTennis_Blueprint_C_FaultServeResult__DelegateSignature_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LetServeResult__DelegateSignature
struct AScramSportManagerTennis_Blueprint_C_LetServeResult__DelegateSignature_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PreServeStart__DelegateSignature
struct AScramSportManagerTennis_Blueprint_C_PreServeStart__DelegateSignature_Params
{
	int                                                Game;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallInPlay__DelegateSignature
struct AScramSportManagerTennis_Blueprint_C_BallInPlay__DelegateSignature_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PointComplete__DelegateSignature
struct AScramSportManagerTennis_Blueprint_C_PointComplete__DelegateSignature_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeReady__DelegateSignature
struct AScramSportManagerTennis_Blueprint_C_ServeReady__DelegateSignature_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GameComplete__DelegateSignature
struct AScramSportManagerTennis_Blueprint_C_GameComplete__DelegateSignature_Params
{
};

// Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MatchComplete__DelegateSignature
struct AScramSportManagerTennis_Blueprint_C_MatchComplete__DelegateSignature_Params
{
	TEnumAsByte<GameResult_EGameResult>                Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
