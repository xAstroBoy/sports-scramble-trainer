﻿#pragma once

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
	 * BlueprintGeneratedClass TennisScrambleTargetGroup.TennisScrambleTargetGroup_C
	 * Size -> 0x0170 (FullSize[0x0498] - InheritedSize[0x0328])
	 */
	class ATennisScrambleTargetGroup_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Scene;                                                   // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      ScrambleClasses;                                         // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		int32_t                                                    MaxActiveTargets;                                        // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      InitialDelay;                                            // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    InitialTargetCount;                                      // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      RespawnDelay;                                            // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<int32_t>                                            ValidSpawnLocations;                                     // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		bool                                                       InstrumentHitBallsOnly;                                  // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       DelayActive;                                             // 0x0369(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W6CK[0x6];                                   // 0x036A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            InitialValidSpawnLocations;                              // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      DisabledClasses;                                         // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FScramblerTargetSet>                         OptionalScrambleSet;                                     // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		TArray<class ATennisScrambleTarget_C*>                     ActiveTargets;                                           // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class AScramSportManagerTennis_Blueprint_C*                TennisManager;                                           // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TennisGameManaged;                                       // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ManagedGamePaused;                                       // 0x03B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZB6T[0x2];                                   // 0x03BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReinforcementDelay;                                      // 0x03BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TennisScramblerSchedule;                                 // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<int32_t>                                            ValidSpawnLocations_Initial;                             // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            ValidSpawnLocations_Reinforcements;                      // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FScramblerTargetSet>                         ScrambleSet_Initial;                                     // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FScramblerTargetSet>                         ScrambleSet_Reinforcements;                              // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    SpawnCountMax;                                           // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SpawnCountMin;                                           // 0x040C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            ValidSpawnLocations_Default;                             // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      GroupSpawnDelay;                                         // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SpawnCount;                                              // 0x0424(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PointCompleted;                                          // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CSV3[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATennisScrambleTargetGroup_NetNotifier_C*            NetNotifier;                                             // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATennisScrambleTargetGroup_NetNotifier_C*            NetNotifier_Pos;                                         // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATennisScrambleTargetGroup_NetNotifier_C*            NetNotifier_Neg;                                         // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            DisabledSpawnLocations;                                  // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       ForceEvenDistribution;                                   // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_89JI[0x7];                                   // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      InstrumentDistibutionList;                               // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      BallDistibutionList;                                     // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      DisabledClasses_PerPoint;                                // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RemoveGameElement(bool* Removed);
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
		void SpawnTarget(int32_t Location, class UClass* ScrambleClass);
		void Initialize();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void RespawnLoop();
		void TargetDespawned();
		void ScrambleTargetRemoved(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int32_t ID);
		void NewServiceReady(int32_t Game, int32_t Point, bool Player1Serve);
		void PointComplete();
		void InPlay();
		void GroupSpawn(int32_t Count);
		void GroupSpawnLoop();
		void DelayDestroy();
		void TargetHit(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int32_t ID);
		void StopTimer();
		void QueueReinforcements();
		void BallCrossedNet();
		void SpawnQueuedTargets();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_TennisScrambleTargetGroup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
