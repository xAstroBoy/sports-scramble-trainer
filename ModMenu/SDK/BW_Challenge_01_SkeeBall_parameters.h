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

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.RemoveBallsFromSet
struct ABW_Challenge_01_SkeeBall_C_RemoveBallsFromSet_Params
{
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.UnbindEvents
struct ABW_Challenge_01_SkeeBall_C_UnbindEvents_Params
{
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.InitializeChallengeRoom
struct ABW_Challenge_01_SkeeBall_C_InitializeChallengeRoom_Params
{
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.SetUpInfoText
struct ABW_Challenge_01_SkeeBall_C_SetUpInfoText_Params
{
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.UserConstructionScript
struct ABW_Challenge_01_SkeeBall_C_UserConstructionScript_Params
{
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.OnLoaded_B87A02414D8034956F036AAEC377CBDD
struct ABW_Challenge_01_SkeeBall_C_OnLoaded_B87A02414D8034956F036AAEC377CBDD_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.OnLoaded_6E8C3E134C0544A87A78F098F6C5E576
struct ABW_Challenge_01_SkeeBall_C_OnLoaded_6E8C3E134C0544A87A78F098F6C5E576_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.OnLoaded_6098C4944C11387ACDFF58824917221C
struct ABW_Challenge_01_SkeeBall_C_OnLoaded_6098C4944C11387ACDFF58824917221C_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.ReceiveBeginPlay
struct ABW_Challenge_01_SkeeBall_C_ReceiveBeginPlay_Params
{
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.StartTraining
struct ABW_Challenge_01_SkeeBall_C_StartTraining_Params
{
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.SpawnBalls
struct ABW_Challenge_01_SkeeBall_C_SpawnBalls_Params
{
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.NotifyChallengeContinue
struct ABW_Challenge_01_SkeeBall_C_NotifyChallengeContinue_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.ReceiveEndPlay
struct ABW_Challenge_01_SkeeBall_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.BW_TriggerCountdown
struct ABW_Challenge_01_SkeeBall_C_BW_TriggerCountdown_Params
{
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.GameEnd
struct ABW_Challenge_01_SkeeBall_C_GameEnd_Params
{
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.UpdateCurrentScore
struct ABW_Challenge_01_SkeeBall_C_UpdateCurrentScore_Params
{
	int                                                LaneID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.Shortcut
struct ABW_Challenge_01_SkeeBall_C_Shortcut_Params
{
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.BindLaneSwap
struct ABW_Challenge_01_SkeeBall_C_BindLaneSwap_Params
{
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.AnnouncerExitSequenceComplete
struct ABW_Challenge_01_SkeeBall_C_AnnouncerExitSequenceComplete_Params
{
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.TimeLoop
struct ABW_Challenge_01_SkeeBall_C_TimeLoop_Params
{
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.LaneReplacement
struct ABW_Challenge_01_SkeeBall_C_LaneReplacement_Params
{
	class ABowlingLane_Base_C*                         ReplacementLane;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABowlingLane_Base_C*                         OutgoingLane;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C.ExecuteUbergraph_BW_Challenge_01_SkeeBall
struct ABW_Challenge_01_SkeeBall_C_ExecuteUbergraph_BW_Challenge_01_SkeeBall_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
