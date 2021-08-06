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

// Function BallTarget_NW.BallTarget_NW_C.HideBallTarget
struct ABallTarget_NW_C_HideBallTarget_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BallTarget_NW.BallTarget_NW_C.ShowBallTarget
struct ABallTarget_NW_C_ShowBallTarget_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BallTarget_NW.BallTarget_NW_C.FlashScore
struct ABallTarget_NW_C_FlashScore_Params
{
	int                                                score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ScoreFlashed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BallTarget_NW.BallTarget_NW_C.Initialize
struct ABallTarget_NW_C_Initialize_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.RemoveMarks
struct ABallTarget_NW_C_RemoveMarks_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.UserConstructionScript
struct ABallTarget_NW_C_UserConstructionScript_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.ChangeSize__FinishedFunc
struct ABallTarget_NW_C_ChangeSize__FinishedFunc_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.ChangeSize__UpdateFunc
struct ABallTarget_NW_C_ChangeSize__UpdateFunc_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.Timeline_Outer__FinishedFunc
struct ABallTarget_NW_C_Timeline_Outer__FinishedFunc_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.Timeline_Outer__UpdateFunc
struct ABallTarget_NW_C_Timeline_Outer__UpdateFunc_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.Timeline_Middle__FinishedFunc
struct ABallTarget_NW_C_Timeline_Middle__FinishedFunc_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.Timeline_Middle__UpdateFunc
struct ABallTarget_NW_C_Timeline_Middle__UpdateFunc_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.Timeline_Inner__FinishedFunc
struct ABallTarget_NW_C_Timeline_Inner__FinishedFunc_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.Timeline_Inner__UpdateFunc
struct ABallTarget_NW_C_Timeline_Inner__UpdateFunc_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.ReceiveBeginPlay
struct ABallTarget_NW_C_ReceiveBeginPlay_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.ScoreOuter
struct ABallTarget_NW_C_ScoreOuter_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallTarget_NW.BallTarget_NW_C.ScoreInner
struct ABallTarget_NW_C_ScoreInner_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallTarget_NW.BallTarget_NW_C.TargetHit
struct ABallTarget_NW_C_TargetHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallTarget_NW.BallTarget_NW_C.FlashOuter
struct ABallTarget_NW_C_FlashOuter_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.FlashInner
struct ABallTarget_NW_C_FlashInner_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.Score Middle
struct ABallTarget_NW_C_Score_Middle_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallTarget_NW.BallTarget_NW_C.FlashMiddle
struct ABallTarget_NW_C_FlashMiddle_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.Grow
struct ABallTarget_NW_C_Grow_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.Shrink
struct ABallTarget_NW_C_Shrink_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.ReceiveDestroyed
struct ABallTarget_NW_C_ReceiveDestroyed_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.DelayShrink
struct ABallTarget_NW_C_DelayShrink_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.ResetShrink
struct ABallTarget_NW_C_ResetShrink_Params
{
};

// Function BallTarget_NW.BallTarget_NW_C.ExecuteUbergraph_BallTarget_NW
struct ABallTarget_NW_C_ExecuteUbergraph_BallTarget_NW_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallTarget_NW.BallTarget_NW_C.ShrinkStart__DelegateSignature
struct ABallTarget_NW_C_ShrinkStart__DelegateSignature_Params
{
	class AActor*                                      TargetActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallTarget_NW.BallTarget_NW_C.BallTarget_NW_Hit__DelegateSignature
struct ABallTarget_NW_C_BallTarget_NW_Hit__DelegateSignature_Params
{
	class AActor*                                      PayloadActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      BallTargetActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RegionHit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
