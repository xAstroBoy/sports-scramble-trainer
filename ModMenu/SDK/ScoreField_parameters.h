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

// Function ScoreField.ScoreField_C.TurnOnMesh
struct AScoreField_C_TurnOnMesh_Params
{
	class UStaticMeshComponent*                        Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScoreField.ScoreField_C.Initialize
struct AScoreField_C_Initialize_Params
{
};

// Function ScoreField.ScoreField_C.UserConstructionScript
struct AScoreField_C_UserConstructionScript_Params
{
};

// Function ScoreField.ScoreField_C.OnTriggered
struct AScoreField_C_OnTriggered_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScoreField.ScoreField_C.ReceiveBeginPlay
struct AScoreField_C_ReceiveBeginPlay_Params
{
};

// Function ScoreField.ScoreField_C.ResetScore
struct AScoreField_C_ResetScore_Params
{
};

// Function ScoreField.ScoreField_C.Local_Triggered
struct AScoreField_C_Local_Triggered_Params
{
	int                                                ModifiedScore;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ModifiedBonus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScoreField.ScoreField_C.DeactivateScoreField
struct AScoreField_C_DeactivateScoreField_Params
{
};

// Function ScoreField.ScoreField_C.LR_Triggered
struct AScoreField_C_LR_Triggered_Params
{
	int                                                ModifiedScore;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ModifiedBonus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScoreField.ScoreField_C.Multi_Triggered
struct AScoreField_C_Multi_Triggered_Params
{
	int                                                ModifiedScore;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ModifiedBonus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScoreField.ScoreField_C.Server_Triggered
struct AScoreField_C_Server_Triggered_Params
{
	int                                                ModifiedScore;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ModifiedBonus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScoreField.ScoreField_C.ExecuteUbergraph_ScoreField
struct AScoreField_C_ExecuteUbergraph_ScoreField_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
