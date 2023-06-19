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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass ChallengeBase.ChallengeBase_C
	 * Size -> 0x0149 (FullSize[0x0491] - InheritedSize[0x0348])
	 */
	class AChallengeBase_C : public AScramActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_MaxFastness;                                       // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_MoreFaster;                                        // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Faster;                                            // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_ChallengeMusic;                                    // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Countdown;                                         // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_BackgroundMusic;                                   // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ChallengeLevelComplete;                                  // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AInfoDisplay_C*                                      InfoPanel;                                               // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAnnouncer_BP_C*                                     Announcer;                                               // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      GameElements;                                            // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class ACountdown_C*                                        CountdownActor;                                          // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                InstructionalText01;                                     // 0x03C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                InstructionalText02;                                     // 0x03D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class USoundBase*                                          SFX_StartOfMatchMusic;                                   // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TargetScore;                                             // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentScore;                                            // 0x03FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        AnnouncerAudioList;                                      // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       AnnouncerSitIdle;                                        // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FNAQ[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATN_PassNPlay_ScrambleTargetGroup_C*                 TN_IconGroup;                                            // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnnouncer_AnimBP_C*                                 AnnouncerAnimBP;                                         // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LoopingMusicDelay;                                       // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_USF7[0x4];                                   // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABW_PassNPlay_ScrambleTargetGroup_C*                 BW_IconGroup;                                            // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TrophyRequirementMet;                                    // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U1NF[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABB_PassNPlay_ScrambleTargetGroup_C*                 BB_IconGroup;                                            // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OpenCapsuleOnSpawn;                                      // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X8P2[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SFX_StingerLose;                                         // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SFX_StingerWin;                                          // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RestartedChallenge;                                      // 0x0468(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Save_TN_SF_ScramBalls;                                   // 0x0469(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Save_TN_SF_ScramRackets;                                 // 0x046A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Save_TN_SF_ScramCourt;                                   // 0x046B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ETN_RuleTypes                                              Save_TN_SF_Ruleset;                                      // 0x046C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YVRX[0x3];                                   // 0x046D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Save_TN_SF_GamesToWin;                                   // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Save_BW_SF_ScramBalls;                                   // 0x0474(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Save_BW_SF_ScramLanes;                                   // 0x0475(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Save_BW_SF_SpecialBalls;                                 // 0x0476(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ETN_RuleTypes                                              Save_BW_SF_Ruleset;                                      // 0x0477(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Save_BB_FilterScramBalls;                                // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Save_BB_FilterScramBats;                                 // 0x0479(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Save_BB_QP_HomeTeam;                                     // 0x047A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z0BF[0x1];                                   // 0x047B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Save_BB_FilterStrikeoutCount;                            // 0x047C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Save_BB_FilterWalkCount;                                 // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Save_BB_FilterInnings;                                   // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Save_TN_SF_PointsToWin;                                  // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDifficulty                                                Save_TN_SF_AI_Difficulty;                                // 0x048C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDifficulty                                                Save_BW_SF_AI_Difficulty;                                // 0x048D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDifficulty                                                Save_BB_AI_Difficulty;                                   // 0x048E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDifficulty                                                Challenge_AI_Difficulty;                                 // 0x048F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SkipAnnouncer;                                           // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PlayResultMusic(bool Succeeded);
		void EarnChallengeTrophy();
		void SaveIntroHasPlayed();
		void CheckIntroHasPlayed(bool* IntroHasPlayed);
		void DestroyAllBalls();
		void BB_SpawnScrambleIcon(EBB_ScramIconSetting Settings);
		void AwardTrophy(int32_t CurrentScore);
		void SpawnAnnouncerPaired(TArray<class FName>* AnnouncerPairedList);
		void VerifyNotMultiplayerGame(bool* NotMultiplayer);
		void BW_SpawnScrambleIcon();
		void DestroyPopupInfo();
		void DemoDisplayInfo(float Display_Time, const class FText& Display_Text);
		void SpawnDemoCountdown();
		void SetAnnouncerIdle();
		void TN_SpawnScrambleIcons();
		void CleanUpGameElements();
		void SpawnCountDown(float CountdownDelay, float GoShrinkDelay, class ACountdown_C** CountdownActor);
		void SpawnAnnouncerActor(TArray<class FName>* AnnouncerAudioList);
		void SpawnPopupInfo(const class FText& Text, float DisplayTime);
		void UserConstructionScript();
		void OnLoaded_240F79C84511017CD505A2935D87C98D(class UObject* Loaded);
		void OnLoaded_C635C19C410089A01C0EDB9E032CD3AB(class UObject* Loaded);
		void OnLoaded_AE66B1B049760CA5F7EA9695763B44E4(class UObject* Loaded);
		void OnLoaded_47A418EE4AFE710FF392008F080B51FF(class UObject* Loaded);
		void OnLoaded_7EC3FD0744C090F4AC8184B285AF0573(class UObject* Loaded);
		void RestoreAllSportSettings();
		void SetTempChallengeSettings();
		void AnnouncerReady();
		void DisplayStartOfMatchInfo(bool FadeInOutMusic);
		void ReceiveBeginPlay();
		void EndOfGame();
		void MusicFadeOut();
		void MusicFadeIn();
		void VoiceClipEnd();
		void ResumeAnnouncer();
		void AnnouncerPaused();
		void SaveAllSportSettings();
		void AnnouncerPresenting();
		void AnnouncerDonePresenting();
		void AnnouncerPlayingSequence(const class FName& SequenceName);
		void NotifyChallengeContinue(class AActor* DestroyedActor);
		void ShowDemoInstructions();
		void AnnouncerPairedComplete();
		void AnnouncerExitSequenceComplete();
		void HandleSuccess(int32_t CurrentScore);
		void HandleFailure();
		void CloseTravelCapsule();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void PlayFaster();
		void SetupCountdown();
		void PlayMoreFaster();
		void PlayMaxFastness();
		void ExecuteUbergraph_ChallengeBase(int32_t EntryPoint);
		void ChallengeLevelComplete__DelegateSignature(const struct FResultsData& Results);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
