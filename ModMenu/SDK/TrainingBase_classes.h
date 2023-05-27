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
	 * BlueprintGeneratedClass TrainingBase.TrainingBase_C
	 * Size -> 0x00C9 (FullSize[0x0411] - InheritedSize[0x0348])
	 */
	class ATrainingBase_C : public AScramActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_321_Countdown;                                     // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_ChallengeMusic_Looping;                            // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_ChallengeMusic_1_Min;                              // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AInfoDisplay_C*                                      InfoPanel;                                               // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAnnouncer_BP_C*                                     Announcer;                                               // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      GameElements;                                            // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class ACountdown_C*                                        CountdownActor;                                          // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                InstructionalText01;                                     // 0x0398(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                InstructionalText02;                                     // 0x03B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class USoundBase*                                          SFX_StartOfMatchMusic;                                   // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TargetScore;                                             // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentScore;                                            // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        AnnouncerAudioList;                                      // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UScramGameInstance_C*                                GameInstance;                                            // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnnouncer_AnimBP_C*                                 AnnouncerAnimBP;                                         // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LoopingMusicDelay;                                       // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DUYB[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TrainingComplete;                                        // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       UnlockUnlimitedTraining;                                 // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void StopFlashButtons();
		void FlashButtons();
		void HasPlayerCompletedTrainingRoomPreviously(bool* AlreadyCompleted);
		void DestroyAllBalls();
		void TrainingBaseInitialize();
		void CleanUpGameElements();
		void SpawnCountDown(class ACountdown_C** CountdownActor);
		void SpawnAnnouncerActor(TArray<class FName>* AnnouncerAudioList);
		void SpawnPopupInfo(const class FText& Text, float DisplayTime);
		void UserConstructionScript();
		void OnLoaded_D422091D4680C88E550D2CBC371746CD(class UObject* Loaded);
		void AnnouncerReady();
		void ClosingAnnouncerComplete();
		void DisplayStartOfMatchInfo(bool FadeInOutMusic);
		void ReceiveBeginPlay();
		void EndOfGame();
		void MusicFadeOut();
		void MusicFadeIn();
		void NotifyTrainingContinue(class AActor* DestroyedActor);
		void AnnouncerPairedComplete();
		void AnnouncerExitSequenceComplete();
		void HandleSuccess();
		void HandleFailure();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void Play321();
		void ExecuteUbergraph_TrainingBase(int32_t EntryPoint);
		void TrainingComplete__DelegateSignature(const struct FResultsData& Results);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
