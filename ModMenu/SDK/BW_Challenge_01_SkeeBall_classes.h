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
	 * BlueprintGeneratedClass BW_Challenge_01_SkeeBall.BW_Challenge_01_SkeeBall_C
	 * Size -> 0x0087 (FullSize[0x05C8] - InheritedSize[0x0541])
	 */
	class ABW_Challenge_01_SkeeBall_C : public ABW_Challenge_Base_C
	{
	public:
		unsigned char                                              UnknownData_5MNO[0x7];                                   // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0548(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       PracticeOver;                                            // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TUCK[0x7];                                   // 0x0551(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRandomActorTable                                   TutorialBallTable;                                       // 0x0558(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		class UScramSaveData*                                      SaveData;                                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        AlternateAudioList;                                      // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       SecondPauseCompleted;                                    // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FirstPauseCompleted;                                     // 0x0591(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseAlternateAnnouncerVO;                                 // 0x0592(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EXZ0[0x5];                                   // 0x0593(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        PrimaryAudioList;                                        // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class ABW_CenterScoreboard_C*                              CenterScoreboardBP;                                      // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FRandomActor>                                AssignedBall;                                            // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AActor*                                              SkeeBallLaneActor;                                       // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RemoveBallsFromSet();
		void UnbindEvents();
		void InitializeChallengeRoom();
		void SetupInfoText();
		void UserConstructionScript();
		void OnLoaded_B87A02414D8034956F036AAEC377CBDD(class UObject* Loaded);
		void OnLoaded_6E8C3E134C0544A87A78F098F6C5E576(class UObject* Loaded);
		void OnLoaded_6098C4944C11387ACDFF58824917221C(class UObject* Loaded);
		void ReceiveBeginPlay();
		void StartTraining();
		void SpawnBalls();
		void NotifyChallengeContinue(class AActor* DestroyedActor);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BW_TriggerCountdown();
		void GameEnd();
		void UpdateCurrentScore(int32_t LaneID, int32_t CurrentScore);
		void Shortcut();
		void BindLaneSwap();
		void AnnouncerExitSequenceComplete();
		void TimeLoop();
		void LaneReplacement(class ABowlingLane_Base_C* ReplacementLane, class ABowlingLane_Base_C* OutgoingLane);
		void ExecuteUbergraph_BW_Challenge_01_SkeeBall(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
