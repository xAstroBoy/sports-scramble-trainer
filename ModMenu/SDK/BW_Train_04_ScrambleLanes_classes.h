#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BW_Train_04_ScrambleLanes.BW_Train_04_ScrambleLanes_C
// 0x0056 (FullSize[0x04C8] - InheritedSize[0x0472])
class ABW_Train_04_ScrambleLanes_C : public ABW_Train_Base_C
{
public:
	unsigned char                                      UnknownData_OVP5[0x6];                                     // 0x0472(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               PracticeOver;                                              // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E12U[0x7];                                     // 0x0481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRandomActorTable                           TutorialBallTable;                                         // 0x0488(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             SplitPins;                                                 // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      TrainingLaneRefList[0x10];                                 // 0x04B8(0x0010) UNKNOWN PROPERTY: ArrayProperty BW_Train_04_ScrambleLanes.BW_Train_04_ScrambleLanes_C.TrainingLaneRefList


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_Train_04_ScrambleLanes.BW_Train_04_ScrambleLanes_C");
		return ptr;
	}



	void InitializeTrainingRoom03();
	void SetUpInfoText();
	void UserConstructionScript();
	void OnLoaded_297CA2EB42B3638D6940C692545040F4(class UObject* Loaded);
	void OnLoaded_08D016424FA97EDA0400769001BCF741(class UObject* Loaded);
	void OnLoaded_9A12BA3E41272ABC39D33CAEAF5B8604(class UObject* Loaded);
	void OnLoaded_3467622C443C1B0A73DE37B8D7E8F20F(class UObject* Loaded);
	void ReceiveBeginPlay();
	void TutorialStepOne();
	void TutorialStepTwo();
	void CountDownCompleted();
	void StartTraining();
	void GetCurrentLaneScore(int LaneID, int CurrentScore);
	void TutorialStepThree();
	void SpawnBalls();
	void NotifyTrainingContinue(class AActor* DestroyedActor);
	void AnnouncerExitSequenceComplete();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void AudioFinished_02();
	void CustomEvent();
	void CustomEvent_2();
	void ExecuteUbergraph_BW_Train_04_ScrambleLanes(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
