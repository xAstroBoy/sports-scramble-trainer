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
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.FinalizeChallengeScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RunnersYetToScore                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::FinalizeChallengeScore(int32_t* RunnersYetToScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.FinalizeChallengeScore");
		
		AHRD_Challenge_Manager_C_FinalizeChallengeScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RunnersYetToScore != nullptr)
			*RunnersYetToScore = params.RunnersYetToScore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TryLaunchBall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::TryLaunchBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TryLaunchBall");
		
		AHRD_Challenge_Manager_C_TryLaunchBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateLauncherSpeed
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MinSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::UpdateLauncherSpeed(float* MinSpeed, float* MaxSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateLauncherSpeed");
		
		AHRD_Challenge_Manager_C_UpdateLauncherSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinSpeed != nullptr)
			*MinSpeed = params.MinSpeed;
		if (MaxSpeed != nullptr)
			*MaxSpeed = params.MaxSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateScoreboardNames
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::UpdateScoreboardNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateScoreboardNames");
		
		AHRD_Challenge_Manager_C_UpdateScoreboardNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnLogoPopup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::SpawnLogoPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnLogoPopup");
		
		AHRD_Challenge_Manager_C_SpawnLogoPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayScoreboardVideo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBB_ScoreboardVideos                               Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::PlayScoreboardVideo(EBB_ScoreboardVideos Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayScoreboardVideo");
		
		AHRD_Challenge_Manager_C_PlayScoreboardVideo_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SetGameSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::SetGameSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SetGameSettings");
		
		AHRD_Challenge_Manager_C_SetGameSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.HideIndicators
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::HideIndicators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.HideIndicators");
		
		AHRD_Challenge_Manager_C_HideIndicators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetBattingMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UMaterialInstance*                           Material                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::GetBattingMaterial(class UMaterialInstance** Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetBattingMaterial");
		
		AHRD_Challenge_Manager_C_GetBattingMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetFieldingMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UMaterialInstance*                           Material                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::GetFieldingMaterial(class UMaterialInstance** Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetFieldingMaterial");
		
		AHRD_Challenge_Manager_C_GetFieldingMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RunnerScores
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::RunnerScores()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RunnerScores");
		
		AHRD_Challenge_Manager_C_RunnerScores_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetWinningPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WinnerInt                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::GetWinningPlayer(int32_t* WinnerInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetWinningPlayer");
		
		AHRD_Challenge_Manager_C_GetWinningPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WinnerInt != nullptr)
			*WinnerInt = params.WinnerInt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.EndGameCleanUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::EndGameCleanUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.EndGameCleanUp");
		
		AHRD_Challenge_Manager_C_EndGameCleanUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnLocalHelper
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::SpawnLocalHelper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnLocalHelper");
		
		AHRD_Challenge_Manager_C_SpawnLocalHelper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ToggleTeamColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::ToggleTeamColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ToggleTeamColors");
		
		AHRD_Challenge_Manager_C_ToggleTeamColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnTeamActors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FieldersOnly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHRD_Challenge_Manager_C::SpawnTeamActors(bool FieldersOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnTeamActors");
		
		AHRD_Challenge_Manager_C_SpawnTeamActors_Params params {};
		params.FieldersOnly = FieldersOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SetupScoreboards
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BallsCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StrikesCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::SetupScoreboards(int32_t BallsCount, int32_t StrikesCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SetupScoreboards");
		
		AHRD_Challenge_Manager_C_SetupScoreboards_Params params {};
		params.BallsCount = BallsCount;
		params.StrikesCount = StrikesCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.CleanUpGameElements
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::CleanUpGameElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.CleanUpGameElements");
		
		AHRD_Challenge_Manager_C_CleanUpGameElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PitcherScoring
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::PitcherScoring(int32_t score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PitcherScoring");
		
		AHRD_Challenge_Manager_C_PitcherScoring_Params params {};
		params.score = score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BatterScoring
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ScoreAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::BatterScoring(int32_t ScoreAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BatterScoring");
		
		AHRD_Challenge_Manager_C_BatterScoring_Params params {};
		params.ScoreAmount = ScoreAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TeleportPlayer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              TransitionReady                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              TransitionComplete                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		bool                                               UseTransitionDuration                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHRD_Challenge_Manager_C::TeleportPlayer(const class FScriptDelegate& TransitionReady, const class FScriptDelegate& TransitionComplete, bool UseTransitionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TeleportPlayer");
		
		AHRD_Challenge_Manager_C_TeleportPlayer_Params params {};
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
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Initialize");
		
		AHRD_Challenge_Manager_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnAndSetEquipment
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InstrumentClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::SpawnAndSetEquipment(class UClass* BallClass, class UClass* InstrumentClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnAndSetEquipment");
		
		AHRD_Challenge_Manager_C_SpawnAndSetEquipment_Params params {};
		params.BallClass = BallClass;
		params.InstrumentClass = InstrumentClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnAiPitcher
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      PitcherActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::SpawnAiPitcher(class AActor** PitcherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnAiPitcher");
		
		AHRD_Challenge_Manager_C_SpawnAiPitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PitcherActor != nullptr)
			*PitcherActor = params.PitcherActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UserConstructionScript");
		
		AHRD_Challenge_Manager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BaseballEvent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballEvent                                     BaseballEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::BaseballEvent(EBaseballEvent BaseballEvent, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BaseballEvent");
		
		AHRD_Challenge_Manager_C_BaseballEvent_Params params {};
		params.BaseballEvent = BaseballEvent;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ReceiveBeginPlay");
		
		AHRD_Challenge_Manager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ReceiveEndPlay");
		
		AHRD_Challenge_Manager_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.LocalHelperMessageComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::LocalHelperMessageComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.LocalHelperMessageComplete");
		
		AHRD_Challenge_Manager_C_LocalHelperMessageComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnRunnerSpawned
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBaseballRunnerAI*                      runner                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::OnRunnerSpawned(class AScramBaseballRunnerAI* runner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnRunnerSpawned");
		
		AHRD_Challenge_Manager_C_OnRunnerSpawned_Params params {};
		params.runner = runner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.CheckForPlayerBattingPosition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::CheckForPlayerBattingPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.CheckForPlayerBattingPosition");
		
		AHRD_Challenge_Manager_C_CheckForPlayerBattingPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerBatterReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::PlayerBatterReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerBatterReady");
		
		AHRD_Challenge_Manager_C_PlayerBatterReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BeginGame
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::BeginGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BeginGame");
		
		AHRD_Challenge_Manager_C_BeginGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateGameScore
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewP1TotalScore                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewP2TotalScore                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::UpdateGameScore(int32_t NewP1TotalScore, int32_t NewP2TotalScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateGameScore");
		
		AHRD_Challenge_Manager_C_UpdateGameScore_Params params {};
		params.NewP1TotalScore = NewP1TotalScore;
		params.NewP2TotalScore = NewP2TotalScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Single
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::Single()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Single");
		
		AHRD_Challenge_Manager_C_Single_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Double
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::Double()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Double");
		
		AHRD_Challenge_Manager_C_Double_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Triple
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::Triple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Triple");
		
		AHRD_Challenge_Manager_C_Triple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.HomeRun
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               BasesLoaded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHRD_Challenge_Manager_C::HomeRun(bool BasesLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.HomeRun");
		
		AHRD_Challenge_Manager_C_HomeRun_Params params {};
		params.BasesLoaded = BasesLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RegisterCatch
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::RegisterCatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RegisterCatch");
		
		AHRD_Challenge_Manager_C_RegisterCatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RegisterFoul
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::RegisterFoul()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RegisterFoul");
		
		AHRD_Challenge_Manager_C_RegisterFoul_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateRunners
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewRunnerOnFirst                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewRunnerOnSecond                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewRunnerOnThird                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHRD_Challenge_Manager_C::UpdateRunners(bool NewRunnerOnFirst, bool NewRunnerOnSecond, bool NewRunnerOnThird)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateRunners");
		
		AHRD_Challenge_Manager_C_UpdateRunners_Params params {};
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
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ShowPauseInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPaused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WasPausedByMe                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHRD_Challenge_Manager_C::ShowPauseInfo(bool IsPaused, bool WasPausedByMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ShowPauseInfo");
		
		AHRD_Challenge_Manager_C_ShowPauseInfo_Params params {};
		params.IsPaused = IsPaused;
		params.WasPausedByMe = WasPausedByMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ShowPauseBubble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPaused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHRD_Challenge_Manager_C::ShowPauseBubble(bool IsPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ShowPauseBubble");
		
		AHRD_Challenge_Manager_C_ShowPauseBubble_Params params {};
		params.IsPaused = IsPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnGameResume
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WasPausedByMe                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHRD_Challenge_Manager_C::OnGameResume(bool WasPausedByMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnGameResume");
		
		AHRD_Challenge_Manager_C_OnGameResume_Params params {};
		params.WasPausedByMe = WasPausedByMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnGamePause
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WasPausedByMe                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHRD_Challenge_Manager_C::OnGamePause(bool WasPausedByMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnGamePause");
		
		AHRD_Challenge_Manager_C_OnGamePause_Params params {};
		params.WasPausedByMe = WasPausedByMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnInitialActors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::SpawnInitialActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnInitialActors");
		
		AHRD_Challenge_Manager_C_SpawnInitialActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.NetSetupScoreboards
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BallsCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StrikesCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::NetSetupScoreboards(int32_t BallsCount, int32_t StrikesCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.NetSetupScoreboards");
		
		AHRD_Challenge_Manager_C_NetSetupScoreboards_Params params {};
		params.BallsCount = BallsCount;
		params.StrikesCount = StrikesCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.NetDisplayPopup
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::NetDisplayPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.NetDisplayPopup");
		
		AHRD_Challenge_Manager_C_NetDisplayPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.EndGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ScoreDelay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::EndGame(float ScoreDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.EndGame");
		
		AHRD_Challenge_Manager_C_EndGame_Params params {};
		params.ScoreDelay = ScoreDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GameRunLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::GameRunLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GameRunLoop");
		
		AHRD_Challenge_Manager_C_GameRunLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ExecuteUbergraph_HRD_Challenge_Manager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::ExecuteUbergraph_HRD_Challenge_Manager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ExecuteUbergraph_HRD_Challenge_Manager");
		
		AHRD_Challenge_Manager_C_ExecuteUbergraph_HRD_Challenge_Manager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RunnersReady__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::RunnersReady__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RunnersReady__DelegateSignature");
		
		AHRD_Challenge_Manager_C_RunnersReady__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerHitHomerun__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::PlayerHitHomerun__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerHitHomerun__DelegateSignature");
		
		AHRD_Challenge_Manager_C_PlayerHitHomerun__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerScoredRun__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::PlayerScoredRun__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerScoredRun__DelegateSignature");
		
		AHRD_Challenge_Manager_C_PlayerScoredRun__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TeleportComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AHRD_Challenge_Manager_C::TeleportComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TeleportComplete__DelegateSignature");
		
		AHRD_Challenge_Manager_C_TeleportComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GameCompleted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlayerScore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HomeRunCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHRD_Challenge_Manager_C::GameCompleted__DelegateSignature(int32_t PlayerScore, int32_t HomeRunCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GameCompleted__DelegateSignature");
		
		AHRD_Challenge_Manager_C_GameCompleted__DelegateSignature_Params params {};
		params.PlayerScore = PlayerScore;
		params.HomeRunCount = HomeRunCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHRD_Challenge_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHRD_Challenge_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HRD_Challenge_Manager.HRD_Challenge_Manager_C");
		return ptr;
	}

}


