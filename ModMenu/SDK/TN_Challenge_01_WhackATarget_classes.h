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
	 * BlueprintGeneratedClass TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C
	 * Size -> 0x005E (FullSize[0x0718] - InheritedSize[0x06BA])
	 */
	class ATN_Challenge_01_WhackATarget_C : public ATN_Challenge_Base_C
	{
	public:
		unsigned char                                              UnknownData_OH2A[0x6];                                   // 0x06BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       GameOver;                                                // 0x06C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2Z04[0x3];                                   // 0x06C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeBetweenLauncherFire;                                 // 0x06CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        AnnouncerSequence;                                       // 0x06D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       FirstPauseCompleted;                                     // 0x06E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SecondPauseCompleted;                                    // 0x06E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ThirdPauseCompleted;                                     // 0x06E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_844R[0x1];                                   // 0x06E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetAnimationPlayRate;                                 // 0x06E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GameLength;                                              // 0x06E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4QLB[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANW_Court_BP_C*                                      NW_Court;                                                // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        Alt_AnnouncerSequence;                                   // 0x06F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       UseAlternateSequence;                                    // 0x0708(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HCP2[0x7];                                   // 0x0709(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScramSaveData*                                      SaveData;                                                // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupBallLaunchers();
		void SetupInfoText();
		void Initialize();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void StartGame();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void AnnouncerPresenting();
		void SetTargetAnimationPlayRate();
		void NotifyChallengeContinue(class AActor* DestroyedActor);
		void SpeedUpTimer();
		void SpeedUp();
		void GameEnd();
		void TN_TriggerCountdown();
		void OnBallHitModifyCollision(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void AnnouncerExitSequenceComplete();
		void GetNextLauncherBall();
		void ExecuteUbergraph_TN_Challenge_01_WhackATarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
