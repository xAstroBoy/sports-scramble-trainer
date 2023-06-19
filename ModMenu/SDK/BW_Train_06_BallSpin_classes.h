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
	 * BlueprintGeneratedClass BW_Train_06_BallSpin.BW_Train_06_BallSpin_C
	 * Size -> 0x005E (FullSize[0x04D0] - InheritedSize[0x0472])
	 */
	class ABW_Train_06_BallSpin_C : public ABW_Train_Base_C
	{
	public:
		unsigned char                                              UnknownData_RRKH[0x6];                                   // 0x0472(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0478(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_AnnouncerAudio03;                                  // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_GrabTheBall;                                       // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       PracticeBallPickedUp;                                    // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PracticeOver;                                            // 0x0491(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Retrying;                                                // 0x0492(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HEZZ[0x5];                                   // 0x0493(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRandomActorTable                                   TutorialBallTable;                                       // 0x0498(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      AnnouncementDuration;                                    // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BallSpun;                                                // 0x04BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnnouncerClosingSequence;                                // 0x04BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9T0B[0x2];                                   // 0x04BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        FinalAnnouncerSequence;                                  // 0x04C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void InitializeTrainingRoom();
		void UserConstructionScript();
		void OnLoaded_C3BCD3CA406BADCB3B31B1ACAC51151B(class UObject* Loaded);
		void OnLoaded_24C7C99245E1C8E37C722B87EFC08088(class UObject* Loaded);
		void OnLoaded_B07B31C54DBDD704354573A26AD8F62D(class UObject* Loaded);
		void OnLoaded_784782D14673D8C32DC99F8190AB3A7E(class UObject* Loaded);
		void OnLoaded_3CA01BFF47ED11FC566F5FBDB3E03CD0(class UObject* Loaded);
		void OnLoaded_4807BEEC456CFE7680D5688F194D458A(class UObject* Loaded);
		void OnLoaded_7AB348F0463CCF29B7A424A9115AE65A(class UObject* Loaded);
		void OnLoaded_C48BAEB04432EDC91E21A58D1D07BA7E(class UObject* Loaded);
		void OnLoaded_1193A7A44F10FDE6F453A0ADC81C1045(class UObject* Loaded);
		void OnLoaded_352E9D1E4119230ECB6DC79B26395A40(class UObject* Loaded);
		void ReceiveBeginPlay();
		void TutorialStepOne();
		void TutorialStepTwo();
		void SpecificBallCreated(class ABW_Ball_Base_C* Ball);
		void Tutorial_BW_BallGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void RetryPracticeRoll(bool GutterBall);
		void CountDownCompleted();
		void StartTraining();
		void SpawnBalls();
		void ListenForBowlingEvent(int32_t PlayerId, EBowlingEvent BowlingEvent);
		void CheckTutorialStatus(class AScramPrimitiveActor* DestroyedPrimitive);
		void SpecialScoreEvent(int32_t LaneID, int32_t Points);
		void NotifyTrainingContinue(class AActor* DestroyedActor);
		void AnnouncerExitSequenceComplete();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnFinalizeThrow(class ABowlingBall* Ball);
		void CustomEvent();
		void CustomEvent_2();
		void CustomEvent_3();
		void CustomEvent_4();
		void CustomEvent_5();
		void CustomEvent_6();
		void CustomEvent_7();
		void ExecuteUbergraph_BW_Train_06_BallSpin(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
