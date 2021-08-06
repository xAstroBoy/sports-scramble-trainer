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

// Function BW_Challenge_Base.BW_Challenge_Base_C.AddActorToGameElementList
struct ABW_Challenge_Base_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.Shutdown
struct ABW_Challenge_Base_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_GameEndResetLane
struct ABW_Challenge_Base_C_BW_GameEndResetLane_Params
{
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_SpawnSportMgr
struct ABW_Challenge_Base_C_BW_CHG_SpawnSportMgr_Params
{
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_CalculateEndScore
struct ABW_Challenge_Base_C_BW_CHG_CalculateEndScore_Params
{
	bool                                               Countdown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CurrentScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TargetScore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_SwapBallIcon
struct ABW_Challenge_Base_C_BW_CHG_SwapBallIcon_Params
{
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_GetBallList
struct ABW_Challenge_Base_C_BW_CHG_GetBallList_Params
{
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.ToggleLaneChanging
struct ABW_Challenge_Base_C_ToggleLaneChanging_Params
{
	bool                                               DisableLaneChanges;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_ShowScoreboard
struct ABW_Challenge_Base_C_BW_CHG_ShowScoreboard_Params
{
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.ResetLane
struct ABW_Challenge_Base_C_ResetLane_Params
{
	bool                                               ResetScore;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetPins;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetBallCounter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.Initialize
struct ABW_Challenge_Base_C_Initialize_Params
{
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.UserConstructionScript
struct ABW_Challenge_Base_C_UserConstructionScript_Params
{
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.OnLoaded_D8F17837414AF61326DAA8A87E4A9166
struct ABW_Challenge_Base_C_OnLoaded_D8F17837414AF61326DAA8A87E4A9166_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.ReceiveBeginPlay
struct ABW_Challenge_Base_C_ReceiveBeginPlay_Params
{
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.BowlingEvent
struct ABW_Challenge_Base_C_BowlingEvent_Params
{
	int                                                Player;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBowlingEvent                       BowlingEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.SpecificBallCreated
struct ABW_Challenge_Base_C_SpecificBallCreated_Params
{
	class ABW_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.RandomBallCreated
struct ABW_Challenge_Base_C_RandomBallCreated_Params
{
	class ABW_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.GetCurrentLaneScore
struct ABW_Challenge_Base_C_GetCurrentLaneScore_Params
{
	int                                                LaneID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.EndOfGame
struct ABW_Challenge_Base_C_EndOfGame_Params
{
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.SpecialScoreEvent
struct ABW_Challenge_Base_C_SpecialScoreEvent_Params
{
	int                                                LaneID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Points;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.ShowBowlingBallIcon
struct ABW_Challenge_Base_C_ShowBowlingBallIcon_Params
{
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_StartIntroCadence
struct ABW_Challenge_Base_C_BW_StartIntroCadence_Params
{
	bool                                               UseChallengeMusic;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseCountdown;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetLane;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseTrainingScore;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_TriggerCountdown
struct ABW_Challenge_Base_C_BW_TriggerCountdown_Params
{
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_SportManagerGameEnd
struct ABW_Challenge_Base_C_BW_CHG_SportManagerGameEnd_Params
{
	TEnumAsByte<GameResult_EGameResult>                MatchResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player1GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_AnnouncerPresentation
struct ABW_Challenge_Base_C_BW_AnnouncerPresentation_Params
{
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.LaneIsReady
struct ABW_Challenge_Base_C_LaneIsReady_Params
{
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.PlayAsync2D
struct ABW_Challenge_Base_C_PlayAsync2D_Params
{
};

// Function BW_Challenge_Base.BW_Challenge_Base_C.ExecuteUbergraph_BW_Challenge_Base
struct ABW_Challenge_Base_C_ExecuteUbergraph_BW_Challenge_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
