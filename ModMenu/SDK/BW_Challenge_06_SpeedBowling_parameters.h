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

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.UnbindEvents
struct ABW_Challenge_06_SpeedBowling_C_UnbindEvents_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.IncrementCycleIndex
struct ABW_Challenge_06_SpeedBowling_C_IncrementCycleIndex_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.InitializeChallengeRoom
struct ABW_Challenge_06_SpeedBowling_C_InitializeChallengeRoom_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.SetUpInfoText
struct ABW_Challenge_06_SpeedBowling_C_SetUpInfoText_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.UserConstructionScript
struct ABW_Challenge_06_SpeedBowling_C_UserConstructionScript_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ReceiveBeginPlay
struct ABW_Challenge_06_SpeedBowling_C_ReceiveBeginPlay_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.StartTraining
struct ABW_Challenge_06_SpeedBowling_C_StartTraining_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.SpawnBalls
struct ABW_Challenge_06_SpeedBowling_C_SpawnBalls_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.NotifyChallengeContinue
struct ABW_Challenge_06_SpeedBowling_C_NotifyChallengeContinue_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ReceiveEndPlay
struct ABW_Challenge_06_SpeedBowling_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.AnnouncerPresenting
struct ABW_Challenge_06_SpeedBowling_C_AnnouncerPresenting_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.BW_TriggerCountdown
struct ABW_Challenge_06_SpeedBowling_C_BW_TriggerCountdown_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.GameEnd
struct ABW_Challenge_06_SpeedBowling_C_GameEnd_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.Shortcut
struct ABW_Challenge_06_SpeedBowling_C_Shortcut_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.UpdateCurrentScore
struct ABW_Challenge_06_SpeedBowling_C_UpdateCurrentScore_Params
{
	int                                                LaneID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.CustomTimer
struct ABW_Challenge_06_SpeedBowling_C_CustomTimer_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ChangeLane
struct ABW_Challenge_06_SpeedBowling_C_ChangeLane_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.LaneSwapping
struct ABW_Challenge_06_SpeedBowling_C_LaneSwapping_Params
{
	class ABowlingLane_Base_C*                         ReplacementLane;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABowlingLane_Base_C*                         OutgoingLane;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ReduceTime
struct ABW_Challenge_06_SpeedBowling_C_ReduceTime_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.AnnouncerExitSequenceComplete
struct ABW_Challenge_06_SpeedBowling_C_AnnouncerExitSequenceComplete_Params
{
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.BowlingEvent
struct ABW_Challenge_06_SpeedBowling_C_BowlingEvent_Params
{
	int                                                Player;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBowlingEvent                       BowlingEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ExecuteUbergraph_BW_Challenge_06_SpeedBowling
struct ABW_Challenge_06_SpeedBowling_C_ExecuteUbergraph_BW_Challenge_06_SpeedBowling_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
