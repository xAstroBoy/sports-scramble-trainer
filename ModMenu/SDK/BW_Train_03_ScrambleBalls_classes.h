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

// BlueprintGeneratedClass BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C
// 0x000F (FullSize[0x0481] - InheritedSize[0x0472])
class ABW_Train_03_ScrambleBalls_C : public ABW_Train_Base_C
{
public:
	unsigned char                                      UnknownData_5SM5[0x6];                                     // 0x0472(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               PracticeOver;                                              // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C");
		return ptr;
	}



	void SpawnVariousBalls();
	void InitializeTrainingRoom02();
	void SetUpInfoText();
	void UserConstructionScript();
	void OnLoaded_3DA272EF41C3A8030B8783A5CAB8567B(class UObject* Loaded);
	void OnLoaded_F01801864B34A82AD791508CDF7CF9CA(class UObject* Loaded);
	void OnLoaded_8876CE7B4904DD5B2707FF8CB1874798(class UObject* Loaded);
	void OnLoaded_75B19AD848484CE1B30D13A6DA881097(class UObject* Loaded);
	void ReceiveBeginPlay();
	void TutorialStepOne();
	void TutorialStepTwo();
	void CountDownCompleted();
	void StartTraining();
	void GetCurrentLaneScore(int LaneID, int CurrentScore);
	void NotifyTrainingContinue(class AActor* DestroyedActor);
	void AnnouncerExitSequenceComplete();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void AudioFinished_02();
	void CustomEvent();
	void CustomEvent_2();
	void CustomEvent_3();
	void ExecuteUbergraph_BW_Train_03_ScrambleBalls(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
