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
	 * BlueprintGeneratedClass GameHandlerQuickplay.GameHandlerQuickplay_C
	 * Size -> 0x0051 (FullSize[0x03A1] - InheritedSize[0x0350])
	 */
	class AGameHandlerQuickplay_C : public AGameHandlerBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		EScramSport                                                Sport;                                                   // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_7912[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      Scoreboards;                                             // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AScramSportManagerTennis_Blueprint_C*                TennisManager;                                           // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      GameElements;                                            // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class AScramSportManagerBowling_Blueprint_C*               BowlingManager;                                          // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AScramSportManagerBaseball_Blueprint_C*              BaseballManager;                                         // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerBatting;                                           // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void StartBaseball();
		void SetupBaseball();
		void StartBowling();
		void SetupBowling();
		void Shutdown();
		void StartTennis();
		void SetupTennis();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void MatchComplete(EGameResult Result);
		void QuitGame();
		void BaseballGameCompleted(bool LocalPlayerVictory, int32_t AwayScore, int32_t HomeScore);
		void BowlingGameComplete(EGameResult MatchResult, int32_t Player1GamesWon, int32_t Player2GamesWon);
		void ExecuteUbergraph_GameHandlerQuickplay(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
