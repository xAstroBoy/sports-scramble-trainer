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
	 * BlueprintGeneratedClass TN_Train_06_ScrambleInstruments.TN_Train_06_ScrambleInstruments_C
	 * Size -> 0x00D0 (FullSize[0x0662] - InheritedSize[0x0592])
	 */
	class ATN_Train_06_ScrambleInstruments_C : public ATN_Train_Base_C
	{
	public:
		unsigned char                                              UnknownData_1OOV[0x6];                                   // 0x0592(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0598(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    maxBalls;                                                // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DelayBetweenLauncherBalls;                               // 0x05A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LoopCount;                                               // 0x05A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BallsMissed;                                             // 0x05AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BallsRegistered;                                         // 0x05B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WIYX[0x4];                                   // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LivingRoom_RightHanded_2;                                // 0x05B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FBallLauncherParameters>                     LaunchTargets;                                           // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FBallLauncherParameters                             ActiveLaunchParameters;                                  // 0x05D8(0x0084) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IntroDone;                                               // 0x065C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LauncherPos01_HitBatTarget;                              // 0x065D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LauncherPos02_HitNextBatTarget;                          // 0x065E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LauncherPos03_HitPoolNoodle;                             // 0x065F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LauncherPos04_HitFoamFinger;                             // 0x0660(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LauncherPos05_HitFloppyFish;                             // 0x0661(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetupInfoText();
		void UserConstructionScript();
		void OnLoaded_17DF59BF4DD37E150012099970605769(class UObject* Loaded);
		void OnLoaded_17DF59BF4DD37E15001209998CF141EE(class UObject* Loaded);
		void OnLoaded_17DF59BF4DD37E1500120999383ECFC4(class UObject* Loaded);
		void OnLoaded_17DF59BF4DD37E1500120999DE7DD8B4(class UObject* Loaded);
		void OnLoaded_17DF59BF4DD37E1500120999B66F162B(class UObject* Loaded);
		void OnLoaded_17DF59BF4DD37E1500120999388B253D(class UObject* Loaded);
		void OnLoaded_99E78C384B86D8F9B610F9B5BDFAE4E1(class UObject* Loaded);
		void OnLoaded_A02710FC487CBE048584B7BD871EE526(class UObject* Loaded);
		void OnLoaded_11A144654CC612DA8837F5B29A3DA6F8(class UObject* Loaded);
		void ReceiveBeginPlay();
		void PreTrainingGameCountDown();
		void CountDownCompleted();
		void PreTrainingDialog_01();
		void PreTrainingDialog_02();
		void PreTrainingDialog_03();
		void PreTrainingDialog_04();
		void ScorePlayer();
		void TN_TRN_InstrumentHit();
		void TN_ScrambleTargetInstrumentChangeMissed();
		void LauncherHitBatTarget();
		void FirstRacketChangeTarget();
		void PlayerMissedBall();
		void NotifyTrainingContinue(class AActor* DestroyedActor);
		void AnnouncerExitSequenceComplete();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void CustomEvent_2();
		void CustomEvent();
		void CustomEvent_3();
		void CustomEvent_4();
		void CustomEvent_5();
		void CustomEvent_6();
		void CustomEvent_7();
		void CustomEvent_8();
		void ExecuteUbergraph_TN_Train_06_ScrambleInstruments(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
