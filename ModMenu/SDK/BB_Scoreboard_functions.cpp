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

// Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_StartTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::BBVideo_StartTimer(int Seconds, bool* complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_StartTimer");

	UBB_Scoreboard_C_BBVideo_StartTimer_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (complete != nullptr)
		*complete = params.complete;

}


// Function BB_Scoreboard.BB_Scoreboard_C.BBVideoScoreFontAndMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo          Font                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::BBVideoScoreFontAndMaterial(class UMaterialInterface* Material, const struct FSlateFontInfo& Font, bool* complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBVideoScoreFontAndMaterial");

	UBB_Scoreboard_C_BBVideoScoreFontAndMaterial_Params params;
	params.Material = Material;
	params.Font = Font;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (complete != nullptr)
		*complete = params.complete;

}


// Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_UpdateScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::BBVideo_UpdateScore(const struct FText& Text, bool* complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_UpdateScore");

	UBB_Scoreboard_C_BBVideo_UpdateScore_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (complete != nullptr)
		*complete = params.complete;

}


// Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_HideShowScoreAndTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// UMG_ESlateVisibility           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Completed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::BBVideo_HideShowScoreAndTimer(UMG_ESlateVisibility Visibility, bool* Completed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_HideShowScoreAndTimer");

	UBB_Scoreboard_C_BBVideo_HideShowScoreAndTimer_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Completed != nullptr)
		*Completed = params.Completed;

}


// Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_HideShowCenterText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// UMG_ESlateVisibility           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Completed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::BBVideo_HideShowCenterText(UMG_ESlateVisibility Visibility, bool* Completed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_HideShowCenterText");

	UBB_Scoreboard_C_BBVideo_HideShowCenterText_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Completed != nullptr)
		*Completed = params.Completed;

}


// Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_ChangeFontAndMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo          Font                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           FontChanged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::BBVideo_ChangeFontAndMaterial(class UMaterialInterface* Material, const struct FSlateFontInfo& Font, bool* FontChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_ChangeFontAndMaterial");

	UBB_Scoreboard_C_BBVideo_ChangeFontAndMaterial_Params params;
	params.Material = Material;
	params.Font = Font;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FontChanged != nullptr)
		*FontChanged = params.FontChanged;

}


// Function BB_Scoreboard.BB_Scoreboard_C.BB_UpdatePlayerNames
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerIsHomeTeam               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::BB_UpdatePlayerNames(bool PlayerIsHomeTeam, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BB_UpdatePlayerNames");

	UBB_Scoreboard_C_BB_UpdatePlayerNames_Params params;
	params.PlayerIsHomeTeam = PlayerIsHomeTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_PlayAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AnimationStarted               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::BBVideo_PlayAnimation(TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation, bool* AnimationStarted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_PlayAnimation");

	UBB_Scoreboard_C_BBVideo_PlayAnimation_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimationStarted != nullptr)
		*AnimationStarted = params.AnimationStarted;

}


// Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearAllMGText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TextCleared                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::MG_ClearAllMGText(bool* TextCleared)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearAllMGText");

	UBB_Scoreboard_C_MG_ClearAllMGText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextCleared != nullptr)
		*TextCleared = params.TextCleared;

}


// Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearBottomText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TextCleared                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::MG_ClearBottomText(bool* TextCleared)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearBottomText");

	UBB_Scoreboard_C_MG_ClearBottomText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextCleared != nullptr)
		*TextCleared = params.TextCleared;

}


// Function BB_Scoreboard.BB_Scoreboard_C.MG_SetBottomText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           TextSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::MG_SetBottomText(const struct FText& Text, bool* TextSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_SetBottomText");

	UBB_Scoreboard_C_MG_SetBottomText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextSet != nullptr)
		*TextSet = params.TextSet;

}


// Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearCenterText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TextCleared                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::MG_ClearCenterText(bool* TextCleared)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearCenterText");

	UBB_Scoreboard_C_MG_ClearCenterText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextCleared != nullptr)
		*TextCleared = params.TextCleared;

}


// Function BB_Scoreboard.BB_Scoreboard_C.MG_SetCenterText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           TextSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::MG_SetCenterText(const struct FText& Text, bool* TextSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_SetCenterText");

	UBB_Scoreboard_C_MG_SetCenterText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextSet != nullptr)
		*TextSet = params.TextSet;

}


// Function BB_Scoreboard.BB_Scoreboard_C.MG_ShowCenterDisplay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisplayShown                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::MG_ShowCenterDisplay(bool* DisplayShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_ShowCenterDisplay");

	UBB_Scoreboard_C_MG_ShowCenterDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisplayShown != nullptr)
		*DisplayShown = params.DisplayShown;

}


// Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearDistanceScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ScoreHidden                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::MG_ClearDistanceScore(bool* ScoreHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearDistanceScore");

	UBB_Scoreboard_C_MG_ClearDistanceScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreHidden != nullptr)
		*ScoreHidden = params.ScoreHidden;

}


// Function BB_Scoreboard.BB_Scoreboard_C.MG_StopCountDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CountDownStopped               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::MG_StopCountDown(bool* CountDownStopped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_StopCountDown");

	UBB_Scoreboard_C_MG_StopCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CountDownStopped != nullptr)
		*CountDownStopped = params.CountDownStopped;

}


// Function BB_Scoreboard.BB_Scoreboard_C.MG_HideCenterDisplay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CenterDisplayHidden            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::MG_HideCenterDisplay(bool* CenterDisplayHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_HideCenterDisplay");

	UBB_Scoreboard_C_MG_HideCenterDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CenterDisplayHidden != nullptr)
		*CenterDisplayHidden = params.CenterDisplayHidden;

}


// Function BB_Scoreboard.BB_Scoreboard_C.MG_BeginCountDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CountdownStarted               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::MG_BeginCountDown(int Seconds, bool* CountdownStarted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_BeginCountDown");

	UBB_Scoreboard_C_MG_BeginCountDown_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CountdownStarted != nullptr)
		*CountdownStarted = params.CountdownStarted;

}


// Function BB_Scoreboard.BB_Scoreboard_C.MG_SetDistanceScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DistanceUpdated                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::MG_SetDistanceScore(float Distance, bool* DistanceUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.MG_SetDistanceScore");

	UBB_Scoreboard_C_MG_SetDistanceScore_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DistanceUpdated != nullptr)
		*DistanceUpdated = params.DistanceUpdated;

}


// Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateBaserunners
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RunnerOn1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           RunnerOn2                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           RunnerOn3                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           RunnersUpdated                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::BBGame_UpdateBaserunners(bool RunnerOn1, bool RunnerOn2, bool RunnerOn3, bool* RunnersUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateBaserunners");

	UBB_Scoreboard_C_BBGame_UpdateBaserunners_Params params;
	params.RunnerOn1 = RunnerOn1;
	params.RunnerOn2 = RunnerOn2;
	params.RunnerOn3 = RunnerOn3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RunnersUpdated != nullptr)
		*RunnersUpdated = params.RunnersUpdated;

}


// Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateOuts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Freebees                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Outs                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Strikes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OutsUpdated                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::BBGame_UpdateOuts(int Freebees, int Outs, int Strikes, bool* OutsUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateOuts");

	UBB_Scoreboard_C_BBGame_UpdateOuts_Params params;
	params.Freebees = Freebees;
	params.Outs = Outs;
	params.Strikes = Strikes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutsUpdated != nullptr)
		*OutsUpdated = params.OutsUpdated;

}


// Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateGameScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player1Score                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2Score                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ScoreUpdated                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::BBGame_UpdateGameScore(int Player1Score, int Player2Score, bool* ScoreUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateGameScore");

	UBB_Scoreboard_C_BBGame_UpdateGameScore_Params params;
	params.Player1Score = Player1Score;
	params.Player2Score = Player2Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreUpdated != nullptr)
		*ScoreUpdated = params.ScoreUpdated;

}


// Function BB_Scoreboard.BB_Scoreboard_C.BBGame_Deactivate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BBGameDeactivate               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::BBGame_Deactivate(bool* BBGameDeactivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBGame_Deactivate");

	UBB_Scoreboard_C_BBGame_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BBGameDeactivate != nullptr)
		*BBGameDeactivate = params.BBGameDeactivate;

}


// Function BB_Scoreboard.BB_Scoreboard_C.BBGame_Activate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BallsCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StrikesCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           GameActivated                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::BBGame_Activate(int BallsCount, int StrikesCount, bool* GameActivated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBGame_Activate");

	UBB_Scoreboard_C_BBGame_Activate_Params params;
	params.BallsCount = BallsCount;
	params.StrikesCount = StrikesCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameActivated != nullptr)
		*GameActivated = params.GameActivated;

}


// Function BB_Scoreboard.BB_Scoreboard_C.BBGame_NewInning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Inning                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Top                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           InningUpdated                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_C::BBGame_NewInning(int Inning, bool Top, bool* InningUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard.BB_Scoreboard_C.BBGame_NewInning");

	UBB_Scoreboard_C_BBGame_NewInning_Params params;
	params.Inning = Inning;
	params.Top = Top;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InningUpdated != nullptr)
		*InningUpdated = params.InningUpdated;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
