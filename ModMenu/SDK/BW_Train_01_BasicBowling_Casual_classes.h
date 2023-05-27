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
	 * BlueprintGeneratedClass BW_Train_01_BasicBowling_Casual.BW_Train_01_BasicBowling_Casual_C
	 * Size -> 0x005C (FullSize[0x04CE] - InheritedSize[0x0472])
	 */
	class ABW_Train_01_BasicBowling_Casual_C : public ABW_Train_Base_C
	{
	public:
		unsigned char                                              UnknownData_9TJT[0x6];                                   // 0x0472(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0478(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_BasicBowling_06;                                   // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_BasicBowling_05;                                   // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_BasicBowling_04;                                   // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_BasicBowling_03;                                   // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       PracticeBallPickedUp;                                    // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PracticeOver;                                            // 0x04A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Retrying;                                                // 0x04A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1NDL[0x5];                                   // 0x04A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRandomActorTable                                   TutorialBallTable;                                       // 0x04A8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      AnnouncementDuration;                                    // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScramSkill                                                OriginalPlayerSkill;                                     // 0x04CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBowlingEvent                                              WhatWasTheBowlingEvent;                                  // 0x04CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitializeTrainingRoom01();
		void UserConstructionScript();
		void OnLoaded_C6AE49AD4BD86C106F72F5B7D1AE493C(class UObject* Loaded);
		void OnLoaded_C6AE49AD4BD86C106F72F5B7FA4AF30D(class UObject* Loaded);
		void OnLoaded_C6AE49AD4BD86C106F72F5B78B0B3540(class UObject* Loaded);
		void OnLoaded_C6AE49AD4BD86C106F72F5B731CA4F10(class UObject* Loaded);
		void OnLoaded_21548C324B63C08D1BA1738419FBA940(class UObject* Loaded);
		void OnLoaded_A593126D42A0238EE8D5E3A44AC9A86A(class UObject* Loaded);
		void OnLoaded_E5974E2A48771520125DBB9862233953(class UObject* Loaded);
		void OnLoaded_3B72F2B148D0A4284FB62FAEA82D51AD(class UObject* Loaded);
		void OnLoaded_0689B50A43EC405C49876795EFE28166(class UObject* Loaded);
		void OnLoaded_16DBC9254FF514C07893388C26D2D4E9(class UObject* Loaded);
		void OnLoaded_2E0FF5804B545BD10DCEF0989F037EDB(class UObject* Loaded);
		void OnLoaded_C0D11F2D487BD106DB4A35A0FCF84A8C(class UObject* Loaded);
		void OnLoaded_CC6104B1418AE2068A2FE092FEBCB54C(class UObject* Loaded);
		void ReceiveBeginPlay();
		void TutorialStepOne();
		void TutorialStepTwo();
		void SpecificBallCreated(class ABW_Ball_Base_C* Ball);
		void Tutorial_BW_BallGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void TutorialStepThree();
		void TutorialStepFour();
		void TutorialStepFive();
		void RetryPracticeRoll();
		void CountDownCompleted();
		void StartTraining();
		void SpawnBalls();
		void GetCurrentLaneScore(int32_t LaneID, int32_t CurrentScore);
		void ListenForBowlingEvent(int32_t PlayerId, EBowlingEvent BowlingEvent);
		void CheckTutorialStatus(class AScramPrimitiveActor* DestroyedPrimitive);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void NotifyTrainingContinue(class AActor* DestroyedActor);
		void AnnouncerExitSequenceComplete();
		void AudioFinished_01();
		void AudioFinished_02();
		void AudioFinished_05();
		void AudioFinished_03();
		void AudioFinished_04();
		void AudioFinished_06();
		void AudioFinished_07();
		void AudioFinished_08();
		void AudioFinished_09();
		void ExecuteUbergraph_BW_Train_01_BasicBowling_Casual(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
