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

// BlueprintGeneratedClass BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C
// 0x0077 (FullSize[0x05B8] - InheritedSize[0x0541])
class ABW_Challenge_04_Hoops_C : public ABW_Challenge_Base_C
{
public:
	unsigned char                                      UnknownData_IVQU[0x7];                                     // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               PracticeOver;                                              // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4VZ5[0x7];                                     // 0x0551(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRandomActorTable                           TutorialBallTable;                                         // 0x0558(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UScramSaveData*                              SaveData;                                                  // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SecondPauseCompleted;                                      // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FirstPauseCompleted;                                       // 0x0581(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseAlternateAnnouncerVO;                                   // 0x0582(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TF15[0x5];                                     // 0x0583(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               PrimaryAudioList;                                          // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABW_CenterScoreboard_C*                      CenterScoreboardBP;                                        // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRandomActor>                        AssignedBall;                                              // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABowlingLaneManager_C*                       BowlingLaneMgr;                                            // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_Challenge_04_Hoops.BW_Challenge_04_Hoops_C");
		return ptr;
	}



	void UnbindEvents();
	void InitializeChallengeRoom();
	void SetUpInfoText();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void StartTraining();
	void SpawnBalls();
	void NotifyChallengeContinue(class AActor* DestroyedActor);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void BW_TriggerCountdown();
	void GameEnd();
	void Shortcut();
	void UpdateCurrentScore(int LaneID, int CurrentScore);
	void AnnouncerExitSequenceComplete();
	void ExecuteUbergraph_BW_Challenge_04_Hoops(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
