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
	 * BlueprintGeneratedClass BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C
	 * Size -> 0x0310 (FullSize[0x09D0] - InheritedSize[0x06C0])
	 */
	class ABB_Minigame_PracticeSportManager_C : public AScramSportManagerBaseball
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     RunnerHomeLoc;                                           // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ThirdBaseLoc;                                            // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SecondBaseLoc;                                           // 0x06D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FirstBaseLoc;                                            // 0x06E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     RunnerSpawnLoc;                                          // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     OutfieldLocusLoc;                                        // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FielderLocRF;                                            // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FielderLocSS;                                            // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FielderLocCF;                                            // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FielderLocC;                                             // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FielderLocLF;                                            // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FielderLoc1B;                                            // 0x0720(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     InstrumentSelectorRightLoc;                              // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     InstrumentSelectorLeftLoc;                               // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     InfieldEdgeMarker;                                       // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DoubleTripleMarker;                                      // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     OutfieldFenceEdge;                                       // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     OutfieldFenceCenter;                                     // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BatterLoc;                                               // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PitcherLoc;                                              // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLocalPlayerVisitingTeam;                               // 0x0770(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9UQS[0x7];                                   // 0x0771(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      GameElements;                                            // 0x0778(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class ABB_Strikezone_C*                                    strikeZone;                                              // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ABB_GameSelector_C*                                  GameSelector;                                            // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ABB_Equipment_Set_C*                                 EquipmentSet;                                            // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              MinigameSpawner;                                         // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          PitchingLocation;                                        // 0x07B0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABaseballAICatcher_Blueprint_C*                      CatcherActor;                                            // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AManagerBaseball_LocalHelper_C*                      LocalHelper;                                             // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AScramPlayerHand*                                    PreferredHand;                                           // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_BattingTarget_C*                                 BattingTargetActor;                                      // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABaseballInstrumentSelector*                         InstrumentSelector;                                      // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBox                                                PitchingMinArea;                                         // 0x0808(0x001C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FBox                                                PitchingMaxArea;                                         // 0x0824(0x001C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPracticeSportManager;                                  // 0x0840(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_4WLD[0x7];                                   // 0x0841(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             PitcherReady;                                            // 0x0848(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PitcherPitched;                                          // 0x0858(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PitchHit;                                                // 0x0868(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SwingAndMiss;                                            // 0x0878(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PitchedBall;                                             // 0x0888(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PitchedStrike;                                           // 0x0898(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             CatcherThrow;                                            // 0x08A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             HitCaught;                                               // 0x08B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             HitFoul;                                                 // 0x08C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             HitSingle;                                               // 0x08D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             HitDouble;                                               // 0x08E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             HitTriple;                                               // 0x08F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             HitHomerun;                                              // 0x0908(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ABaseballBall*                                       ActiveBall;                                              // 0x0918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FVector>                                     LocalPositionArray;                                      // 0x0920(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FScriptMulticastDelegate                             ValidHit;                                                // 0x0930(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             InvalidHit;                                              // 0x0940(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       DisableSelectorAutoVisibility;                           // 0x0950(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3XZO[0x7];                                   // 0x0951(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   LocalMaterial;                                           // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABaseballAIFielder_Blueprint_C*>              FielderList;                                             // 0x0960(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class ABB_PitchingPropManager_C*                           PitchingPropManager;                                     // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              AIBatterClass;                                           // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowAIFielders;                                         // 0x0980(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       AllowAIBatter;                                           // 0x0981(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       AllowAIPitcher;                                          // 0x0982(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       AllowAICatcher;                                          // 0x0983(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_XA4J[0x4];                                   // 0x0984(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             RunnerHome;                                              // 0x0988(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FVector                                             BallLocation;                                            // 0x0998(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BasesLoaded;                                             // 0x09A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WaitForRunners;                                          // 0x09A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZO2U[0x2];                                   // 0x09A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             RunnersReady;                                            // 0x09A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              PitcherClass;                                            // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABaseballAIFielder_Blueprint_C*>              Fielders;                                                // 0x09C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void SpawnCatcherWithVFX();
		void SpawnFielders();
		void SpawnInstrumentSelector(bool InstrumentDamageEnabled);
		void InstrumentSelected(class ABaseballInstrument** SelectedInstrument);
		void InstrumentBroken(class ABaseballInstrument** Instrument);
		void SpawnPitcher(class AActor** PitcherActor);
		void EndGameCleanUp();
		void SpawnLocalHelper();
		void CleanUpGameElements();
		void TeleportPlayer();
		void Initialize();
		void SpawnEquipmentAndAI(bool PlayerBatting);
		void Minigame_SpawnStrikezone(bool ShrinkOnSpawn, bool CatcherPresent);
		void SpawnBatter(class AActor** BattingActor);
		void UserConstructionScript();
		void BaseballEvent(EBaseballEvent BaseballEvent, const struct FVector& Location);
		void ReceiveBeginPlay();
		void NoTeleport();
		void HandleBackOrResetButton();
		void GameSelectorReset();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void FinishedTeleport();
		void SetDominantHand(class AActor* DominantHand, class ABB_Mitt_C* Mitt);
		void OnInstrumentSelected(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void OnInstrumentBroken(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void RemoveCatcher();
		void ExecuteUbergraph_BB_Minigame_PracticeSportManager(int32_t EntryPoint);
		void RunnersReady__DelegateSignature();
		void RunnerHome__DelegateSignature();
		void InvalidHit__DelegateSignature();
		void ValidHit__DelegateSignature();
		void HitHomerun__DelegateSignature(bool BasesLoaded);
		void HitTriple__DelegateSignature();
		void HitDouble__DelegateSignature();
		void HitSingle__DelegateSignature();
		void HitFoul__DelegateSignature();
		void HitCaught__DelegateSignature(const struct FVector& BallLocation);
		void CatcherThrow__DelegateSignature(class ABaseballBall* Ball);
		void PitchedStrike__DelegateSignature();
		void PitchedBall__DelegateSignature();
		void SwingAndMiss__DelegateSignature();
		void PitchHit__DelegateSignature();
		void PitcherPitched__DelegateSignature();
		void PitcherReady__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
