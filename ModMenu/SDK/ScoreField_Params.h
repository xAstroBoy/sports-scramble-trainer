#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ScoreField.ScoreField_C.TurnOnMesh
	 */
	struct AScoreField_C_TurnOnMesh_Params
	{
	public:
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScoreField.ScoreField_C.Initialize
	 */
	struct AScoreField_C_Initialize_Params
	{	};

	/**
	 * Function ScoreField.ScoreField_C.UserConstructionScript
	 */
	struct AScoreField_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScoreField.ScoreField_C.OnTriggered
	 */
	struct AScoreField_C_OnTriggered_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScoreField.ScoreField_C.ReceiveBeginPlay
	 */
	struct AScoreField_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScoreField.ScoreField_C.ResetScore
	 */
	struct AScoreField_C_ResetScore_Params
	{	};

	/**
	 * Function ScoreField.ScoreField_C.Local_Triggered
	 */
	struct AScoreField_C_Local_Triggered_Params
	{
	public:
		int32_t                                                    ModifiedScore;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ModifiedBonus;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScoreField.ScoreField_C.DeactivateScoreField
	 */
	struct AScoreField_C_DeactivateScoreField_Params
	{	};

	/**
	 * Function ScoreField.ScoreField_C.LR_Triggered
	 */
	struct AScoreField_C_LR_Triggered_Params
	{
	public:
		int32_t                                                    ModifiedScore;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ModifiedBonus;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScoreField.ScoreField_C.Multi_Triggered
	 */
	struct AScoreField_C_Multi_Triggered_Params
	{
	public:
		int32_t                                                    ModifiedScore;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ModifiedBonus;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScoreField.ScoreField_C.Server_Triggered
	 */
	struct AScoreField_C_Server_Triggered_Params
	{
	public:
		int32_t                                                    ModifiedScore;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ModifiedBonus;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScoreField.ScoreField_C.ExecuteUbergraph_ScoreField
	 */
	struct AScoreField_C_ExecuteUbergraph_ScoreField_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
