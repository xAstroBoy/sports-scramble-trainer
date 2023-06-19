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
	 * Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.RemoveTargets
	 */
	struct ABB_ChallengeTarget_Spawner_C_RemoveTargets_Params
	{	};

	/**
	 * Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.SpawnTargets
	 */
	struct ABB_ChallengeTarget_Spawner_C_SpawnTargets_Params
	{
	public:
		int32_t                                                    PatternIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bonus;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LXO9[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ScoreValue;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.UserConstructionScript
	 */
	struct ABB_ChallengeTarget_Spawner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.Score Target
	 */
	struct ABB_ChallengeTarget_Spawner_C_ScoreTarget_Params
	{
	public:
		class ABB_ChallengeTarget_C*                               Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ReceiveEndPlay
	 */
	struct ABB_ChallengeTarget_Spawner_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ReceiveBeginPlay
	 */
	struct ABB_ChallengeTarget_Spawner_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ExecuteUbergraph_BB_ChallengeTarget_Spawner
	 */
	struct ABB_ChallengeTarget_Spawner_C_ExecuteUbergraph_BB_ChallengeTarget_Spawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.GroupCleared__DelegateSignature
	 */
	struct ABB_ChallengeTarget_Spawner_C_GroupCleared__DelegateSignature_Params
	{
	public:
		bool                                                       BonusGroup;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ScoreATarget__DelegateSignature
	 */
	struct ABB_ChallengeTarget_Spawner_C_ScoreATarget__DelegateSignature_Params
	{
	public:
		bool                                                       IsBonus;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
