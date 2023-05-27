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
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_StartTimer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               complete                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::BBVideo_StartTimer(int32_t Seconds, bool* complete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_StartTimer");
		
		UBB_Scoreboard_C_BBVideo_StartTimer_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (complete != nullptr)
			*complete = params.complete;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.BBVideoScoreFontAndMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateFontInfo                              Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               complete                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::BBVideoScoreFontAndMaterial(class UMaterialInterface* Material, const struct FSlateFontInfo& Font, bool* complete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBVideoScoreFontAndMaterial");
		
		UBB_Scoreboard_C_BBVideoScoreFontAndMaterial_Params params {};
		params.Material = Material;
		params.Font = Font;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (complete != nullptr)
			*complete = params.complete;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_UpdateScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               complete                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::BBVideo_UpdateScore(const class FText& Text, bool* complete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_UpdateScore");
		
		UBB_Scoreboard_C_BBVideo_UpdateScore_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (complete != nullptr)
			*complete = params.complete;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_HideShowScoreAndTimer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Completed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::BBVideo_HideShowScoreAndTimer(ESlateVisibility Visibility, bool* Completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_HideShowScoreAndTimer");
		
		UBB_Scoreboard_C_BBVideo_HideShowScoreAndTimer_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Completed != nullptr)
			*Completed = params.Completed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_HideShowCenterText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Completed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::BBVideo_HideShowCenterText(ESlateVisibility Visibility, bool* Completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_HideShowCenterText");
		
		UBB_Scoreboard_C_BBVideo_HideShowCenterText_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Completed != nullptr)
			*Completed = params.Completed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_ChangeFontAndMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateFontInfo                              Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               FontChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::BBVideo_ChangeFontAndMaterial(class UMaterialInterface* Material, const struct FSlateFontInfo& Font, bool* FontChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_ChangeFontAndMaterial");
		
		UBB_Scoreboard_C_BBVideo_ChangeFontAndMaterial_Params params {};
		params.Material = Material;
		params.Font = Font;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FontChanged != nullptr)
			*FontChanged = params.FontChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.BB_UpdatePlayerNames
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PlayerIsHomeTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::BB_UpdatePlayerNames(bool PlayerIsHomeTeam, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BB_UpdatePlayerNames");
		
		UBB_Scoreboard_C_BB_UpdatePlayerNames_Params params {};
		params.PlayerIsHomeTeam = PlayerIsHomeTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Callback != nullptr)
			*Callback = params.Callback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_PlayAnimation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBB_ScoreboardVideos                               Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AnimationStarted                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::BBVideo_PlayAnimation(EBB_ScoreboardVideos Animation, bool* AnimationStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_PlayAnimation");
		
		UBB_Scoreboard_C_BBVideo_PlayAnimation_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimationStarted != nullptr)
			*AnimationStarted = params.AnimationStarted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearAllMGText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TextCleared                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::MG_ClearAllMGText(bool* TextCleared)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearAllMGText");
		
		UBB_Scoreboard_C_MG_ClearAllMGText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextCleared != nullptr)
			*TextCleared = params.TextCleared;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearBottomText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TextCleared                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::MG_ClearBottomText(bool* TextCleared)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearBottomText");
		
		UBB_Scoreboard_C_MG_ClearBottomText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextCleared != nullptr)
			*TextCleared = params.TextCleared;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.MG_SetBottomText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               TextSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::MG_SetBottomText(const class FText& Text, bool* TextSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_SetBottomText");
		
		UBB_Scoreboard_C_MG_SetBottomText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextSet != nullptr)
			*TextSet = params.TextSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearCenterText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TextCleared                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::MG_ClearCenterText(bool* TextCleared)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearCenterText");
		
		UBB_Scoreboard_C_MG_ClearCenterText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextCleared != nullptr)
			*TextCleared = params.TextCleared;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.MG_SetCenterText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               TextSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::MG_SetCenterText(const class FText& Text, bool* TextSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_SetCenterText");
		
		UBB_Scoreboard_C_MG_SetCenterText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextSet != nullptr)
			*TextSet = params.TextSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.MG_ShowCenterDisplay
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DisplayShown                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::MG_ShowCenterDisplay(bool* DisplayShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_ShowCenterDisplay");
		
		UBB_Scoreboard_C_MG_ShowCenterDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayShown != nullptr)
			*DisplayShown = params.DisplayShown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearDistanceScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ScoreHidden                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::MG_ClearDistanceScore(bool* ScoreHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearDistanceScore");
		
		UBB_Scoreboard_C_MG_ClearDistanceScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScoreHidden != nullptr)
			*ScoreHidden = params.ScoreHidden;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.MG_StopCountDown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CountDownStopped                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::MG_StopCountDown(bool* CountDownStopped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_StopCountDown");
		
		UBB_Scoreboard_C_MG_StopCountDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CountDownStopped != nullptr)
			*CountDownStopped = params.CountDownStopped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.MG_HideCenterDisplay
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CenterDisplayHidden                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::MG_HideCenterDisplay(bool* CenterDisplayHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_HideCenterDisplay");
		
		UBB_Scoreboard_C_MG_HideCenterDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CenterDisplayHidden != nullptr)
			*CenterDisplayHidden = params.CenterDisplayHidden;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.MG_BeginCountDown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CountdownStarted                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::MG_BeginCountDown(int32_t Seconds, bool* CountdownStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_BeginCountDown");
		
		UBB_Scoreboard_C_MG_BeginCountDown_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CountdownStarted != nullptr)
			*CountdownStarted = params.CountdownStarted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.MG_SetDistanceScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DistanceUpdated                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::MG_SetDistanceScore(float Distance, bool* DistanceUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_SetDistanceScore");
		
		UBB_Scoreboard_C_MG_SetDistanceScore_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DistanceUpdated != nullptr)
			*DistanceUpdated = params.DistanceUpdated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateBaserunners
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RunnerOn1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RunnerOn2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RunnerOn3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RunnersUpdated                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::BBGame_UpdateBaserunners(bool RunnerOn1, bool RunnerOn2, bool RunnerOn3, bool* RunnersUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateBaserunners");
		
		UBB_Scoreboard_C_BBGame_UpdateBaserunners_Params params {};
		params.RunnerOn1 = RunnerOn1;
		params.RunnerOn2 = RunnerOn2;
		params.RunnerOn3 = RunnerOn3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RunnersUpdated != nullptr)
			*RunnersUpdated = params.RunnersUpdated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateOuts
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Freebees                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Outs                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Strikes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutsUpdated                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::BBGame_UpdateOuts(int32_t Freebees, int32_t Outs, int32_t Strikes, bool* OutsUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateOuts");
		
		UBB_Scoreboard_C_BBGame_UpdateOuts_Params params {};
		params.Freebees = Freebees;
		params.Outs = Outs;
		params.Strikes = Strikes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutsUpdated != nullptr)
			*OutsUpdated = params.OutsUpdated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateGameScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player1Score                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Player2Score                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ScoreUpdated                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::BBGame_UpdateGameScore(int32_t Player1Score, int32_t Player2Score, bool* ScoreUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateGameScore");
		
		UBB_Scoreboard_C_BBGame_UpdateGameScore_Params params {};
		params.Player1Score = Player1Score;
		params.Player2Score = Player2Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScoreUpdated != nullptr)
			*ScoreUpdated = params.ScoreUpdated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.BBGame_Deactivate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               BBGameDeactivate                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::BBGame_Deactivate(bool* BBGameDeactivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBGame_Deactivate");
		
		UBB_Scoreboard_C_BBGame_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BBGameDeactivate != nullptr)
			*BBGameDeactivate = params.BBGameDeactivate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.BBGame_Activate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BallsCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StrikesCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               GameActivated                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::BBGame_Activate(int32_t BallsCount, int32_t StrikesCount, bool* GameActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBGame_Activate");
		
		UBB_Scoreboard_C_BBGame_Activate_Params params {};
		params.BallsCount = BallsCount;
		params.StrikesCount = StrikesCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameActivated != nullptr)
			*GameActivated = params.GameActivated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard.BB_Scoreboard_C.BBGame_NewInning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Inning                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Top                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InningUpdated                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_C::BBGame_NewInning(int32_t Inning, bool Top, bool* InningUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBGame_NewInning");
		
		UBB_Scoreboard_C_BBGame_NewInning_Params params {};
		params.Inning = Inning;
		params.Top = Top;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InningUpdated != nullptr)
			*InningUpdated = params.InningUpdated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBB_Scoreboard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBB_Scoreboard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Scoreboard.BB_Scoreboard_C");
		return ptr;
	}

}


