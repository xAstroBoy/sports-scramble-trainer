/**
 * Name: SportsScramble
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.GetTrophyListener
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TrophyID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      awardListener                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTrophyManager_BP_C::GetTrophyListener(const class FName& TrophyID, class UClass** awardListener)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.GetTrophyListener");
		
		AScramTrophyManager_BP_C_GetTrophyListener_Params params {};
		params.TrophyID = TrophyID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (awardListener != nullptr)
			*awardListener = params.awardListener;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedRewardInMatch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasReward                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramTrophyManager_BP_C::HasEarnedRewardInMatch(bool* HasReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedRewardInMatch");
		
		AScramTrophyManager_BP_C_HasEarnedRewardInMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasReward != nullptr)
			*HasReward = params.HasReward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnHairPack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        avatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTrophyManager_BP_C::EarnHairPack(const class FName& avatarID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnHairPack");
		
		AScramTrophyManager_BP_C_EarnHairPack_Params params {};
		params.avatarID = avatarID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnSkinPack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        avatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTrophyManager_BP_C::EarnSkinPack(const class FName& avatarID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnSkinPack");
		
		AScramTrophyManager_BP_C_EarnSkinPack_Params params {};
		params.avatarID = avatarID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsHairPackEarned
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               _bool_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramTrophyManager_BP_C::IsHairPackEarned(const class FName& Name, bool* _bool_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsHairPackEarned");
		
		AScramTrophyManager_BP_C_IsHairPackEarned_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_bool_ != nullptr)
			*_bool_ = params._bool_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsSkinPackEarned
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               _bool_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramTrophyManager_BP_C::IsSkinPackEarned(const class FName& Name, bool* _bool_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsSkinPackEarned");
		
		AScramTrophyManager_BP_C_IsSkinPackEarned_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_bool_ != nullptr)
			*_bool_ = params._bool_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ResetAvatars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramTrophyManager_BP_C::ResetAvatars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ResetAvatars");
		
		AScramTrophyManager_BP_C_ResetAvatars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnAvatar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        avatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTrophyManager_BP_C::EarnAvatar(const class FName& avatarID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.EarnAvatar");
		
		AScramTrophyManager_BP_C_EarnAvatar_Params params {};
		params.avatarID = avatarID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsAvatarEarned
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               _bool_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramTrophyManager_BP_C::IsAvatarEarned(const class FName& Name, bool* _bool_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.IsAvatarEarned");
		
		AScramTrophyManager_BP_C_IsAvatarEarned_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_bool_ != nullptr)
			*_bool_ = params._bool_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedAvatarInMatch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hasEarnedAvatar                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramTrophyManager_BP_C::HasEarnedAvatarInMatch(bool* hasEarnedAvatar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedAvatarInMatch");
		
		AScramTrophyManager_BP_C_HasEarnedAvatarInMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hasEarnedAvatar != nullptr)
			*hasEarnedAvatar = params.hasEarnedAvatar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CheckAvatarAchievements
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               byPassHistory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramTrophyManager_BP_C::CheckAvatarAchievements(bool byPassHistory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CheckAvatarAchievements");
		
		AScramTrophyManager_BP_C_CheckAvatarAchievements_Params params {};
		params.byPassHistory = byPassHistory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedTrophyInMatch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasTrophies                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramTrophyManager_BP_C::HasEarnedTrophyInMatch(bool* HasTrophies)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.HasEarnedTrophyInMatch");
		
		AScramTrophyManager_BP_C_HasEarnedTrophyInMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasTrophies != nullptr)
			*HasTrophies = params.HasTrophies;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ClearTrophyHistory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramTrophyManager_BP_C::ClearTrophyHistory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ClearTrophyHistory");
		
		AScramTrophyManager_BP_C_ClearTrophyHistory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.PrintSaveData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramTrophyManager_BP_C::PrintSaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.PrintSaveData");
		
		AScramTrophyManager_BP_C_PrintSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.DebugLog
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AScramTrophyManager_BP_C::DebugLog(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.DebugLog");
		
		AScramTrophyManager_BP_C_DebugLog_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.FindNextUnearnedTrophy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramTrophyManager_BP_C::FindNextUnearnedTrophy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.FindNextUnearnedTrophy");
		
		AScramTrophyManager_BP_C_FindNextUnearnedTrophy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.UpdateExistingTrophies
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramTrophyManager_BP_C::UpdateExistingTrophies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.UpdateExistingTrophies");
		
		AScramTrophyManager_BP_C_UpdateExistingTrophies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CustomTrophySpawnTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void AScramTrophyManager_BP_C::CustomTrophySpawnTransform(struct FTransform* Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CustomTrophySpawnTransform");
		
		AScramTrophyManager_BP_C_CustomTrophySpawnTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramTrophyManager_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.UserConstructionScript");
		
		AScramTrophyManager_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_LeftGripTrigger_K2Node_InputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramTrophyManager_BP_C::InpActEvt_LeftGripTrigger_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_LeftGripTrigger_K2Node_InputActionEvent_3");
		
		AScramTrophyManager_BP_C_InpActEvt_LeftGripTrigger_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_RightGripTrigger_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramTrophyManager_BP_C::InpActEvt_RightGripTrigger_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_RightGripTrigger_K2Node_InputActionEvent_2");
		
		AScramTrophyManager_BP_C_InpActEvt_RightGripTrigger_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_LeftFingerTrigger_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramTrophyManager_BP_C::InpActEvt_LeftFingerTrigger_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.InpActEvt_LeftFingerTrigger_K2Node_InputActionEvent_1");
		
		AScramTrophyManager_BP_C_InpActEvt_LeftFingerTrigger_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnLoaded_A0FD8A834AF79205A5C6FEAAF6EB2FE7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTrophyManager_BP_C::OnLoaded_A0FD8A834AF79205A5C6FEAAF6EB2FE7(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnLoaded_A0FD8A834AF79205A5C6FEAAF6EB2FE7");
		
		AScramTrophyManager_BP_C_OnLoaded_A0FD8A834AF79205A5C6FEAAF6EB2FE7_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnLoaded_37C4806C4A79C92922992A96ADA85D5C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTrophyManager_BP_C::OnLoaded_37C4806C4A79C92922992A96ADA85D5C(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnLoaded_37C4806C4A79C92922992A96ADA85D5C");
		
		AScramTrophyManager_BP_C_OnLoaded_37C4806C4A79C92922992A96ADA85D5C_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramTrophyManager_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ReceiveBeginPlay");
		
		AScramTrophyManager_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ResetTrophyData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramTrophyManager_BP_C::ResetTrophyData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ResetTrophyData");
		
		AScramTrophyManager_BP_C_ResetTrophyData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyTrophyEarned
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTrophyManager_BP_C::OnNotifyTrophyEarned(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyTrophyEarned");
		
		AScramTrophyManager_BP_C_OnNotifyTrophyEarned_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.SpawnTrophyNotificationFX
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramTrophyManager_BP_C::SpawnTrophyNotificationFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.SpawnTrophyNotificationFX");
		
		AScramTrophyManager_BP_C_SpawnTrophyNotificationFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyOculusUpdate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramTrophyManager_BP_C::OnNotifyOculusUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyOculusUpdate");
		
		AScramTrophyManager_BP_C_OnNotifyOculusUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.SaveChallengeProgress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ChallengeID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTrophyManager_BP_C::SaveChallengeProgress(const class FName& ChallengeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.SaveChallengeProgress");
		
		AScramTrophyManager_BP_C_SaveChallengeProgress_Params params {};
		params.ChallengeID = ChallengeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.RefreshGameProgress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramTrophyManager_BP_C::RefreshGameProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.RefreshGameProgress");
		
		AScramTrophyManager_BP_C_RefreshGameProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CheckTrophyAndGameProgress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramTrophyManager_BP_C::CheckTrophyAndGameProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.CheckTrophyAndGameProgress");
		
		AScramTrophyManager_BP_C_CheckTrophyAndGameProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyOculusUpload
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramTrophyManager_BP_C::OnNotifyOculusUpload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnNotifyOculusUpload");
		
		AScramTrophyManager_BP_C_OnNotifyOculusUpload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ExecuteUbergraph_ScramTrophyManager_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramTrophyManager_BP_C::ExecuteUbergraph_ScramTrophyManager_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.ExecuteUbergraph_ScramTrophyManager_BP");
		
		AScramTrophyManager_BP_C_ExecuteUbergraph_ScramTrophyManager_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnEarnedTrophyDispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramTrophyManager_BP_C::OnEarnedTrophyDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramTrophyManager_BP.ScramTrophyManager_BP_C.OnEarnedTrophyDispatcher__DelegateSignature");
		
		AScramTrophyManager_BP_C_OnEarnedTrophyDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramTrophyManager_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramTrophyManager_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramTrophyManager_BP.ScramTrophyManager_BP_C");
		return ptr;
	}

}


