#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ChallengeBase.ChallengeBase_C.PlayResultMusic
	 */
	struct AChallengeBase_C_PlayResultMusic_Params
	{
	public:
		bool                                                       Succeeded;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.EarnChallengeTrophy
	 */
	struct AChallengeBase_C_EarnChallengeTrophy_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.SaveIntroHasPlayed
	 */
	struct AChallengeBase_C_SaveIntroHasPlayed_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.CheckIntroHasPlayed
	 */
	struct AChallengeBase_C_CheckIntroHasPlayed_Params
	{
	public:
		bool                                                       IntroHasPlayed;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FDSE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.DestroyAllBalls
	 */
	struct AChallengeBase_C_DestroyAllBalls_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.BB_SpawnScrambleIcon
	 */
	struct AChallengeBase_C_BB_SpawnScrambleIcon_Params
	{
	public:
		EBB_ScramIconSetting                                       Settings;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6MNU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.AwardTrophy?
	 */
	struct AChallengeBase_C_AwardTrophy_Params
	{
	public:
		int32_t                                                    CurrentScore;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G684[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.SpawnAnnouncerPaired
	 */
	struct AChallengeBase_C_SpawnAnnouncerPaired_Params
	{
	public:
		TArray<class FName>                                        AnnouncerPairedList;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.VerifyNotMultiplayerGame
	 */
	struct AChallengeBase_C_VerifyNotMultiplayerGame_Params
	{
	public:
		bool                                                       NotMultiplayer;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.BW_SpawnScrambleIcon
	 */
	struct AChallengeBase_C_BW_SpawnScrambleIcon_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.DestroyPopupInfo
	 */
	struct AChallengeBase_C_DestroyPopupInfo_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.DemoDisplayInfo
	 */
	struct AChallengeBase_C_DemoDisplayInfo_Params
	{
	public:
		float                                                      Display_Time;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H46K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Display_Text;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.SpawnDemoCountdown
	 */
	struct AChallengeBase_C_SpawnDemoCountdown_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.SetAnnouncerIdle
	 */
	struct AChallengeBase_C_SetAnnouncerIdle_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.TN_SpawnScrambleIcons
	 */
	struct AChallengeBase_C_TN_SpawnScrambleIcons_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.CleanUpGameElements
	 */
	struct AChallengeBase_C_CleanUpGameElements_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.SpawnCountDown
	 */
	struct AChallengeBase_C_SpawnCountDown_Params
	{
	public:
		float                                                      CountdownDelay;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      GoShrinkDelay;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ACountdown_C*                                        CountdownActor;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.SpawnAnnouncerActor
	 */
	struct AChallengeBase_C_SpawnAnnouncerActor_Params
	{
	public:
		TArray<class FName>                                        AnnouncerAudioList;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.SpawnPopupInfo
	 */
	struct AChallengeBase_C_SpawnPopupInfo_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      DisplayTime;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.UserConstructionScript
	 */
	struct AChallengeBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.OnLoaded_240F79C84511017CD505A2935D87C98D
	 */
	struct AChallengeBase_C_OnLoaded_240F79C84511017CD505A2935D87C98D_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.OnLoaded_C635C19C410089A01C0EDB9E032CD3AB
	 */
	struct AChallengeBase_C_OnLoaded_C635C19C410089A01C0EDB9E032CD3AB_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.OnLoaded_AE66B1B049760CA5F7EA9695763B44E4
	 */
	struct AChallengeBase_C_OnLoaded_AE66B1B049760CA5F7EA9695763B44E4_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.OnLoaded_47A418EE4AFE710FF392008F080B51FF
	 */
	struct AChallengeBase_C_OnLoaded_47A418EE4AFE710FF392008F080B51FF_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.OnLoaded_7EC3FD0744C090F4AC8184B285AF0573
	 */
	struct AChallengeBase_C_OnLoaded_7EC3FD0744C090F4AC8184B285AF0573_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.RestoreAllSportSettings
	 */
	struct AChallengeBase_C_RestoreAllSportSettings_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.SetTempChallengeSettings
	 */
	struct AChallengeBase_C_SetTempChallengeSettings_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.AnnouncerReady
	 */
	struct AChallengeBase_C_AnnouncerReady_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.DisplayStartOfMatchInfo
	 */
	struct AChallengeBase_C_DisplayStartOfMatchInfo_Params
	{
	public:
		bool                                                       FadeInOutMusic;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.ReceiveBeginPlay
	 */
	struct AChallengeBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.EndOfGame
	 */
	struct AChallengeBase_C_EndOfGame_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.MusicFadeOut
	 */
	struct AChallengeBase_C_MusicFadeOut_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.MusicFadeIn
	 */
	struct AChallengeBase_C_MusicFadeIn_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.VoiceClipEnd
	 */
	struct AChallengeBase_C_VoiceClipEnd_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.ResumeAnnouncer
	 */
	struct AChallengeBase_C_ResumeAnnouncer_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.AnnouncerPaused
	 */
	struct AChallengeBase_C_AnnouncerPaused_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.SaveAllSportSettings
	 */
	struct AChallengeBase_C_SaveAllSportSettings_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.AnnouncerPresenting
	 */
	struct AChallengeBase_C_AnnouncerPresenting_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.AnnouncerDonePresenting
	 */
	struct AChallengeBase_C_AnnouncerDonePresenting_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.AnnouncerPlayingSequence
	 */
	struct AChallengeBase_C_AnnouncerPlayingSequence_Params
	{
	public:
		class FName                                                SequenceName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.NotifyChallengeContinue
	 */
	struct AChallengeBase_C_NotifyChallengeContinue_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.ShowDemoInstructions
	 */
	struct AChallengeBase_C_ShowDemoInstructions_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.AnnouncerPairedComplete
	 */
	struct AChallengeBase_C_AnnouncerPairedComplete_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.AnnouncerExitSequenceComplete
	 */
	struct AChallengeBase_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.HandleSuccess
	 */
	struct AChallengeBase_C_HandleSuccess_Params
	{
	public:
		int32_t                                                    CurrentScore;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.HandleFailure
	 */
	struct AChallengeBase_C_HandleFailure_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.CloseTravelCapsule
	 */
	struct AChallengeBase_C_CloseTravelCapsule_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.ReceiveEndPlay
	 */
	struct AChallengeBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.PlayFaster
	 */
	struct AChallengeBase_C_PlayFaster_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.SetupCountdown
	 */
	struct AChallengeBase_C_SetupCountdown_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.PlayMoreFaster
	 */
	struct AChallengeBase_C_PlayMoreFaster_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.PlayMaxFastness
	 */
	struct AChallengeBase_C_PlayMaxFastness_Params
	{	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.ExecuteUbergraph_ChallengeBase
	 */
	struct AChallengeBase_C_ExecuteUbergraph_ChallengeBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeBase.ChallengeBase_C.ChallengeLevelComplete__DelegateSignature
	 */
	struct AChallengeBase_C_ChallengeLevelComplete__DelegateSignature_Params
	{
	public:
		struct FResultsData                                        Results;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
