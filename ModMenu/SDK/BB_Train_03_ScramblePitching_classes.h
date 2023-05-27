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
	 * BlueprintGeneratedClass BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C
	 * Size -> 0x0158 (FullSize[0x0778] - InheritedSize[0x0620])
	 */
	class ABB_Train_03_ScramblePitching_C : public ABB_Train_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_Dialog31;                                          // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog30;                                          // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog29;                                          // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog28;                                          // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog27;                                          // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog26;                                          // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog25;                                          // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog24;                                          // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog23;                                          // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog22;                                          // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog21;                                          // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog_Nice;                                       // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog20;                                          // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog_Great;                                      // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog19;                                          // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog10;                                          // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog09;                                          // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog08;                                          // 0x06B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog07;                                          // 0x06B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog06;                                          // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog05;                                          // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FBaseballPitcherPreferences                         OriginalPitchingPreferences;                             // 0x06D0(0x0003) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       Tutorial_PitcherCaughtFirstBall;                         // 0x06D3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Retrying;                                                // 0x06D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5H0L[0x3];                                   // 0x06D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PauseBetweenVO;                                          // 0x06D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UmpireCallDelay;                                         // 0x06DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_Ball_Base_C*                                     Frisbee;                                                 // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Tutorial_PitcherSeesFrisbee;                             // 0x06E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4ZAZ[0x7];                                   // 0x06E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EBaseballBallType>                                  FrisbeeBasketballPingPong;                               // 0x06F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       Tutorial_CatcherCaughImbuedFrisbee;                      // 0x0700(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3DHV[0x7];                                   // 0x0701(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EBaseballBallType>                                  WiffleFrisbeePingPong;                                   // 0x0708(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       Tutorial_SwapBallArray;                                  // 0x0718(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MJOK[0x7];                                   // 0x0719(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SFX_BallGoodSound;                                       // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Tutorial_FirstTargetHit;                                 // 0x0728(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_PitcherCaughtSecondBall;                        // 0x0729(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_PitcherGrabbedFirstFrisbee;                     // 0x072A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_SecondTargetHit;                                // 0x072B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_PitcherCaughtThirdBall;                         // 0x072C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_NonImbuedFrisbeeOption;                         // 0x072D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_CatcherCaughtNonImbuedFrisbee;                  // 0x072E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_ImbuedFrisbeeOption;                            // 0x072F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_BatterSpawned;                                  // 0x0730(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_PlayerGrabbedImbuedFrisbee;                     // 0x0731(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_BatterHitFrisbee;                               // 0x0732(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_Over;                                           // 0x0733(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    TargetTracking;                                          // 0x0734(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TrainingIconActive;                                      // 0x0738(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayerHasSpecialBall;                                    // 0x0739(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_49ED[0x6];                                   // 0x073A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        HitFirstFrisbeeTargetVOTimer;                            // 0x0740(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       Tutorial_FirstBaseballInMittOrThrowingHand;              // 0x0748(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7YLW[0x7];                                   // 0x0749(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        GrabFrisbeeVOTimer;                                      // 0x0750(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       Tutorial_FirstFrisbeeInMittOrThrowingHand;               // 0x0758(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N77S[0x7];                                   // 0x0759(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseballBall*                                       BaseballEventBall;                                       // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RestoreScrambleBallSetting;                              // 0x0768(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_DontAnnoyThePlayer;                             // 0x0769(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MLUD[0x6];                                   // 0x076A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        GrabImbuedFrisbeeVOTimer;                                // 0x0770(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void HasScrambleBallOption(class UClass* Ball, bool* HasFrisbee);
		void StopPlayingAudioComponents();
		void SetupInfoText();
		void BB_TRN_Balls_Initialize();
		void UserConstructionScript();
		void OnLoaded_FCAFC5664175CE42D0760F95DE0C8CC0(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F952AA99A92(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F956C0DD1EB(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F95113477F2(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F95928AE721(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F95E4979D6E(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F95383FF254(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F9556800999(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F950B2B0951(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F95CFDC54D2(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F9568235135(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F9588CA43D4(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F95AE2309F4(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F950FD91324(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F953BBD1590(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F9511D283D2(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F95D5B00049(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F951D0DADBB(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F9585D09564(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F95D57DAFE0(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F95AE0101F5(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F9515CBE021(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F951038066F(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F95ECD31E11(class UObject* Loaded);
		void OnLoaded_FCAFC5664175CE42D0760F95546303AA(class UObject* Loaded);
		void OnLoaded_B8EEFC7548301DF7A83A57A89FD38BEA(class UObject* Loaded);
		void OnLoaded_21C23C4C4F425F0DB86562BF4A2343BE(class UObject* Loaded);
		void OnLoaded_8CA079274ABE8477635E8ABB85851604(class UObject* Loaded);
		void OnLoaded_9925058B4CD241A5192830B0C00DD715(class UObject* Loaded);
		void OnLoaded_06D315AB4ACFB3453B11B49AD83384BD(class UObject* Loaded);
		void BaseballEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ResetGate();
		void PitcherCaughtSomething(class UScramEventBasePayload* Payload);
		void CustomEvent_24();
		void CustomEvent_25();
		void StartTimerHitFirstFrisbeeTarget(float Time);
		void FrisbeeReminderVO();
		void StartTimerGrabFrisbee(float Time);
		void ReminderGrabFrisbee();
		void StartTimerGrabImbuedFrisbee(float Timer);
		void ReminderGrabImbuedFrisbee();
		void CustomEvent_21();
		void CustomEvent_22();
		void CustomEvent_23();
		void ReceiveBeginPlay();
		void ReadyForTraining();
		void Tutorial_Step_01();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void CalculateScore();
		void CountDownCompleted();
		void TrainingStart();
		void CatcherCaughtBall();
		void LookAtScrambleBalls();
		void ScrambleSelectionShown(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void NotifyTrainingContinue(class AActor* DestroyedActor);
		void AnnouncerExitSequenceComplete();
		void Tutorial_Step_02();
		void TrainingTargetHit(EBaseballScrambleTargetLocations Location);
		void Tutorial_Step_03();
		void Tutorial_Step_04();
		void ListenForNonImbuedFrisbeeGrabbed();
		void NonImbuedFrisbeeGrab(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void Tutorial_Step_05();
		void ListenForImbuedFrisbeeGrabbed();
		void ImbuedFrisbeeGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ValidHit();
		void HandlePostTutorialTargetHits();
		void GetNextPitchingTarget();
		void DestroyAllInstruments();
		void CustomEvent_1();
		void CustomEvent();
		void CustomEvent_2();
		void CustomEvent_3();
		void CustomEvent_4();
		void CustomEvent_5();
		void CustomEvent_6();
		void CustomEvent_7();
		void CustomEvent_8();
		void CustomEvent_9();
		void CustomEvent_10();
		void CustomEvent_11();
		void CustomEvent_12();
		void CustomEvent_13();
		void CustomEvent_14();
		void CustomEvent_15();
		void CustomEvent_16();
		void CustomEvent_17();
		void CustomEvent_18();
		void CustomEvent_19();
		void CustomEvent_20();
		void ExecuteUbergraph_BB_Train_03_ScramblePitching(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
