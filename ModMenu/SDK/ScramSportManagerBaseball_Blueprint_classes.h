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
	 * BlueprintGeneratedClass ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C
	 * Size -> 0x045A (FullSize[0x0B1A] - InheritedSize[0x06C0])
	 */
	class AScramSportManagerBaseball_Blueprint_C : public AScramSportManagerBaseball
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     InnerFoulLoc;                                            // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_AmbientCrowd_Loop;                                 // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     InstrumentSelectorRightLoc;                              // 0x06D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     InstrumentSelectorLeftLoc;                               // 0x06E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FielderLocRF;                                            // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FielderLocSS;                                            // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FielderLocCF;                                            // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FielderLocC;                                             // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FielderLocLF;                                            // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FielderLoc1B;                                            // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioOrgan;                                              // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     OutfieldLocusLoc;                                        // 0x0720(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     RunnerHomeLoc;                                           // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ThirdBaseLoc;                                            // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SecondBaseLoc;                                           // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FirstBaseLoc;                                            // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     RunnerSpawnLoc;                                          // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     InfieldEdgeMarker;                                       // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DoubleTripleMarker;                                      // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     OutfieldFenceEdge;                                       // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     OutfieldFenceCenter;                                     // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BatterLoc;                                               // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PitcherLoc;                                              // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_OrganFade_Scale_F2AE027C4A618FA4D20BE980962382FF; // 0x0788(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_OrganFade__Direction_F2AE027C4A618FA4D20BE980962382FF; // 0x078C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q9PZ[0x3];                                   // 0x078D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_OrganFade;                                      // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      GameElements;                                            // 0x0798(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class ABB_Strikezone_C*                                    strikeZone;                                              // 0x07A8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScramGameInstance_C*                                GameInstance;                                            // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_Equipment_Set_C*                                 EquipmentSet;                                            // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxOuts;                                                 // 0x07C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Outs;                                                    // 0x07C4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TOJM[0x8];                                   // 0x07C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PitchingLocation;                                        // 0x07D0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FDebugButtonInfo>                            StartPosButtons;                                         // 0x0800(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		class ADebugButtonGroup_C*                                 StartChoiceMenu;                                         // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    VisitorsTotalScore;                                      // 0x0818(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HomeTotalScore;                                          // 0x081C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentInning;                                           // 0x0820(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxInnings;                                              // 0x0824(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PointsForSingle;                                         // 0x0828(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PointsForDouble;                                         // 0x082C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PointsForTriple;                                         // 0x0830(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PointsForHomeRun;                                        // 0x0834(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TopOfTheInning;                                          // 0x0838(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7GHB[0x3];                                   // 0x0839(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PitcherPointsStrike;                                     // 0x083C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   AwayTeamMaterial;                                        // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   HomeTeamMaterial;                                        // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABaseballAIFielder_Blueprint_C*>              FielderList;                                             // 0x0850(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class ABaseballAICatcher_Blueprint_C*                      CatcherActor;                                            // 0x0860(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AManagerBaseball_LocalHelper_C*                      LocalHelper;                                             // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SwitchSidesMessageDuration;                              // 0x0870(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StrikeRegistered;                                        // 0x0874(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EXDX[0x3];                                   // 0x0875(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramPlayerHand*                                    PreferredHandP1;                                         // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BallLocation;                                            // 0x0880(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_84C7[0x4];                                   // 0x088C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramPlayerHand*                                    PreferredHandP2;                                         // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WaitForScoreboardVideo;                                  // 0x0898(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WaitForRunners;                                          // 0x0899(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LBLX[0x2];                                   // 0x089A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OrganFadeOuttime;                                        // 0x089C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStandLocationIndicator_C*                           BattersBoxIndicator;                                     // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FScramTrajectoryRegion                              PlayerBatterStrikezone;                                  // 0x08A8(0x0050) Edit, BlueprintVisible, NoDestructor
		struct FScramTrajectoryRegion                              AIBatterStrikezone;                                      // 0x08F8(0x0050) Edit, BlueprintVisible, NoDestructor
		bool                                                       AIPlayerEnabled;                                         // 0x0948(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       FirstPitchOfInning;                                      // 0x0949(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_94EQ[0x6];                                   // 0x094A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABB_PitchTarget_C*                                   PitchTarget;                                             // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PitchTargetScoreAmount;                                  // 0x0958(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CZAS[0x4];                                   // 0x095C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABB_BattingTarget_C*                                 BattingTargetActor;                                      // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OutfieldTargetScoreAmt;                                  // 0x0968(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugBallsSetting;                                       // 0x096C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YM3I[0x3];                                   // 0x096D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABB_InstrumentSelector_C*                            InstrumentSelector;                                      // 0x0970(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BattingTeePosition;                                      // 0x0978(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1FIG[0x4];                                   // 0x0984(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SFX_BatBreak;                                            // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BatBroken;                                               // 0x0990(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayerInPosition;                                        // 0x0991(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZMH3[0x6];                                   // 0x0992(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDebugButtonInfo>                            ScrambleMenu;                                            // 0x0998(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		class ADebugButtonGroup_C*                                 ScrambleMenuChoice;                                      // 0x09A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BallInPlay;                                              // 0x09B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7MEM[0x7];                                   // 0x09B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSidesSwitchedDispatcher;                               // 0x09B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class APauseBubble_C*                                      PauseBubbleActor;                                        // 0x09C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBox                                                PitchingMinArea;                                         // 0x09D0(0x001C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FBox                                                PitchingMaxArea;                                         // 0x09EC(0x001C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABattingTee_C*                                       BattingTee;                                              // 0x0A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_PitchingPropManager_C*                           PitchingPropManager;                                     // 0x0A10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBaseballBallScrambleProperties>             ScrambleBalls;                                           // 0x0A18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FBaseballInstrumentEntryProperties>          ScrambleInstruments;                                     // 0x0A28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class ABB_BatProgression_C*                                BatProgression;                                          // 0x0A38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABallSelector_Listener_C*                            BallSelectorListener;                                    // 0x0A40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_PlayByPlay_C*                                    PlayByPlay;                                              // 0x0A48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Strikes;                                                 // 0x0A50(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StrikeoutCount;                                          // 0x0A54(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldResetCount;                                        // 0x0A58(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_46X3[0x7];                                   // 0x0A59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABB_BatterToPitcherInfluencer_BP_C*                  BatterToPitcherInfluencer;                               // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             GameCompleted;                                           // 0x0A68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FMinMaxAngle                                        OutfielderCFMovementRange;                               // 0x0A78(0x0008) Edit, BlueprintVisible, NoDestructor
		struct FMinMaxAngle                                        OurfielderRFMovementRange;                               // 0x0A80(0x0008) Edit, BlueprintVisible, NoDestructor
		struct FMinMaxAngle                                        OutfielderLFMovementRange;                               // 0x0A88(0x0008) Edit, BlueprintVisible, NoDestructor
		class ABB_LogoPopup_C*                                     LogoPopup;                                               // 0x0A90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BasesLoaded;                                             // 0x0A98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YI8J[0x7];                                   // 0x0A99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseballAIBatter_Blueprint_C*                       AiBatter;                                                // 0x0AA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAvatarLook                                         AiLook;                                                  // 0x0AA8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       StikeoutBool;                                            // 0x0AC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PSDF[0x7];                                   // 0x0AC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   AwayTeamMittMaterial;                                    // 0x0AD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   HomeTeamMittMaterial;                                    // 0x0AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ChallengeAIGame;                                         // 0x0AE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       ChallengeSpawnsPitcher;                                  // 0x0AE1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHostBatting;                                           // 0x0AE2(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_YTY9[0x1];                                   // 0x0AE3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayBeforeFirstAiSpawn;                                 // 0x0AE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              RestoredBatterInstrument;                                // 0x0AE8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FMittSpawnInfo>                              RestoredPitcherScrambleOptions;                          // 0x0AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       RestoringGame;                                           // 0x0B00(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3M8F[0x7];                                   // 0x0B01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBaseballInstrumentEntryProperties>          ScrambleInstrumentsPool;                                 // 0x0B08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       WalkOffGameWinner;                                       // 0x0B18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isHomeRun;                                                 // 0x0B19(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetRandomInstrument(EBaseballInstrumentType ExcludeType, struct FBaseballInstrumentEntryProperties* NewInstrument, bool* Successful);
		int32_t GetBatterRunAdvantage();
		void SaveBaseballState(int32_t* VisitorsScore, int32_t* HomeScore, int32_t* Inning, bool* TopOfInning, bool* FirstPitchOfInning, int32_t* Outs, int32_t* Strikes, class UClass** BatterInstrument, TArray<struct FMittSpawnInfo>* PitcherScrambleOptions);
		void GetGloveMaterial(class UMaterialInstance** Material);
		void GetFielderDifficulty(EDifficulty* NewParam);
		void SpawnFielder(EDifficulty Difficulty, class USceneComponent* Position, bool IsOutfielder, const struct FMinMaxAngle& OutfieldMovementRange);
		void BB_ChallengeGameSetup();
		void GetMittMaterial(class UMaterialInstance** Material);
		void AI_StrikeLooking();
		void UpdateScoreboardNames();
		void SetPitchingTargetBindings();
		void SpawnLogoPopup();
		void RemoveRunners();
		void SetStrikezoneSize();
		void PlayScoreboardVideo(EBB_ScoreboardVideos Animation);
		void SetGameSettings();
		void ChooseScrambleGroup();
		void ActivateBattingTee();
		void HideIndicators();
		void RequestAllowPitch();
		void HandleInstrumentBroken(class ABaseballInstrument* Instrument);
		void SpawnInstrumentSelector();
		void GetBattingMaterial(class UMaterialInstance** Material);
		void GetFieldingMaterial(class UMaterialInstance** Material);
		void RunnerScores();
		void GetWinningPlayer(int32_t* WinnerInt);
		void EndGameCleanUp();
		void SpawnLocalHelper();
		void ToggleTeamColors();
		void SpawnTeamActors(bool FieldersOnly);
		void SetupScoreboards(int32_t BallsCount, int32_t StrikesCount);
		void CleanUpGameElements();
		void PitcherScoring(int32_t score);
		void UpdateOutsAndFreebies(int32_t Outs, int32_t Freebies, int32_t Strikes);
		void BatterScoring(int32_t ScoreAmount);
		void TeleportPlayer(const class FScriptDelegate& TransitionReady, const class FScriptDelegate& TransitionComplete, bool UseTransitionDuration);
		void ProgressGame();
		void Initialize();
		void SpawnEquipmentAndAI();
		void SpawnStrikezone();
		void SpawnAiBatter(class AScramBaseballBatterAI** Batter);
		void SpawnAiPitcher(class AScramBaseballPitcherAI** Pitcher);
		void UserConstructionScript();
		void Timeline_OrganFade__FinishedFunc();
		void Timeline_OrganFade__UpdateFunc();
		void BaseballEvent(EBaseballEvent BaseballEvent, const struct FVector& Location);
		void ReceiveBeginPlay();
		void RegisterStrike();
		void RegisterOut(int32_t NewOuts, bool PlayUmpireOut, bool PlayOrgan);
		void HandleGameEnd();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BBGameIntroSequence();
		void LocalHelperMessageComplete();
		void BeginInning();
		void SetDominantHand(class AActor* DominantHand, class ABB_Mitt_C* Mitt);
		void OnRunnerSpawned(class AScramBaseballRunnerAI* runner);
		void StartOrgan();
		void StopOrgan();
		void CheckForPlayerBattingPosition();
		void PlayerBatterReady();
		void BeginGame();
		void PitchTargetHit(int32_t ScoreAmount);
		void BatterHitOutfieldTarget(class AScramBall* Ball, int32_t TargetID);
		void SendRestartGame();
		void UpdateGameScore(int32_t NewP1TotalScore, int32_t NewP2TotalScore);
		void SwitchSides(bool TopOfTheInning, int32_t CurrentInning);
		void Single();
		void Double();
		void Triple();
		void HomeRun(bool BasesLoaded);
		void PlayFirstPitchSFX();
		void RegisterCatch();
		void RegisterFoul();
		void RegisterBall();
		void UpdateRunners(bool NewRunnerOnFirst, bool NewRunnerOnSecond, bool NewRunnerOnThird);
		void OnInstrumentSelected(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void OnInstrumentBroken(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void PrepNewInning();
		void BrokenBat();
		void NewInstrumentSelected(class ABaseballInstrument* Instrument);
		void InstrumentSelected(class UObject* Instrument);
		void OnInstrumentsSpawned(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ShowPauseInfo(bool IsPaused, bool WasPausedByMe);
		void ShowPauseBubble(bool IsPaused);
		void OnGameResume(bool WasPausedByMe);
		void OnGamePause(bool WasPausedByMe);
		void SpawnInitialActors();
		void GameReadyToBegin();
		void NetSetupScoreboards(int32_t BallsCount, int32_t StrikesCount);
		void RegisterStrikeout();
		void NetUpdateOutsAndFreebies(int32_t Outs, int32_t Freebies, int32_t Strikes);
		void ResetCount();
		void PitchingTargetsUpdated(bool TL, bool TR, bool BL, bool BR);
		void PitchingTargetHit(EBaseballScrambleTargetLocations Location);
		void NetDisplayPopup();
		void SetAILook(const struct FAvatarLook& AvatarLook);
		void BB_ChallengeGameStart();
		void SpawnAiPitcherDelayed();
		void SpawnAiBatterDelayed();
		void PlayErrorSfx();
		void LoadBaseballState(int32_t VisitorsScore, int32_t HomeScore, int32_t Inning, bool TopOfInning, bool FirstPitchOfInning, int32_t Outs, int32_t Strikes, class UClass* BatterInstrument, TArray<struct FMittSpawnInfo> PitcherScrambleOptions);
		void ServerReady();
		void Multi_UpdateScoreboardInning();
		void Multi_SetInning(int32_t Inning, bool Top);
		void OnGameDone();
		void ShowMitt(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void NetDisablePause();
		void DisablePause();
		void ShutDown_Bat_PBP();
		void ExecuteUbergraph_ScramSportManagerBaseball_Blueprint(int32_t EntryPoint);
		void GameCompleted__DelegateSignature(bool LocalPlayerVictory, int32_t AwayScore, int32_t HomeScore);
		void OnSidesSwitchedDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
