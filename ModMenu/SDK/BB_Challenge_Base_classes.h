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
	 * BlueprintGeneratedClass BB_Challenge_Base.BB_Challenge_Base_C
	 * Size -> 0x00EF (FullSize[0x0580] - InheritedSize[0x0491])
	 */
	class ABB_Challenge_Base_C : public AChallengeBase_C
	{
	public:
		unsigned char                                              UnknownData_JORP[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0498(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_Scored;                                            // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UActorSet*                                           ActorSetInstruments;                                     // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_MiniGameIntroMusic;                                // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UActorSet*                                           ActorSetBalls;                                           // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_BowlingMusic;                                      // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       LevelWon;                                                // 0x04C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_11E5[0x3];                                   // 0x04C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ID;                                                      // 0x04CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_And_VO;                                            // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              BallClass;                                               // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActorSet*                                           ActorSet_Instruments;                                    // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBaseballBallScrambleProperties>             BallList;                                                // 0x04E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FBB_BallAnnouncerVO>                         BallVOList;                                              // 0x04F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    GameLength;                                              // 0x0508(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GameOver;                                                // 0x050C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EGameResult                                                ChallengeResult;                                         // 0x050D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FTBT[0x2];                                   // 0x050E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              InstrumentClass;                                         // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBaseballInstrumentEntryProperties>          InstrumentList;                                          // 0x0518(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FBB_InstrumentAnnouncerVO>                   InstrumentVOList;                                        // 0x0528(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AScramSportManagerBaseball_Blueprint_C*              BB_NormalSportManager;                                   // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      Scoreboards;                                             // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class ABB_Scoreboard_Large_BP_C*                           LargeScoreboard;                                         // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABB_Scoreboard_Training_BP_C*>                TrainingScorebards;                                      // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABB_Scoreboard_TopTimer_BP_C*>                TopTimers;                                               // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    ScoreFontSize;                                           // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TimerFontSize;                                           // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddActorToGameElementList(class AActor* Actor, bool* Callback);
		void Shutdown(bool* ShutdownBegun);
		void BB_CHG_05_SportManagerPlayerPitching();
		void BB_CHG_UpdateScore(int32_t score);
		void BB_CHG_SpawnSportManagerWithAI(bool OverrideBattingSkill, EScramSkill OverrideSkill);
		void BB_CHG_SwapBatIcon(class UClass* InstrumentClass);
		void BB_CHG_GetBatList();
		void BB_CHG_CalculateEndScore(bool Countdown, int32_t CurrentScore, int32_t TargetScore);
		void BB_CHG_SwapBallIcon(class UClass* BallClass);
		void BB_CHG_GetBallList();
		void Initialize();
		void UserConstructionScript();
		void OnLoaded_826C3EA940CB27C0854669A32DADB5D4(class UObject* Loaded);
		void BB_CHG_ShowScoreboardAnimation(EBB_ScoreboardVideos Animation);
		void BB_CHG_SetScoreMaterialAndFont(int32_t FontSize);
		void BB_CHG_SetScoreVisibility(ESlateVisibility Visibility);
		void BB_CHG_AttachTrainingScoreboard();
		void SetScoreTimerTime(int32_t Seconds, int32_t FontSize);
		void AttachTopTimer();
		void BaseballGameCompleted(bool LocalPlayerVictory, int32_t AwayScore, int32_t HomeScore);
		void ReceiveBeginPlay();
		void EndOfGame();
		void ShowBaseballBallIcon();
		void BB_StartIntroCadence(bool UseChallengeMusic, bool UseCountdown, bool HomeTeam);
		void BB_TriggerCountdown();
		void ShowBaseballInstrumentIcon();
		void BB_ShowInstrumentAndBallIcons(EBB_ScramIconSetting Settings);
		void TriggerAlternateCadence();
		void PlayAsync2D();
		void ExecuteUbergraph_BB_Challenge_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
