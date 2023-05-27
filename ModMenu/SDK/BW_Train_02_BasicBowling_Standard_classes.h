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
	 * BlueprintGeneratedClass BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C
	 * Size -> 0x005B (FullSize[0x04CD] - InheritedSize[0x0472])
	 */
	class ABW_Train_02_BasicBowling_Standard_C : public ABW_Train_Base_C
	{
	public:
		unsigned char                                              UnknownData_8OR3[0x6];                                   // 0x0472(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0478(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_BasicBowling_06;                                   // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_BasicBowling_05;                                   // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_BasicBowling_04;                                   // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_BasicBowling_03;                                   // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       PracticeBallHeld;                                        // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PracticeBallPickedUpFromRack;                            // 0x04A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PracticeOver;                                            // 0x04A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Retrying;                                                // 0x04A3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G1B7[0x4];                                   // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRandomActorTable                                   TutorialBallTable;                                       // 0x04A8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      AnnouncementDuration;                                    // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScramSkill                                                OriginalPlayerSkill;                                     // 0x04CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitializeTrainingRoom01();
		void UserConstructionScript();
		void OnLoaded_F7C948F540839EBB92E502B36F0F8C3E(class UObject* Loaded);
		void OnLoaded_F7C948F540839EBB92E502B3129C770E(class UObject* Loaded);
		void OnLoaded_F7C948F540839EBB92E502B3B5BA9905(class UObject* Loaded);
		void OnLoaded_F7C948F540839EBB92E502B3AB0D0976(class UObject* Loaded);
		void OnLoaded_D0B447624B37A3E1AA962082A61CF32F(class UObject* Loaded);
		void OnLoaded_F97C88DF41155989E086BABDFC4ADD02(class UObject* Loaded);
		void OnLoaded_09DAA2EB4D6A8BD460BDCB91A1EAF707(class UObject* Loaded);
		void OnLoaded_2D6B5DB14D384661934CDC91B7DFFD9F(class UObject* Loaded);
		void OnLoaded_61F319404E0EB4C11B86AABCC2BE33C9(class UObject* Loaded);
		void OnLoaded_9C198FF64005DEAC0A5FF3899BAC9FDA(class UObject* Loaded);
		void OnLoaded_9DD892AA48F788DBFF4F73894A4BC535(class UObject* Loaded);
		void OnLoaded_3DFE6A59403F74DE50F3DE9C48BF5AAE(class UObject* Loaded);
		void OnLoaded_012077894615A7EA055748AB490CB7F1(class UObject* Loaded);
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
		void Tutorial_BWBallReleased(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
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
		void ExecuteUbergraph_BW_Train_02_BasicBowling_Standard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
