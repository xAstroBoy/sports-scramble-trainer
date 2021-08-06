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

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.UnbindEvents
struct ABW_Challenge_04_Hoops_C_UnbindEvents_Params
{
};

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.InitializeChallengeRoom
struct ABW_Challenge_04_Hoops_C_InitializeChallengeRoom_Params
{
};

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.SetUpInfoText
struct ABW_Challenge_04_Hoops_C_SetUpInfoText_Params
{
};

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.UserConstructionScript
struct ABW_Challenge_04_Hoops_C_UserConstructionScript_Params
{
};

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.ReceiveBeginPlay
struct ABW_Challenge_04_Hoops_C_ReceiveBeginPlay_Params
{
};

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.StartTraining
struct ABW_Challenge_04_Hoops_C_StartTraining_Params
{
};

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.SpawnBalls
struct ABW_Challenge_04_Hoops_C_SpawnBalls_Params
{
};

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.NotifyChallengeContinue
struct ABW_Challenge_04_Hoops_C_NotifyChallengeContinue_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.ReceiveEndPlay
struct ABW_Challenge_04_Hoops_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.BW_TriggerCountdown
struct ABW_Challenge_04_Hoops_C_BW_TriggerCountdown_Params
{
};

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.GameEnd
struct ABW_Challenge_04_Hoops_C_GameEnd_Params
{
};

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.Shortcut
struct ABW_Challenge_04_Hoops_C_Shortcut_Params
{
};

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.UpdateCurrentScore
struct ABW_Challenge_04_Hoops_C_UpdateCurrentScore_Params
{
	int                                                LaneID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.AnnouncerExitSequenceComplete
struct ABW_Challenge_04_Hoops_C_AnnouncerExitSequenceComplete_Params
{
};

// Function BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C.ExecuteUbergraph_BW_Challenge_04_Hoops
struct ABW_Challenge_04_Hoops_C_ExecuteUbergraph_BW_Challenge_04_Hoops_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
