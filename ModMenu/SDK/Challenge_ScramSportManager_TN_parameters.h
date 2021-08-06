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

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.TN_SportMgr_UnbindEvents
struct AChallenge_ScramSportManager_TN_C_TN_SportMgr_UnbindEvents_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.SpawnChallengeLocalHelper
struct AChallenge_ScramSportManager_TN_C_SpawnChallengeLocalHelper_Params
{
	bool                                               UseScoreboard;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BindExistingServeLocationIndicator
struct AChallenge_ScramSportManager_TN_C_BindExistingServeLocationIndicator_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnRep_ServeLocationIndicator
struct AChallenge_ScramSportManager_TN_C_OnRep_ServeLocationIndicator_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BindNewServeLocationIndicator
struct AChallenge_ScramSportManager_TN_C_BindNewServeLocationIndicator_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ShowDebugInfo
struct AChallenge_ScramSportManager_TN_C_ShowDebugInfo_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateServeLocation
struct AChallenge_ScramSportManager_TN_C_CreateServeLocation_Params
{
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.AllowAIServe
struct AChallenge_ScramSportManager_TN_C_AllowAIServe_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateReceiveLocation
struct AChallenge_ScramSportManager_TN_C_CreateReceiveLocation_Params
{
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GetGameStatus
struct AChallenge_ScramSportManager_TN_C_GetGameStatus_Params
{
	struct FText                                       StatusText;                                                // (Parm, OutParm)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GetPointType
struct AChallenge_ScramSportManager_TN_C_GetPointType_Params
{
	struct FText                                       PointType;                                                 // (Parm, OutParm)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ResetResultBools
struct AChallenge_ScramSportManager_TN_C_ResetResultBools_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Cleanup
struct AChallenge_ScramSportManager_TN_C_Cleanup_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Initialize
struct AChallenge_ScramSportManager_TN_C_Initialize_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.UserConstructionScript
struct AChallenge_ScramSportManager_TN_C_UserConstructionScript_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_291C6E1E4A36272D407BB6BD1AEACFD8
struct AChallenge_ScramSportManager_TN_C_OnLoaded_291C6E1E4A36272D407BB6BD1AEACFD8_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_C4FE474944769B8438FACDAFB40F4516
struct AChallenge_ScramSportManager_TN_C_OnLoaded_C4FE474944769B8438FACDAFB40F4516_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_F20EB7244AAFC3B5B43398AC7B7E505C
struct AChallenge_ScramSportManager_TN_C_OnLoaded_F20EB7244AAFC3B5B43398AC7B7E505C_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ReceiveBeginPlay
struct AChallenge_ScramSportManager_TN_C_ReceiveBeginPlay_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.TennisEvent
struct AChallenge_ScramSportManager_TN_C_TennisEvent_Params
{
	int                                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_ETennisEvent                        TennisEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ReceiveEndPlay
struct AChallenge_ScramSportManager_TN_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PointMade
struct AChallenge_ScramSportManager_TN_C_PointMade_Params
{
	int                                                P1Score;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                P2Score;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.LET
struct AChallenge_ScramSportManager_TN_C_LET_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.WaitForOpponentServe
struct AChallenge_ScramSportManager_TN_C_WaitForOpponentServe_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.InPlay
struct AChallenge_ScramSportManager_TN_C_InPlay_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Fault
struct AChallenge_ScramSportManager_TN_C_Fault_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PrePareServe
struct AChallenge_ScramSportManager_TN_C_PrePareServe_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallGrabbed
struct AChallenge_ScramSportManager_TN_C_BallGrabbed_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallSpawned
struct AChallenge_ScramSportManager_TN_C_BallSpawned_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.SendDebugString
struct AChallenge_ScramSportManager_TN_C_SendDebugString_Params
{
	struct FString                                     S;                                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateDebugButton
struct AChallenge_ScramSportManager_TN_C_CreateDebugButton_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ToggleDebug
struct AChallenge_ScramSportManager_TN_C_ToggleDebug_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PlayDoubleFaultSFX
struct AChallenge_ScramSportManager_TN_C_PlayDoubleFaultSFX_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_DisplayPointResults
struct AChallenge_ScramSportManager_TN_C_MC_DisplayPointResults_Params
{
	struct FText                                       PointType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                P1Score;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                P2Score;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Winner;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TextOnly;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_MatchComplete
struct AChallenge_ScramSportManager_TN_C_MC_MatchComplete_Params
{
	bool                                               OC5Demo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                P1GamesWon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                P2GamesWon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_GameComplete
struct AChallenge_ScramSportManager_TN_C_MC_GameComplete_Params
{
	int                                                GameCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                P1GamesWon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                P2GamesWon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_ShowPreServeInfo
struct AChallenge_ScramSportManager_TN_C_MC_ShowPreServeInfo_Params
{
	struct FText                                       GameStatusText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_CreateStandLocations
struct AChallenge_ScramSportManager_TN_C_MC_CreateStandLocations_Params
{
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PlayPoint
struct AChallenge_ScramSportManager_TN_C_PlayPoint_Params
{
	bool                                               UseUmpVox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ExecuteUbergraph_Challenge_ScramSportManager_TN
struct AChallenge_ScramSportManager_TN_C_ExecuteUbergraph_Challenge_ScramSportManager_TN_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.FaultServeResult__DelegateSignature
struct AChallenge_ScramSportManager_TN_C_FaultServeResult__DelegateSignature_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.LetServeResult__DelegateSignature
struct AChallenge_ScramSportManager_TN_C_LetServeResult__DelegateSignature_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PreServeStart__DelegateSignature
struct AChallenge_ScramSportManager_TN_C_PreServeStart__DelegateSignature_Params
{
	int                                                Game;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallInPlay__DelegateSignature
struct AChallenge_ScramSportManager_TN_C_BallInPlay__DelegateSignature_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PointComplete__DelegateSignature
struct AChallenge_ScramSportManager_TN_C_PointComplete__DelegateSignature_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ServeReady__DelegateSignature
struct AChallenge_ScramSportManager_TN_C_ServeReady__DelegateSignature_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GameComplete__DelegateSignature
struct AChallenge_ScramSportManager_TN_C_GameComplete__DelegateSignature_Params
{
};

// Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MatchComplete__DelegateSignature
struct AChallenge_ScramSportManager_TN_C_MatchComplete__DelegateSignature_Params
{
	TEnumAsByte<GameResult_EGameResult>                Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
