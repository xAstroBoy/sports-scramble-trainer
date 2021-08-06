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

// Function ChallengeBase.ChallengeBase_C.PlayResultMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Succeeded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AChallengeBase_C::PlayResultMusic(bool Succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.PlayResultMusic");

	AChallengeBase_C_PlayResultMusic_Params params;
	params.Succeeded = Succeeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.EarnChallengeTrophy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::EarnChallengeTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.EarnChallengeTrophy");

	AChallengeBase_C_EarnChallengeTrophy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.SaveIntroHasPlayed
// (Public, BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::SaveIntroHasPlayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SaveIntroHasPlayed");

	AChallengeBase_C_SaveIntroHasPlayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.CheckIntroHasPlayed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IntroHasPlayed                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AChallengeBase_C::CheckIntroHasPlayed(bool* IntroHasPlayed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.CheckIntroHasPlayed");

	AChallengeBase_C_CheckIntroHasPlayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IntroHasPlayed != nullptr)
		*IntroHasPlayed = params.IntroHasPlayed;

}


// Function ChallengeBase.ChallengeBase_C.DestroyAllBalls
// (Public, BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::DestroyAllBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.DestroyAllBalls");

	AChallengeBase_C_DestroyAllBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.BB_SpawnScrambleIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BB_ScramIconSetting_EBB_ScramIconSetting> Settings                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::BB_SpawnScrambleIcon(TEnumAsByte<BB_ScramIconSetting_EBB_ScramIconSetting> Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.BB_SpawnScrambleIcon");

	AChallengeBase_C_BB_SpawnScrambleIcon_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.AwardTrophy?
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentScore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::AwardTrophy_(int CurrentScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AwardTrophy?");

	AChallengeBase_C_AwardTrophy__Params params;
	params.CurrentScore = CurrentScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.SpawnAnnouncerPaired
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           AnnouncerPairedList            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AChallengeBase_C::SpawnAnnouncerPaired(TArray<struct FName>* AnnouncerPairedList)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SpawnAnnouncerPaired");

	AChallengeBase_C_SpawnAnnouncerPaired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnnouncerPairedList != nullptr)
		*AnnouncerPairedList = params.AnnouncerPairedList;

}


// Function ChallengeBase.ChallengeBase_C.VerifyNotMultiplayerGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NotMultiplayer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AChallengeBase_C::VerifyNotMultiplayerGame(bool* NotMultiplayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.VerifyNotMultiplayerGame");

	AChallengeBase_C_VerifyNotMultiplayerGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NotMultiplayer != nullptr)
		*NotMultiplayer = params.NotMultiplayer;

}


// Function ChallengeBase.ChallengeBase_C.BW_SpawnScrambleIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::BW_SpawnScrambleIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.BW_SpawnScrambleIcon");

	AChallengeBase_C_BW_SpawnScrambleIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.DestroyPopupInfo
// (Public, BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::DestroyPopupInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.DestroyPopupInfo");

	AChallengeBase_C_DestroyPopupInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.DemoDisplayInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Display_Time                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Display_Text                   (BlueprintVisible, BlueprintReadOnly, Parm)
void AChallengeBase_C::DemoDisplayInfo(float Display_Time, const struct FText& Display_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.DemoDisplayInfo");

	AChallengeBase_C_DemoDisplayInfo_Params params;
	params.Display_Time = Display_Time;
	params.Display_Text = Display_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.SpawnDemoCountdown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::SpawnDemoCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SpawnDemoCountdown");

	AChallengeBase_C_SpawnDemoCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.SetAnnouncerIdle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::SetAnnouncerIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SetAnnouncerIdle");

	AChallengeBase_C_SetAnnouncerIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.TN_SpawnScrambleIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::TN_SpawnScrambleIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.TN_SpawnScrambleIcons");

	AChallengeBase_C_TN_SpawnScrambleIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.CleanUpGameElements
// (Public, BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::CleanUpGameElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.CleanUpGameElements");

	AChallengeBase_C_CleanUpGameElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.SpawnCountDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CountdownDelay                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          GoShrinkDelay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACountdown_C*            CountdownActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::SpawnCountDown(float CountdownDelay, float GoShrinkDelay, class ACountdown_C** CountdownActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SpawnCountDown");

	AChallengeBase_C_SpawnCountDown_Params params;
	params.CountdownDelay = CountdownDelay;
	params.GoShrinkDelay = GoShrinkDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CountdownActor != nullptr)
		*CountdownActor = params.CountdownActor;

}


// Function ChallengeBase.ChallengeBase_C.SpawnAnnouncerActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           AnnouncerAudioList             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AChallengeBase_C::SpawnAnnouncerActor(TArray<struct FName>* AnnouncerAudioList)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SpawnAnnouncerActor");

	AChallengeBase_C_SpawnAnnouncerActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnnouncerAudioList != nullptr)
		*AnnouncerAudioList = params.AnnouncerAudioList;

}


