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
	 * BlueprintGeneratedClass TN_Train_01_BasicHitting.TN_Train_01_BasicHitting_C
	 * Size -> 0x00F4 (FullSize[0x0686] - InheritedSize[0x0592])
	 */
	class ATN_Train_01_BasicHitting_C : public ATN_Train_Base_C
	{
	public:
		unsigned char                                              UnknownData_9QG4[0x6];                                   // 0x0592(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0598(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_TryBasicHitting;                                   // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_SwitchAtAnyTime;                                   // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Nice;                                              // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_TryItNow;                                          // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_SwitchHands;                                       // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_LeftHand;                                          // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_RightHand;                                         // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    maxBalls;                                                // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DelayBetweenLauncherBalls;                               // 0x05DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        LivingRoom_RightHanded_2;                                // 0x05E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FBallLauncherParameters>                     LaunchTargets;                                           // 0x05F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FBallLauncherParameters                             ActiveLaunchParameters;                                  // 0x0600(0x0084) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       LeftHandedHitter;                                        // 0x0684(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InstrumentHandSwap;                                      // 0x0685(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void StopComponentAudio();
		void InitializeTrainingRoom();
		void UnbindEvents();
		void SetupInfoText();
		void UserConstructionScript();
		void OnLoaded_EB8150EE42F763C7215938B5264A7D30(class UObject* Loaded);
		void OnLoaded_8DEF202A45E953C8787560A7255A0F42(class UObject* Loaded);
		void OnLoaded_AD03DA324FA405C6A20284B646EA73AD(class UObject* Loaded);
		void OnLoaded_D5ECA48049A11E8ACBB7A682B2BB8509(class UObject* Loaded);
		void OnLoaded_A0033A82490AC8454624E5B0079735F4(class UObject* Loaded);
		void OnLoaded_A41B6AB04521B26D804E96AA3C8D4DA3(class UObject* Loaded);
		void OnLoaded_F0C1BAD345413D755214EE832B1BD8A1(class UObject* Loaded);
		void OnLoaded_0C5989514D48421E55539D86B69F24E4(class UObject* Loaded);
		void ReceiveBeginPlay();
		void StartCountdown();
		void CountDownCompleted();
		void TN_LaunchedBallHit(float HitLocationX, float HitLocationY);
		void TN_LaunchedBallMissed();
		void LaunchNextBall(class AActor* Ball);
		void StartLaunchingBalls();
		void StartTraining();
		void NotifyTrainingContinue(class AActor* DestroyedActor);
		void AnnouncerExitSequenceComplete();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void TutorialStep01();
		void InstrumentRelease(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void CustomEvent_1();
		void CustomEvent();
		void CustomEvent_2();
		void CustomEvent_3();
		void CustomEvent_4();
		void CustomEvent_5();
		void CustomEvent_6();
		void CustomEvent_7();
		void ExecuteUbergraph_TN_Train_01_BasicHitting(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
