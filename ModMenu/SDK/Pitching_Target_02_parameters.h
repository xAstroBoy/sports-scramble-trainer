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

// Function Pitching_Target_02.Pitching_Target_02_C.HideBallTarget
struct APitching_Target_02_C_HideBallTarget_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Pitching_Target_02.Pitching_Target_02_C.ShowBallTarget
struct APitching_Target_02_C_ShowBallTarget_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Pitching_Target_02.Pitching_Target_02_C.FlashScore
struct APitching_Target_02_C_FlashScore_Params
{
	int                                                score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ScoreFlashed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Pitching_Target_02.Pitching_Target_02_C.ShowScore
struct APitching_Target_02_C_ShowScore_Params
{
	int                                                score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                                   Size;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pitching_Target_02.Pitching_Target_02_C.Initialize
struct APitching_Target_02_C_Initialize_Params
{
};

// Function Pitching_Target_02.Pitching_Target_02_C.SetTargetMaterial
struct APitching_Target_02_C_SetTargetMaterial_Params
{
};

// Function Pitching_Target_02.Pitching_Target_02_C.RemoveMarks
struct APitching_Target_02_C_RemoveMarks_Params
{
};

// Function Pitching_Target_02.Pitching_Target_02_C.UserConstructionScript
struct APitching_Target_02_C_UserConstructionScript_Params
{
};

// Function Pitching_Target_02.Pitching_Target_02_C.ChangeSize__FinishedFunc
struct APitching_Target_02_C_ChangeSize__FinishedFunc_Params
{
};

// Function Pitching_Target_02.Pitching_Target_02_C.ChangeSize__UpdateFunc
struct APitching_Target_02_C_ChangeSize__UpdateFunc_Params
{
};

// Function Pitching_Target_02.Pitching_Target_02_C.ReceiveBeginPlay
struct APitching_Target_02_C_ReceiveBeginPlay_Params
{
};

// Function Pitching_Target_02.Pitching_Target_02_C.Grow
struct APitching_Target_02_C_Grow_Params
{
};

// Function Pitching_Target_02.Pitching_Target_02_C.Shrink
struct APitching_Target_02_C_Shrink_Params
{
	bool                                               PlaySound;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Pitching_Target_02.Pitching_Target_02_C.BndEvt__BallOverlapDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APitching_Target_02_C_BndEvt__BallOverlapDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Pitching_Target_02.Pitching_Target_02_C.Impact
struct APitching_Target_02_C_Impact_Params
{
	bool                                               PlayStrikeSound;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Pitching_Target_02.Pitching_Target_02_C.HideScoreOnDelay
struct APitching_Target_02_C_HideScoreOnDelay_Params
{
	float                                              DelayTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pitching_Target_02.Pitching_Target_02_C.ExecuteUbergraph_Pitching_Target_02
struct APitching_Target_02_C_ExecuteUbergraph_Pitching_Target_02_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pitching_Target_02.Pitching_Target_02_C.TargetOverlapDetection__DelegateSignature
struct APitching_Target_02_C_TargetOverlapDetection__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
