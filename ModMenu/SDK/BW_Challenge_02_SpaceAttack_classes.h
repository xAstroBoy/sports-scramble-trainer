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
	 * BlueprintGeneratedClass BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C
	 * Size -> 0x007F (FullSize[0x05C0] - InheritedSize[0x0541])
	 */
	class ABW_Challenge_02_SpaceAttack_C : public ABW_Challenge_Base_C
	{
	public:
		unsigned char                                              UnknownData_B0GS[0x7];                                   // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0548(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       PracticeOver;                                            // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0WU8[0x7];                                   // 0x0551(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRandomActorTable                                   TutorialBallTable;                                       // 0x0558(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       SecondPauseCompleted;                                    // 0x0578(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FirstPauseCompleted;                                     // 0x0579(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3HXR[0x6];                                   // 0x057A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        PrimaryAudioList;                                        // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class ABW_CenterScoreboard_C*                              CenterScoreboardBP;                                      // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FRandomActor>                                AssignedBall;                                            // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        PatternList;                                             // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AActor*                                              AttackLaneActor;                                         // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UnbindEvents();
		void InitializeChallengeRoom();
		void SetupInfoText();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SpawnBalls();
		void NotifyChallengeContinue(class AActor* DestroyedActor);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BW_TriggerCountdown();
		void GameEnd();
		void Shortcut();
		void UpdateCurrentScore(int32_t LaneID, int32_t CurrentScore);
		void LaneReplacement(class ABowlingLane_Base_C* ReplacementLane, class ABowlingLane_Base_C* OutgoingLane);
		void UpdateAlienSpeed();
		void AnnouncerExitSequenceComplete();
		void ExecuteUbergraph_BW_Challenge_02_SpaceAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
