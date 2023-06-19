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
	 * BlueprintGeneratedClass TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C
	 * Size -> 0x01E0 (FullSize[0x0508] - InheritedSize[0x0328])
	 */
	class ATennisTrainingScrambleTargetGroup_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     _2_Button_PairSpawnLeft;                                 // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     _2_Button_PairSpawnRight;                                // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     _3_Button_SpawnLeft;                                     // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     _3_Button_SpawnRight;                                    // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     _3_Button_SpawnCenter;                                   // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      ScrambleClasses;                                         // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		int32_t                                                    MaxActiveTargets;                                        // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      InitialDelay;                                            // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    InitialTargetCount;                                      // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      RespawnDelay;                                            // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<int32_t>                                            ValidSpawnLocations;                                     // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		bool                                                       InstrumentHitBallsOnly;                                  // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       DelayActive;                                             // 0x0391(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ORKW[0x6];                                   // 0x0392(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            InitialValidSpawnLocations;                              // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      DisabledClasses;                                         // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FScramblerTargetSet>                         OptionalScrambleSet;                                     // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		TArray<class ATennisScrambleTarget_C*>                     ActiveTargets;                                           // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class AScramSportManagerTennis_Blueprint_C*                TennisManager;                                           // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TennisGameManaged;                                       // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ManagedGamePaused;                                       // 0x03E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DTKE[0x2];                                   // 0x03E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReinforcementDelay;                                      // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TennisScramblerSchedule;                                 // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<int32_t>                                            ValidSpawnLocations_Initial;                             // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            ValidSpawnLocations_Reinforcements;                      // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FScramblerTargetSet>                         ScrambleSet_Initial;                                     // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FScramblerTargetSet>                         ScrambleSet_Reinforcements;                              // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    SpawnCountMax;                                           // 0x0430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SpawnCountMin;                                           // 0x0434(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            ValidSpawnLocations_Default;                             // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      GroupSpawnDelay;                                         // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SpawnCount;                                              // 0x044C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PointCompleted;                                          // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GVK9[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATennisScrambleTargetGroup_NetNotifier_C*            NetNotifier;                                             // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATennisScrambleTargetGroup_NetNotifier_C*            NetNotifier_Pos;                                         // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATennisScrambleTargetGroup_NetNotifier_C*            NetNotifier_Neg;                                         // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            DisabledSpawnLocations;                                  // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       ForceEvenDistribution;                                   // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_C32I[0x7];                                   // 0x0481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      InstrumentDistibutionList;                               // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      BallDistibutionList;                                     // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      DisabledClasses_PerPoint;                                // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UScramGameInstance_C*                                GameInstance;                                            // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATennisScrambleTarget_C*                             TrainingTarget;                                          // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BallHasBeenFiredByTarget;                                // 0x04C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ATennisScrambleTarget_C*                             RightTrainingTarget;                                     // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATennisScrambleTarget_C*                             LeftTrainingTarget;                                      // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             TargetHasBeenHit;                                        // 0x04E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class ATennisScrambleTarget_C*>                     DemoTargets;                                             // 0x04F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void RemoveGameElement(bool* Removed);
		void RemoveAllDemoTargets();
		void TennisTrainingSingleScrambleTarget(class UClass* TargetClass, int32_t ID, ETN_Training_ScrambleTargets TargetLocation);
		void RemovePairTargets();
		void SpawnTrainingTargetPair(class UClass* TargetClass, int32_t ID, class UTexture2D* Icon, ETN_Training_ScrambleTargets Position);
		void SpawnTrainingTargetClass(const struct FTransform& Transform, class UClass* TargetClass, int32_t ID);
		void FilterScrambleSet(TArray<struct FScramblerTargetSet>* ScramblerTargetSet, TArray<struct FScramblerTargetSet>* FilteredTargetSet);
		void SpecificBallActivated(class UClass* BallClass);
		void GetValidSpecificBalls(TArray<class UClass*>* BallDistibutionList);
		void SpecificInstrumentActivated(class UClass* InstrumentClass);
		void GetValidSpecificInstruments(TArray<class UClass*>* ValidInstruments);
		void RemoveAllNetNotifiers();
		void SetSpawnLocsForReinforcements();
		void UpdateTennisManagerVars(int32_t Game, int32_t Point);
		void RemoveAllTargets();
		void GetActiveTargetsByClass(class UClass* ScrambleEventClass, int32_t* Count);
		void GetWeightedClassList(TArray<class UClass*>* WeightedList);
		void DisableScrambleEventType(class UClass* EventClass);
		void RemoveDisabledSpawnLocations(TArray<int32_t>* ValidSpawnLocations);
		void DisableSpawnLocations(TArray<int32_t>* DisabledLocations);
		void SpawnInitial();
		void SpawnRandom();
		void SpawnDemoTarget(const struct FTransform& Transform, int32_t ID, class UClass* ScrambleClass);
		void Initialize();
		void UserConstructionScript();
		void RespawnLoop();
		void TargetDespawned();
		void ScrambleTargetRemoved(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int32_t ID);
		void TargetHit(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int32_t ID);
		void SpawnTargetRight_Basketball();
		void SpawnDemoTargetLeft_RandRacket();
		void SpawnDemoTargetCenter_NetRaise();
		void SpawnTargetLeft_Basketball();
		void SpawnTargetRight_SoccerBall();
		void SpawnTargetLeft_GolfBall();
		void SpawnTargetRight_Chicken();
		void SpawnDemoTargetLeft_Basketball();
		void SpawnTargetRight_Bat();
		void TargetFiredBall(class ATN_Ball_Base_C* BallFired);
		void SpawnTargetLeft_PoolNoodle();
		void SpawnTargetRight_FoamFinger();
		void SpawnTargetLeft_FloppyFish();
		void SpawnOneOfScrambleTargetPair(class UClass* TargetClass, int32_t ID, class UTexture2D* Icon, ETN_Training_ScrambleTargets Position);
		void SpawnTargetLeft_Baseball();
		void SpawnTargetLeft_Bat();
		void SpawnTargetRight_Baseball();
		void SpawnTargetLeft_FoamFinger();
		void SpawnTargetLeft_BeachBall();
		void SpawnTargetRight_Paddle();
		void SpawnTargetLeft_PingPongBall();
		void SpawnTargetRight_PoolNoodle();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void SpawnDemoTargetLeft_HockeyStick();
		void SpawnDemoTargetCenter_GolfClub();
		void SpawnTargetRight_TennisRacket();
		void SpawnDemoTargetLeft_TennisRacket();
		void SpawnDemoTargetRight_HockeyStick();
		void ReceiveBeginPlay();
		void SpawnDemoTargetCenter_Basketball();
		void SpawnDemoTargetLeft_Frisbee();
		void SpawnDemoTargetRight_PingPongBall();
		void SpawnDemoTargetRight_Frisbee();
		void SpawnDemoTargetLeft_PingPongBall();
		void SpawnDemoTargetCenter_TennisBall();
		void SpawnDemoTargetLeft_HockeyPuck();
		void ExecuteUbergraph_TennisTrainingScrambleTargetGroup(int32_t EntryPoint);
		void TargetHasBeenHit__DelegateSignature(class ATennisScrambleTarget_C* TargetActor, class UClass* EventClass, int32_t TargetID);
		void BallHasBeenFiredByTarget__DelegateSignature(class ATN_Ball_Base_C* LaunchedBall);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
