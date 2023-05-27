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
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.AddActorToGameElementList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Challenge_Base_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.AddActorToGameElementList");
		
		ABB_Challenge_Base_C_AddActorToGameElementList_Params params {};
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
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.Shutdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Challenge_Base_C::Shutdown(bool* ShutdownBegun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.Shutdown");
		
		ABB_Challenge_Base_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShutdownBegun != nullptr)
			*ShutdownBegun = params.ShutdownBegun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_05_SportManagerPlayerPitching
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_Base_C::BB_CHG_05_SportManagerPlayerPitching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_05_SportManagerPlayerPitching");
		
		ABB_Challenge_Base_C_BB_CHG_05_SportManagerPlayerPitching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_UpdateScore
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_Base_C::BB_CHG_UpdateScore(int32_t score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_UpdateScore");
		
		ABB_Challenge_Base_C_BB_CHG_UpdateScore_Params params {};
		params.score = score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SpawnSportManagerWithAI
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OverrideBattingSkill                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EScramSkill                                        OverrideSkill                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_Base_C::BB_CHG_SpawnSportManagerWithAI(bool OverrideBattingSkill, EScramSkill OverrideSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SpawnSportManagerWithAI");
		
		ABB_Challenge_Base_C_BB_CHG_SpawnSportManagerWithAI_Params params {};
		params.OverrideBattingSkill = OverrideBattingSkill;
		params.OverrideSkill = OverrideSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SwapBatIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InstrumentClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_Base_C::BB_CHG_SwapBatIcon(class UClass* InstrumentClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SwapBatIcon");
		
		ABB_Challenge_Base_C_BB_CHG_SwapBatIcon_Params params {};
		params.InstrumentClass = InstrumentClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_GetBatList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_Base_C::BB_CHG_GetBatList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_GetBatList");
		
		ABB_Challenge_Base_C_BB_CHG_GetBatList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_CalculateEndScore
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Countdown                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentScore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TargetScore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_Base_C::BB_CHG_CalculateEndScore(bool Countdown, int32_t CurrentScore, int32_t TargetScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_CalculateEndScore");
		
		ABB_Challenge_Base_C_BB_CHG_CalculateEndScore_Params params {};
		params.Countdown = Countdown;
		params.CurrentScore = CurrentScore;
		params.TargetScore = TargetScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SwapBallIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_Base_C::BB_CHG_SwapBallIcon(class UClass* BallClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SwapBallIcon");
		
		ABB_Challenge_Base_C_BB_CHG_SwapBallIcon_Params params {};
		params.BallClass = BallClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_GetBallList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_Base_C::BB_CHG_GetBallList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_GetBallList");
		
		ABB_Challenge_Base_C_BB_CHG_GetBallList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_Base_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.Initialize");
		
		ABB_Challenge_Base_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.UserConstructionScript");
		
		ABB_Challenge_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.OnLoaded_826C3EA940CB27C0854669A32DADB5D4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_Base_C::OnLoaded_826C3EA940CB27C0854669A32DADB5D4(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.OnLoaded_826C3EA940CB27C0854669A32DADB5D4");
		
		ABB_Challenge_Base_C_OnLoaded_826C3EA940CB27C0854669A32DADB5D4_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_ShowScoreboardAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBB_ScoreboardVideos                               Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_Base_C::BB_CHG_ShowScoreboardAnimation(EBB_ScoreboardVideos Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_ShowScoreboardAnimation");
		
		ABB_Challenge_Base_C_BB_CHG_ShowScoreboardAnimation_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SetScoreMaterialAndFont
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_Base_C::BB_CHG_SetScoreMaterialAndFont(int32_t FontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SetScoreMaterialAndFont");
		
		ABB_Challenge_Base_C_BB_CHG_SetScoreMaterialAndFont_Params params {};
		params.FontSize = FontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SetScoreVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_Base_C::BB_CHG_SetScoreVisibility(ESlateVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SetScoreVisibility");
		
		ABB_Challenge_Base_C_BB_CHG_SetScoreVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_AttachTrainingScoreboard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_Base_C::BB_CHG_AttachTrainingScoreboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_AttachTrainingScoreboard");
		
		ABB_Challenge_Base_C_BB_CHG_AttachTrainingScoreboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.SetScoreTimerTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_Base_C::SetScoreTimerTime(int32_t Seconds, int32_t FontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.SetScoreTimerTime");
		
		ABB_Challenge_Base_C_SetScoreTimerTime_Params params {};
		params.Seconds = Seconds;
		params.FontSize = FontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.AttachTopTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_Base_C::AttachTopTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.AttachTopTimer");
		
		ABB_Challenge_Base_C_AttachTopTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BaseballGameCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LocalPlayerVictory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AwayScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HomeScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_Base_C::BaseballGameCompleted(bool LocalPlayerVictory, int32_t AwayScore, int32_t HomeScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BaseballGameCompleted");
		
		ABB_Challenge_Base_C_BaseballGameCompleted_Params params {};
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
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Challenge_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.ReceiveBeginPlay");
		
		ABB_Challenge_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.EndOfGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_Base_C::EndOfGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.EndOfGame");
		
		ABB_Challenge_Base_C_EndOfGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.ShowBaseballBallIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_Base_C::ShowBaseballBallIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.ShowBaseballBallIcon");
		
		ABB_Challenge_Base_C_ShowBaseballBallIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_StartIntroCadence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseChallengeMusic                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseCountdown                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HomeTeam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Challenge_Base_C::BB_StartIntroCadence(bool UseChallengeMusic, bool UseCountdown, bool HomeTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_StartIntroCadence");
		
		ABB_Challenge_Base_C_BB_StartIntroCadence_Params params {};
		params.UseChallengeMusic = UseChallengeMusic;
		params.UseCountdown = UseCountdown;
		params.HomeTeam = HomeTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_TriggerCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_Base_C::BB_TriggerCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_TriggerCountdown");
		
		ABB_Challenge_Base_C_BB_TriggerCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.ShowBaseballInstrumentIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_Base_C::ShowBaseballInstrumentIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.ShowBaseballInstrumentIcon");
		
		ABB_Challenge_Base_C_ShowBaseballInstrumentIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.BB_ShowInstrumentAndBallIcons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBB_ScramIconSetting                               Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_Base_C::BB_ShowInstrumentAndBallIcons(EBB_ScramIconSetting Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_ShowInstrumentAndBallIcons");
		
		ABB_Challenge_Base_C_BB_ShowInstrumentAndBallIcons_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.TriggerAlternateCadence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_Base_C::TriggerAlternateCadence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.TriggerAlternateCadence");
		
		ABB_Challenge_Base_C_TriggerAlternateCadence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.PlayAsync2D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_Base_C::PlayAsync2D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.PlayAsync2D");
		
		ABB_Challenge_Base_C_PlayAsync2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_Base.BB_Challenge_Base_C.ExecuteUbergraph_BB_Challenge_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_Base_C::ExecuteUbergraph_BB_Challenge_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.ExecuteUbergraph_BB_Challenge_Base");
		
		ABB_Challenge_Base_C_ExecuteUbergraph_BB_Challenge_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Challenge_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Challenge_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Challenge_Base.BB_Challenge_Base_C");
		return ptr;
	}

}


