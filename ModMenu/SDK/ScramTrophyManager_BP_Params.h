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
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.GetTrophyListener
	 */
	struct AScramTrophyManager_BP_C_GetTrophyListener_Params
	{
	public:
		class FName                                                TrophyID;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              awardListener;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedRewardInMatch
	 */
	struct AScramTrophyManager_BP_C_HasEarnedRewardInMatch_Params
	{
	public:
		bool                                                       HasReward;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2SW7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnHairPack
	 */
	struct AScramTrophyManager_BP_C_EarnHairPack_Params
	{
	public:
		class FName                                                avatarID;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnSkinPack
	 */
	struct AScramTrophyManager_BP_C_EarnSkinPack_Params
	{
	public:
		class FName                                                avatarID;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsHairPackEarned
	 */
	struct AScramTrophyManager_BP_C_IsHairPackEarned_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       _bool_;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AFZ6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsSkinPackEarned
	 */
	struct AScramTrophyManager_BP_C_IsSkinPackEarned_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       _bool_;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YGDY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ResetAvatars
	 */
	struct AScramTrophyManager_BP_C_ResetAvatars_Params
	{	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnAvatar
	 */
	struct AScramTrophyManager_BP_C_EarnAvatar_Params
	{
	public:
		class FName                                                avatarID;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsAvatarEarned
	 */
	struct AScramTrophyManager_BP_C_IsAvatarEarned_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       _bool_;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X5W0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedAvatarInMatch
	 */
	struct AScramTrophyManager_BP_C_HasEarnedAvatarInMatch_Params
	{
	public:
		bool                                                       hasEarnedAvatar;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CIYX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CheckAvatarAchievements
	 */
	struct AScramTrophyManager_BP_C_CheckAvatarAchievements_Params
	{
	public:
		bool                                                       byPassHistory;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedTrophyInMatch
	 */
	struct AScramTrophyManager_BP_C_HasEarnedTrophyInMatch_Params
	{
	public:
		bool                                                       HasTrophies;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_444Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ClearTrophyHistory
	 */
	struct AScramTrophyManager_BP_C_ClearTrophyHistory_Params
	{	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.PrintSaveData
	 */
	struct AScramTrophyManager_BP_C_PrintSaveData_Params
	{	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.DebugLog
	 */
	struct AScramTrophyManager_BP_C_DebugLog_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.FindNextUnearnedTrophy
	 */
	struct AScramTrophyManager_BP_C_FindNextUnearnedTrophy_Params
	{	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.UpdateExistingTrophies
	 */
	struct AScramTrophyManager_BP_C_UpdateExistingTrophies_Params
	{	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CustomTrophySpawnTransform
	 */
	struct AScramTrophyManager_BP_C_CustomTrophySpawnTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.UserConstructionScript
	 */
	struct AScramTrophyManager_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_LeftGripTrigger_K2Node_InputActionEvent_3
	 */
	struct AScramTrophyManager_BP_C_InpActEvt_LeftGripTrigger_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_RightGripTrigger_K2Node_InputActionEvent_2
	 */
	struct AScramTrophyManager_BP_C_InpActEvt_RightGripTrigger_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_LeftFingerTrigger_K2Node_InputActionEvent_1
	 */
	struct AScramTrophyManager_BP_C_InpActEvt_LeftFingerTrigger_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnLoaded_A0FD8A834AF79205A5C6FEAAF6EB2FE7
	 */
	struct AScramTrophyManager_BP_C_OnLoaded_A0FD8A834AF79205A5C6FEAAF6EB2FE7_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnLoaded_37C4806C4A79C92922992A96ADA85D5C
	 */
	struct AScramTrophyManager_BP_C_OnLoaded_37C4806C4A79C92922992A96ADA85D5C_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ReceiveBeginPlay
	 */
	struct AScramTrophyManager_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ResetTrophyData
	 */
	struct AScramTrophyManager_BP_C_ResetTrophyData_Params
	{	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyTrophyEarned
	 */
	struct AScramTrophyManager_BP_C_OnNotifyTrophyEarned_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.SpawnTrophyNotificationFX
	 */
	struct AScramTrophyManager_BP_C_SpawnTrophyNotificationFX_Params
	{	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyOculusUpdate
	 */
	struct AScramTrophyManager_BP_C_OnNotifyOculusUpdate_Params
	{	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.SaveChallengeProgress
	 */
	struct AScramTrophyManager_BP_C_SaveChallengeProgress_Params
	{
	public:
		class FName                                                ChallengeID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.RefreshGameProgress
	 */
	struct AScramTrophyManager_BP_C_RefreshGameProgress_Params
	{	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CheckTrophyAndGameProgress
	 */
	struct AScramTrophyManager_BP_C_CheckTrophyAndGameProgress_Params
	{	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyOculusUpload
	 */
	struct AScramTrophyManager_BP_C_OnNotifyOculusUpload_Params
	{	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ExecuteUbergraph_ScramTrophyManager_BP
	 */
	struct AScramTrophyManager_BP_C_ExecuteUbergraph_ScramTrophyManager_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E3IK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnEarnedTrophyDispatcher__DelegateSignature
	 */
	struct AScramTrophyManager_BP_C_OnEarnedTrophyDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
