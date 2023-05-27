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
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.AddActorToGameElementList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Train_Base_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.AddActorToGameElementList");
		
		ABB_Train_Base_C_AddActorToGameElementList_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Callback != nullptr)
			*Callback = params.Callback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.Shutdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Train_Base_C::Shutdown(bool* ShutdownBegun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.Shutdown");
		
		ABB_Train_Base_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShutdownBegun != nullptr)
			*ShutdownBegun = params.ShutdownBegun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchTargetListener
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BB_SpawnPitchTargetListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchTargetListener");
		
		ABB_Train_Base_C_BB_SpawnPitchTargetListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_TNG_SpawnNeverMissBatter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BB_TNG_SpawnNeverMissBatter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_TNG_SpawnNeverMissBatter");
		
		ABB_Train_Base_C_BB_TNG_SpawnNeverMissBatter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_TNG_TrackBasketballBounces
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABB_BasketBall_C*                            Basketball                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DestroyBasketball                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Train_Base_C::BB_TNG_TrackBasketballBounces(class ABB_BasketBall_C* Basketball, bool* DestroyBasketball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_TNG_TrackBasketballBounces");
		
		ABB_Train_Base_C_BB_TNG_TrackBasketballBounces_Params params {};
		params.Basketball = Basketball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DestroyBasketball != nullptr)
			*DestroyBasketball = params.DestroyBasketball;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchingEquipment
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BB_SpawnPitchingEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchingEquipment");
		
		ABB_Train_Base_C_BB_SpawnPitchingEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_SpawnBBScrambleDisplay
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BB_SpawnBBScrambleDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnBBScrambleDisplay");
		
		ABB_Train_Base_C_BB_SpawnBBScrambleDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_SpawnLauncherBarrier
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BB_SpawnLauncherBarrier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnLauncherBarrier");
		
		ABB_Train_Base_C_BB_SpawnLauncherBarrier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_SpawnScrambleTargets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BB_SpawnScrambleTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnScrambleTargets");
		
		ABB_Train_Base_C_BB_SpawnScrambleTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_GetBattingSide
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBattingSide                                       Side                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::BB_GetBattingSide(EBattingSide* Side)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_GetBattingSide");
		
		ABB_Train_Base_C_BB_GetBattingSide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Side != nullptr)
			*Side = params.Side;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_UpdateLargeScoreboardScore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Player2                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Train_Base_C::BB_UpdateLargeScoreboardScore(int32_t score, bool Player2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_UpdateLargeScoreboardScore");
		
		ABB_Train_Base_C_BB_UpdateLargeScoreboardScore_Params params {};
		params.score = score;
		params.Player2 = Player2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_TeleportBatter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BB_TeleportBatter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_TeleportBatter");
		
		ABB_Train_Base_C_BB_TeleportBatter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_SpawnOutfieldTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BB_SpawnOutfieldTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnOutfieldTarget");
		
		ABB_Train_Base_C_BB_SpawnOutfieldTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_SpawnWindows
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowTargetScore                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Train_Base_C::BB_SpawnWindows(bool ShowTargetScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnWindows");
		
		ABB_Train_Base_C_BB_SpawnWindows_Params params {};
		params.ShowTargetScore = ShowTargetScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_SpawnBattingCage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BB_SpawnBattingCage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnBattingCage");
		
		ABB_Train_Base_C_BB_SpawnBattingCage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_SpawnLauncher
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BB_SpawnLauncher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnLauncher");
		
		ABB_Train_Base_C_BB_SpawnLauncher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BB_SpawnPitchTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchTarget");
		
		ABB_Train_Base_C_BB_SpawnPitchTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_MakeStrikezoneVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BB_MakeStrikezoneVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_MakeStrikezoneVisible");
		
		ABB_Train_Base_C_BB_MakeStrikezoneVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_UpdateTrainingScoreboardCount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::BB_UpdateTrainingScoreboardCount(int32_t score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_UpdateTrainingScoreboardCount");
		
		ABB_Train_Base_C_BB_UpdateTrainingScoreboardCount_Params params {};
		params.score = score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_UpdateTrainingScoreboardScore
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::BB_UpdateTrainingScoreboardScore(int32_t score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_UpdateTrainingScoreboardScore");
		
		ABB_Train_Base_C_BB_UpdateTrainingScoreboardScore_Params params {};
		params.score = score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_CalculateEndScore
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BB_CalculateEndScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_CalculateEndScore");
		
		ABB_Train_Base_C_BB_CalculateEndScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.SpawnPitchingEquipment_DEPRECATED
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::SpawnPitchingEquipment_DEPRECATED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.SpawnPitchingEquipment_DEPRECATED");
		
		ABB_Train_Base_C_SpawnPitchingEquipment_DEPRECATED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.ClearScoreboards
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::ClearScoreboards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.ClearScoreboards");
		
		ABB_Train_Base_C_ClearScoreboards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.Initialize");
		
		ABB_Train_Base_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.UserConstructionScript");
		
		ABB_Train_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.ShowScoreboardAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBB_ScoreboardVideos                               Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::ShowScoreboardAnimation(EBB_ScoreboardVideos Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.ShowScoreboardAnimation");
		
		ABB_Train_Base_C_ShowScoreboardAnimation_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.SetScoreMaterialAndFont
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::SetScoreMaterialAndFont(int32_t FontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.SetScoreMaterialAndFont");
		
		ABB_Train_Base_C_SetScoreMaterialAndFont_Params params {};
		params.FontSize = FontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.SetScoreVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::SetScoreVisibility(ESlateVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.SetScoreVisibility");
		
		ABB_Train_Base_C_SetScoreVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.AttachTrainingScoreboard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::AttachTrainingScoreboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.AttachTrainingScoreboard");
		
		ABB_Train_Base_C_AttachTrainingScoreboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BindToScoring
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BindToScoring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BindToScoring");
		
		ABB_Train_Base_C_BindToScoring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.PlayerHitSingle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::PlayerHitSingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PlayerHitSingle");
		
		ABB_Train_Base_C_PlayerHitSingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.PlayerHitDouble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::PlayerHitDouble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PlayerHitDouble");
		
		ABB_Train_Base_C_PlayerHitDouble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.PlayerHitTriple
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::PlayerHitTriple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PlayerHitTriple");
		
		ABB_Train_Base_C_PlayerHitTriple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.PlayerHitHomerun
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               BasesLoaded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Train_Base_C::PlayerHitHomerun(bool BasesLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PlayerHitHomerun");
		
		ABB_Train_Base_C_PlayerHitHomerun_Params params {};
		params.BasesLoaded = BasesLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.UnbindScoring
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::UnbindScoring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.UnbindScoring");
		
		ABB_Train_Base_C_UnbindScoring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.TrainingTargetHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBaseballScrambleTargetLocations                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::TrainingTargetHit(EBaseballScrambleTargetLocations Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.TrainingTargetHit");
		
		ABB_Train_Base_C_TrainingTargetHit_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_OutfieldTargetHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TargetID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::BB_OutfieldTargetHit(class AScramBall* Ball, int32_t TargetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_OutfieldTargetHit");
		
		ABB_Train_Base_C_BB_OutfieldTargetHit_Params params {};
		params.Ball = Ball;
		params.TargetID = TargetID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_BallLaunched
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      LaunchedBall                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::BB_BallLaunched(class AActor* LaunchedBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_BallLaunched");
		
		ABB_Train_Base_C_BB_BallLaunched_Params params {};
		params.LaunchedBall = LaunchedBall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.Strikezone_Strike
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::Strikezone_Strike()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.Strikezone_Strike");
		
		ABB_Train_Base_C_Strikezone_Strike_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.Strikezone_Ball
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::Strikezone_Ball()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.Strikezone_Ball");
		
		ABB_Train_Base_C_Strikezone_Ball_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.SportMgr_CatcherThrewBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABaseballBall*                               Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::SportMgr_CatcherThrewBall(class ABaseballBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.SportMgr_CatcherThrewBall");
		
		ABB_Train_Base_C_SportMgr_CatcherThrewBall_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.SportMgr_PitcherReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::SportMgr_PitcherReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.SportMgr_PitcherReady");
		
		ABB_Train_Base_C_SportMgr_PitcherReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.HitFloorCollision
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABB_Ball_Base_C*                             Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::HitFloorCollision(class ABB_Ball_Base_C* Ball, const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.HitFloorCollision");
		
		ABB_Train_Base_C_HitFloorCollision_Params params {};
		params.Ball = Ball;
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.CatcherCaughtBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::CatcherCaughtBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.CatcherCaughtBall");
		
		ABB_Train_Base_C_CatcherCaughtBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.PitchTargetHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::PitchTargetHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PitchTargetHit");
		
		ABB_Train_Base_C_PitchTargetHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Train_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.ReceiveBeginPlay");
		
		ABB_Train_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.EndOfGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::EndOfGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.EndOfGame");
		
		ABB_Train_Base_C_EndOfGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.PlayerMoved
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::PlayerMoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PlayerMoved");
		
		ABB_Train_Base_C_PlayerMoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.NoTeleport
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::NoTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.NoTeleport");
		
		ABB_Train_Base_C_NoTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.ReadyForTraining
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::ReadyForTraining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.ReadyForTraining");
		
		ABB_Train_Base_C_ReadyForTraining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_EquipmentGrabbed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DominantHand                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABB_Mitt_C*                                  Mitt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::BB_EquipmentGrabbed(class AActor* DominantHand, class ABB_Mitt_C* Mitt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_EquipmentGrabbed");
		
		ABB_Train_Base_C_BB_EquipmentGrabbed_Params params {};
		params.DominantHand = DominantHand;
		params.Mitt = Mitt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.PitcherCaughtSomething
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::PitcherCaughtSomething(class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PitcherCaughtSomething");
		
		ABB_Train_Base_C_PitcherCaughtSomething_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.BB_ResetScoreboards
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::BB_ResetScoreboards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.BB_ResetScoreboards");
		
		ABB_Train_Base_C_BB_ResetScoreboards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.LargeScoreboard_TrainingProgress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::LargeScoreboard_TrainingProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.LargeScoreboard_TrainingProgress");
		
		ABB_Train_Base_C_LargeScoreboard_TrainingProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.PitcherMittReleasedBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TouchedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        ButtonReleased                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::PitcherMittReleasedBall(class AActor* TouchedActor, const struct FKey& ButtonReleased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.PitcherMittReleasedBall");
		
		ABB_Train_Base_C_PitcherMittReleasedBall_Params params {};
		params.TouchedActor = TouchedActor;
		params.ButtonReleased = ButtonReleased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.OpenTravelCapsule
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::OpenTravelCapsule(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.OpenTravelCapsule");
		
		ABB_Train_Base_C_OpenTravelCapsule_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.CloseTravelCapsule
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Train_Base_C::CloseTravelCapsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.CloseTravelCapsule");
		
		ABB_Train_Base_C_CloseTravelCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Train_Base.BB_Train_Base_C.ExecuteUbergraph_BB_Train_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Train_Base_C::ExecuteUbergraph_BB_Train_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Train_Base.BB_Train_Base_C.ExecuteUbergraph_BB_Train_Base");
		
		ABB_Train_Base_C_ExecuteUbergraph_BB_Train_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Train_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Train_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Train_Base.BB_Train_Base_C");
		return ptr;
	}

}


