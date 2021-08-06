// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.GetTrophyListener
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TrophyID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  awardListener                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTrophyManager_BP_C::GetTrophyListener(const struct FName& TrophyID, class UClass** awardListener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.GetTrophyListener");

	AScramTrophyManager_BP_C_GetTrophyListener_Params params;
	params.TrophyID = TrophyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (awardListener != nullptr)
		*awardListener = params.awardListener;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedRewardInMatch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasReward                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramTrophyManager_BP_C::HasEarnedRewardInMatch(bool* HasReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedRewardInMatch");

	AScramTrophyManager_BP_C_HasEarnedRewardInMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasReward != nullptr)
		*HasReward = params.HasReward;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnHairPack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   avatarID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTrophyManager_BP_C::EarnHairPack(const struct FName& avatarID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnHairPack");

	AScramTrophyManager_BP_C_EarnHairPack_Params params;
	params.avatarID = avatarID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnSkinPack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   avatarID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTrophyManager_BP_C::EarnSkinPack(const struct FName& avatarID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnSkinPack");

	AScramTrophyManager_BP_C_EarnSkinPack_Params params;
	params.avatarID = avatarID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsHairPackEarned
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           boolValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramTrophyManager_BP_C::IsHairPackEarned(const struct FName& Name, bool* boolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsHairPackEarned");

	AScramTrophyManager_BP_C_IsHairPackEarned_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (boolValue != nullptr)
		*boolValue = params.boolValue;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsSkinPackEarned
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           boolValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramTrophyManager_BP_C::IsSkinPackEarned(const struct FName& Name, bool* boolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsSkinPackEarned");

	AScramTrophyManager_BP_C_IsSkinPackEarned_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (boolValue != nullptr)
		*boolValue = params.boolValue;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ResetAvatars
// (Public, BlueprintCallable, BlueprintEvent)
void AScramTrophyManager_BP_C::ResetAvatars()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ResetAvatars");

	AScramTrophyManager_BP_C_ResetAvatars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   avatarID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTrophyManager_BP_C::EarnAvatar(const struct FName& avatarID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnAvatar");

	AScramTrophyManager_BP_C_EarnAvatar_Params params;
	params.avatarID = avatarID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsAvatarEarned
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           boolValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramTrophyManager_BP_C::IsAvatarEarned(const struct FName& Name, bool* boolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsAvatarEarned");

	AScramTrophyManager_BP_C_IsAvatarEarned_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (boolValue != nullptr)
		*boolValue = params.boolValue;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedAvatarInMatch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           hasEarnedAvatar                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramTrophyManager_BP_C::HasEarnedAvatarInMatch(bool* hasEarnedAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedAvatarInMatch");

	AScramTrophyManager_BP_C_HasEarnedAvatarInMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (hasEarnedAvatar != nullptr)
		*hasEarnedAvatar = params.hasEarnedAvatar;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CheckAvatarAchievements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           byPassHistory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramTrophyManager_BP_C::CheckAvatarAchievements(bool byPassHistory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CheckAvatarAchievements");

	AScramTrophyManager_BP_C_CheckAvatarAchievements_Params params;
	params.byPassHistory = byPassHistory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedTrophyInMatch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasTrophies                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramTrophyManager_BP_C::HasEarnedTrophyInMatch(bool* HasTrophies)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedTrophyInMatch");

	AScramTrophyManager_BP_C_HasEarnedTrophyInMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasTrophies != nullptr)
		*HasTrophies = params.HasTrophies;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ClearTrophyHistory
// (Public, BlueprintCallable, BlueprintEvent)
void AScramTrophyManager_BP_C::ClearTrophyHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ClearTrophyHistory");

	AScramTrophyManager_BP_C_ClearTrophyHistory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.PrintSaveData
// (Public, BlueprintCallable, BlueprintEvent)
void AScramTrophyManager_BP_C::PrintSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.PrintSaveData");

	AScramTrophyManager_BP_C_PrintSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.DebugLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AScramTrophyManager_BP_C::DebugLog(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.DebugLog");

	AScramTrophyManager_BP_C_DebugLog_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.FindNextUnearnedTrophy
// (Public, BlueprintCallable, BlueprintEvent)
void AScramTrophyManager_BP_C::FindNextUnearnedTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.FindNextUnearnedTrophy");

	AScramTrophyManager_BP_C_FindNextUnearnedTrophy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.UpdateExistingTrophies
// (Public, BlueprintCallable, BlueprintEvent)
void AScramTrophyManager_BP_C::UpdateExistingTrophies()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.UpdateExistingTrophies");

	AScramTrophyManager_BP_C_UpdateExistingTrophies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CustomTrophySpawnTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void AScramTrophyManager_BP_C::CustomTrophySpawnTransform(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CustomTrophySpawnTransform");

	AScramTrophyManager_BP_C_CustomTrophySpawnTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramTrophyManager_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.UserConstructionScript");

	AScramTrophyManager_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_LeftGripTrigger_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AScramTrophyManager_BP_C::InpActEvt_LeftGripTrigger_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_LeftGripTrigger_K2Node_InputActionEvent_3");

	AScramTrophyManager_BP_C_InpActEvt_LeftGripTrigger_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_RightGripTrigger_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AScramTrophyManager_BP_C::InpActEvt_RightGripTrigger_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_RightGripTrigger_K2Node_InputActionEvent_2");

	AScramTrophyManager_BP_C_InpActEvt_RightGripTrigger_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_LeftFingerTrigger_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AScramTrophyManager_BP_C::InpActEvt_LeftFingerTrigger_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_LeftFingerTrigger_K2Node_InputActionEvent_1");

	AScramTrophyManager_BP_C_InpActEvt_LeftFingerTrigger_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnLoaded_A0FD8A834AF79205A5C6FEAAF6EB2FE7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTrophyManager_BP_C::OnLoaded_A0FD8A834AF79205A5C6FEAAF6EB2FE7(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnLoaded_A0FD8A834AF79205A5C6FEAAF6EB2FE7");

	AScramTrophyManager_BP_C_OnLoaded_A0FD8A834AF79205A5C6FEAAF6EB2FE7_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnLoaded_37C4806C4A79C92922992A96ADA85D5C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTrophyManager_BP_C::OnLoaded_37C4806C4A79C92922992A96ADA85D5C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnLoaded_37C4806C4A79C92922992A96ADA85D5C");

	AScramTrophyManager_BP_C_OnLoaded_37C4806C4A79C92922992A96ADA85D5C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScramTrophyManager_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ReceiveBeginPlay");

	AScramTrophyManager_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ResetTrophyData
// (BlueprintCallable, BlueprintEvent)
void AScramTrophyManager_BP_C::ResetTrophyData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ResetTrophyData");

	AScramTrophyManager_BP_C_ResetTrophyData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyTrophyEarned
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTrophyManager_BP_C::OnNotifyTrophyEarned(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyTrophyEarned");

	AScramTrophyManager_BP_C_OnNotifyTrophyEarned_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.SpawnTrophyNotificationFX
// (Event, Public, BlueprintEvent)
void AScramTrophyManager_BP_C::SpawnTrophyNotificationFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.SpawnTrophyNotificationFX");

	AScramTrophyManager_BP_C_SpawnTrophyNotificationFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyOculusUpdate
// (Event, Public, BlueprintEvent)
void AScramTrophyManager_BP_C::OnNotifyOculusUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyOculusUpdate");

	AScramTrophyManager_BP_C_OnNotifyOculusUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.SaveChallengeProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ChallengeID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTrophyManager_BP_C::SaveChallengeProgress(const struct FName& ChallengeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.SaveChallengeProgress");

	AScramTrophyManager_BP_C_SaveChallengeProgress_Params params;
	params.ChallengeID = ChallengeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.RefreshGameProgress
// (BlueprintCallable, BlueprintEvent)
void AScramTrophyManager_BP_C::RefreshGameProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.RefreshGameProgress");

	AScramTrophyManager_BP_C_RefreshGameProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CheckTrophyAndGameProgress
// (BlueprintCallable, BlueprintEvent)
void AScramTrophyManager_BP_C::CheckTrophyAndGameProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CheckTrophyAndGameProgress");

	AScramTrophyManager_BP_C_CheckTrophyAndGameProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyOculusUpload
// (Event, Public, BlueprintEvent)
void AScramTrophyManager_BP_C::OnNotifyOculusUpload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyOculusUpload");

	AScramTrophyManager_BP_C_OnNotifyOculusUpload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ExecuteUbergraph_ScramTrophyManager_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTrophyManager_BP_C::ExecuteUbergraph_ScramTrophyManager_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ExecuteUbergraph_ScramTrophyManager_BP");

	AScramTrophyManager_BP_C_ExecuteUbergraph_ScramTrophyManager_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnEarnedTrophyDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AScramTrophyManager_BP_C::OnEarnedTrophyDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnEarnedTrophyDispatcher__DelegateSignature");

	AScramTrophyManager_BP_C_OnEarnedTrophyDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