// Function ChallengeBase.ChallengeBase_C.SpawnPopupInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::SpawnPopupInfo(const struct FText& Text, float DisplayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SpawnPopupInfo");

	AChallengeBase_C_SpawnPopupInfo_Params params;
	params.Text = Text;
	params.DisplayTime = DisplayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.UserConstructionScript");

	AChallengeBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.OnLoaded_240F79C84511017CD505A2935D87C98D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::OnLoaded_240F79C84511017CD505A2935D87C98D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.OnLoaded_240F79C84511017CD505A2935D87C98D");

	AChallengeBase_C_OnLoaded_240F79C84511017CD505A2935D87C98D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.OnLoaded_C635C19C410089A01C0EDB9E032CD3AB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::OnLoaded_C635C19C410089A01C0EDB9E032CD3AB(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.OnLoaded_C635C19C410089A01C0EDB9E032CD3AB");

	AChallengeBase_C_OnLoaded_C635C19C410089A01C0EDB9E032CD3AB_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.OnLoaded_AE66B1B049760CA5F7EA9695763B44E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::OnLoaded_AE66B1B049760CA5F7EA9695763B44E4(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.OnLoaded_AE66B1B049760CA5F7EA9695763B44E4");

	AChallengeBase_C_OnLoaded_AE66B1B049760CA5F7EA9695763B44E4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.OnLoaded_47A418EE4AFE710FF392008F080B51FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::OnLoaded_47A418EE4AFE710FF392008F080B51FF(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.OnLoaded_47A418EE4AFE710FF392008F080B51FF");

	AChallengeBase_C_OnLoaded_47A418EE4AFE710FF392008F080B51FF_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.OnLoaded_7EC3FD0744C090F4AC8184B285AF0573
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::OnLoaded_7EC3FD0744C090F4AC8184B285AF0573(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.OnLoaded_7EC3FD0744C090F4AC8184B285AF0573");

	AChallengeBase_C_OnLoaded_7EC3FD0744C090F4AC8184B285AF0573_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.RestoreAllSportSettings
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::RestoreAllSportSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.RestoreAllSportSettings");

	AChallengeBase_C_RestoreAllSportSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.SetTempChallengeSettings
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::SetTempChallengeSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SetTempChallengeSettings");

	AChallengeBase_C_SetTempChallengeSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.AnnouncerReady
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::AnnouncerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AnnouncerReady");

	AChallengeBase_C_AnnouncerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.DisplayStartOfMatchInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeInOutMusic                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AChallengeBase_C::DisplayStartOfMatchInfo(bool FadeInOutMusic)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.DisplayStartOfMatchInfo");

	AChallengeBase_C_DisplayStartOfMatchInfo_Params params;
	params.FadeInOutMusic = FadeInOutMusic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AChallengeBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.ReceiveBeginPlay");

	AChallengeBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.EndOfGame
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::EndOfGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.EndOfGame");

	AChallengeBase_C_EndOfGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.MusicFadeOut
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::MusicFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.MusicFadeOut");

	AChallengeBase_C_MusicFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.MusicFadeIn
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::MusicFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.MusicFadeIn");

	AChallengeBase_C_MusicFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.VoiceClipEnd
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::VoiceClipEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.VoiceClipEnd");

	AChallengeBase_C_VoiceClipEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.ResumeAnnouncer
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::ResumeAnnouncer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.ResumeAnnouncer");

	AChallengeBase_C_ResumeAnnouncer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.AnnouncerPaused
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::AnnouncerPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AnnouncerPaused");

	AChallengeBase_C_AnnouncerPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.SaveAllSportSettings
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::SaveAllSportSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SaveAllSportSettings");

	AChallengeBase_C_SaveAllSportSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.AnnouncerPresenting
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::AnnouncerPresenting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AnnouncerPresenting");

	AChallengeBase_C_AnnouncerPresenting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.AnnouncerDonePresenting
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::AnnouncerDonePresenting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AnnouncerDonePresenting");

	AChallengeBase_C_AnnouncerDonePresenting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.AnnouncerPlayingSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SequenceName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::AnnouncerPlayingSequence(const struct FName& SequenceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AnnouncerPlayingSequence");

	AChallengeBase_C_AnnouncerPlayingSequence_Params params;
	params.SequenceName = SequenceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.NotifyChallengeContinue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::NotifyChallengeContinue(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.NotifyChallengeContinue");

	AChallengeBase_C_NotifyChallengeContinue_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.ShowDemoInstructions
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::ShowDemoInstructions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.ShowDemoInstructions");

	AChallengeBase_C_ShowDemoInstructions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.AnnouncerPairedComplete
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::AnnouncerPairedComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AnnouncerPairedComplete");

	AChallengeBase_C_AnnouncerPairedComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.AnnouncerExitSequenceComplete
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::AnnouncerExitSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AnnouncerExitSequenceComplete");

	AChallengeBase_C_AnnouncerExitSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.HandleSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentScore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::HandleSuccess(int CurrentScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.HandleSuccess");

	AChallengeBase_C_HandleSuccess_Params params;
	params.CurrentScore = CurrentScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.HandleFailure
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::HandleFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.HandleFailure");

	AChallengeBase_C_HandleFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.CloseTravelCapsule
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::CloseTravelCapsule()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.CloseTravelCapsule");

	AChallengeBase_C_CloseTravelCapsule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.ReceiveEndPlay");

	AChallengeBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.PlayFaster
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::PlayFaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.PlayFaster");

	AChallengeBase_C_PlayFaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.SetupCountdown
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::SetupCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SetupCountdown");

	AChallengeBase_C_SetupCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.PlayMoreFaster
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::PlayMoreFaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.PlayMoreFaster");

	AChallengeBase_C_PlayMoreFaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.PlayMaxFastness
// (BlueprintCallable, BlueprintEvent)
void AChallengeBase_C::PlayMaxFastness()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.PlayMaxFastness");

	AChallengeBase_C_PlayMaxFastness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.ExecuteUbergraph_ChallengeBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::ExecuteUbergraph_ChallengeBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.ExecuteUbergraph_ChallengeBase");

	AChallengeBase_C_ExecuteUbergraph_ChallengeBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeBase.ChallengeBase_C.ChallengeLevelComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResultsData            Results                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeBase_C::ChallengeLevelComplete__DelegateSignature(const struct FResultsData& Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.ChallengeLevelComplete__DelegateSignature");

	AChallengeBase_C_ChallengeLevelComplete__DelegateSignature_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
