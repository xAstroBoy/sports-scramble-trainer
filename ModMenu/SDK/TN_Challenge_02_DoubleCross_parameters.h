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

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupRackets
struct ATN_Challenge_02_DoubleCross_C_SetupRackets_Params
{
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupBallLaunchers
struct ATN_Challenge_02_DoubleCross_C_SetupBallLaunchers_Params
{
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetUpInfoText
struct ATN_Challenge_02_DoubleCross_C_SetUpInfoText_Params
{
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.Initialize
struct ATN_Challenge_02_DoubleCross_C_Initialize_Params
{
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.UserConstructionScript
struct ATN_Challenge_02_DoubleCross_C_UserConstructionScript_Params
{
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.BallLaunched
struct ATN_Challenge_02_DoubleCross_C_BallLaunched_Params
{
	class AActor*                                      Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.OnBallHit
struct ATN_Challenge_02_DoubleCross_C_OnBallHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.LaunchedBall Primitive Destroyed
struct ATN_Challenge_02_DoubleCross_C_LaunchedBall_Primitive_Destroyed_Params
{
	class AScramPrimitiveActor*                        DestroyedPrimitive;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SCORE AND DISPLAY
struct ATN_Challenge_02_DoubleCross_C_SCORE_AND_DISPLAY_Params
{
	int                                                Score_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BallStrikePos;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ReceiveBeginPlay
struct ATN_Challenge_02_DoubleCross_C_ReceiveBeginPlay_Params
{
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.StartGame
struct ATN_Challenge_02_DoubleCross_C_StartGame_Params
{
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ReceiveEndPlay
struct ATN_Challenge_02_DoubleCross_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.AnnouncerPresenting
struct ATN_Challenge_02_DoubleCross_C_AnnouncerPresenting_Params
{
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.NotifyChallengeContinue
struct ATN_Challenge_02_DoubleCross_C_NotifyChallengeContinue_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SpeedUpTimer
struct ATN_Challenge_02_DoubleCross_C_SpeedUpTimer_Params
{
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.GameEnd
struct ATN_Challenge_02_DoubleCross_C_GameEnd_Params
{
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.TN_TriggerCountdown
struct ATN_Challenge_02_DoubleCross_C_TN_TriggerCountdown_Params
{
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.OnBallHitModifyCollision
struct ATN_Challenge_02_DoubleCross_C_OnBallHitModifyCollision_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.AnnouncerExitSequenceComplete
struct ATN_Challenge_02_DoubleCross_C_AnnouncerExitSequenceComplete_Params
{
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.Short Cut
struct ATN_Challenge_02_DoubleCross_C_Short_Cut_Params
{
};

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ExecuteUbergraph_TN_Challenge_02_DoubleCross
struct ATN_Challenge_02_DoubleCross_C_ExecuteUbergraph_TN_Challenge_02_DoubleCross_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
