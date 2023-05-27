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
	 * BlueprintGeneratedClass TennisArenaScoreboard.TennisArenaScoreboard_C
	 * Size -> 0x00B0 (FullSize[0x03D8] - InheritedSize[0x0328])
	 */
	class ATennisArenaScoreboard_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Cover2;                                                  // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cover1;                                                  // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BallLoc2;                                                // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BallLoc1;                                                // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Tennisscramble_Scoreboard_Base;                          // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_Cover2_Alpha_0FB27A7A4B2C921A2C7A1A8B4B1EE516;  // 0x0368(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_Cover2__Direction_0FB27A7A4B2C921A2C7A1A8B4B1EE516; // 0x036C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AXR2[0x3];                                   // 0x036D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_Cover2;                                         // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_Cover1_Alpha_E2B441B0427A658A2EBD19A8CDC64408;  // 0x0378(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_Cover1__Direction_E2B441B0427A658A2EBD19A8CDC64408; // 0x037C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RIDS[0x3];                                   // 0x037D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_Cover1;                                         // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTennisArenaScoreboardWidget_C*                      ArenaScoreboardWidget;                                   // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowAdvantage;                                           // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TraditionalScoring;                                      // 0x0391(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_73TD[0x6];                                   // 0x0392(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                AdText;                                                  // 0x0398(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UScramGameInstance_C*                                GameInstance;                                            // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATN_Scoreboard_TennisBall_C*                         BallLeft;                                                // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATN_Scoreboard_TennisBall_C*                         BallRight;                                               // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        RightSpawnDelay;                                         // 0x03C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        LeftSpawnDelay;                                          // 0x03D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateWidgetOnCultureChange();
		void SetLocText();
		void SpawnBallIndicator(bool LeftSide);
		void UpdateNetworkNames();
		void UpdateRuleType(bool TraditionalScoring);
		void UpdateServeIndicator(bool Player1Serve, bool Player2Serve);
		void UpdateScore(int32_t Player1Score, int32_t Player2Score, int32_t Player1Games, int32_t Player2Games, bool Player1Serve, bool Player2Serve, bool UpdateScoreOnly);
		void Initialize();
		void UserConstructionScript();
		void Timeline_Cover1__FinishedFunc();
		void Timeline_Cover1__UpdateFunc();
		void Timeline_Cover2__FinishedFunc();
		void Timeline_Cover2__UpdateFunc();
		void ReceiveBeginPlay();
		void ShowP1Serve();
		void HideP1Serve();
		void ShowP2Serve();
		void HideP2Serve();
		void ShowLeftSideServe();
		void RightSideDestroyed(class AActor* DestroyedActor);
		void ShowRightSideServe();
		void LeftSideDestroyed(class AActor* DestroyedActor);
		void SpawnRight();
		void SpawnLeft();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void TravelCapsuleOpen(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ExecuteUbergraph_TennisArenaScoreboard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
