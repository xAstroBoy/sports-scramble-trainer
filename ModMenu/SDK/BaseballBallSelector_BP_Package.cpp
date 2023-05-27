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
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HasScrambleOption
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABaseballMitt*                               Mitt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasOption                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballBallSelector_BP_C::HasScrambleOption(class ABaseballMitt* Mitt, class UClass* BallClass, bool* HasOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HasScrambleOption");
		
		ABaseballBallSelector_BP_C_HasScrambleOption_Params params {};
		params.Mitt = Mitt;
		params.BallClass = BallClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasOption != nullptr)
			*HasOption = params.HasOption;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_Training_GetBallVO
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::BB_Training_GetBallVO(class UClass* BallClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_Training_GetBallVO");
		
		ABaseballBallSelector_BP_C_BB_Training_GetBallVO_Params params {};
		params.BallClass = BallClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetIconLocations
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TL                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TR                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BL                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BR                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballBallSelector_BP_C::GetIconLocations(bool* TL, bool* TR, bool* BL, bool* BR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetIconLocations");
		
		ABaseballBallSelector_BP_C_GetIconLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TL != nullptr)
			*TL = params.TL;
		if (TR != nullptr)
			*TR = params.TR;
		if (BL != nullptr)
			*BL = params.BL;
		if (BR != nullptr)
			*BR = params.BR;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetImbuingOdds
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FChance                                     ImbueChance                                                (Parm, OutParm, NoDestructor)
	 */
	void ABaseballBallSelector_BP_C::GetImbuingOdds(struct FChance* ImbueChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetImbuingOdds");
		
		ABaseballBallSelector_BP_C_GetImbuingOdds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImbueChance != nullptr)
			*ImbueChance = params.ImbueChance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.Show All Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballBallSelector_BP_C::ShowAllTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.Show All Target");
		
		ABaseballBallSelector_BP_C_ShowAllTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetNumToSpawn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SpawnNumber                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::GetNumToSpawn(int32_t* SpawnNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetNumToSpawn");
		
		ABaseballBallSelector_BP_C_GetNumToSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnNumber != nullptr)
			*SpawnNumber = params.SpawnNumber;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.CanSpawnBalls
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanSpawn                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballBallSelector_BP_C::CanSpawnBalls(bool* CanSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.CanSpawnBalls");
		
		ABaseballBallSelector_BP_C_CanSpawnBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanSpawn != nullptr)
			*CanSpawn = params.CanSpawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballBallSelector_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.UserConstructionScript");
		
		ABaseballBallSelector_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.OnLoaded_C88ED7EB47D91559C0BE5B867C4A90A3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::OnLoaded_C88ED7EB47D91559C0BE5B867C4A90A3(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.OnLoaded_C88ED7EB47D91559C0BE5B867C4A90A3");
		
		ABaseballBallSelector_BP_C_OnLoaded_C88ED7EB47D91559C0BE5B867C4A90A3_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_SpawnBlankTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               BindOnHit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballBallSelector_BP_C::BB_TNG_SpawnBlankTargets(bool BindOnHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_SpawnBlankTargets");
		
		ABaseballBallSelector_BP_C_BB_TNG_SpawnBlankTargets_Params params {};
		params.BindOnHit = BindOnHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_BlinkTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballBallSelector_BP_C::BB_TNG_BlinkTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_BlinkTargets");
		
		ABaseballBallSelector_BP_C_BB_TNG_BlinkTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_CleanUpDemoTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballBallSelector_BP_C::BB_TNG_CleanUpDemoTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_CleanUpDemoTargets");
		
		ABaseballBallSelector_BP_C_BB_TNG_CleanUpDemoTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_01
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballScrambleTargetLocations                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::HitTrainingTarget_01(EBaseballScrambleTargetLocations Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_01");
		
		ABaseballBallSelector_BP_C_HitTrainingTarget_01_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_TrackTargetHits
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballBallSelector_BP_C::BB_TNG_TrackTargetHits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_TrackTargetHits");
		
		ABaseballBallSelector_BP_C_BB_TNG_TrackTargetHits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballScrambleTargetLocations                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::HitTrainingTarget_02(EBaseballScrambleTargetLocations Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_02");
		
		ABaseballBallSelector_BP_C_HitTrainingTarget_02_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_03
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballScrambleTargetLocations                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::HitTrainingTarget_03(EBaseballScrambleTargetLocations Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_03");
		
		ABaseballBallSelector_BP_C_HitTrainingTarget_03_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_04
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballScrambleTargetLocations                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::HitTrainingTarget_04(EBaseballScrambleTargetLocations Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_04");
		
		ABaseballBallSelector_BP_C_HitTrainingTarget_04_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_SpawnInitialIcons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BB_BallClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBaseballBallType                                  BB_BallType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  BB_BallIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              imbueChance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::BB_TNG_RM03_SpawnInitialIcons(class UClass* BB_BallClass, EBaseballBallType BB_BallType, class UTexture2D* BB_BallIcon, float imbueChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_SpawnInitialIcons");
		
		ABaseballBallSelector_BP_C_BB_TNG_RM03_SpawnInitialIcons_Params params {};
		params.BB_BallClass = BB_BallClass;
		params.BB_BallType = BB_BallType;
		params.BB_BallIcon = BB_BallIcon;
		params.imbueChance = imbueChance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_CleanUpAllButFrisbee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballBallSelector_BP_C::BB_TNG_RM03_CleanUpAllButFrisbee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_CleanUpAllButFrisbee");
		
		ABaseballBallSelector_BP_C_BB_TNG_RM03_CleanUpAllButFrisbee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.CustomEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballScrambleTargetLocations                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::CustomEvent(EBaseballScrambleTargetLocations Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.CustomEvent");
		
		ABaseballBallSelector_BP_C_CustomEvent_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_GiveMittScrambleBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Imbued                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballBallSelector_BP_C::BB_TNG_GiveMittScrambleBall(class UClass* BallClass, bool Imbued)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_GiveMittScrambleBall");
		
		ABaseballBallSelector_BP_C_BB_TNG_GiveMittScrambleBall_Params params {};
		params.BallClass = BallClass;
		params.Imbued = Imbued;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_SingleIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BB_BallClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBaseballBallType                                  BB_BallType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  BB_BallIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              imbueChance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBaseballScrambleTargetLocations                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::BB_TNG_RM03_SingleIcon(class UClass* BB_BallClass, EBaseballBallType BB_BallType, class UTexture2D* BB_BallIcon, float imbueChance, EBaseballScrambleTargetLocations Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_SingleIcon");
		
		ABaseballBallSelector_BP_C_BB_TNG_RM03_SingleIcon_Params params {};
		params.BB_BallClass = BB_BallClass;
		params.BB_BallType = BB_BallType;
		params.BB_BallIcon = BB_BallIcon;
		params.imbueChance = imbueChance;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.IndividualTargetHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballScrambleTargetLocations                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::IndividualTargetHit(EBaseballScrambleTargetLocations Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.IndividualTargetHit");
		
		ABaseballBallSelector_BP_C_IndividualTargetHit_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABaseballBallSelector_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReceiveBeginPlay");
		
		ABaseballBallSelector_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReadyBalls
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballBallSelector_BP_C::ReadyBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReadyBalls");
		
		ABaseballBallSelector_BP_C_ReadyBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.Change Round
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballBallSelector_BP_C::ChangeRound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.Change Round");
		
		ABaseballBallSelector_BP_C_ChangeRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ResolveAndClear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballBallSelector_BP_C::ResolveAndClear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ResolveAndClear");
		
		ABaseballBallSelector_BP_C_ResolveAndClear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.SendThroughBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABaseballPitchingTarget*                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::SendThroughBall(class ABaseballPitchingTarget* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.SendThroughBall");
		
		ABaseballBallSelector_BP_C_SendThroughBall_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReceiveEndPlay");
		
		ABaseballBallSelector_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.PlayAsync2D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballBallSelector_BP_C::PlayAsync2D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.PlayAsync2D");
		
		ABaseballBallSelector_BP_C_PlayAsync2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ExecuteUbergraph_BaseballBallSelector_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::ExecuteUbergraph_BaseballBallSelector_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ExecuteUbergraph_BaseballBallSelector_BP");
		
		ABaseballBallSelector_BP_C_ExecuteUbergraph_BaseballBallSelector_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.TrainingTargetHit__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballScrambleTargetLocations                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallSelector_BP_C::TrainingTargetHit__DelegateSignature(EBaseballScrambleTargetLocations Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.TrainingTargetHit__DelegateSignature");
		
		ABaseballBallSelector_BP_C_TrainingTargetHit__DelegateSignature_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.TargetsUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TL                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TR                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BL                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BR                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballBallSelector_BP_C::TargetsUpdated__DelegateSignature(bool TL, bool TR, bool BL, bool BR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.TargetsUpdated__DelegateSignature");
		
		ABaseballBallSelector_BP_C_TargetsUpdated__DelegateSignature_Params params {};
		params.TL = TL;
		params.TR = TR;
		params.BL = BL;
		params.BR = BR;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballBallSelector_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballBallSelector_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseballBallSelector_BP.BaseballBallSelector_BP_C");
		return ptr;
	}

}


