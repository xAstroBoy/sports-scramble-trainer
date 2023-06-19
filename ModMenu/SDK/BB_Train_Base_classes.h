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
	 * BlueprintGeneratedClass BB_Train_Base.BB_Train_Base_C
	 * Size -> 0x020F (FullSize[0x0620] - InheritedSize[0x0411])
	 */
	class ABB_Train_Base_C : public ATrainingBase_C
	{
	public:
		unsigned char                                              UnknownData_ODZT[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_Scored;                                            // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      Scoreboards;                                             // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       PitchingTraining;                                        // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QWJJ[0x7];                                   // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PitchingLocation;                                        // 0x0440(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FBox                                                PitchingMinArea;                                         // 0x0470(0x001C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FBox                                                PitchingMaxArea;                                         // 0x048C(0x001C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABB_Strikezone_C*                                    strikeZone;                                              // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_Equipment_Set_C*                                 EquipmentSet;                                            // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AScramPlayerHand*                                    PreferredHand;                                           // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LeftHanded;                                              // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YSEM[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABB_Minigame_PracticeSportManager_C*                 SportManager;                                            // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_Mitt_C*                                          PitchersMitt;                                            // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABaseballAICatcher_Blueprint_C*                      CatcherActor;                                            // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABB_Scoreboard_Training_BP_C*>                TrainingScorebards;                                      // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class ABaseballBallSelector_BP_C*                          PitchTarget;                                             // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABattingTee_C*                                       BattingTee;                                              // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_BallLauncher_C*                                  BallLauncher;                                            // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      horizontalVariance;                                      // 0x0508(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      verticalVariance;                                        // 0x050C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetRegionLeftMargin;                                  // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetRegionRightMargin;                                 // 0x0514(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetRegionTopMargin;                                   // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetRegionBottomMargin;                                // 0x051C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_StadiumWindowSpawner_C*                          WindowSpawner;                                           // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OutfieldTargetScoreAmt;                                  // 0x0528(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JRLB[0x4];                                   // 0x052C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABB_BattingTarget_C*                                 OutfieldTargetSpawner;                                   // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1YZ8[0x8];                                   // 0x0538(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BattingLocation;                                         // 0x0540(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABB_Scoreboard_Large_BP_C*                           LargeScoreboard;                                         // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATennisTrainingScrambleTargetGroup_C*                BB_ScrambleTargetGroup;                                  // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ALauncherBarrier_Blueprint_C*                        LauncherBarrier;                                         // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABaseballBallScrambleDisplay_BP_C*                   BallScrambleDisplay;                                     // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LaunchTargetLocation;                                    // 0x0590(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TrainingModeIsBatting;                                   // 0x059C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CatcherPresent;                                          // 0x059D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FL5T[0x2];                                   // 0x059E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AActor*, int32_t>                               BounceCounts;                                            // 0x05A0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class ABB_BasketBall_C*                                    TheBasketball;                                           // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGameResult                                                TrainingResult;                                          // 0x05F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EM0F[0x7];                                   // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseballAIBatter_NeverMiss_Blueprint_C*             NeverMissBatter;                                         // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABallSelector_Listener_C*                            PitchingTargetListener;                                  // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TimerExposed;                                            // 0x0610(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PJ7S[0x7];                                   // 0x0611(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PrefaceScoreText;                                        // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddActorToGameElementList(class AActor* Actor, bool* Callback);
		void Shutdown(bool* ShutdownBegun);
		void BB_SpawnPitchTargetListener();
		void BB_TNG_SpawnNeverMissBatter();
		void BB_TNG_TrackBasketballBounces(class ABB_BasketBall_C* Basketball, bool* DestroyBasketball);
		void BB_SpawnPitchingEquipment();
		void BB_SpawnBBScrambleDisplay();
		void BB_SpawnLauncherBarrier();
		void BB_SpawnScrambleTargets();
		void BB_GetBattingSide(EBattingSide* Side);
		void BB_UpdateLargeScoreboardScore(int32_t score, bool Player2);
		void BB_TeleportBatter();
		void BB_SpawnOutfieldTarget();
		void BB_SpawnWindows(bool ShowTargetScore);
		void BB_SpawnBattingCage();
		void BB_SpawnLauncher();
		void BB_SpawnPitchTarget();
		void BB_MakeStrikezoneVisible();
		void BB_UpdateTrainingScoreboardCount(int32_t score);
		void BB_UpdateTrainingScoreboardScore(int32_t score);
		void BB_CalculateEndScore();
		void SpawnPitchingEquipment_DEPRECATED();
		void ClearScoreboards();
		void Initialize();
		void UserConstructionScript();
		void ShowScoreboardAnimation(EBB_ScoreboardVideos Animation);
		void SetScoreMaterialAndFont(int32_t FontSize);
		void SetScoreVisibility(ESlateVisibility Visibility);
		void AttachTrainingScoreboard();
		void BindToScoring();
		void PlayerHitSingle();
		void PlayerHitDouble();
		void PlayerHitTriple();
		void PlayerHitHomerun(bool BasesLoaded);
		void UnbindScoring();
		void TrainingTargetHit(EBaseballScrambleTargetLocations Location);
		void BB_OutfieldTargetHit(class AScramBall* Ball, int32_t TargetID);
		void BB_BallLaunched(class AActor* LaunchedBall);
		void Strikezone_Strike();
		void Strikezone_Ball();
		void SportMgr_CatcherThrewBall(class ABaseballBall* Ball);
		void SportMgr_PitcherReady();
		void HitFloorCollision(class ABB_Ball_Base_C* Ball, const struct FVector& HitLocation);
		void CatcherCaughtBall();
		void PitchTargetHit();
		void ReceiveBeginPlay();
		void EndOfGame();
		void PlayerMoved();
		void NoTeleport();
		void ReadyForTraining();
		void BB_EquipmentGrabbed(class AActor* DominantHand, class ABB_Mitt_C* Mitt);
		void PitcherCaughtSomething(class UScramEventBasePayload* Payload);
		void BB_ResetScoreboards();
		void LargeScoreboard_TrainingProgress();
		void PitcherMittReleasedBall(class AActor* TouchedActor, const struct FKey& ButtonReleased);
		void OpenTravelCapsule(float Delay);
		void CloseTravelCapsule();
		void ExecuteUbergraph_BB_Train_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
