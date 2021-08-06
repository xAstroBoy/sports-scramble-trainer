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

// Function BB_BattingTarget.BB_BattingTarget_C.HideTargetScores
struct ABB_BattingTarget_C_HideTargetScores_Params
{
};

// Function BB_BattingTarget.BB_BattingTarget_C.HideAllTargets
struct ABB_BattingTarget_C_HideAllTargets_Params
{
};

// Function BB_BattingTarget.BB_BattingTarget_C.SetAllTargetsUnbroken
struct ABB_BattingTarget_C_SetAllTargetsUnbroken_Params
{
};

// Function BB_BattingTarget.BB_BattingTarget_C.PickNewRandomTarget
struct ABB_BattingTarget_C_PickNewRandomTarget_Params
{
};

// Function BB_BattingTarget.BB_BattingTarget_C.Initialize
struct ABB_BattingTarget_C_Initialize_Params
{
};

// Function BB_BattingTarget.BB_BattingTarget_C.UserConstructionScript
struct ABB_BattingTarget_C_UserConstructionScript_Params
{
};

// Function BB_BattingTarget.BB_BattingTarget_C.ReceiveBeginPlay
struct ABB_BattingTarget_C_ReceiveBeginPlay_Params
{
};

// Function BB_BattingTarget.BB_BattingTarget_C.Target_01_Overlap
struct ABB_BattingTarget_C_Target_01_Overlap_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BattingTarget.BB_BattingTarget_C.Target_02_Overlap
struct ABB_BattingTarget_C_Target_02_Overlap_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BattingTarget.BB_BattingTarget_C.Target_03_Overlap
struct ABB_BattingTarget_C_Target_03_Overlap_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BattingTarget.BB_BattingTarget_C.Target_04_Overlap
struct ABB_BattingTarget_C_Target_04_Overlap_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BattingTarget.BB_BattingTarget_C.Target_05_Overlap
struct ABB_BattingTarget_C_Target_05_Overlap_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BattingTarget.BB_BattingTarget_C.PickRandomTarget
struct ABB_BattingTarget_C_PickRandomTarget_Params
{
};

// Function BB_BattingTarget.BB_BattingTarget_C.Training_SpawnTarget
struct ABB_BattingTarget_C_Training_SpawnTarget_Params
{
	class ABatting_Target_01_C*                        BattingTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BattingTarget.BB_BattingTarget_C.Training_DespawnTargets
struct ABB_BattingTarget_C_Training_DespawnTargets_Params
{
	TArray<class ABatting_Target_01_C*>                TargetsToDespawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BB_BattingTarget.BB_BattingTarget_C.Training_InitialTargetSetup
struct ABB_BattingTarget_C_Training_InitialTargetSetup_Params
{
};

// Function BB_BattingTarget.BB_BattingTarget_C.Training_ToggleImpactSound
struct ABB_BattingTarget_C_Training_ToggleImpactSound_Params
{
	bool                                               UseImpactSound;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_BattingTarget.BB_BattingTarget_C.Training_UnlimitiedBattingSetup
struct ABB_BattingTarget_C_Training_UnlimitiedBattingSetup_Params
{
};

// Function BB_BattingTarget.BB_BattingTarget_C.RemoveBattingTargets
struct ABB_BattingTarget_C_RemoveBattingTargets_Params
{
};

// Function BB_BattingTarget.BB_BattingTarget_C.BindToTargets
struct ABB_BattingTarget_C_BindToTargets_Params
{
};

// Function BB_BattingTarget.BB_BattingTarget_C.BindToTrainingTargets
struct ABB_BattingTarget_C_BindToTrainingTargets_Params
{
};

// Function BB_BattingTarget.BB_BattingTarget_C.TrainingTarget_01_Overlap
struct ABB_BattingTarget_C_TrainingTarget_01_Overlap_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BattingTarget.BB_BattingTarget_C.TrainingTarget_02_Overlap
struct ABB_BattingTarget_C_TrainingTarget_02_Overlap_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BattingTarget.BB_BattingTarget_C.TrainingTarget_03_Overlap
struct ABB_BattingTarget_C_TrainingTarget_03_Overlap_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BattingTarget.BB_BattingTarget_C.ExecuteUbergraph_BB_BattingTarget
struct ABB_BattingTarget_C_ExecuteUbergraph_BB_BattingTarget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_BattingTarget.BB_BattingTarget_C.ScoreBatter__DelegateSignature
struct ABB_BattingTarget_C_ScoreBatter__DelegateSignature_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TargetId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
