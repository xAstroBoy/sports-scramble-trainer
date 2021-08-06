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

// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.RemoveTargets
struct ABB_ChallengeTarget_Spawner_C_RemoveTargets_Params
{
};

// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.SpawnTargets
struct ABB_ChallengeTarget_Spawner_C_SpawnTargets_Params
{
	int                                                PatternIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bonus;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ScoreValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.UserConstructionScript
struct ABB_ChallengeTarget_Spawner_C_UserConstructionScript_Params
{
};

// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.Score Target
struct ABB_ChallengeTarget_Spawner_C_Score_Target_Params
{
	class ABB_ChallengeTarget_C*                       Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ReceiveEndPlay
struct ABB_ChallengeTarget_Spawner_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ReceiveBeginPlay
struct ABB_ChallengeTarget_Spawner_C_ReceiveBeginPlay_Params
{
};

// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ExecuteUbergraph_BB_ChallengeTarget_Spawner
struct ABB_ChallengeTarget_Spawner_C_ExecuteUbergraph_BB_ChallengeTarget_Spawner_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.GroupCleared__DelegateSignature
struct ABB_ChallengeTarget_Spawner_C_GroupCleared__DelegateSignature_Params
{
	bool                                               BonusGroup;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ScoreATarget__DelegateSignature
struct ABB_ChallengeTarget_Spawner_C_ScoreATarget__DelegateSignature_Params
{
	bool                                               IsBonus;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
