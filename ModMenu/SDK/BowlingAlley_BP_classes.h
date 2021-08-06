#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BowlingAlley_BP.BowlingAlley_BP_C
// 0x0398 (FullSize[0x0748] - InheritedSize[0x03B0])
class ABowlingAlley_BP_C : public ABowlingAlley
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystemRed;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystemBlue;                                        // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             PlayerStartLocation;                                       // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh3;                                               // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Loc_BallReturn;                                            // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Loc_BallTriggerTest;                                       // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Loc_PinSetter;                                             // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh2;                                               // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh1;                                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Loc_LaneManager;                                           // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            ScoreWidgetComponent;                                      // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_SmallTrainScore_Alpha_1243F4C14948D929E21E0DBD902C37C3; // 0x0420(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_SmallTrainScore__Direction_1243F4C14948D929E21E0DBD902C37C3; // 0x0424(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DGFT[0x3];                                     // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_SmallTrainScore;                                  // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_LargeTrainScore_Alpha_C57BDAE342C06583EF6E9386EE9BA000; // 0x0430(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_LargeTrainScore__Direction_C57BDAE342C06583EF6E9386EE9BA000; // 0x0434(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S28L[0x3];                                     // 0x0435(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_LargeTrainScore;                                  // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_ShowSpare_Alpha_68F939F744DA0D5D7A63B4921125DB38; // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_ShowSpare__Direction_68F939F744DA0D5D7A63B4921125DB38; // 0x0444(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QHEA[0x3];                                     // 0x0445(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_ShowSpare;                                        // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_ShowStrike_Alpha_7D40996E4CF57637B6E07598001C63FA; // 0x0450(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_ShowStrike__Direction_7D40996E4CF57637B6E07598001C63FA; // 0x0454(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CRSG[0x3];                                     // 0x0455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_ShowStrike;                                       // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID;                                                        // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X0LV[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScramGameInstance_C*                        GameInstance;                                              // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABowlingLaneManager_C*                       LaneManager;                                               // 0x0470(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABW_Pinsetter_C*                             pinsetter;                                                 // 0x0478(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                score;                                                     // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FramePinCount;                                             // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FrameRollCount;                                            // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DVQG[0x4];                                     // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BallClass;                                                 // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABW_BallReturn_C*                            BallReturn;                                                // 0x0498(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABW_CenterScoreboard_C*                      CenterScoreboard;                                          // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBW_Score_C*                                 ScoreWidget;                                               // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisplayingStrike;                                          // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DisplayingSpare;                                           // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W88S[0x6];                                     // 0x04B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ADebugButtonGroup_C*                         DebugMenu;                                                 // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDebugButtonInfo>                    Buttons;                                                   // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<TEnumAsByte<BW_Quality_EBW_Quality>>        CuedLaneChanges;                                           // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               LaneEnabled;                                               // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8J60[0x7];                                     // 0x04E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDebugButtonInfo>                    SpawningButtons;                                           // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                              SubActors;                                                 // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FBW_BallData>                        QueuedBalls;                                               // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ScrambleBallQueueActive;                                   // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WHY1[0x7];                                     // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              ActiveScrambleBalls;                                       // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              ActiveDefaultBalls;                                        // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AScramBall*>                          TallyBalls;                                                // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                InitialMatchBallCount;                                     // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InitialMatchBallSpawnCount;                                // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FillCount;                                                 // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5PNK[0x4];                                     // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AManagerBowling_LocalHelper_C*               LocalHelper;                                               // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxBallCount;                                              // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayResetPins;                                            // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBeforePinsCalculated;                                 // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBeforeStandardBallRespawn;                            // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBeforeBallRespawn;                                    // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBetweenMultipleBallSpawns;                            // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelaySpawnerBlink;                                         // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y2LR[0x4];                                     // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBW_BallData>                        ScrambleBallList;                                          // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBW_BallData>                        DisabledScrambleBallList;                                  // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  LaneChangeVO;                                              // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DefaultLaneClass[0x28];                                    // 0x05B0(0x0028) UNKNOWN PROPERTY: SoftClassProperty BowlingAlley_BP.BowlingAlley_BP_C.DefaultLaneClass
	class ABW_ResultsTracks_C*                         TrackActor;                                                // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          MaterialFlash;                                             // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayMaterialFlash;                                        // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CycleIndex;                                                // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PinsKnockedDown;                                           // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StrikeCount;                                               // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  BonusScoreSound;                                           // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBeforeSpecialBallSpawn;                               // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBeforeFrameCountReset;                                // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABowlingBall*>                        InstigatorBalls;                                           // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               DisableLaneChanges;                                        // 0x0618(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AllowSpecialBalls;                                         // 0x0619(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WaitForTally;                                              // 0x061A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               GameEnding;                                                // 0x061B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6IYR[0x4];                                     // 0x061C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    BowlingEvent;                                              // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               TrainingMode;                                              // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DisableScoring;                                            // 0x0631(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JVB3[0x6];                                     // 0x0632(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    CurrentLaneScore;                                          // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               DisableBallSpawn;                                          // 0x0648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V1UQ[0x7];                                     // 0x0649(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  CrowdApplause;                                             // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  CrowdDisappoint;                                           // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseTrainingScore;                                          // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CT7J[0x3];                                     // 0x0661(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TrainingTargetScore;                                       // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    SpecialScoring;                                            // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               CheckScoreCondition;                                       // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5EJA[0x7];                                     // 0x0679(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    LaneReady;                                                 // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               UpdateCarPosition;                                         // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G95G[0x7];                                     // 0x0691(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ProcessPinsDown;                                           // 0x0698(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               Traditional;                                               // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TraditionalTurn;                                           // 0x06A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UX4G[0x6];                                     // 0x06AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       OverrideLaneName;                                          // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LaneCycleInProgress;                                       // 0x06B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7OAW[0x3];                                     // 0x06B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWidgetTransform                            LargeScoreTextInitialTransform;                            // 0x06BC(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FWidgetTransform                            SmallScoreTextInitialTransform;                            // 0x06D8(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                              LargeScoreTextOffset;                                      // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SmallScoreTextOffset;                                      // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LastAudienceScore;                                         // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      LaneClassRef[0x28];                                        // 0x0700(0x0028) UNKNOWN PROPERTY: SoftClassProperty BowlingAlley_BP.BowlingAlley_BP_C.LaneClassRef
	unsigned char                                      LaneCycleRefList[0x10];                                    // 0x0728(0x0010) UNKNOWN PROPERTY: ArrayProperty BowlingAlley_BP.BowlingAlley_BP_C.LaneCycleRefList
	unsigned char                                      SoftSoundRefTable[0x10];                                   // 0x0738(0x0010) UNKNOWN PROPERTY: ArrayProperty BowlingAlley_BP.BowlingAlley_BP_C.SoftSoundRefTable


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BowlingAlley_BP.BowlingAlley_BP_C");
		return ptr;
	}



	class ABowlingBallReturn* GetBallReturn();
	void GetOverrideLaneName(const struct FName& LaneName, struct FName* Name);
	void SetQueuedBalls(TArray<class UClass*>* QueuedBalls);
	void QueueRandomBalls(int Num, TArray<class UClass*>* Balls);
	void GetLaneManagerFromAlley(class ABowlingLaneManager_C** BowlingLaneManager);
	void GetCenterScoreboardFromAlley(class ABW_CenterScoreboard_C** CenterScoreboard);
	void DebugDecrementLane();
	int GetScore();
	void SendBowlingEvent(SportsScramble_EBowlingEvent Bowling_Event, class ABowlingBall* Ball);
	void SetLaneList(TArray<struct FName>* LaneList, bool ResetToAll);
	void UpdateFrameBallCounter();
	void SpawnSpecialBall(TEnumAsByte<SpecialBallType_ESpecialBallType> NewParam);
	void IsLocallyControlled(bool* LocallyControlled);
	void ProcessAudienceSound();
	void CycleThroughLanes();
	bool IsLaneReady();
	void ResetScore();
	void DebugIncrementLane();
	void NewLaneCheck(bool* LaneChangeIncoming);
	void GetRandomBall(class UClass** BallClass);
	void ProcessScore(int PinsDown, class ABowlingBall* BowlingBall);
	void UpdateScoreBoard(int AddedPoints);
	class ABowlingLane* GetActiveLane();
	void Cleanup();
	void Initialize();
	void UserConstructionScript();
	void Timeline_ShowStrike__FinishedFunc();
	void Timeline_ShowStrike__UpdateFunc();
	void Timeline_ShowSpare__FinishedFunc();
	void Timeline_ShowSpare__UpdateFunc();
	void Timeline_LargeTrainScore__FinishedFunc();
	void Timeline_LargeTrainScore__UpdateFunc();
	void Timeline_SmallTrainScore__FinishedFunc();
	void Timeline_SmallTrainScore__UpdateFunc();
	void CreateDebugButtons();
	void DebugButtonsSelected(int ButtonSelected);
	void NetCreateDebugButtons();
	void NetDisplayStrike();
	void NetDisplaySpare();
	void RedrawScoreBoard(int NewScore);
	void NetRedrawTrainingScoreboard(int NewScore);
	void NetTrainingScoreFontSize(int NewFontSize);
	void ClearTrainingScoreboard();
	void ServerRedrawTrainingScoreboard(int NewScore);
	void ServerUpdateScoreBoard(int AddedPoints);
	void NetUpdateScoreBoard(int AddedPoints);
	void ServerDisplayStrike();
	void ServerDisplaySpare();
	void PrepRevealTrainingScoreboard();
	void RevealTrainingScoreboard();
	void ReceiveBeginPlay();
	void BallRollComplete(class ABowlingBall* Ball, bool Scoring, bool Out, bool restricted);
	void OnBallOut(class ABowlingBall* Ball, bool pit, bool restricted);
	void LaneSwap();
	void WaitForPinResetComplete();
	void LaneSwapComplete();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void PindeckHidden();
	void StandardBallCreated(class ABW_Ball_Base_C* NewBall);
	void EnableAlley(bool EnableDebug, bool DisableLaneChanges, bool Traditional);
	void DisableAlley(bool ResetLane);
	void AdditionalAddedScore(class AActor* Instigator, int AddedScore);
	void FinishLaneReset();
	void SpawnSpecificBalls();
	void ScrambleBallCreated(class ABW_Ball_Base_C* NewBall);
	void SpawnStandardBalls();
	void BallFinishedLane(class AScramBall* Ball);
	void ClearBall(class ABowlingBall* Ball);
	void NetPlayerAnnouncerVO(float Delay, int SoftSoundIDX);
	void ResetAnnouncerVO();
	void StandardBallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive);
	void ScrambleBallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive);
	void InstigatorBallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive);
	void AddInstigatorBall(class ABowlingBall* InstigatorBall);
	void NotifyGameEnding();
	void SpawnRandomBall();
	void BeginTraditionalFrame(bool Solo);
	void EndTraditionalFrame(bool Solo, bool LastFrame);
	void ResetLane();
	void ServerPlayer1BallThrown();
	void ServerPlayer2BallThrown();
	void ServerCycleThroughLanes();
	void ServerResetPins();
	void ServerPlayerBallCountReset();
	void ServerSpawnSpecialBall(TEnumAsByte<SpecialBallType_ESpecialBallType> NewParam);
	void ServerProcessPinsDown(int Pins);
	void SlideBallReturn(bool slideForward);
	void Multi_ResetFrameCounts();
	void Server_SpawnSpecificBall(class UClass* BallClass);
	void PlayerAnnouncerVO(float Delay);
	void AddInstigatorBallCode(class ABowlingBall* Ball);
	void NetSetLaneList(TArray<struct FName>* LaneList, bool ResetToAll);
	void MoveBallReturn(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ExecuteUbergraph_BowlingAlley_BP(int EntryPoint);
	void ProcessPinsDown__DelegateSignature(int ID, int Pins);
	void LaneReady__DelegateSignature();
	void SpecialScoring__DelegateSignature(int LaneID, int SpecialPoints);
	void CurrentLaneScore__DelegateSignature(int LaneID, int CurrentScore);
	void BowlingEvent__DelegateSignature(int PlayerId, SportsScramble_EBowlingEvent BowlingEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
