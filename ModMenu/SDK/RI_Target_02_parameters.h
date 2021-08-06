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

// Function RI_Target_02.RI_Target_02_C.HideBallTarget
struct ARI_Target_02_C_HideBallTarget_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RI_Target_02.RI_Target_02_C.ShowBallTarget
struct ARI_Target_02_C_ShowBallTarget_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RI_Target_02.RI_Target_02_C.FlashScore
struct ARI_Target_02_C_FlashScore_Params
{
	int                                                score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ScoreFlashed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RI_Target_02.RI_Target_02_C.RemoveMarks
struct ARI_Target_02_C_RemoveMarks_Params
{
};

// Function RI_Target_02.RI_Target_02_C.UserConstructionScript
struct ARI_Target_02_C_UserConstructionScript_Params
{
};

// Function RI_Target_02.RI_Target_02_C.ChangeSize__FinishedFunc
struct ARI_Target_02_C_ChangeSize__FinishedFunc_Params
{
};

// Function RI_Target_02.RI_Target_02_C.ChangeSize__UpdateFunc
struct ARI_Target_02_C_ChangeSize__UpdateFunc_Params
{
};

// Function RI_Target_02.RI_Target_02_C.ReceiveBeginPlay
struct ARI_Target_02_C_ReceiveBeginPlay_Params
{
};

// Function RI_Target_02.RI_Target_02_C.ScoreOuter
struct ARI_Target_02_C_ScoreOuter_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RI_Target_02.RI_Target_02_C.ScoreInner
struct ARI_Target_02_C_ScoreInner_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RI_Target_02.RI_Target_02_C.TargetHit
struct ARI_Target_02_C_TargetHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RI_Target_02.RI_Target_02_C.FlashOuter
struct ARI_Target_02_C_FlashOuter_Params
{
};

// Function RI_Target_02.RI_Target_02_C.FlashInner
struct ARI_Target_02_C_FlashInner_Params
{
};

// Function RI_Target_02.RI_Target_02_C.HideScoreOnDelay
struct ARI_Target_02_C_HideScoreOnDelay_Params
{
};

// Function RI_Target_02.RI_Target_02_C.Score Middle
struct ARI_Target_02_C_Score_Middle_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RI_Target_02.RI_Target_02_C.FlashMiddle
struct ARI_Target_02_C_FlashMiddle_Params
{
};

// Function RI_Target_02.RI_Target_02_C.Grow
struct ARI_Target_02_C_Grow_Params
{
};

// Function RI_Target_02.RI_Target_02_C.Shrink
struct ARI_Target_02_C_Shrink_Params
{
};

// Function RI_Target_02.RI_Target_02_C.ReceiveDestroyed
struct ARI_Target_02_C_ReceiveDestroyed_Params
{
};

// Function RI_Target_02.RI_Target_02_C.ExecuteUbergraph_RI_Target_02
struct ARI_Target_02_C_ExecuteUbergraph_RI_Target_02_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RI_Target_02.RI_Target_02_C.RI_Target_02_Hit__DelegateSignature
struct ARI_Target_02_C_RI_Target_02_Hit__DelegateSignature_Params
{
	class AActor*                                      PayloadActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      BallTargetActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RegionHit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
