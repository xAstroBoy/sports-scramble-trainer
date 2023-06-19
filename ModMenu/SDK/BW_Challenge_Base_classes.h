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
	 * BlueprintGeneratedClass BW_Challenge_Base.BW_Challenge_Base_C
	 * Size -> 0x00B0 (FullSize[0x0541] - InheritedSize[0x0491])
	 */
	class ABW_Challenge_Base_C : public AChallengeBase_C
	{
	public:
		unsigned char                                              UnknownData_4X4Q[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0498(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_MiniGameIntroMusic;                                // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UActorSet*                                           ActorSetBalls;                                           // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_BowlingMusic;                                      // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABowlingAlley_BP_C*                                  TutorialAlley;                                           // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABW_BallReturn_C*                                    TutorialBallReturn;                                      // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABW_Pinsetter_C*                                     TutorialPinSetter;                                       // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABowlingAlley_BP_C*                                  UnusedAlley;                                             // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABW_CenterScoreboard_C*                              CenterScoreboard;                                        // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ID;                                                      // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableLaneChanges;                                      // 0x04E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WP1G[0x3];                                   // 0x04E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     Audio_And_VO;                                            // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              BallClass;                                               // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActorSet*                                           ActorSet_Instruments;                                    // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBW_BallTypes>                               BallList;                                                // 0x0500(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FBW_BallData>                                BallVOList;                                              // 0x0510(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    GameLength;                                              // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GameOver;                                                // 0x0524(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YOA1[0x3];                                   // 0x0525(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramSportManagerBowling_Blueprint_C*               BW_SportManager;                                         // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGameResult                                                ChallengeResult;                                         // 0x0530(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_08V4[0x7];                                   // 0x0531(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABowlingLaneManager_C*                               BW_LaneManager;                                          // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseTrainingFinishLine;                                   // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AddActorToGameElementList(class AActor* Actor, bool* Callback);
		void Shutdown(bool* ShutdownBegun);
		void BW_GameEndResetLane();
		void BW_CHG_SpawnSportMgr();
		void BW_CHG_CalculateEndScore(bool Countdown, int32_t CurrentScore, int32_t TargetScore);
		void BW_CHG_SwapBallIcon(class UClass* BallClass);
		void BW_CHG_GetBallList();
		void ToggleLaneChanging(bool DisableLaneChanges);
		void BW_CHG_ShowScoreboard();
		void ResetLane(bool ResetScore, bool ResetPins, bool ResetBallCounter);
		void Initialize();
		void UserConstructionScript();
		void OnLoaded_D8F17837414AF61326DAA8A87E4A9166(class UObject* Loaded);
		void ReceiveBeginPlay();
		void BowlingEvent(int32_t Player, EBowlingEvent BowlingEvent);
		void SpecificBallCreated(class ABW_Ball_Base_C* Ball);
		void RandomBallCreated(class ABW_Ball_Base_C* Ball);
		void GetCurrentLaneScore(int32_t LaneID, int32_t CurrentScore);
		void EndOfGame();
		void SpecialScoreEvent(int32_t LaneID, int32_t Points);
		void ShowBowlingBallIcon();
		void BW_StartIntroCadence(bool UseChallengeMusic, bool UseCountdown, bool ResetLane, bool UseTrainingScore);
		void BW_TriggerCountdown();
		void BW_CHG_SportManagerGameEnd(EGameResult MatchResult, int32_t Player1GamesWon, int32_t Player2GamesWon);
		void BW_AnnouncerPresentation();
		void LaneIsReady();
		void PlayAsync2D();
		void ExecuteUbergraph_BW_Challenge_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
