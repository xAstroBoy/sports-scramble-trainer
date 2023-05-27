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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_StartTimer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               complete                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::BBVideo_StartTimer(int32_t Seconds, bool* complete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_StartTimer");
		
		ABB_Scoreboard_Large_BP_C_BBVideo_StartTimer_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideoScoreFontAndMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateFontInfo                              Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               complete                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::BBVideoScoreFontAndMaterial(class UMaterialInterface* Material, const struct FSlateFontInfo& Font, bool* complete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideoScoreFontAndMaterial");
		
		ABB_Scoreboard_Large_BP_C_BBVideoScoreFontAndMaterial_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_UpdateScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               complete                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::BBVideo_UpdateScore(const class FText& Text, bool* complete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_UpdateScore");
		
		ABB_Scoreboard_Large_BP_C_BBVideo_UpdateScore_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_HideShowScoreAndTimer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Completed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::BBVideo_HideShowScoreAndTimer(ESlateVisibility Visibility, bool* Completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_HideShowScoreAndTimer");
		
		ABB_Scoreboard_Large_BP_C_BBVideo_HideShowScoreAndTimer_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_HideShowCenterText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Completed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::BBVideo_HideShowCenterText(ESlateVisibility Visibility, bool* Completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_HideShowCenterText");
		
		ABB_Scoreboard_Large_BP_C_BBVideo_HideShowCenterText_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_ChangeFontAndMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateFontInfo                              Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               FontChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::BBVideo_ChangeFontAndMaterial(class UMaterialInterface* Material, const struct FSlateFontInfo& Font, bool* FontChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_ChangeFontAndMaterial");
		
		ABB_Scoreboard_Large_BP_C_BBVideo_ChangeFontAndMaterial_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BB_UpdatePlayerNames
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PlayerIsHomeTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::BB_UpdatePlayerNames(bool PlayerIsHomeTeam, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BB_UpdatePlayerNames");
		
		ABB_Scoreboard_Large_BP_C_BB_UpdatePlayerNames_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_PlayAnimation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBB_ScoreboardVideos                               Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AnimationStarted                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::BBVideo_PlayAnimation(EBB_ScoreboardVideos Animation, bool* AnimationStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_PlayAnimation");
		
		ABB_Scoreboard_Large_BP_C_BBVideo_PlayAnimation_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateGameScore
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player1Score                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Player2Score                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ScoreUpdated                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::BBGame_UpdateGameScore(int32_t Player1Score, int32_t Player2Score, bool* ScoreUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateGameScore");
		
		ABB_Scoreboard_Large_BP_C_BBGame_UpdateGameScore_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearAllMGText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TextCleared                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::MG_ClearAllMGText(bool* TextCleared)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearAllMGText");
		
		ABB_Scoreboard_Large_BP_C_MG_ClearAllMGText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextCleared != nullptr)
			*TextCleared = params.TextCleared;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearBottomText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TextCleared                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::MG_ClearBottomText(bool* TextCleared)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearBottomText");
		
		ABB_Scoreboard_Large_BP_C_MG_ClearBottomText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextCleared != nullptr)
			*TextCleared = params.TextCleared;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetBottomText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               TextSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::MG_SetBottomText(const class FText& Text, bool* TextSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetBottomText");
		
		ABB_Scoreboard_Large_BP_C_MG_SetBottomText_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearCenterText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TextCleared                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::MG_ClearCenterText(bool* TextCleared)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearCenterText");
		
		ABB_Scoreboard_Large_BP_C_MG_ClearCenterText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextCleared != nullptr)
			*TextCleared = params.TextCleared;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetCenterText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               TextSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::MG_SetCenterText(const class FText& Text, bool* TextSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetCenterText");
		
		ABB_Scoreboard_Large_BP_C_MG_SetCenterText_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ShowCenterDisplay
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DisplayShown                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::MG_ShowCenterDisplay(bool* DisplayShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ShowCenterDisplay");
		
		ABB_Scoreboard_Large_BP_C_MG_ShowCenterDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayShown != nullptr)
			*DisplayShown = params.DisplayShown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearDistanceScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ScoreHidden                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::MG_ClearDistanceScore(bool* ScoreHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearDistanceScore");
		
		ABB_Scoreboard_Large_BP_C_MG_ClearDistanceScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScoreHidden != nullptr)
			*ScoreHidden = params.ScoreHidden;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_StopCountDown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CountDownStopped                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::MG_StopCountDown(bool* CountDownStopped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_StopCountDown");
		
		ABB_Scoreboard_Large_BP_C_MG_StopCountDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CountDownStopped != nullptr)
			*CountDownStopped = params.CountDownStopped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_HideCenterDisplay
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CenterDisplayHidden                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::MG_HideCenterDisplay(bool* CenterDisplayHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_HideCenterDisplay");
		
		ABB_Scoreboard_Large_BP_C_MG_HideCenterDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CenterDisplayHidden != nullptr)
			*CenterDisplayHidden = params.CenterDisplayHidden;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_BeginCountDown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CountdownStarted                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::MG_BeginCountDown(int32_t Seconds, bool* CountdownStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_BeginCountDown");
		
		ABB_Scoreboard_Large_BP_C_MG_BeginCountDown_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetDistanceScore
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DistanceUpdated                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::MG_SetDistanceScore(float Distance, bool* DistanceUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetDistanceScore");
		
		ABB_Scoreboard_Large_BP_C_MG_SetDistanceScore_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateOuts
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Freebees                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Outs                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Strikes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutsUpdated                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::BBGame_UpdateOuts(int32_t Freebees, int32_t Outs, int32_t Strikes, bool* OutsUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateOuts");
		
		ABB_Scoreboard_Large_BP_C_BBGame_UpdateOuts_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateBaserunners
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RunnerOn1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RunnerOn2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RunnerOn3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RunnersUpdated                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::BBGame_UpdateBaserunners(bool RunnerOn1, bool RunnerOn2, bool RunnerOn3, bool* RunnersUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateBaserunners");
		
		ABB_Scoreboard_Large_BP_C_BBGame_UpdateBaserunners_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_Deactivate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               BBGameDeactivate                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::BBGame_Deactivate(bool* BBGameDeactivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_Deactivate");
		
		ABB_Scoreboard_Large_BP_C_BBGame_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BBGameDeactivate != nullptr)
			*BBGameDeactivate = params.BBGameDeactivate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_Activate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BallsCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StrikesCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               GameActivated                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::BBGame_Activate(int32_t BallsCount, int32_t StrikesCount, bool* GameActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_Activate");
		
		ABB_Scoreboard_Large_BP_C_BBGame_Activate_Params params {};
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
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_NewInning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Inning                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Top                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InningUpdated                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Scoreboard_Large_BP_C::BBGame_NewInning(int32_t Inning, bool Top, bool* InningUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_NewInning");
		
		ABB_Scoreboard_Large_BP_C_BBGame_NewInning_Params params {};
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
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.SetCountDownTime
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Scoreboard_Large_BP_C::SetCountDownTime(int32_t Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.SetCountDownTime");
		
		ABB_Scoreboard_Large_BP_C_SetCountDownTime_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Initialize");
		
		ABB_Scoreboard_Large_BP_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.UserConstructionScript");
		
		ABB_Scoreboard_Large_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_LogoLoop__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::Timeline_LogoLoop__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_LogoLoop__FinishedFunc");
		
		ABB_Scoreboard_Large_BP_C_Timeline_LogoLoop__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_LogoLoop__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::Timeline_LogoLoop__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_LogoLoop__UpdateFunc");
		
		ABB_Scoreboard_Large_BP_C_Timeline_LogoLoop__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_Countdown__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::Timeline_Countdown__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_Countdown__FinishedFunc");
		
		ABB_Scoreboard_Large_BP_C_Timeline_Countdown__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_Countdown__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::Timeline_Countdown__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_Countdown__UpdateFunc");
		
		ABB_Scoreboard_Large_BP_C_Timeline_Countdown__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_StrikeOut__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::Timeline_StrikeOut__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_StrikeOut__FinishedFunc");
		
		ABB_Scoreboard_Large_BP_C_Timeline_StrikeOut__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_StrikeOut__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::Timeline_StrikeOut__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_StrikeOut__UpdateFunc");
		
		ABB_Scoreboard_Large_BP_C_Timeline_StrikeOut__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::Timeline_HR1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR1__FinishedFunc");
		
		ABB_Scoreboard_Large_BP_C_Timeline_HR1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::Timeline_HR1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR1__UpdateFunc");
		
		ABB_Scoreboard_Large_BP_C_Timeline_HR1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR3__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::Timeline_HR3__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR3__FinishedFunc");
		
		ABB_Scoreboard_Large_BP_C_Timeline_HR3__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR3__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::Timeline_HR3__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR3__UpdateFunc");
		
		ABB_Scoreboard_Large_BP_C_Timeline_HR3__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR2__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::Timeline_HR2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR2__FinishedFunc");
		
		ABB_Scoreboard_Large_BP_C_Timeline_HR2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR2__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::Timeline_HR2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR2__UpdateFunc");
		
		ABB_Scoreboard_Large_BP_C_Timeline_HR2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.PlayVideo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBB_ScoreboardVideos                               Video                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Scoreboard_Large_BP_C::PlayVideo(EBB_ScoreboardVideos Video)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.PlayVideo");
		
		ABB_Scoreboard_Large_BP_C_PlayVideo_Params params {};
		params.Video = Video;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.EnterLogo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::EnterLogo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.EnterLogo");
		
		ABB_Scoreboard_Large_BP_C_EnterLogo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Enter Countdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::EnterCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Enter Countdown");
		
		ABB_Scoreboard_Large_BP_C_EnterCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExitLogo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::ExitLogo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExitLogo");
		
		ABB_Scoreboard_Large_BP_C_ExitLogo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.NextVideoSwap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::NextVideoSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.NextVideoSwap");
		
		ABB_Scoreboard_Large_BP_C_NextVideoSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExitCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::ExitCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExitCountdown");
		
		ABB_Scoreboard_Large_BP_C_ExitCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Play Strikeout Timeline
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::PlayStrikeoutTimeline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Play Strikeout Timeline");
		
		ABB_Scoreboard_Large_BP_C_PlayStrikeoutTimeline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Play Homerun Intro Timeline
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::PlayHomerunIntroTimeline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Play Homerun Intro Timeline");
		
		ABB_Scoreboard_Large_BP_C_PlayHomerunIntroTimeline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.PlayGrandSlamIntroTimeline
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::PlayGrandSlamIntroTimeline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.PlayGrandSlamIntroTimeline");
		
		ABB_Scoreboard_Large_BP_C_PlayGrandSlamIntroTimeline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ReceiveBeginPlay");
		
		ABB_Scoreboard_Large_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BeginCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Scoreboard_Large_BP_C::BeginCountdown(int32_t Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BeginCountdown");
		
		ABB_Scoreboard_Large_BP_C_BeginCountdown_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExecuteUbergraph_BB_Scoreboard_Large_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Scoreboard_Large_BP_C::ExecuteUbergraph_BB_Scoreboard_Large_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExecuteUbergraph_BB_Scoreboard_Large_BP");
		
		ABB_Scoreboard_Large_BP_C_ExecuteUbergraph_BB_Scoreboard_Large_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.TimerDisplayReady__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::TimerDisplayReady__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.TimerDisplayReady__DelegateSignature");
		
		ABB_Scoreboard_Large_BP_C_TimerDisplayReady__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.TimerCountdownComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::TimerCountdownComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.TimerCountdownComplete__DelegateSignature");
		
		ABB_Scoreboard_Large_BP_C_TimerCountdownComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MediaSequenceComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::MediaSequenceComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MediaSequenceComplete__DelegateSignature");
		
		ABB_Scoreboard_Large_BP_C_MediaSequenceComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MediaComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Scoreboard_Large_BP_C::MediaComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MediaComplete__DelegateSignature");
		
		ABB_Scoreboard_Large_BP_C_MediaComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Scoreboard_Large_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Scoreboard_Large_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C");
		return ptr;
	}

}


