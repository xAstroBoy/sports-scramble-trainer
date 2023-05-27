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
	 * BlueprintGeneratedClass TN_MiniGameScoreboard.TN_MiniGameScoreboard_C
	 * Size -> 0x00A1 (FullSize[0x03C9] - InheritedSize[0x0328])
	 */
	class ATN_MiniGameScoreboard_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Root;                                                    // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    ScoreboardWidget;                                        // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Alpha_21590E324C03E3E7ACF5FDAFE71D067F;       // 0x0340(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_21590E324C03E3E7ACF5FDAFE71D067F;  // 0x0344(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LM3O[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Alpha_3A8824BD4582184C6D93D2887E84FED8;       // 0x0350(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_3A8824BD4582184C6D93D2887E84FED8;  // 0x0354(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XN2M[0x3];                                   // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_ScoreTranslation_Alpha_EB7DE06D4EA8BFE6D9AADFA99A83C14F; // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_ScoreTranslation__Direction_EB7DE06D4EA8BFE6D9AADFA99A83C14F; // 0x0364(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F5D4[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_ScoreTranslation;                               // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_TimeTranslation_Alpha_600A6B9645DAB0DF1424AFA4C243A788; // 0x0370(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_TimeTranslation__Direction_600A6B9645DAB0DF1424AFA4C243A788; // 0x0374(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5GUS[0x3];                                   // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_TimeTranslation;                                // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentTime;                                             // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Countdown;                                               // 0x0384(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ClockActive;                                             // 0x0385(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q2YT[0x2];                                   // 0x0386(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TargetTime;                                              // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_HL7Y[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTN_MiniGameScoreboard_Widget_C*                     Widget;                                                  // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowClock;                                               // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_IKW1[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TargetTimeReached;                                       // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    TriggerTime;                                             // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8UWD[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TriggerTimeReached;                                      // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       UseRevealAnimations;                                     // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void OverrideScoreText(const class FString& InputString, bool* Callback);
		void HideClock(bool* ClockHidden);
		void StartClock(int32_t Duration, bool Countdown, bool AutoStart, bool* TimerStarted);
		void PauseClock(int32_t* DisplayedTime);
		void ResetClock(bool* ClockReset);
		void ResumeClock(bool* ClockResumed);
		void SetScore(int32_t NewScore, bool* ScoreUpdated);
		void SetPoints(int32_t Points);
		void SetNewClockTime(int32_t NewTime);
		void SetScoreRange(int32_t CurrentScore, int32_t GoalScore);
		void Initialize();
		void HideScore();
		void SetClockTime(int32_t NewTime);
		void UserConstructionScript();
		void Timeline_TimeTranslation__FinishedFunc();
		void Timeline_TimeTranslation__UpdateFunc();
		void Timeline_ScoreTranslation__FinishedFunc();
		void Timeline_ScoreTranslation__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void ClockUpdateLoop();
		void ReceiveBeginPlay();
		void RevealTime();
		void RevealScore();
		void HideTime();
		void HideScoreAnimated();
		void RevealNewClockTime();
		void RevealNewScoring();
		void HideNewClockTime();
		void HideNewScoring();
		void StartNewClock(int32_t Duration, bool Countdown, bool AutoStart);
		void UpdateNewClockLoop();
		void ExecuteUbergraph_TN_MiniGameScoreboard(int32_t EntryPoint);
		void TriggerTimeReached__DelegateSignature(int32_t CurrentTime);
		void TargetTimeReached__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
