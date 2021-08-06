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

// BlueprintGeneratedClass BB_Train_02_StrikezoneRegions.BB_Train_02_StrikezoneRegions_C
// 0x009A (FullSize[0x06BA] - InheritedSize[0x0620])
class ABB_Train_02_StrikezoneRegions_C : public ABB_Train_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_Dialog_05;                                           // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_Dialog06;                                            // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_NiceYouGotIt;                                        // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_Dialog11;                                            // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_Dialog10;                                            // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_HeresABall;                                          // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_Dialog09;                                            // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_Dialog08;                                            // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_Dialog07;                                            // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_ComponentTryAgain;                                   // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_Good;                                                // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FBaseballPitcherPreferences                 OriginalPitchingPreferences;                               // 0x0680(0x0003) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               Tutorial_FirstTargetHit;                                   // 0x0683(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Retrying;                                                  // 0x0684(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A7LZ[0x3];                                     // 0x0685(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PauseBetweenVO;                                            // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UmpireCallDelay;                                           // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ListenForAnalogStick;                                      // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GDCS[0x3];                                     // 0x0691(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LeftStickLRValue;                                          // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RightStickLRValue;                                         // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EScramHandedness                    BB_Handedness;                                             // 0x069C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TrainingStarted;                                           // 0x069D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5ZHB[0x2];                                     // 0x069E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                RememberGrabBallVOTimer;                                   // 0x06A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              LeftStickUDValue;                                          // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RightStickUDValue;                                         // 0x06AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                MovedMittVOTimer;                                          // 0x06B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayerHasBall;                                             // 0x06B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RestoreScrambleBallSetting;                                // 0x06B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_Train_02_StrikezoneRegions.BB_Train_02_StrikezoneRegions_C");
		return ptr;
	}



	void StopPlayingAudioComponents();
	void SetUpInfoText();
	void BB_TRN_Regions_Initialize();
	void UserConstructionScript();
	void OnLoaded_7E289BD946FEF002EDADFBBA5E5DB18B(class UObject* Loaded);
	void OnLoaded_7E289BD946FEF002EDADFBBA59B2C7ED(class UObject* Loaded);
	void OnLoaded_7E289BD946FEF002EDADFBBAC14D6842(class UObject* Loaded);
	void OnLoaded_7E289BD946FEF002EDADFBBA0BE3F81D(class UObject* Loaded);
	void OnLoaded_7E289BD946FEF002EDADFBBAE4ADAEA3(class UObject* Loaded);
	void OnLoaded_7E289BD946FEF002EDADFBBA1B196D4F(class UObject* Loaded);
	void OnLoaded_7E289BD946FEF002EDADFBBA1C89A7CA(class UObject* Loaded);
	void OnLoaded_7E289BD946FEF002EDADFBBAA5CEA5C5(class UObject* Loaded);
	void OnLoaded_7E289BD946FEF002EDADFBBAFC749E31(class UObject* Loaded);
	void OnLoaded_7E289BD946FEF002EDADFBBADFC72FE0(class UObject* Loaded);
	void OnLoaded_7E289BD946FEF002EDADFBBAFC92274F(class UObject* Loaded);
	void OnLoaded_7E289BD946FEF002EDADFBBA2824C1F4(class UObject* Loaded);
	void OnLoaded_7E289BD946FEF002EDADFBBAC2637FA8(class UObject* Loaded);
	void OnLoaded_D01BE93B4FF11563A42815998FAF21BC(class UObject* Loaded);
	void OnLoaded_1F661D7049671CA8425BEC93FB6DAFEA(class UObject* Loaded);
	void OnLoaded_D6CC7FDC4CB30CD3ACF76DBA6594E076(class UObject* Loaded);
	void OnLoaded_F4C2D8954BB27D1E3D5495A8D05D662A(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ReadyForTraining();
	void Tutorial_Step_01();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void BB_EquipmentGrabbed(class AActor* DominantHand, class ABB_Mitt_C* Mitt);
	void Tutorial_Step_02();
	void PlayerNeedsToTryAgain();
	void CalculateScore();
	void HitFloorCollision(class ABB_Ball_Base_C* Ball, const struct FVector& HitLocation);
	void CountDownCompleted();
	void TrainingStart();
	void NotifyTrainingContinue(class AActor* DestroyedActor);
	void AnnouncerExitSequenceComplete();
	void InpAxisEvt_StickDrivenGloveLeftRight_L_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_StickDrivenGloveLeftRight_R_K2Node_InputAxisEvent_2(float AxisValue);
	void Tutorial_Step_03();
	void PitcherCaughtSomething(class UScramEventBasePayload* Payload);
	void TrainingTargetHit(SportsScramble_EBaseballScrambleTargetLocations Location);
	void BaseballEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void HandleInvalidPitch();
	void StartTimerMoveMitt(float Time);
	void SliceInstructions();
	void ListenForBallGrab();
	void PlayerGrabbedBall(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void StopListeningForBallGrab();
	void StartTimerBallGrabbed(float Time);
	void ReminderVO();
	void ListenForBBEvent();
	void InpAxisEvt_StickDrivenGloveUpDown_L_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_StickDrivenGloveUpDown_R_K2Node_InputAxisEvent_4(float AxisValue);
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
	void ExecuteUbergraph_BB_Train_02_StrikezoneRegions(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
