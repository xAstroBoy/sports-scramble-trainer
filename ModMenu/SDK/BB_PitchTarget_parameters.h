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

// Function BB_PitchTarget.BB_PitchTarget_C.HideAvatar
struct ABB_PitchTarget_C_HideAvatar_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.SetAllTargetsUnbroken
struct ABB_PitchTarget_C_SetAllTargetsUnbroken_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.DisableTargets
struct ABB_PitchTarget_C_DisableTargets_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.SetTargetVisibility
struct ABB_PitchTarget_C_SetTargetVisibility_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.PickNewRandomTarget
struct ABB_PitchTarget_C_PickNewRandomTarget_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.ResetTargets
struct ABB_PitchTarget_C_ResetTargets_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.ValidateTargets
struct ABB_PitchTarget_C_ValidateTargets_Params
{
	class APitching_Target_02_C*                       TargetActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Validation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_PitchTarget.BB_PitchTarget_C.Initialize
struct ABB_PitchTarget_C_Initialize_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.ShowDebugText
struct ABB_PitchTarget_C_ShowDebugText_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_PitchTarget.BB_PitchTarget_C.MaintainTargets
struct ABB_PitchTarget_C_MaintainTargets_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.UserConstructionScript
struct ABB_PitchTarget_C_UserConstructionScript_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.ReceiveBeginPlay
struct ABB_PitchTarget_C_ReceiveBeginPlay_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.ResetAllTargets
struct ABB_PitchTarget_C_ResetAllTargets_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.Target_5
struct ABB_PitchTarget_C_Target_5_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.Target_4
struct ABB_PitchTarget_C_Target_4_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.Target_2
struct ABB_PitchTarget_C_Target_2_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.ResetDoubleHit
struct ABB_PitchTarget_C_ResetDoubleHit_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.Target_3
struct ABB_PitchTarget_C_Target_3_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.PickRandomTarget
struct ABB_PitchTarget_C_PickRandomTarget_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.SpawnInitialRandomTarget
struct ABB_PitchTarget_C_SpawnInitialRandomTarget_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.ShrinkAndPickNewTarget
struct ABB_PitchTarget_C_ShrinkAndPickNewTarget_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.ExecuteUbergraph_BB_PitchTarget
struct ABB_PitchTarget_C_ExecuteUbergraph_BB_PitchTarget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_PitchTarget.BB_PitchTarget_C.TargetHit__DelegateSignature
struct ABB_PitchTarget_C_TargetHit__DelegateSignature_Params
{
};

// Function BB_PitchTarget.BB_PitchTarget_C.UpdateScoreboardScore__DelegateSignature
struct ABB_PitchTarget_C_UpdateScoreboardScore__DelegateSignature_Params
{
	int                                                ScoreAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
