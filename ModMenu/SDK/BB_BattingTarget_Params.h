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
	 * Function BB_BattingTarget.BB_BattingTarget_C.HideTargetScores
	 */
	struct ABB_BattingTarget_C_HideTargetScores_Params
	{	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.HideAllTargets
	 */
	struct ABB_BattingTarget_C_HideAllTargets_Params
	{	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.SetAllTargetsUnbroken
	 */
	struct ABB_BattingTarget_C_SetAllTargetsUnbroken_Params
	{	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.PickNewRandomTarget
	 */
	struct ABB_BattingTarget_C_PickNewRandomTarget_Params
	{	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.Initialize
	 */
	struct ABB_BattingTarget_C_Initialize_Params
	{	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.UserConstructionScript
	 */
	struct ABB_BattingTarget_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.ReceiveBeginPlay
	 */
	struct ABB_BattingTarget_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.Target_01_Overlap
	 */
	struct ABB_BattingTarget_C_Target_01_Overlap_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.Target_02_Overlap
	 */
	struct ABB_BattingTarget_C_Target_02_Overlap_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.Target_03_Overlap
	 */
	struct ABB_BattingTarget_C_Target_03_Overlap_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.Target_04_Overlap
	 */
	struct ABB_BattingTarget_C_Target_04_Overlap_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.Target_05_Overlap
	 */
	struct ABB_BattingTarget_C_Target_05_Overlap_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.PickRandomTarget
	 */
	struct ABB_BattingTarget_C_PickRandomTarget_Params
	{	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.Training_SpawnTarget
	 */
	struct ABB_BattingTarget_C_Training_SpawnTarget_Params
	{
	public:
		class ABatting_Target_01_C*                                BattingTarget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.Training_DespawnTargets
	 */
	struct ABB_BattingTarget_C_Training_DespawnTargets_Params
	{
	public:
		TArray<class ABatting_Target_01_C*>                        TargetsToDespawn;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.Training_InitialTargetSetup
	 */
	struct ABB_BattingTarget_C_Training_InitialTargetSetup_Params
	{	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.Training_ToggleImpactSound
	 */
	struct ABB_BattingTarget_C_Training_ToggleImpactSound_Params
	{
	public:
		bool                                                       UseImpactSound;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.Training_UnlimitiedBattingSetup
	 */
	struct ABB_BattingTarget_C_Training_UnlimitiedBattingSetup_Params
	{	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.RemoveBattingTargets
	 */
	struct ABB_BattingTarget_C_RemoveBattingTargets_Params
	{	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.BindToTargets
	 */
	struct ABB_BattingTarget_C_BindToTargets_Params
	{	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.BindToTrainingTargets
	 */
	struct ABB_BattingTarget_C_BindToTrainingTargets_Params
	{	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.TrainingTarget_01_Overlap
	 */
	struct ABB_BattingTarget_C_TrainingTarget_01_Overlap_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.TrainingTarget_02_Overlap
	 */
	struct ABB_BattingTarget_C_TrainingTarget_02_Overlap_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.TrainingTarget_03_Overlap
	 */
	struct ABB_BattingTarget_C_TrainingTarget_03_Overlap_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.ExecuteUbergraph_BB_BattingTarget
	 */
	struct ABB_BattingTarget_C_ExecuteUbergraph_BB_BattingTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AGJD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_BattingTarget.BB_BattingTarget_C.ScoreBatter__DelegateSignature
	 */
	struct ABB_BattingTarget_C_ScoreBatter__DelegateSignature_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetID;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
