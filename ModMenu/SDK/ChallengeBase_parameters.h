#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ChallengeBase.ChallengeBase_C.PlayResultMusic
struct AChallengeBase_C_PlayResultMusic_Params
{
	bool                                               Succeeded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChallengeBase.ChallengeBase_C.EarnChallengeTrophy
struct AChallengeBase_C_EarnChallengeTrophy_Params
{
};

// Function ChallengeBase.ChallengeBase_C.SaveIntroHasPlayed
struct AChallengeBase_C_SaveIntroHasPlayed_Params
{
};

// Function ChallengeBase.ChallengeBase_C.CheckIntroHasPlayed
struct AChallengeBase_C_CheckIntroHasPlayed_Params
{
	bool                                               IntroHasPlayed;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChallengeBase.ChallengeBase_C.DestroyAllBalls
struct AChallengeBase_C_DestroyAllBalls_Params
{
};

// Function ChallengeBase.ChallengeBase_C.BB_SpawnScrambleIcon
struct AChallengeBase_C_BB_SpawnScrambleIcon_Params
{
	TEnumAsByte<BB_ScramIconSetting_EBB_ScramIconSetting> Settings;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeBase.ChallengeBase_C.AwardTrophy?
struct AChallengeBase_C_AwardTrophy__Params
{
	int                                                CurrentScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeBase.ChallengeBase_C.SpawnAnnouncerPaired
struct AChallengeBase_C_SpawnAnnouncerPaired_Params
{
	TArray<struct FName>                               AnnouncerPairedList;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ChallengeBase.ChallengeBase_C.VerifyNotMultiplayerGame
struct AChallengeBase_C_VerifyNotMultiplayerGame_Params
{
	bool                                               NotMultiplayer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChallengeBase.ChallengeBase_C.BW_SpawnScrambleIcon
struct AChallengeBase_C_BW_SpawnScrambleIcon_Params
{
};

// Function ChallengeBase.ChallengeBase_C.DestroyPopupInfo
struct AChallengeBase_C_DestroyPopupInfo_Params
{
};

// Function ChallengeBase.ChallengeBase_C.DemoDisplayInfo
struct AChallengeBase_C_DemoDisplayInfo_Params
{
	float                                              Display_Time;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Display_Text;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ChallengeBase.ChallengeBase_C.SpawnDemoCountdown
struct AChallengeBase_C_SpawnDemoCountdown_Params
{
};

// Function ChallengeBase.ChallengeBase_C.SetAnnouncerIdle
struct AChallengeBase_C_SetAnnouncerIdle_Params
{
};

// Function ChallengeBase.ChallengeBase_C.TN_SpawnScrambleIcons
struct AChallengeBase_C_TN_SpawnScrambleIcons_Params
{
};

// Function ChallengeBase.ChallengeBase_C.CleanUpGameElements
struct AChallengeBase_C_CleanUpGameElements_Params
{
};

// Function ChallengeBase.ChallengeBase_C.SpawnCountDown
struct AChallengeBase_C_SpawnCountDown_Params
{
	float                                              CountdownDelay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GoShrinkDelay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACountdown_C*                                CountdownActor;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeBase.ChallengeBase_C.SpawnAnnouncerActor
struct AChallengeBase_C_SpawnAnnouncerActor_Params
{
	TArray<struct FName>                               AnnouncerAudioList;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ChallengeBase.ChallengeBase_C.SpawnPopupInfo
struct AChallengeBase_C_SpawnPopupInfo_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeBase.ChallengeBase_C.UserConstructionScript
struct AChallengeBase_C_UserConstructionScript_Params
{
};

// Function ChallengeBase.ChallengeBase_C.OnLoaded_240F79C84511017CD505A2935D87C98D
struct AChallengeBase_C_OnLoaded_240F79C84511017CD505A2935D87C98D_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeBase.ChallengeBase_C.OnLoaded_C635C19C410089A01C0EDB9E032CD3AB
struct AChallengeBase_C_OnLoaded_C635C19C410089A01C0EDB9E032CD3AB_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeBase.ChallengeBase_C.OnLoaded_AE66B1B049760CA5F7EA9695763B44E4
struct AChallengeBase_C_OnLoaded_AE66B1B049760CA5F7EA9695763B44E4_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeBase.ChallengeBase_C.OnLoaded_47A418EE4AFE710FF392008F080B51FF
struct AChallengeBase_C_OnLoaded_47A418EE4AFE710FF392008F080B51FF_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeBase.ChallengeBase_C.OnLoaded_7EC3FD0744C090F4AC8184B285AF0573
struct AChallengeBase_C_OnLoaded_7EC3FD0744C090F4AC8184B285AF0573_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeBase.ChallengeBase_C.RestoreAllSportSettings
struct AChallengeBase_C_RestoreAllSportSettings_Params
{
};

// Function ChallengeBase.ChallengeBase_C.SetTempChallengeSettings
struct AChallengeBase_C_SetTempChallengeSettings_Params
{
};

// Function ChallengeBase.ChallengeBase_C.AnnouncerReady
struct AChallengeBase_C_AnnouncerReady_Params
{
};

// Function ChallengeBase.ChallengeBase_C.DisplayStartOfMatchInfo
struct AChallengeBase_C_DisplayStartOfMatchInfo_Params
{
	bool                                               FadeInOutMusic;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChallengeBase.ChallengeBase_C.ReceiveBeginPlay
struct AChallengeBase_C_ReceiveBeginPlay_Params
{
};

// Function ChallengeBase.ChallengeBase_C.EndOfGame
struct AChallengeBase_C_EndOfGame_Params
{
};

// Function ChallengeBase.ChallengeBase_C.MusicFadeOut
struct AChallengeBase_C_MusicFadeOut_Params
{
};

// Function ChallengeBase.ChallengeBase_C.MusicFadeIn
struct AChallengeBase_C_MusicFadeIn_Params
{
};

// Function ChallengeBase.ChallengeBase_C.VoiceClipEnd
struct AChallengeBase_C_VoiceClipEnd_Params
{
};

// Function ChallengeBase.ChallengeBase_C.ResumeAnnouncer
struct AChallengeBase_C_ResumeAnnouncer_Params
{
};

// Function ChallengeBase.ChallengeBase_C.AnnouncerPaused
struct AChallengeBase_C_AnnouncerPaused_Params
{
};

// Function ChallengeBase.ChallengeBase_C.SaveAllSportSettings
struct AChallengeBase_C_SaveAllSportSettings_Params
{
};

// Function ChallengeBase.ChallengeBase_C.AnnouncerPresenting
struct AChallengeBase_C_AnnouncerPresenting_Params
{
};

// Function ChallengeBase.ChallengeBase_C.AnnouncerDonePresenting
struct AChallengeBase_C_AnnouncerDonePresenting_Params
{
};

// Function ChallengeBase.ChallengeBase_C.AnnouncerPlayingSequence
struct AChallengeBase_C_AnnouncerPlayingSequence_Params
{
	struct FName                                       SequenceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeBase.ChallengeBase_C.NotifyChallengeContinue
struct AChallengeBase_C_NotifyChallengeContinue_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeBase.ChallengeBase_C.ShowDemoInstructions
struct AChallengeBase_C_ShowDemoInstructions_Params
{
};

// Function ChallengeBase.ChallengeBase_C.AnnouncerPairedComplete
struct AChallengeBase_C_AnnouncerPairedComplete_Params
{
};

// Function ChallengeBase.ChallengeBase_C.AnnouncerExitSequenceComplete
struct AChallengeBase_C_AnnouncerExitSequenceComplete_Params
{
};

// Function ChallengeBase.ChallengeBase_C.HandleSuccess
struct AChallengeBase_C_HandleSuccess_Params
{
	int                                                CurrentScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeBase.ChallengeBase_C.HandleFailure
struct AChallengeBase_C_HandleFailure_Params
{
};

// Function ChallengeBase.ChallengeBase_C.CloseTravelCapsule
struct AChallengeBase_C_CloseTravelCapsule_Params
{
};

// Function ChallengeBase.ChallengeBase_C.ReceiveEndPlay
struct AChallengeBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeBase.ChallengeBase_C.PlayFaster
struct AChallengeBase_C_PlayFaster_Params
{
};

// Function ChallengeBase.ChallengeBase_C.SetupCountdown
struct AChallengeBase_C_SetupCountdown_Params
{
};

// Function ChallengeBase.ChallengeBase_C.PlayMoreFaster
struct AChallengeBase_C_PlayMoreFaster_Params
{
};

// Function ChallengeBase.ChallengeBase_C.PlayMaxFastness
struct AChallengeBase_C_PlayMaxFastness_Params
{
};

// Function ChallengeBase.ChallengeBase_C.ExecuteUbergraph_ChallengeBase
struct AChallengeBase_C_ExecuteUbergraph_ChallengeBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeBase.ChallengeBase_C.ChallengeLevelComplete__DelegateSignature
struct AChallengeBase_C_ChallengeLevelComplete__DelegateSignature_Params
{
	struct FResultsData                                Results;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
