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
	 * BlueprintGeneratedClass BB_Train_01_Casual.BB_Train_01_Casual_C
	 * Size -> 0x00DA (FullSize[0x06FA] - InheritedSize[0x0620])
	 */
	class ABB_Train_01_Casual_C : public ABB_Train_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_Dialog_06;                                         // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_UmpireStrike;                                      // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog07;                                          // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_ComponentTryAgain;                                 // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_AnotherBall;                                       // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog_20;                                         // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog_19;                                         // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_GiveItATry;                                        // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog_15;                                         // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_OkYouGotIt;                                        // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog_14;                                         // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog_13;                                         // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog_12;                                         // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Good;                                              // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog_09;                                         // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog_08;                                         // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Nice;                                              // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FBaseballPitcherPreferences                         OriginalPitchingPreferences;                             // 0x06B0(0x0003) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       Tutorial_PlayerCaughtFirstBall;                          // 0x06B3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FYH7[0x4];                                   // 0x06B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABB_Ball_Base_C*                                     BallInGlove;                                             // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Tutorial_PlayerHasBallThrowHand;                         // 0x06C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_PlayerHasThownBall;                             // 0x06C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_CatcherCaught1stBall;                           // 0x06C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_CatcherCaught2ndBall;                           // 0x06C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_CatcherCaught1stStrike;                         // 0x06C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Tutorial_Strike1;                                        // 0x06C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Retrying;                                                // 0x06C6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G1CX[0x1];                                   // 0x06C7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PauseBetweenVO;                                          // 0x06C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Tutorial_Strike2;                                        // 0x06CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ExtraPitchHint;                                          // 0x06CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N0JI[0x2];                                   // 0x06CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UmpireCallDelay;                                         // 0x06D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    VoiceClips;                                              // 0x06D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TutorialStep5Complete;                                   // 0x06D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9AK7[0x7];                                   // 0x06D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        GrabButtonVOTimer;                                       // 0x06E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CatcherThrownBalls;                                      // 0x06E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QBM7[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ThrowBallVOTimer;                                        // 0x06F0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       TutorialStep3Complete;                                   // 0x06F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RestoreScrambleBallSetting;                              // 0x06F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void StopPlayingAudioComponents();
		void SetupInfoText();
		void BB_TRN_Casual_Initialize();
		void UserConstructionScript();
		void OnLoaded_B999142F47D36F276D30538FA3977DA9(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538F157B6C1C(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538FDB145EE6(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538F0F5E3A8D(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538F37281B56(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538FC3E249F3(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538F90988DD5(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538F41E9D85E(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538FDAC41E29(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538F8710F4C6(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538F240799E8(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538F51A677E4(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538FD13245DD(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538F81A44AA2(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538FAF79522C(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538F8F8A9675(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538FC9D10536(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538FF2EF061C(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538F4B9B80CF(class UObject* Loaded);
		void OnLoaded_B999142F47D36F276D30538FF695683D(class UObject* Loaded);
		void OnLoaded_F8DA8BF944708F44CAAF0ABC397FC98D(class UObject* Loaded);
		void OnLoaded_DD14CC6F4919003A0CB711A358F120B1(class UObject* Loaded);
		void OnLoaded_0113888D43F5D3E074DF9A893DCCD95D(class UObject* Loaded);
		void OnLoaded_1434CACC4DF9A5E02F36B2A8F3360D26(class UObject* Loaded);
		void StartGrabButtonTimer(float Time);
		void SliceInstructions();
		void BaseballEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ListenForBBEvent();
		void StartThrowBallTimer(float Time);
		void RemindPlayerToThrow();
		void CustomEvent_16();
		void CustomEvent_17();
		void ReceiveBeginPlay();
		void ReadyForTraining();
		void Tutorial_Step_01();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void HitFloorCollision(class ABB_Ball_Base_C* Ball, const struct FVector& HitLocation);
		void BB_EquipmentGrabbed(class AActor* DominantHand, class ABB_Mitt_C* Mitt);
		void PitcherCaughtSomething(class UScramEventBasePayload* Payload);
		void BallInGloveGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void Tutorial_Step_02();
		void Tutotial_Step_03();
		void Tutorial_Step_03_Retry();
		void BallInGloveThrown(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void CatcherCaughtBall();
		void Tutorial_Step_04();
		void Tutorial_Step_05();
		void Tutorial_Step_06();
		void Strikezone_Strike();
		void Tutorial_Step_07();
		void Strikezone_Ball();
		void TryAgain();
		void CalculateScore();
		void NotifyTrainingContinue(class AActor* DestroyedActor);
		void CountVoiceClips();
		void AnnouncerExitSequenceComplete();
		void CountDownCompleted();
		void StartTraining();
		void TrackMissedBalls();
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
		void CustomEvent_18();
		void CustomEvent_19();
		void CustomEvent_20();
		void CustomEvent_21();
		void CustomEvent_22();
		void ExecuteUbergraph_BB_Train_01_Casual(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
