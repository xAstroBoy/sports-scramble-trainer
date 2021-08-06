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

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.GetTrophyListener
struct AScramTrophyManager_BP_C_GetTrophyListener_Params
{
	struct FName                                       TrophyID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      awardListener;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedRewardInMatch
struct AScramTrophyManager_BP_C_HasEarnedRewardInMatch_Params
{
	bool                                               HasReward;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnHairPack
struct AScramTrophyManager_BP_C_EarnHairPack_Params
{
	struct FName                                       avatarID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnSkinPack
struct AScramTrophyManager_BP_C_EarnSkinPack_Params
{
	struct FName                                       avatarID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsHairPackEarned
struct AScramTrophyManager_BP_C_IsHairPackEarned_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               boolValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsSkinPackEarned
struct AScramTrophyManager_BP_C_IsSkinPackEarned_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               boolValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ResetAvatars
struct AScramTrophyManager_BP_C_ResetAvatars_Params
{
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnAvatar
struct AScramTrophyManager_BP_C_EarnAvatar_Params
{
	struct FName                                       avatarID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsAvatarEarned
struct AScramTrophyManager_BP_C_IsAvatarEarned_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               boolValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedAvatarInMatch
struct AScramTrophyManager_BP_C_HasEarnedAvatarInMatch_Params
{
	bool                                               hasEarnedAvatar;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CheckAvatarAchievements
struct AScramTrophyManager_BP_C_CheckAvatarAchievements_Params
{
	bool                                               byPassHistory;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedTrophyInMatch
struct AScramTrophyManager_BP_C_HasEarnedTrophyInMatch_Params
{
	bool                                               HasTrophies;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ClearTrophyHistory
struct AScramTrophyManager_BP_C_ClearTrophyHistory_Params
{
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.PrintSaveData
struct AScramTrophyManager_BP_C_PrintSaveData_Params
{
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.DebugLog
struct AScramTrophyManager_BP_C_DebugLog_Params
{
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.FindNextUnearnedTrophy
struct AScramTrophyManager_BP_C_FindNextUnearnedTrophy_Params
{
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.UpdateExistingTrophies
struct AScramTrophyManager_BP_C_UpdateExistingTrophies_Params
{
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CustomTrophySpawnTransform
struct AScramTrophyManager_BP_C_CustomTrophySpawnTransform_Params
{
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.UserConstructionScript
struct AScramTrophyManager_BP_C_UserConstructionScript_Params
{
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_LeftGripTrigger_K2Node_InputActionEvent_3
struct AScramTrophyManager_BP_C_InpActEvt_LeftGripTrigger_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_RightGripTrigger_K2Node_InputActionEvent_2
struct AScramTrophyManager_BP_C_InpActEvt_RightGripTrigger_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_LeftFingerTrigger_K2Node_InputActionEvent_1
struct AScramTrophyManager_BP_C_InpActEvt_LeftFingerTrigger_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnLoaded_A0FD8A834AF79205A5C6FEAAF6EB2FE7
struct AScramTrophyManager_BP_C_OnLoaded_A0FD8A834AF79205A5C6FEAAF6EB2FE7_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnLoaded_37C4806C4A79C92922992A96ADA85D5C
struct AScramTrophyManager_BP_C_OnLoaded_37C4806C4A79C92922992A96ADA85D5C_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ReceiveBeginPlay
struct AScramTrophyManager_BP_C_ReceiveBeginPlay_Params
{
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ResetTrophyData
struct AScramTrophyManager_BP_C_ResetTrophyData_Params
{
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyTrophyEarned
struct AScramTrophyManager_BP_C_OnNotifyTrophyEarned_Params
{
	struct FName                                       Name;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.SpawnTrophyNotificationFX
struct AScramTrophyManager_BP_C_SpawnTrophyNotificationFX_Params
{
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyOculusUpdate
struct AScramTrophyManager_BP_C_OnNotifyOculusUpdate_Params
{
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.SaveChallengeProgress
struct AScramTrophyManager_BP_C_SaveChallengeProgress_Params
{
	struct FName                                       ChallengeID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.RefreshGameProgress
struct AScramTrophyManager_BP_C_RefreshGameProgress_Params
{
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CheckTrophyAndGameProgress
struct AScramTrophyManager_BP_C_CheckTrophyAndGameProgress_Params
{
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyOculusUpload
struct AScramTrophyManager_BP_C_OnNotifyOculusUpload_Params
{
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ExecuteUbergraph_ScramTrophyManager_BP
struct AScramTrophyManager_BP_C_ExecuteUbergraph_ScramTrophyManager_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnEarnedTrophyDispatcher__DelegateSignature
struct AScramTrophyManager_BP_C_OnEarnedTrophyDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
