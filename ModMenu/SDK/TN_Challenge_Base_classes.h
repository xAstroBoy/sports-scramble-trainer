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
	 * BlueprintGeneratedClass TN_Challenge_Base.TN_Challenge_Base_C
	 * Size -> 0x0229 (FullSize[0x06BA] - InheritedSize[0x0491])
	 */
	class ATN_Challenge_Base_C : public AChallengeBase_C
	{
	public:
		unsigned char                                              UnknownData_T88O[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0498(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_MiniGameIntroMusic;                                // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UActorSet*                                           ActorSet_Instruments;                                    // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UActorSet*                                           ActorSet_Balls;                                          // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ATN_GameSelector_C*                                  GameSelector;                                            // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABallLauncher_C*                                     LauncherLeft;                                            // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FUI_RoomDetailsData                                 LevelData;                                               // 0x04C8(0x0068) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		class ATravelcapsule_C*                                    TravelCapsule;                                           // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LevelWon;                                                // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FF9T[0x7];                                   // 0x0539(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScramGameInstance_C*                                GameInstance_0_1;                                        // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             ResultsMenu;                                             // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABallLauncher_C*                                     LauncherRight;                                           // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      ActivePayloads;                                          // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class AFloorLightUpGroup_C*                                LightUpGroup;                                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Bounces;                                                 // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QMYP[0x4];                                   // 0x0574(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SFX_StartOfMatchMusic_1;                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SFX_BallGoodSound;                                       // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SFX_BallBadSound;                                        // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LevelCompleted;                                          // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OAUF[0x7];                                   // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABallLauncher_C*                                     LauncherCenter;                                          // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AServeLocationIndicator_C*                           ServeLocationIndicator;                                  // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AServeLauncher_C*                                    ServeLauncher;                                           // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATN_TRN_CHG_TargetWall_C*                            GameWall;                                                // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABallTarget_NW_C*>                            AllWhackTargets;                                         // 0x05B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABallTarget_NW_C*>                            DisabledWhackTargets;                                    // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       BindToBallSpawned;                                       // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C11Z[0x7];                                   // 0x05D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATennisTrainingScrambleTargetGroup_C*                TennisTargetGroup;                                       // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      ValidBallClassList;                                      // 0x05E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              AnnouncerSelected_InstrumentClass;                       // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              BallClass;                                               // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              StreakActor;                                             // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Streak;                                                  // 0x0610(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TargetHitReward;                                         // 0x0614(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BullseyeHitReward;                                       // 0x0618(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MiddleHitReward;                                         // 0x061C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      DisabledBallClassList;                                   // 0x0620(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class ATN_MiniGameScoreboard_C*                            TN_MiniGameScoreboard;                                   // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Pass_N_Play;                                             // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SOMC[0x7];                                   // 0x0639(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTN_InstrumentTypes>                         InstrumentList;                                          // 0x0640(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FTN_BallTypes>                               BallList;                                                // 0x0650(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class ATennisNet_BP_C*                                     TennisNet;                                               // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FTN_AnnouncerBallVO>                         BallVOList;                                              // 0x0668(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FTN_AnnouncerInstrumentVO>                   InstrumentVOList;                                        // 0x0678(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class ATN_ReturnWall_C*                                    ReturnWall;                                              // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AScramSportManagerTennis_Blueprint_C*                TN_SportManager;                                         // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFloorLightUpGroup_C*                                FloorLightUpGroup;                                       // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AChallenge_ScramSportManager_TN_C*                   TN_ChallengeSportMgr;                                    // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ATennisArenaScoreboard_C*>                    ArenaScoreboards;                                        // 0x06A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       WhackGridGame;                                           // 0x06B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EGameResult                                                ChallengeResult;                                         // 0x06B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddActorToGameElementList(class AActor* Actor, bool* Callback);
		void Shutdown(bool* ShutdownBegun);
		void TN_CHG_UnbindEvent();
		void TN_CHG_ShowAllWhackTargets();
		void TN_CHG_ResetArenaScoreboards();
		void TN_CHG_UpdateArenaScoreboards(int32_t Player1Score, int32_t Player2Score, int32_t Player1Games, int32_t Player2Games, bool Player1Serve, bool Player2Serve, bool UpdateScoreOnly);
		void TN_CHG_GetArenaScoreboards();
		void TN_CHG_SpawnChallengeSportManager(class AChallenge_ScramSportManager_TN_C** ChallengeSportMgr);
		void TN_CHG_CalculateEndTennisMatch(EGameResult Result);
		void TN_CHG_SpawnFloorLightUpGroup(bool Player2, bool OutOnly, bool InOnly, bool Demo);
		void TN_CHG_SpawnSportManager(bool UseScrambler, bool UseStartOfMatchInfoPanels, const class FName& ScrambleSchedule);
		void TN_CHG_SpawnAIOpponent(class UClass* AIActorClass, class AScramTennisAI** ScramTennisAI);
		void TN_CHG_SpawnReturnWallAndLauncher(ETN_ReturnWall_ScoreType ReurnWallType);
		void TN_CHG_SwapInstrumentIcon(class UClass* InstrumentClass);
		void TN_CHG_SwapBallIcon(class UClass* BallClass, bool AnnounceBall);
		void Get_TN_CHG_BallList();
		void Get_TN_CHG_InstrumentList();
		void RefreshActivePayloads();
		void IsStreakContinued(class AActor* PayloadActor, bool* StreakContinues);
		void UpdateScore(int32_t NewScore);
		void TN_CHG_CalculateEndScore(bool Countdown, int32_t CurrentScore, int32_t TargetScore);
		void TN_CHG_ScrambleTargetBallHit(float HitLocationX, float HitLocationY);
		void PBP_ScrambleTargetHit(class UClass* EventClass);
		void ProcessLightNormalShot();
		void ProcessChargeShot();
		void TN_ScrambleTargetInstrumentChangeMissed();
		void TN_TRN_InstrumentHit();
		void DestroyAllBalls_1();
		void ProcessSliceShot();
		void PickNew_CHG_WhackTarget(class AActor* OldTarget);
		void Spawn_CHG_WhackTargets(bool LowerOnGameEnd);
		void SpawnServeLauncher(bool TeeBall, bool MoveSpawnedBalls);
		void SpawnCenterLaucher(float InitialHeight);
		void TN_LaunchedBallMissed();
		void TN_LaunchedBallHit(float HitLocationX, float HitLocationY);
		void SpawnFloorLightUp(bool OutOnly, bool InOnly, bool BothInOut);
		void SpawnLeftRightLauchers(bool SpawnLeftLauncher, bool SpawnRightLauncher);
		void BallAccuracySound(bool In);
		void CheckInBounds(float XLocation, float YLocation, bool PlaySound, bool* InBounds);
		void InitializeBase();
		void UserConstructionScript();
		void OnLoaded_B009CC43435532B8D5D6D0AF4E5B6CBC(class UObject* Loaded);
		void SportManager_MatchComplete(EGameResult Result);
		void ReturnWallLauncherBall(class AActor* NewBallActor);
		void ReturnWallHit(int32_t Streak);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void NewLauncherBall(class AActor* NewBallActor);
		void BallHasBeenHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void TN_TNG_BallSpawned(class AScramBall* Ball);
		void TN_TNG_BallHit(class AScramBall* Ball);
		void TN_CHG_WallTargetHit(class AActor* PayloadActor, class AActor* BallTargetActor, int32_t RegionHit);
		void TN_TNG_BallGrabbed(class AScramBall* Ball);
		void BallShotTypeChange(ETennisShotType ShotType);
		void TN_TNG_ScrambleTargetHit(class ATennisScrambleTarget_C* TargetActor, class UClass* EventClass, int32_t TargetID);
		void ChangeBallClass(class UClass* BallClass);
		void EndOfGame();
		void TN_CHG_TimerExpired();
		void TN_CHG_TimerTriggered(int32_t CurrentTime);
		void TN_CHG_WallTargetShrinking(class AActor* TargetActor);
		void TN_TriggerCountdown();
		void TN_StartIntroCadence(bool UseChallengeMusic, bool UseCountdown, bool UseThreeCategory);
		void TN_ShowInstrumentAndBallIcons(bool InstrumentBothHands);
		void TriggerAlternativeCadence();
		void TN_AnnouncerShowInstrumentIcon(class UClass* OptionalBallClass, bool AnnounceBall);
		void TN_AnnouncerPresentation(bool InstrumentBothHands);
		void TN_AnnouncerAcceleratorChallenge();
		void PlayAsync2D();
		void ExecuteUbergraph_TN_Challenge_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
