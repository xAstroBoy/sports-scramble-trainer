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

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SetUpInfoText
struct ATN_Challenge_04_Accelerator_C_SetUpInfoText_Params
{
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AddActorToGameElementList
struct ATN_Challenge_04_Accelerator_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Shutdown
struct ATN_Challenge_04_Accelerator_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Initialize
struct ATN_Challenge_04_Accelerator_C_Initialize_Params
{
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.UserConstructionScript
struct ATN_Challenge_04_Accelerator_C_UserConstructionScript_Params
{
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveBeginPlay
struct ATN_Challenge_04_Accelerator_C_ReceiveBeginPlay_Params
{
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.DelayDestroy
struct ATN_Challenge_04_Accelerator_C_DelayDestroy_Params
{
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveEndPlay
struct ATN_Challenge_04_Accelerator_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SportManager_MatchComplete
struct ATN_Challenge_04_Accelerator_C_SportManager_MatchComplete_Params
{
	TEnumAsByte<GameResult_EGameResult>                Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.NotifyChallengeContinue
struct ATN_Challenge_04_Accelerator_C_NotifyChallengeContinue_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.TN_TriggerCountdown
struct ATN_Challenge_04_Accelerator_C_TN_TriggerCountdown_Params
{
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.BallHit
struct ATN_Challenge_04_Accelerator_C_BallHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Shortcut
struct ATN_Challenge_04_Accelerator_C_Shortcut_Params
{
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ResetScore
struct ATN_Challenge_04_Accelerator_C_ResetScore_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.StartGame
struct ATN_Challenge_04_Accelerator_C_StartGame_Params
{
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.GameEnd
struct ATN_Challenge_04_Accelerator_C_GameEnd_Params
{
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerPresenting
struct ATN_Challenge_04_Accelerator_C_AnnouncerPresenting_Params
{
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerExitSequenceComplete
struct ATN_Challenge_04_Accelerator_C_AnnouncerExitSequenceComplete_Params
{
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AI_Hit_Ball
struct ATN_Challenge_04_Accelerator_C_AI_Hit_Ball_Params
{
	class ATennisBall*                                 Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Ready Challenge State
struct ATN_Challenge_04_Accelerator_C_Ready_Challenge_State_Params
{
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.DisableAIServing
struct ATN_Challenge_04_Accelerator_C_DisableAIServing_Params
{
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.BallnPlay
struct ATN_Challenge_04_Accelerator_C_BallnPlay_Params
{
};

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ExecuteUbergraph_TN_Challenge_04_Accelerator
struct ATN_Challenge_04_Accelerator_C_ExecuteUbergraph_TN_Challenge_04_Accelerator_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
