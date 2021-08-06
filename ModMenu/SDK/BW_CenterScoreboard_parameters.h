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

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetBlurTranslationAndScale
struct ABW_CenterScoreboard_C_GetBlurTranslationAndScale_Params
{
	float                                              CarX;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Translation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetCarPosition
struct ABW_CenterScoreboard_C_GetCarPosition_Params
{
	bool                                               Red;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CarPosition;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetAbsoluteCarPosition
struct ABW_CenterScoreboard_C_GetAbsoluteCarPosition_Params
{
	float                                              CarPosition;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetRelativeCarPosition
struct ABW_CenterScoreboard_C_GetRelativeCarPosition_Params
{
	bool                                               Red;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RelativePosition;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.InitializeTraditionalActors
struct ABW_CenterScoreboard_C_InitializeTraditionalActors_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateVideoScoreboardActor
struct ABW_CenterScoreboard_C_UpdateVideoScoreboardActor_Params
{
	bool                                               Traditional;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ActorFound;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetTimeRemaining
struct ABW_CenterScoreboard_C_GetTimeRemaining_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.InitializeRoadActors
struct ABW_CenterScoreboard_C_InitializeRoadActors_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.Initialize
struct ABW_CenterScoreboard_C_Initialize_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.UserConstructionScript
struct ABW_CenterScoreboard_C_UserConstructionScript_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRoad__FinishedFunc
struct ABW_CenterScoreboard_C_StartRoad__FinishedFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRoad__UpdateFunc
struct ABW_CenterScoreboard_C_StartRoad__UpdateFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriftTimeline__FinishedFunc
struct ABW_CenterScoreboard_C_BlueCarDriftTimeline__FinishedFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriftTimeline__UpdateFunc
struct ABW_CenterScoreboard_C_BlueCarDriftTimeline__UpdateFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriftTimeline__FinishedFunc
struct ABW_CenterScoreboard_C_RedCarDriftTimeline__FinishedFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriftTimeline__UpdateFunc
struct ABW_CenterScoreboard_C_RedCarDriftTimeline__UpdateFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateFinishLine__FinishedFunc
struct ABW_CenterScoreboard_C_AnimateFinishLine__FinishedFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateFinishLine__UpdateFunc
struct ABW_CenterScoreboard_C_AnimateFinishLine__UpdateFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateStartingLine__FinishedFunc
struct ABW_CenterScoreboard_C_AnimateStartingLine__FinishedFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateStartingLine__UpdateFunc
struct ABW_CenterScoreboard_C_AnimateStartingLine__UpdateFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriveAway__FinishedFunc
struct ABW_CenterScoreboard_C_BlueCarDriveAway__FinishedFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriveAway__UpdateFunc
struct ABW_CenterScoreboard_C_BlueCarDriveAway__UpdateFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriveAway__FinishedFunc
struct ABW_CenterScoreboard_C_RedCarDriveAway__FinishedFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriveAway__UpdateFunc
struct ABW_CenterScoreboard_C_RedCarDriveAway__UpdateFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateBlueCarY__FinishedFunc
struct ABW_CenterScoreboard_C_AnimateBlueCarY__FinishedFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateBlueCarY__UpdateFunc
struct ABW_CenterScoreboard_C_AnimateBlueCarY__UpdateFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateRedCarY__FinishedFunc
struct ABW_CenterScoreboard_C_AnimateRedCarY__FinishedFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateRedCarY__UpdateFunc
struct ABW_CenterScoreboard_C_AnimateRedCarY__UpdateFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ScaleStartingLine__FinishedFunc
struct ABW_CenterScoreboard_C_ScaleStartingLine__FinishedFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ScaleStartingLine__UpdateFunc
struct ABW_CenterScoreboard_C_ScaleStartingLine__UpdateFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimBlueCar__FinishedFunc
struct ABW_CenterScoreboard_C_SpawnAnimBlueCar__FinishedFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimBlueCar__UpdateFunc
struct ABW_CenterScoreboard_C_SpawnAnimBlueCar__UpdateFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimRedCar__FinishedFunc
struct ABW_CenterScoreboard_C_SpawnAnimRedCar__FinishedFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimRedCar__UpdateFunc
struct ABW_CenterScoreboard_C_SpawnAnimRedCar__UpdateFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.Timeline_TestingFinishLine__FinishedFunc
struct ABW_CenterScoreboard_C_Timeline_TestingFinishLine__FinishedFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.Timeline_TestingFinishLine__UpdateFunc
struct ABW_CenterScoreboard_C_Timeline_TestingFinishLine__UpdateFunc_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ReceiveBeginPlay
struct ABW_CenterScoreboard_C_ReceiveBeginPlay_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_StartTimer
struct ABW_CenterScoreboard_C_BW_StartTimer_Params
{
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.TimerLoop
struct ABW_CenterScoreboard_C_TimerLoop_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ClearTimer
struct ABW_CenterScoreboard_C_ClearTimer_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBall1Thrown
struct ABW_CenterScoreboard_C_PlayerBall1Thrown_Params
{
	int                                                AlleyID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBall2Thrown
struct ABW_CenterScoreboard_C_PlayerBall2Thrown_Params
{
	int                                                AlleyID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBallCountReset
struct ABW_CenterScoreboard_C_PlayerBallCountReset_Params
{
	int                                                AlleyID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRaceTrack
struct ABW_CenterScoreboard_C_StartRaceTrack_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.StopMovingRoad
struct ABW_CenterScoreboard_C_StopMovingRoad_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDrift
struct ABW_CenterScoreboard_C_BlueCarDrift_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDrift
struct ABW_CenterScoreboard_C_RedCarDrift_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ShowFinishLine
struct ABW_CenterScoreboard_C_ShowFinishLine_Params
{
	bool                                               TrainingTimer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.HideFinishLine
struct ABW_CenterScoreboard_C_HideFinishLine_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetStartLine
struct ABW_CenterScoreboard_C_ResetStartLine_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarExit
struct ABW_CenterScoreboard_C_BlueCarExit_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarExit
struct ABW_CenterScoreboard_C_RedCarExit_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ReceiveTick
struct ABW_CenterScoreboard_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateCarFromScore
struct ABW_CenterScoreboard_C_UpdateCarFromScore_Params
{
	int                                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateBlueCarPosition
struct ABW_CenterScoreboard_C_UpdateBlueCarPosition_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateRedCarPosition
struct ABW_CenterScoreboard_C_UpdateRedCarPosition_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.CarsExitScoreboard
struct ABW_CenterScoreboard_C_CarsExitScoreboard_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetBlueCar
struct ABW_CenterScoreboard_C_ResetBlueCar_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetRedCar
struct ABW_CenterScoreboard_C_ResetRedCar_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetCars
struct ABW_CenterScoreboard_C_ResetCars_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRaceSounds
struct ABW_CenterScoreboard_C_StartRaceSounds_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.StopRaceLoop
struct ABW_CenterScoreboard_C_StopRaceLoop_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_StartTimerNoRace
struct ABW_CenterScoreboard_C_BW_StartTimerNoRace_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_SetInitialTimer
struct ABW_CenterScoreboard_C_BW_SetInitialTimer_Params
{
	int                                                InitialTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TrainingTimer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ShowTrainingFinishLine
struct ABW_CenterScoreboard_C_ShowTrainingFinishLine_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.HideTrainingFinishLine
struct ABW_CenterScoreboard_C_HideTrainingFinishLine_Params
{
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateMatchScore
struct ABW_CenterScoreboard_C_UpdateMatchScore_Params
{
	int                                                Player1GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.TravelCapsuleOpening
struct ABW_CenterScoreboard_C_TravelCapsuleOpening_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.ExecuteUbergraph_BW_CenterScoreboard
struct ABW_CenterScoreboard_C_ExecuteUbergraph_BW_CenterScoreboard_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_CenterScoreboard.BW_CenterScoreboard_C.TimerChange__DelegateSignature
struct ABW_CenterScoreboard_C_TimerChange__DelegateSignature_Params
{
	int                                                TimeLeft;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
