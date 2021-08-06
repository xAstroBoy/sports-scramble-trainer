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

// BlueprintGeneratedClass BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C
// 0x00AF (FullSize[0x05F0] - InheritedSize[0x0541])
class ABW_Challenge_06_SpeedBowling_C : public ABW_Challenge_Base_C
{
public:
	unsigned char                                      UnknownData_P7AK[0x7];                                     // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_Horn;                                                // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               PracticeOver;                                              // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NUH7[0x7];                                     // 0x0559(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRandomActorTable                           TutorialBallTable;                                         // 0x0560(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SecondPauseCompleted;                                      // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FirstPauseCompleted;                                       // 0x0581(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L2OB[0x6];                                     // 0x0582(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               PrimaryAudioList;                                          // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABW_CenterScoreboard_C*                      CenterScoreboardBP;                                        // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRandomActor>                        AssignedBall;                                              // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TimeBetweenLaneChanges;                                    // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CycleIndex;                                                // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                LaneChangeTimer;                                           // 0x05B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               TimerExpiredLaneChange;                                    // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SkipClearTimer;                                            // 0x05C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SkipTimerReset;                                            // 0x05C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I3ZS[0x1];                                     // 0x05C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultLaneSwapTime;                                       // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FasterLaneSwapTime;                                        // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoreFasterLaneSwapTime;                                    // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxFastnessLanesSwapTime;                                  // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerStrikeCount;                                         // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StrikesNeededForTrophy;                                    // 0x05D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XUOP[0x4];                                     // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      LaneRefList[0x10];                                         // 0x05DC(0x0010) UNKNOWN PROPERTY: ArrayProperty BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.LaneRefList


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C");
		return ptr;
	}



	void UnbindEvents();
	void IncrementCycleIndex();
	void InitializeChallengeRoom();
	void SetUpInfoText();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void StartTraining();
	void SpawnBalls();
	void NotifyChallengeContinue(class AActor* DestroyedActor);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void AnnouncerPresenting();
	void BW_TriggerCountdown();
	void GameEnd();
	void Shortcut();
	void UpdateCurrentScore(int LaneID, int CurrentScore);
	void CustomTimer();
	void ChangeLane();
	void LaneSwapping(class ABowlingLane_Base_C* ReplacementLane, class ABowlingLane_Base_C* OutgoingLane);
	void ReduceTime();
	void AnnouncerExitSequenceComplete();
	void BowlingEvent(int Player, SportsScramble_EBowlingEvent BowlingEvent);
	void ExecuteUbergraph_BW_Challenge_06_SpeedBowling(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
