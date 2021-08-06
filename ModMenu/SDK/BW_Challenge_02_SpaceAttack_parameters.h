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

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UnbindEvents
struct ABW_Challenge_02_SpaceAttack_C_UnbindEvents_Params
{
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.InitializeChallengeRoom
struct ABW_Challenge_02_SpaceAttack_C_InitializeChallengeRoom_Params
{
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.SetUpInfoText
struct ABW_Challenge_02_SpaceAttack_C_SetUpInfoText_Params
{
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UserConstructionScript
struct ABW_Challenge_02_SpaceAttack_C_UserConstructionScript_Params
{
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.ReceiveBeginPlay
struct ABW_Challenge_02_SpaceAttack_C_ReceiveBeginPlay_Params
{
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.SpawnBalls
struct ABW_Challenge_02_SpaceAttack_C_SpawnBalls_Params
{
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.NotifyChallengeContinue
struct ABW_Challenge_02_SpaceAttack_C_NotifyChallengeContinue_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.ReceiveEndPlay
struct ABW_Challenge_02_SpaceAttack_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.BW_TriggerCountdown
struct ABW_Challenge_02_SpaceAttack_C_BW_TriggerCountdown_Params
{
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.GameEnd
struct ABW_Challenge_02_SpaceAttack_C_GameEnd_Params
{
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.Shortcut
struct ABW_Challenge_02_SpaceAttack_C_Shortcut_Params
{
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UpdateCurrentScore
struct ABW_Challenge_02_SpaceAttack_C_UpdateCurrentScore_Params
{
	int                                                LaneID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.LaneReplacement
struct ABW_Challenge_02_SpaceAttack_C_LaneReplacement_Params
{
	class ABowlingLane_Base_C*                         ReplacementLane;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABowlingLane_Base_C*                         OutgoingLane;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UpdateAlienSpeed
struct ABW_Challenge_02_SpaceAttack_C_UpdateAlienSpeed_Params
{
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.AnnouncerExitSequenceComplete
struct ABW_Challenge_02_SpaceAttack_C_AnnouncerExitSequenceComplete_Params
{
};

// Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.ExecuteUbergraph_BW_Challenge_02_SpaceAttack
struct ABW_Challenge_02_SpaceAttack_C_ExecuteUbergraph_BW_Challenge_02_SpaceAttack_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
