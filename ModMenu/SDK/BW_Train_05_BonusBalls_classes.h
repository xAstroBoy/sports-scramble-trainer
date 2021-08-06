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

// BlueprintGeneratedClass BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C
// 0x007E (FullSize[0x04F0] - InheritedSize[0x0472])
class ABW_Train_05_BonusBalls_C : public ABW_Train_Base_C
{
public:
	unsigned char                                      UnknownData_KSX1[0x6];                                     // 0x0472(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_Announcer11;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_Announcer10;                                         // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_Announcer06;                                         // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_Announcer07;                                         // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_GrabTheBall;                                         // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               FirstPinsSet;                                              // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Retrying;                                                  // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8ZGG[0x6];                                     // 0x04AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRandomActorTable                           TutorialBallTable;                                         // 0x04B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AnnouncementDuration;                                      // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BW_TNG_RM_04_EBW_TNG_RM_04>            ProgressionTracking;                                       // 0x04D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7L88[0x3];                                     // 0x04D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBW_BallData>                        BallList;                                                  // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               BallGrabbed;                                               // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SkipBallAudio;                                             // 0x04E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DBB3[0x2];                                     // 0x04EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                score;                                                     // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_Train_05_BonusBalls.BW_Train_05_BonusBalls_C");
		return ptr;
	}



	void GetDelayPerBall(class ABW_Ball_Base_C* NewParam, float* Delay);
	void TryAdvanceSingleBallProgression();
	void GetShouldRespawn(bool* Reset);
	void TryResetSingleBallProgression();
	void StopAudioComponents();
	void ProgressTutorialEnum();
	void InitializeTrainingRoom04();
	void UserConstructionScript();
	void OnLoaded_43C79D984E8A9710EBC30F9943929E81(class UObject* Loaded);
	void OnLoaded_0C28BFC84AB47C78A7F0E8A2BCC877A8(class UObject* Loaded);
	void OnLoaded_E45B12854AFB015C620359B2F85BF11F(class UObject* Loaded);
	void OnLoaded_2B026B40485D31E7C825FFBC106266BB(class UObject* Loaded);
	void OnLoaded_3813B854411DC1FD0E7C7BBE25284E88(class UObject* Loaded);
	void OnLoaded_FA0505B8434A1877054084831073FD1D(class UObject* Loaded);
	void OnLoaded_516A07254005ADEAC749BBBE90FFDB2F(class UObject* Loaded);
	void OnLoaded_4A05E7634166DBD6D74E09AE3106C7FB(class UObject* Loaded);
	void OnLoaded_BD4CE0074B4056EE9A254196F186EA6D(class UObject* Loaded);
	void OnLoaded_BA65F9E24C6492C21538A09533083202(class UObject* Loaded);
	void OnLoaded_642992B74F8FD02D2CC224A4E446C595(class UObject* Loaded);
	void OnLoaded_94137FAF4495F37CD28D2688CD9DCFD0(class UObject* Loaded);
	void OnLoaded_BC0E761E43B7BCC908874B9539B8A524(class UObject* Loaded);
	void OnLoaded_96BD97464031A388FD34E18F1AD82DB7(class UObject* Loaded);
	void OnLoaded_DC107CBD4A860AE96B28059A0D320162(class UObject* Loaded);
	void OnLoaded_9AA5F0CF48E9B644BF1704A31659FA48(class UObject* Loaded);
	void Spawn_A_Ball(class UClass* BallClass);
	void RespawnLastBall(bool PlaySound);
	void SpawnedBallDied(class AScramPrimitiveActor* DestroyedPrimitive);
	void SpawnedBallGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ReceiveBeginPlay();
	void TutorialStepOne();
	void TutorialStepTwo();
	void TutorialStepThree();
	void TutorialStepFour();
	void CountDownCompleted();
	void StartTraining();
	void SpawnBalls();
	void GetCurrentLaneScore(int LaneID, int CurrentScore);
	void ListenForBowlingEvent(int PlayerId, SportsScramble_EBowlingEvent BowlingEvent);
	void RemindPlayerToGrabBall();
	void NotifyTrainingContinue(class AActor* DestroyedActor);
	void AnnouncerExitSequenceComplete();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void CustomEvent_2();
	void CustomEvent();
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
	void ExecuteUbergraph_BW_Train_05_BonusBalls(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
