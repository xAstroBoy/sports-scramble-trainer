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
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetRandomInstrument
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballInstrumentType                            ExcludeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBaseballInstrumentEntryProperties          NewInstrument                                              (Parm, OutParm)
	 * 		bool                                               Successful                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::GetRandomInstrument(EBaseballInstrumentType ExcludeType, struct FBaseballInstrumentEntryProperties* NewInstrument, bool* Successful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetRandomInstrument");
		
		AScramSportManagerBaseball_Blueprint_C_GetRandomInstrument_Params params {};
		params.ExcludeType = ExcludeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewInstrument != nullptr)
			*NewInstrument = params.NewInstrument;
		if (Successful != nullptr)
			*Successful = params.Successful;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetBatterRunAdvantage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	int32_t AScramSportManagerBaseball_Blueprint_C::GetBatterRunAdvantage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetBatterRunAdvantage");
		
		AScramSportManagerBaseball_Blueprint_C_GetBatterRunAdvantage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SaveBaseballState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            VisitorsScore                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HomeScore                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Inning                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TopOfInning                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FirstPitchOfInning                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Outs                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Strikes                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      BatterInstrument                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		TArray<struct FMittSpawnInfo>                      PitcherScrambleOptions                                     (Parm, OutParm, ZeroConstructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SaveBaseballState(int32_t* VisitorsScore, int32_t* HomeScore, int32_t* Inning, bool* TopOfInning, bool* FirstPitchOfInning, int32_t* Outs, int32_t* Strikes, class UClass** BatterInstrument, TArray<struct FMittSpawnInfo>* PitcherScrambleOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SaveBaseballState");
		
		AScramSportManagerBaseball_Blueprint_C_SaveBaseballState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VisitorsScore != nullptr)
			*VisitorsScore = params.VisitorsScore;
		if (HomeScore != nullptr)
			*HomeScore = params.HomeScore;
		if (Inning != nullptr)
			*Inning = params.Inning;
		if (TopOfInning != nullptr)
			*TopOfInning = params.TopOfInning;
		if (FirstPitchOfInning != nullptr)
			*FirstPitchOfInning = params.FirstPitchOfInning;
		if (Outs != nullptr)
			*Outs = params.Outs;
		if (Strikes != nullptr)
			*Strikes = params.Strikes;
		if (BatterInstrument != nullptr)
			*BatterInstrument = params.BatterInstrument;
		if (PitcherScrambleOptions != nullptr)
			*PitcherScrambleOptions = params.PitcherScrambleOptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetGloveMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UMaterialInstance*                           Material                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::GetGloveMaterial(class UMaterialInstance** Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetGloveMaterial");
		
		AScramSportManagerBaseball_Blueprint_C_GetGloveMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetFielderDifficulty
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EDifficulty                                        NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::GetFielderDifficulty(EDifficulty* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetFielderDifficulty");
		
		AScramSportManagerBaseball_Blueprint_C_GetFielderDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnFielder
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDifficulty                                        Difficulty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOutfielder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FMinMaxAngle                                OutfieldMovementRange                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SpawnFielder(EDifficulty Difficulty, class USceneComponent* Position, bool IsOutfielder, const struct FMinMaxAngle& OutfieldMovementRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnFielder");
		
		AScramSportManagerBaseball_Blueprint_C_SpawnFielder_Params params {};
		params.Difficulty = Difficulty;
		params.Position = Position;
		params.IsOutfielder = IsOutfielder;
		params.OutfieldMovementRange = OutfieldMovementRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BB_ChallengeGameSetup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::BB_ChallengeGameSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BB_ChallengeGameSetup");
		
		AScramSportManagerBaseball_Blueprint_C_BB_ChallengeGameSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetMittMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UMaterialInstance*                           Material                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::GetMittMaterial(class UMaterialInstance** Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetMittMaterial");
		
		AScramSportManagerBaseball_Blueprint_C_GetMittMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.AI_StrikeLooking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::AI_StrikeLooking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.AI_StrikeLooking");
		
		AScramSportManagerBaseball_Blueprint_C_AI_StrikeLooking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateScoreboardNames
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::UpdateScoreboardNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateScoreboardNames");
		
		AScramSportManagerBaseball_Blueprint_C_UpdateScoreboardNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetPitchingTargetBindings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SetPitchingTargetBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetPitchingTargetBindings");
		
		AScramSportManagerBaseball_Blueprint_C_SetPitchingTargetBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnLogoPopup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SpawnLogoPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnLogoPopup");
		
		AScramSportManagerBaseball_Blueprint_C_SpawnLogoPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RemoveRunners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::RemoveRunners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RemoveRunners");
		
		AScramSportManagerBaseball_Blueprint_C_RemoveRunners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetStrikezoneSize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SetStrikezoneSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetStrikezoneSize");
		
		AScramSportManagerBaseball_Blueprint_C_SetStrikezoneSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayScoreboardVideo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBB_ScoreboardVideos                               Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::PlayScoreboardVideo(EBB_ScoreboardVideos Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayScoreboardVideo");
		
		AScramSportManagerBaseball_Blueprint_C_PlayScoreboardVideo_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetGameSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SetGameSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetGameSettings");
		
		AScramSportManagerBaseball_Blueprint_C_SetGameSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ChooseScrambleGroup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::ChooseScrambleGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ChooseScrambleGroup");
		
		AScramSportManagerBaseball_Blueprint_C_ChooseScrambleGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ActivateBattingTee
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::ActivateBattingTee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ActivateBattingTee");
		
		AScramSportManagerBaseball_Blueprint_C_ActivateBattingTee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HideIndicators
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::HideIndicators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HideIndicators");
		
		AScramSportManagerBaseball_Blueprint_C_HideIndicators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RequestAllowPitch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::RequestAllowPitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RequestAllowPitch");
		
		AScramSportManagerBaseball_Blueprint_C_RequestAllowPitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HandleInstrumentBroken
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABaseballInstrument*                         Instrument                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::HandleInstrumentBroken(class ABaseballInstrument* Instrument)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HandleInstrumentBroken");
		
		AScramSportManagerBaseball_Blueprint_C_HandleInstrumentBroken_Params params {};
		params.Instrument = Instrument;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnInstrumentSelector
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SpawnInstrumentSelector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnInstrumentSelector");
		
		AScramSportManagerBaseball_Blueprint_C_SpawnInstrumentSelector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetBattingMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UMaterialInstance*                           Material                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::GetBattingMaterial(class UMaterialInstance** Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetBattingMaterial");
		
		AScramSportManagerBaseball_Blueprint_C_GetBattingMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetFieldingMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UMaterialInstance*                           Material                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::GetFieldingMaterial(class UMaterialInstance** Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetFieldingMaterial");
		
		AScramSportManagerBaseball_Blueprint_C_GetFieldingMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RunnerScores
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::RunnerScores()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RunnerScores");
		
		AScramSportManagerBaseball_Blueprint_C_RunnerScores_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetWinningPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WinnerInt                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::GetWinningPlayer(int32_t* WinnerInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetWinningPlayer");
		
		AScramSportManagerBaseball_Blueprint_C_GetWinningPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WinnerInt != nullptr)
			*WinnerInt = params.WinnerInt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.EndGameCleanUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::EndGameCleanUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.EndGameCleanUp");
		
		AScramSportManagerBaseball_Blueprint_C_EndGameCleanUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnLocalHelper
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SpawnLocalHelper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnLocalHelper");
		
		AScramSportManagerBaseball_Blueprint_C_SpawnLocalHelper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ToggleTeamColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::ToggleTeamColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ToggleTeamColors");
		
		AScramSportManagerBaseball_Blueprint_C_ToggleTeamColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnTeamActors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FieldersOnly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SpawnTeamActors(bool FieldersOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnTeamActors");
		
		AScramSportManagerBaseball_Blueprint_C_SpawnTeamActors_Params params {};
		params.FieldersOnly = FieldersOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetupScoreboards
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BallsCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StrikesCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SetupScoreboards(int32_t BallsCount, int32_t StrikesCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetupScoreboards");
		
		AScramSportManagerBaseball_Blueprint_C_SetupScoreboards_Params params {};
		params.BallsCount = BallsCount;
		params.StrikesCount = StrikesCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.CleanUpGameElements
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::CleanUpGameElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.CleanUpGameElements");
		
		AScramSportManagerBaseball_Blueprint_C_CleanUpGameElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitcherScoring
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::PitcherScoring(int32_t score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitcherScoring");
		
		AScramSportManagerBaseball_Blueprint_C_PitcherScoring_Params params {};
		params.score = score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateOutsAndFreebies
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Outs                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Freebies                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Strikes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::UpdateOutsAndFreebies(int32_t Outs, int32_t Freebies, int32_t Strikes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateOutsAndFreebies");
		
		AScramSportManagerBaseball_Blueprint_C_UpdateOutsAndFreebies_Params params {};
		params.Outs = Outs;
		params.Freebies = Freebies;
		params.Strikes = Strikes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BatterScoring
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ScoreAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::BatterScoring(int32_t ScoreAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BatterScoring");
		
		AScramSportManagerBaseball_Blueprint_C_BatterScoring_Params params {};
		params.ScoreAmount = ScoreAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.TeleportPlayer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              TransitionReady                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              TransitionComplete                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		bool                                               UseTransitionDuration                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::TeleportPlayer(const class FScriptDelegate& TransitionReady, const class FScriptDelegate& TransitionComplete, bool UseTransitionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.TeleportPlayer");
		
		AScramSportManagerBaseball_Blueprint_C_TeleportPlayer_Params params {};
		params.TransitionReady = TransitionReady;
		params.TransitionComplete = TransitionComplete;
		params.UseTransitionDuration = UseTransitionDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ProgressGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::ProgressGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ProgressGame");
		
		AScramSportManagerBaseball_Blueprint_C_ProgressGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Initialize");
		
		AScramSportManagerBaseball_Blueprint_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnEquipmentAndAI
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SpawnEquipmentAndAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnEquipmentAndAI");
		
		AScramSportManagerBaseball_Blueprint_C_SpawnEquipmentAndAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnStrikezone
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SpawnStrikezone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnStrikezone");
		
		AScramSportManagerBaseball_Blueprint_C_SpawnStrikezone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiBatter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBaseballBatterAI*                      Batter                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SpawnAiBatter(class AScramBaseballBatterAI** Batter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiBatter");
		
		AScramSportManagerBaseball_Blueprint_C_SpawnAiBatter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Batter != nullptr)
			*Batter = params.Batter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiPitcher
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBaseballPitcherAI*                     Pitcher                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SpawnAiPitcher(class AScramBaseballPitcherAI** Pitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiPitcher");
		
		AScramSportManagerBaseball_Blueprint_C_SpawnAiPitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pitcher != nullptr)
			*Pitcher = params.Pitcher;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UserConstructionScript");
		
		AScramSportManagerBaseball_Blueprint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Timeline_OrganFade__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::Timeline_OrganFade__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Timeline_OrganFade__FinishedFunc");
		
		AScramSportManagerBaseball_Blueprint_C_Timeline_OrganFade__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Timeline_OrganFade__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::Timeline_OrganFade__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Timeline_OrganFade__UpdateFunc");
		
		AScramSportManagerBaseball_Blueprint_C_Timeline_OrganFade__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BaseballEvent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballEvent                                     BaseballEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::BaseballEvent(EBaseballEvent BaseballEvent, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BaseballEvent");
		
		AScramSportManagerBaseball_Blueprint_C_BaseballEvent_Params params {};
		params.BaseballEvent = BaseballEvent;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ReceiveBeginPlay");
		
		AScramSportManagerBaseball_Blueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterStrike
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::RegisterStrike()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterStrike");
		
		AScramSportManagerBaseball_Blueprint_C_RegisterStrike_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterOut
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewOuts                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlayUmpireOut                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PlayOrgan                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::RegisterOut(int32_t NewOuts, bool PlayUmpireOut, bool PlayOrgan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterOut");
		
		AScramSportManagerBaseball_Blueprint_C_RegisterOut_Params params {};
		params.NewOuts = NewOuts;
		params.PlayUmpireOut = PlayUmpireOut;
		params.PlayOrgan = PlayOrgan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HandleGameEnd
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::HandleGameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HandleGameEnd");
		
		AScramSportManagerBaseball_Blueprint_C_HandleGameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ReceiveEndPlay");
		
		AScramSportManagerBaseball_Blueprint_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BBGameIntroSequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::BBGameIntroSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BBGameIntroSequence");
		
		AScramSportManagerBaseball_Blueprint_C_BBGameIntroSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.LocalHelperMessageComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::LocalHelperMessageComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.LocalHelperMessageComplete");
		
		AScramSportManagerBaseball_Blueprint_C_LocalHelperMessageComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BeginInning
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::BeginInning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BeginInning");
		
		AScramSportManagerBaseball_Blueprint_C_BeginInning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetDominantHand
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DominantHand                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABB_Mitt_C*                                  Mitt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SetDominantHand(class AActor* DominantHand, class ABB_Mitt_C* Mitt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetDominantHand");
		
		AScramSportManagerBaseball_Blueprint_C_SetDominantHand_Params params {};
		params.DominantHand = DominantHand;
		params.Mitt = Mitt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnRunnerSpawned
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBaseballRunnerAI*                      runner                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::OnRunnerSpawned(class AScramBaseballRunnerAI* runner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnRunnerSpawned");
		
		AScramSportManagerBaseball_Blueprint_C_OnRunnerSpawned_Params params {};
		params.runner = runner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.StartOrgan
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::StartOrgan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.StartOrgan");
		
		AScramSportManagerBaseball_Blueprint_C_StartOrgan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.StopOrgan
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::StopOrgan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.StopOrgan");
		
		AScramSportManagerBaseball_Blueprint_C_StopOrgan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.CheckForPlayerBattingPosition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::CheckForPlayerBattingPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.CheckForPlayerBattingPosition");
		
		AScramSportManagerBaseball_Blueprint_C_CheckForPlayerBattingPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayerBatterReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::PlayerBatterReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayerBatterReady");
		
		AScramSportManagerBaseball_Blueprint_C_PlayerBatterReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BeginGame
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::BeginGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BeginGame");
		
		AScramSportManagerBaseball_Blueprint_C_BeginGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchTargetHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ScoreAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::PitchTargetHit(int32_t ScoreAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchTargetHit");
		
		AScramSportManagerBaseball_Blueprint_C_PitchTargetHit_Params params {};
		params.ScoreAmount = ScoreAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BatterHitOutfieldTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TargetID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::BatterHitOutfieldTarget(class AScramBall* Ball, int32_t TargetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BatterHitOutfieldTarget");
		
		AScramSportManagerBaseball_Blueprint_C_BatterHitOutfieldTarget_Params params {};
		params.Ball = Ball;
		params.TargetID = TargetID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SendRestartGame
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SendRestartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SendRestartGame");
		
		AScramSportManagerBaseball_Blueprint_C_SendRestartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateGameScore
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewP1TotalScore                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewP2TotalScore                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::UpdateGameScore(int32_t NewP1TotalScore, int32_t NewP2TotalScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateGameScore");
		
		AScramSportManagerBaseball_Blueprint_C_UpdateGameScore_Params params {};
		params.NewP1TotalScore = NewP1TotalScore;
		params.NewP2TotalScore = NewP2TotalScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SwitchSides
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TopOfTheInning                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentInning                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SwitchSides(bool TopOfTheInning, int32_t CurrentInning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SwitchSides");
		
		AScramSportManagerBaseball_Blueprint_C_SwitchSides_Params params {};
		params.TopOfTheInning = TopOfTheInning;
		params.CurrentInning = CurrentInning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Single
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::Single()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Single");
		
		AScramSportManagerBaseball_Blueprint_C_Single_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Double
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::Double()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Double");
		
		AScramSportManagerBaseball_Blueprint_C_Double_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Triple
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::Triple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Triple");
		
		AScramSportManagerBaseball_Blueprint_C_Triple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HomeRun
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               BasesLoaded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::HomeRun(bool BasesLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HomeRun");
		
		AScramSportManagerBaseball_Blueprint_C_HomeRun_Params params {};
		params.BasesLoaded = BasesLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayFirstPitchSFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::PlayFirstPitchSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayFirstPitchSFX");
		
		AScramSportManagerBaseball_Blueprint_C_PlayFirstPitchSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterCatch
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::RegisterCatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterCatch");
		
		AScramSportManagerBaseball_Blueprint_C_RegisterCatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterFoul
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::RegisterFoul()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterFoul");
		
		AScramSportManagerBaseball_Blueprint_C_RegisterFoul_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterBall
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::RegisterBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterBall");
		
		AScramSportManagerBaseball_Blueprint_C_RegisterBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateRunners
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewRunnerOnFirst                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewRunnerOnSecond                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewRunnerOnThird                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::UpdateRunners(bool NewRunnerOnFirst, bool NewRunnerOnSecond, bool NewRunnerOnThird)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateRunners");
		
		AScramSportManagerBaseball_Blueprint_C_UpdateRunners_Params params {};
		params.NewRunnerOnFirst = NewRunnerOnFirst;
		params.NewRunnerOnSecond = NewRunnerOnSecond;
		params.NewRunnerOnThird = NewRunnerOnThird;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::OnInstrumentSelected(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentSelected");
		
		AScramSportManagerBaseball_Blueprint_C_OnInstrumentSelected_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentBroken
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::OnInstrumentBroken(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentBroken");
		
		AScramSportManagerBaseball_Blueprint_C_OnInstrumentBroken_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PrepNewInning
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::PrepNewInning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PrepNewInning");
		
		AScramSportManagerBaseball_Blueprint_C_PrepNewInning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BrokenBat
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::BrokenBat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BrokenBat");
		
		AScramSportManagerBaseball_Blueprint_C_BrokenBat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NewInstrumentSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABaseballInstrument*                         Instrument                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::NewInstrumentSelected(class ABaseballInstrument* Instrument)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NewInstrumentSelected");
		
		AScramSportManagerBaseball_Blueprint_C_NewInstrumentSelected_Params params {};
		params.Instrument = Instrument;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.InstrumentSelected
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Instrument                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::InstrumentSelected(class UObject* Instrument)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.InstrumentSelected");
		
		AScramSportManagerBaseball_Blueprint_C_InstrumentSelected_Params params {};
		params.Instrument = Instrument;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentsSpawned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::OnInstrumentsSpawned(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentsSpawned");
		
		AScramSportManagerBaseball_Blueprint_C_OnInstrumentsSpawned_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowPauseInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPaused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WasPausedByMe                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::ShowPauseInfo(bool IsPaused, bool WasPausedByMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowPauseInfo");
		
		AScramSportManagerBaseball_Blueprint_C_ShowPauseInfo_Params params {};
		params.IsPaused = IsPaused;
		params.WasPausedByMe = WasPausedByMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowPauseBubble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPaused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::ShowPauseBubble(bool IsPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowPauseBubble");
		
		AScramSportManagerBaseball_Blueprint_C_ShowPauseBubble_Params params {};
		params.IsPaused = IsPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGameResume
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WasPausedByMe                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::OnGameResume(bool WasPausedByMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGameResume");
		
		AScramSportManagerBaseball_Blueprint_C_OnGameResume_Params params {};
		params.WasPausedByMe = WasPausedByMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGamePause
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WasPausedByMe                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::OnGamePause(bool WasPausedByMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGamePause");
		
		AScramSportManagerBaseball_Blueprint_C_OnGamePause_Params params {};
		params.WasPausedByMe = WasPausedByMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnInitialActors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SpawnInitialActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnInitialActors");
		
		AScramSportManagerBaseball_Blueprint_C_SpawnInitialActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GameReadyToBegin
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::GameReadyToBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GameReadyToBegin");
		
		AScramSportManagerBaseball_Blueprint_C_GameReadyToBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetSetupScoreboards
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BallsCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StrikesCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::NetSetupScoreboards(int32_t BallsCount, int32_t StrikesCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetSetupScoreboards");
		
		AScramSportManagerBaseball_Blueprint_C_NetSetupScoreboards_Params params {};
		params.BallsCount = BallsCount;
		params.StrikesCount = StrikesCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterStrikeout
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::RegisterStrikeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterStrikeout");
		
		AScramSportManagerBaseball_Blueprint_C_RegisterStrikeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetUpdateOutsAndFreebies
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Outs                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Freebies                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Strikes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::NetUpdateOutsAndFreebies(int32_t Outs, int32_t Freebies, int32_t Strikes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetUpdateOutsAndFreebies");
		
		AScramSportManagerBaseball_Blueprint_C_NetUpdateOutsAndFreebies_Params params {};
		params.Outs = Outs;
		params.Freebies = Freebies;
		params.Strikes = Strikes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ResetCount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::ResetCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ResetCount");
		
		AScramSportManagerBaseball_Blueprint_C_ResetCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchingTargetsUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TL                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TR                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BL                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BR                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::PitchingTargetsUpdated(bool TL, bool TR, bool BL, bool BR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchingTargetsUpdated");
		
		AScramSportManagerBaseball_Blueprint_C_PitchingTargetsUpdated_Params params {};
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
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchingTargetHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballScrambleTargetLocations                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::PitchingTargetHit(EBaseballScrambleTargetLocations Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchingTargetHit");
		
		AScramSportManagerBaseball_Blueprint_C_PitchingTargetHit_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetDisplayPopup
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::NetDisplayPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetDisplayPopup");
		
		AScramSportManagerBaseball_Blueprint_C_NetDisplayPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetAILook
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAvatarLook                                 AvatarLook                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SetAILook(const struct FAvatarLook& AvatarLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetAILook");
		
		AScramSportManagerBaseball_Blueprint_C_SetAILook_Params params {};
		params.AvatarLook = AvatarLook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BB_ChallengeGameStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::BB_ChallengeGameStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BB_ChallengeGameStart");
		
		AScramSportManagerBaseball_Blueprint_C_BB_ChallengeGameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiPitcherDelayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SpawnAiPitcherDelayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiPitcherDelayed");
		
		AScramSportManagerBaseball_Blueprint_C_SpawnAiPitcherDelayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiBatterDelayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::SpawnAiBatterDelayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiBatterDelayed");
		
		AScramSportManagerBaseball_Blueprint_C_SpawnAiBatterDelayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayErrorSfx
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::PlayErrorSfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayErrorSfx");
		
		AScramSportManagerBaseball_Blueprint_C_PlayErrorSfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.LoadBaseballState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            VisitorsScore                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HomeScore                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Inning                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TopOfInning                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FirstPitchOfInning                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Outs                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Strikes                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      BatterInstrument                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		TArray<struct FMittSpawnInfo>                      PitcherScrambleOptions                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AScramSportManagerBaseball_Blueprint_C::LoadBaseballState(int32_t VisitorsScore, int32_t HomeScore, int32_t Inning, bool TopOfInning, bool FirstPitchOfInning, int32_t Outs, int32_t Strikes, class UClass* BatterInstrument, TArray<struct FMittSpawnInfo> PitcherScrambleOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.LoadBaseballState");
		
		AScramSportManagerBaseball_Blueprint_C_LoadBaseballState_Params params {};
		params.VisitorsScore = VisitorsScore;
		params.HomeScore = HomeScore;
		params.Inning = Inning;
		params.TopOfInning = TopOfInning;
		params.FirstPitchOfInning = FirstPitchOfInning;
		params.Outs = Outs;
		params.Strikes = Strikes;
		params.BatterInstrument = BatterInstrument;
		params.PitcherScrambleOptions = PitcherScrambleOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ServerReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::ServerReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ServerReady");
		
		AScramSportManagerBaseball_Blueprint_C_ServerReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Multi_UpdateScoreboardInning
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::Multi_UpdateScoreboardInning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Multi_UpdateScoreboardInning");
		
		AScramSportManagerBaseball_Blueprint_C_Multi_UpdateScoreboardInning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Multi_SetInning
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Inning                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Top                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramSportManagerBaseball_Blueprint_C::Multi_SetInning(int32_t Inning, bool Top)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Multi_SetInning");
		
		AScramSportManagerBaseball_Blueprint_C_Multi_SetInning_Params params {};
		params.Inning = Inning;
		params.Top = Top;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGameDone
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::OnGameDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGameDone");
		
		AScramSportManagerBaseball_Blueprint_C_OnGameDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowMitt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::ShowMitt(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowMitt");
		
		AScramSportManagerBaseball_Blueprint_C_ShowMitt_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetDisablePause
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::NetDisablePause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetDisablePause");
		
		AScramSportManagerBaseball_Blueprint_C_NetDisablePause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.DisablePause
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::DisablePause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.DisablePause");
		
		AScramSportManagerBaseball_Blueprint_C_DisablePause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShutDown_Bat_PBP
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::ShutDown_Bat_PBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShutDown_Bat_PBP");
		
		AScramSportManagerBaseball_Blueprint_C_ShutDown_Bat_PBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ExecuteUbergraph_ScramSportManagerBaseball_Blueprint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::ExecuteUbergraph_ScramSportManagerBaseball_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ExecuteUbergraph_ScramSportManagerBaseball_Blueprint");
		
		AScramSportManagerBaseball_Blueprint_C_ExecuteUbergraph_ScramSportManagerBaseball_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GameCompleted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LocalPlayerVictory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AwayScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HomeScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSportManagerBaseball_Blueprint_C::GameCompleted__DelegateSignature(bool LocalPlayerVictory, int32_t AwayScore, int32_t HomeScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GameCompleted__DelegateSignature");
		
		AScramSportManagerBaseball_Blueprint_C_GameCompleted__DelegateSignature_Params params {};
		params.LocalPlayerVictory = LocalPlayerVictory;
		params.AwayScore = AwayScore;
		params.HomeScore = HomeScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnSidesSwitchedDispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSportManagerBaseball_Blueprint_C::OnSidesSwitchedDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnSidesSwitchedDispatcher__DelegateSignature");
		
		AScramSportManagerBaseball_Blueprint_C_OnSidesSwitchedDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramSportManagerBaseball_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramSportManagerBaseball_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C");
		return ptr;
	}

}


