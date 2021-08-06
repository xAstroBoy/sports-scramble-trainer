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

// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_StartTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::BBVideo_StartTimer(int Seconds, bool* complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_StartTimer");

	ABB_Scoreboard_Large_BP_C_BBVideo_StartTimer_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (complete != nullptr)
		*complete = params.complete;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideoScoreFontAndMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo          Font                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::BBVideoScoreFontAndMaterial(class UMaterialInterface* Material, const struct FSlateFontInfo& Font, bool* complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideoScoreFontAndMaterial");

	ABB_Scoreboard_Large_BP_C_BBVideoScoreFontAndMaterial_Params params;
	params.Material = Material;
	params.Font = Font;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (complete != nullptr)
		*complete = params.complete;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_UpdateScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::BBVideo_UpdateScore(const struct FText& Text, bool* complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_UpdateScore");

	ABB_Scoreboard_Large_BP_C_BBVideo_UpdateScore_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (complete != nullptr)
		*complete = params.complete;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_HideShowScoreAndTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// UMG_ESlateVisibility           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Completed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::BBVideo_HideShowScoreAndTimer(UMG_ESlateVisibility Visibility, bool* Completed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_HideShowScoreAndTimer");

	ABB_Scoreboard_Large_BP_C_BBVideo_HideShowScoreAndTimer_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Completed != nullptr)
		*Completed = params.Completed;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_HideShowCenterText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// UMG_ESlateVisibility           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Completed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::BBVideo_HideShowCenterText(UMG_ESlateVisibility Visibility, bool* Completed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_HideShowCenterText");

	ABB_Scoreboard_Large_BP_C_BBVideo_HideShowCenterText_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Completed != nullptr)
		*Completed = params.Completed;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_ChangeFontAndMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo          Font                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           FontChanged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::BBVideo_ChangeFontAndMaterial(class UMaterialInterface* Material, const struct FSlateFontInfo& Font, bool* FontChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_ChangeFontAndMaterial");

	ABB_Scoreboard_Large_BP_C_BBVideo_ChangeFontAndMaterial_Params params;
	params.Material = Material;
	params.Font = Font;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FontChanged != nullptr)
		*FontChanged = params.FontChanged;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BB_UpdatePlayerNames
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerIsHomeTeam               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::BB_UpdatePlayerNames(bool PlayerIsHomeTeam, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BB_UpdatePlayerNames");

	ABB_Scoreboard_Large_BP_C_BB_UpdatePlayerNames_Params params;
	params.PlayerIsHomeTeam = PlayerIsHomeTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_PlayAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AnimationStarted               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::BBVideo_PlayAnimation(TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation, bool* AnimationStarted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_PlayAnimation");

	ABB_Scoreboard_Large_BP_C_BBVideo_PlayAnimation_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimationStarted != nullptr)
		*AnimationStarted = params.AnimationStarted;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateGameScore
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player1Score                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2Score                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ScoreUpdated                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::BBGame_UpdateGameScore(int Player1Score, int Player2Score, bool* ScoreUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateGameScore");

	ABB_Scoreboard_Large_BP_C_BBGame_UpdateGameScore_Params params;
	params.Player1Score = Player1Score;
	params.Player2Score = Player2Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreUpdated != nullptr)
		*ScoreUpdated = params.ScoreUpdated;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearAllMGText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TextCleared                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::MG_ClearAllMGText(bool* TextCleared)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearAllMGText");

	ABB_Scoreboard_Large_BP_C_MG_ClearAllMGText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextCleared != nullptr)
		*TextCleared = params.TextCleared;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearBottomText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TextCleared                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::MG_ClearBottomText(bool* TextCleared)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearBottomText");

	ABB_Scoreboard_Large_BP_C_MG_ClearBottomText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextCleared != nullptr)
		*TextCleared = params.TextCleared;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetBottomText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           TextSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::MG_SetBottomText(const struct FText& Text, bool* TextSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetBottomText");

	ABB_Scoreboard_Large_BP_C_MG_SetBottomText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextSet != nullptr)
		*TextSet = params.TextSet;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearCenterText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TextCleared                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::MG_ClearCenterText(bool* TextCleared)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearCenterText");

	ABB_Scoreboard_Large_BP_C_MG_ClearCenterText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextCleared != nullptr)
		*TextCleared = params.TextCleared;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetCenterText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           TextSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::MG_SetCenterText(const struct FText& Text, bool* TextSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetCenterText");

	ABB_Scoreboard_Large_BP_C_MG_SetCenterText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextSet != nullptr)
		*TextSet = params.TextSet;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ShowCenterDisplay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisplayShown                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::MG_ShowCenterDisplay(bool* DisplayShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ShowCenterDisplay");

	ABB_Scoreboard_Large_BP_C_MG_ShowCenterDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisplayShown != nullptr)
		*DisplayShown = params.DisplayShown;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearDistanceScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ScoreHidden                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::MG_ClearDistanceScore(bool* ScoreHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearDistanceScore");

	ABB_Scoreboard_Large_BP_C_MG_ClearDistanceScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreHidden != nullptr)
		*ScoreHidden = params.ScoreHidden;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_StopCountDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CountDownStopped               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::MG_StopCountDown(bool* CountDownStopped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_StopCountDown");

	ABB_Scoreboard_Large_BP_C_MG_StopCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CountDownStopped != nullptr)
		*CountDownStopped = params.CountDownStopped;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_HideCenterDisplay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CenterDisplayHidden            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::MG_HideCenterDisplay(bool* CenterDisplayHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_HideCenterDisplay");

	ABB_Scoreboard_Large_BP_C_MG_HideCenterDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CenterDisplayHidden != nullptr)
		*CenterDisplayHidden = params.CenterDisplayHidden;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_BeginCountDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CountdownStarted               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::MG_BeginCountDown(int Seconds, bool* CountdownStarted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_BeginCountDown");

	ABB_Scoreboard_Large_BP_C_MG_BeginCountDown_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CountdownStarted != nullptr)
		*CountdownStarted = params.CountdownStarted;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetDistanceScore
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DistanceUpdated                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::MG_SetDistanceScore(float Distance, bool* DistanceUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetDistanceScore");

	ABB_Scoreboard_Large_BP_C_MG_SetDistanceScore_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DistanceUpdated != nullptr)
		*DistanceUpdated = params.DistanceUpdated;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateOuts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Freebees                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Outs                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Strikes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OutsUpdated                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::BBGame_UpdateOuts(int Freebees, int Outs, int Strikes, bool* OutsUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateOuts");

	ABB_Scoreboard_Large_BP_C_BBGame_UpdateOuts_Params params;
	params.Freebees = Freebees;
	params.Outs = Outs;
	params.Strikes = Strikes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutsUpdated != nullptr)
		*OutsUpdated = params.OutsUpdated;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateBaserunners
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RunnerOn1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           RunnerOn2                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           RunnerOn3                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           RunnersUpdated                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::BBGame_UpdateBaserunners(bool RunnerOn1, bool RunnerOn2, bool RunnerOn3, bool* RunnersUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateBaserunners");

	ABB_Scoreboard_Large_BP_C_BBGame_UpdateBaserunners_Params params;
	params.RunnerOn1 = RunnerOn1;
	params.RunnerOn2 = RunnerOn2;
	params.RunnerOn3 = RunnerOn3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RunnersUpdated != nullptr)
		*RunnersUpdated = params.RunnersUpdated;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_Deactivate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BBGameDeactivate               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::BBGame_Deactivate(bool* BBGameDeactivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_Deactivate");

	ABB_Scoreboard_Large_BP_C_BBGame_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BBGameDeactivate != nullptr)
		*BBGameDeactivate = params.BBGameDeactivate;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_Activate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BallsCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StrikesCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           GameActivated                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::BBGame_Activate(int BallsCount, int StrikesCount, bool* GameActivated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_Activate");

	ABB_Scoreboard_Large_BP_C_BBGame_Activate_Params params;
	params.BallsCount = BallsCount;
	params.StrikesCount = StrikesCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameActivated != nullptr)
		*GameActivated = params.GameActivated;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_NewInning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Inning                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Top                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           InningUpdated                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Scoreboard_Large_BP_C::BBGame_NewInning(int Inning, bool Top, bool* InningUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_NewInning");

	ABB_Scoreboard_Large_BP_C_BBGame_NewInning_Params params;
	params.Inning = Inning;
	params.Top = Top;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InningUpdated != nullptr)
		*InningUpdated = params.InningUpdated;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.SetCountDownTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Scoreboard_Large_BP_C::SetCountDownTime(int Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.SetCountDownTime");

	ABB_Scoreboard_Large_BP_C_SetCountDownTime_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Initialize");

	ABB_Scoreboard_Large_BP_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.UserConstructionScript");

	ABB_Scoreboard_Large_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_LogoLoop__FinishedFunc
// (BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Timeline_LogoLoop__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_LogoLoop__FinishedFunc");

	ABB_Scoreboard_Large_BP_C_Timeline_LogoLoop__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_LogoLoop__UpdateFunc
// (BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Timeline_LogoLoop__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_LogoLoop__UpdateFunc");

	ABB_Scoreboard_Large_BP_C_Timeline_LogoLoop__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_Countdown__FinishedFunc
// (BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Timeline_Countdown__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_Countdown__FinishedFunc");

	ABB_Scoreboard_Large_BP_C_Timeline_Countdown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_Countdown__UpdateFunc
// (BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Timeline_Countdown__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_Countdown__UpdateFunc");

	ABB_Scoreboard_Large_BP_C_Timeline_Countdown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_StrikeOut__FinishedFunc
// (BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Timeline_StrikeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_StrikeOut__FinishedFunc");

	ABB_Scoreboard_Large_BP_C_Timeline_StrikeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_StrikeOut__UpdateFunc
// (BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Timeline_StrikeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_StrikeOut__UpdateFunc");

	ABB_Scoreboard_Large_BP_C_Timeline_StrikeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR1__FinishedFunc
// (BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Timeline_HR1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR1__FinishedFunc");

	ABB_Scoreboard_Large_BP_C_Timeline_HR1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR1__UpdateFunc
// (BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Timeline_HR1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR1__UpdateFunc");

	ABB_Scoreboard_Large_BP_C_Timeline_HR1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR3__FinishedFunc
// (BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Timeline_HR3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR3__FinishedFunc");

	ABB_Scoreboard_Large_BP_C_Timeline_HR3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR3__UpdateFunc
// (BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Timeline_HR3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR3__UpdateFunc");

	ABB_Scoreboard_Large_BP_C_Timeline_HR3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR2__FinishedFunc
// (BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Timeline_HR2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR2__FinishedFunc");

	ABB_Scoreboard_Large_BP_C_Timeline_HR2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR2__UpdateFunc
// (BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Timeline_HR2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR2__UpdateFunc");

	ABB_Scoreboard_Large_BP_C_Timeline_HR2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.PlayVideo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Video                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Scoreboard_Large_BP_C::PlayVideo(TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Video)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.PlayVideo");

	ABB_Scoreboard_Large_BP_C_PlayVideo_Params params;
	params.Video = Video;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.EnterLogo
// (BlueprintCallable, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::EnterLogo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.EnterLogo");

	ABB_Scoreboard_Large_BP_C_EnterLogo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Enter Countdown
// (BlueprintCallable, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Enter_Countdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Enter Countdown");

	ABB_Scoreboard_Large_BP_C_Enter_Countdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExitLogo
// (BlueprintCallable, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::ExitLogo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExitLogo");

	ABB_Scoreboard_Large_BP_C_ExitLogo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.NextVideoSwap
// (BlueprintCallable, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::NextVideoSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.NextVideoSwap");

	ABB_Scoreboard_Large_BP_C_NextVideoSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExitCountdown
// (BlueprintCallable, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::ExitCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExitCountdown");

	ABB_Scoreboard_Large_BP_C_ExitCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Play Strikeout Timeline
// (BlueprintCallable, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Play_Strikeout_Timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Play Strikeout Timeline");

	ABB_Scoreboard_Large_BP_C_Play_Strikeout_Timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Play Homerun Intro Timeline
// (BlueprintCallable, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::Play_Homerun_Intro_Timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Play Homerun Intro Timeline");

	ABB_Scoreboard_Large_BP_C_Play_Homerun_Intro_Timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.PlayGrandSlamIntroTimeline
// (BlueprintCallable, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::PlayGrandSlamIntroTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.PlayGrandSlamIntroTimeline");

	ABB_Scoreboard_Large_BP_C_PlayGrandSlamIntroTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ReceiveBeginPlay");

	ABB_Scoreboard_Large_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BeginCountdown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Scoreboard_Large_BP_C::BeginCountdown(int Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BeginCountdown");

	ABB_Scoreboard_Large_BP_C_BeginCountdown_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExecuteUbergraph_BB_Scoreboard_Large_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Scoreboard_Large_BP_C::ExecuteUbergraph_BB_Scoreboard_Large_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExecuteUbergraph_BB_Scoreboard_Large_BP");

	ABB_Scoreboard_Large_BP_C_ExecuteUbergraph_BB_Scoreboard_Large_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.TimerDisplayReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::TimerDisplayReady__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.TimerDisplayReady__DelegateSignature");

	ABB_Scoreboard_Large_BP_C_TimerDisplayReady__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.TimerCountdownComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::TimerCountdownComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.TimerCountdownComplete__DelegateSignature");

	ABB_Scoreboard_Large_BP_C_TimerCountdownComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MediaSequenceComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::MediaSequenceComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MediaSequenceComplete__DelegateSignature");

	ABB_Scoreboard_Large_BP_C_MediaSequenceComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MediaComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Scoreboard_Large_BP_C::MediaComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MediaComplete__DelegateSignature");

	ABB_Scoreboard_Large_BP_C_MediaComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
