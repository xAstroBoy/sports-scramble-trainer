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
	 * BlueprintGeneratedClass BB_Train_04_BasicHitting.BB_Train_04_BasicHitting_C
	 * Size -> 0x00BB (FullSize[0x06DB] - InheritedSize[0x0620])
	 */
	class ABB_Train_04_BasicHitting_C : public ABB_Train_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_RightHand;                                         // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_LeftHand;                                          // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_GiveItAnotherShot;                                 // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog12;                                          // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_OneMore;                                           // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Alright;                                           // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_GiveItAShot;                                       // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog11;                                          // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_OneMoreTime;                                       // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog10;                                          // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_AwesomeYouGotIt;                                   // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog09;                                          // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog08;                                          // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog07;                                          // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog06;                                          // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Nice;                                              // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog05;                                          // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Great;                                             // 0x06B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      PauseBetweenVO;                                          // 0x06B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UmpireCallDelay;                                         // 0x06BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Tutorial_InstrumentGrabbed;                              // 0x06C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_HandSwap;                                       // 0x06C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_FirstTBallHit;                                  // 0x06C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_SecondTBallHit;                                 // 0x06C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_FirstLaunchBallHit;                             // 0x06C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_SecondLaunchBallHit;                            // 0x06C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_TrainingStarted;                                // 0x06C6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_TrainingOver;                                   // 0x06C7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FoulOrInvalidHit;                                        // 0x06C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C5K8[0x7];                                   // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABB_Ball_Base_C*                                     HitBall;                                                 // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBaseballBatterPreferences                          OriginalBattingPreferences;                              // 0x06D8(0x0003) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void StopPlayingAudioComponents();
		void SetupInfoText();
		void BB_TRN_Hitting_Initialize();
		void UserConstructionScript();
		void OnLoaded_8710C7C340B2ED31B76B3A8E481C323C(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8EC3386648(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8EE896498B(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8EE258DCA7(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8EB8FFEF97(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8E9A785AA6(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8E97DF2AC3(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8ED99E902D(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8E9BDFF673(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8E88ABAD19(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8E37CFEB8A(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8E2025C164(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8E84D27307(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8E429D7669(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8E475ED295(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8ED9876104(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8E4EE2BBB5(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8ED3F5EA14(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8E1F8CC91F(class UObject* Loaded);
		void OnLoaded_95FB804449C7D9E925BA67A64F337473(class UObject* Loaded);
		void OnLoaded_3DCA43D043584AD180E2ACBC151AF2F2(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8E039BEFFA(class UObject* Loaded);
		void OnLoaded_8710C7C340B2ED31B76B3A8E8246ADE5(class UObject* Loaded);
		void ValidHitRegistered();
		void BindValidHits();
		void ProbablyAFoulBall();
		void BindInvalidHits();
		void ReceiveBeginPlay();
		void ReadyForTraining();
		void Tutorial_Step_01();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void Tutorial_Step_02();
		void Tutorial_Step_03();
		void InstrumentRelease(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void Tutorial_Step_04();
		void Tutorial_Step_05();
		void Tutorial_Step_06();
		void NotifyTrainingContinue(class AActor* DestroyedActor);
		void FirstBallReady(class AScramBall* Ball);
		void BallLaunched(class AActor* Ball);
		void BallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void LaunchBall();
		void Tutorial_Step_07();
		void Tutorial_Step_08();
		void CalculateScore();
		void CountDownCompleted();
		void TrainingStart();
		void FirstTeeBallHit();
		void ActivateBattingTee();
		void HitFloorCollision(class ABB_Ball_Base_C* Ball, const struct FVector& HitLocation);
		void AnnouncerExitSequenceComplete();
		void AudioFinished_02();
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
		void CustomEvent_21();
		void ExecuteUbergraph_BB_Train_04_BasicHitting(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
