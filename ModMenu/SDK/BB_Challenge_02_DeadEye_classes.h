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
	 * BlueprintGeneratedClass BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C
	 * Size -> 0x0088 (FullSize[0x0608] - InheritedSize[0x0580])
	 */
	class ABB_Challenge_02_DeadEye_C : public ABB_Challenge_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0580(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     LaunchTarget;                                            // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Launcher;                                                // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        PrimaryAudioList;                                        // 0x05A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class ABB_ThrowingGlove_C*                                 ThowingGlove;                                            // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_Mitt_C*                                          CatchersMitt;                                            // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_ChallengeTarget_Spawner_C*                       TargetSpawner;                                           // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_BallLauncher_C*                                  BallLauncher;                                            // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsGameRunning;                                           // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IAXQ[0x3];                                   // 0x05D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LaunchDelay;                                             // 0x05D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      BallQeue;                                                // 0x05D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    RegularTargetScore;                                      // 0x05E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GoldTargetBonus;                                         // 0x05EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BonusClearScore;                                         // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PatternIndex;                                            // 0x05F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SetIsChanging;                                           // 0x05F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q8Y3[0x7];                                   // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABB_DeadEyeChallenge_Bonus_C*                        BonusBlueprint;                                          // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitializeChallenge();
		void Cleanup();
		void UpdateScoreAndBoard(int32_t AddScore);
		void LaunchABall();
		void SpawnAndSetManager();
		void SetupInfoText();
		void UserConstructionScript();
		void OnLoaded_37E8D5894448E31F0DE345BF8859AB32(class UObject* Loaded);
		void OnLoaded_3AFD01DE4391313FA6831B9C6EF733BD(class UObject* Loaded);
		void OnLoaded_FD1FFDC6474C8BFCD721438D1B29A6D8(class UObject* Loaded);
		void InitiateBonusScore();
		void SpawnPitchingEquipment();
		void FindGloves(class AActor* DominantHand, class ABB_Mitt_C* Mitt);
		void TargetScored(bool bonus);
		void GroupCleared(bool BonusGroup);
		void BallLaunched(class AActor* Ball);
		void OnLaunchedBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void BallPitched(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void OnLaunchedBallCaught(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void BallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive);
		void OnGlobalBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void BonusScoreReceived();
		void SpawnSecondSetOfGold();
		void ReceiveBeginPlay();
		void StartGame();
		void TimeLoop();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BB_TriggerCountdown();
		void EndGame();
		void AnnouncerExitSequenceComplete();
		void Shortcut();
		void ExecuteUbergraph_BB_Challenge_02_DeadEye(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
