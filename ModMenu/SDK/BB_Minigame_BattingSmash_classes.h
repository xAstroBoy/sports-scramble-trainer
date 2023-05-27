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
	 * BlueprintGeneratedClass BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C
	 * Size -> 0x0049 (FullSize[0x0479] - InheritedSize[0x0430])
	 */
	class ABB_Minigame_BattingSmash_C : public ABB_Minigame_Batting_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0430(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FDebugButtonInfo>                            ModeButtons;                                             // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		class ADebugButtonGroup_C*                                 SmashMenuPlayerSelection;                                // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MenuSelection;                                           // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CountdownTimer;                                          // 0x0454(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DelayBeforeFirstPitch;                                   // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H18R[0x4];                                   // 0x045C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABB_Scoreboard_Large_BP_C*                           LargeScoreboard;                                         // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_Scoreboard_Training_BP_C*                        TrainingScoreboard;                                      // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_StadiumWindowSpawner_C*                          WindowSpawner;                                           // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowScore;                                               // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Shutdown(bool* ShutdownBegun);
		void AddActorToGameElementList(class AActor* Actor, bool* Callback);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void LauncherSelected(int32_t ButtonSelected);
		void ShowBattingOptions();
		void StartGame();
		void StartTimer();
		void GameIsOver();
		void StartTimedSmashMode();
		void TeleportComplete();
		void NoTeleport();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BB_Minigame_BattingSmash(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
