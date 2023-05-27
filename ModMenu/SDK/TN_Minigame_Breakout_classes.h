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
	 * BlueprintGeneratedClass TN_Minigame_Breakout.TN_Minigame_Breakout_C
	 * Size -> 0x00D0 (FullSize[0x03F8] - InheritedSize[0x0328])
	 */
	class ATN_Minigame_Breakout_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Streak;                                                  // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D8W9[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              StreakActor;                                             // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TargetHitReward;                                         // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BullseyeHitReward;                                       // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    score;                                                   // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MiddleHitReward;                                         // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      Scoreboards;                                             // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      GameElements;                                            // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      BallTargets;                                             // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      AvailableBallTargets;                                    // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<struct FDebugButtonInfo>                            LauncherSelectionButtons;                                // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		class ADebugButtonGroup_C*                                 LaucherChoiceMenu;                                       // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LauncherSelection;                                       // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_52W7[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATN_GameSelector_C*                                  GameSelector;                                            // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RoundsComplete;                                          // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BallDelay;                                               // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GameActive;                                              // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PY7V[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      ActivePayloads;                                          // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class ABallLauncher_C*                                     LauncherLeft;                                            // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABallLauncher_C*                                     LauncherRight;                                           // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACountdown_C*                                        CountdownActor;                                          // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddActorToGameElementList(class AActor* Actor, bool* Callback);
		void Shutdown(bool* ShutdownBegun);
		void RefreshActivePayloads();
		void IsStreakContinued(class AActor* PayloadActor, bool* StreakContinues);
		void PickNewTarget(class AActor* OldTarget);
		void SpawnGameElements();
		void UpdateScore(int32_t NewScore);
		void RegisterTargets();
		void Initialize();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void AddScore2(class AActor* PayloadActor, class AActor* BallTargetActor, int32_t RegionHit);
		void DelayDestroy();
		void GameComplete();
		void LauncherSelected(int32_t ButtonSelected);
		void SpawnLauncherSelectionMenu();
		void StartGame();
		void CountdownComplet();
		void ResetTargetsOnDelay();
		void StartLaunchers(float BallDelay);
		void UpdateLauncherDelay(float NewDelay);
		void NewBall(class AActor* NewBallActor);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_TN_Minigame_Breakout(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
