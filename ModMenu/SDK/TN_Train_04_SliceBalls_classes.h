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
	 * BlueprintGeneratedClass TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C
	 * Size -> 0x00E7 (FullSize[0x0679] - InheritedSize[0x0592])
	 */
	class ATN_Train_04_SliceBalls_C : public ATN_Train_Base_C
	{
	public:
		unsigned char                                              UnknownData_N30T[0x6];                                   // 0x0592(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0598(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_SliceInstructions;                                 // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    maxBalls;                                                // 0x05A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DelayBetweenLauncherBalls;                               // 0x05AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LoopCount;                                               // 0x05B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BallsMissed;                                             // 0x05B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BallsRegistered;                                         // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PVAD[0x4];                                   // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LivingRoom_RightHanded_2;                                // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FBallLauncherParameters>                     LaunchTargets;                                           // 0x05D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FBallLauncherParameters                             ActiveLaunchParameters;                                  // 0x05E0(0x0084) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       BallSliced;                                              // 0x0664(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LIV4[0x3];                                   // 0x0665(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VoiceClips;                                              // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TrainingOver;                                            // 0x066C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ILN8[0x3];                                   // 0x066D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        InstructionalVOTimer;                                    // 0x0670(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       TimerStarted;                                            // 0x0678(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetupInfoText();
		void UserConstructionScript();
		void OnLoaded_F6E40A67480C3825F8FD6EA77E6091DC(class UObject* Loaded);
		void OnLoaded_E362DC7E4E6C18B8F08D14B987CD7793(class UObject* Loaded);
		void ReceiveBeginPlay();
		void PreTrainingGameCountDown();
		void CountDownCompleted();
		void TN_LaunchedBallHit(float HitLocationX, float HitLocationY);
		void TN_LaunchedBallMissed();
		void LaunchANewBall();
		void PreTrainingAnnouncer();
		void ProcessSliceShot();
		void NotifyTrainingContinue(class AActor* DestroyedActor);
		void CustomEvent_1();
		void CountVoiceClips();
		void AnnouncerExitSequenceComplete();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void StartCustomTimer(float Time);
		void SliceInstructions();
		void CustomEvent();
		void ExecuteUbergraph_TN_Train_04_SliceBalls(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
