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

// BlueprintGeneratedClass BW_Train_Base.BW_Train_Base_C
// 0x0061 (FullSize[0x0472] - InheritedSize[0x0411])
class ABW_Train_Base_C : public ATrainingBase_C
{
public:
	unsigned char                                      UnknownData_I8HA[0x7];                                     // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_Countdown;                                           // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_BowlingMusic;                                        // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               LevelWonz;                                                 // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ROEX[0x7];                                     // 0x0431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABowlingAlley_BP_C*                          TutorialAlley;                                             // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABW_BallReturn_C*                            TutorialBallReturn;                                        // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABW_Pinsetter_C*                             TutorialPinSetter;                                         // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABowlingAlley_BP_C*                          UnusedAlley;                                               // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABW_CenterScoreboard_C*                      CenterScoreboard;                                          // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID;                                                        // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XY1U[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PracticeBallClass;                                         // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableLaneChanges;                                        // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<GameResult_EGameResult>                TrainingOutcome;                                           // 0x0471(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_Train_Base.BW_Train_Base_C");
		return ptr;
	}



	void AddActorToGameElementList(class AActor* Actor, bool* Callback);
	void Shutdown(bool* ShutdownBegun);
	void ToggleLaneChanging(bool DisableLaneChanges);
	void ShowScoreboard();
	void CalculateEndScore();
	void ResetLane(bool ResetScore, bool ResetPins, bool ResetBallCounter);
	void DestroyAllBalls_1();
	void Initialize();
	void UserConstructionScript();
	void OnLoaded_B645D8DE43A43D6A03D922BF743B0B01(class UObject* Loaded);
	void ReceiveBeginPlay();
	void BowlingEvent(int Player, SportsScramble_EBowlingEvent BowlingEvent);
	void SpecificBallCreated(class ABW_Ball_Base_C* Ball);
	void RandomBallCreated(class ABW_Ball_Base_C* Ball);
	void GetCurrentLaneScore(int LaneID, int CurrentScore);
	void EndOfGame();
	void SpecialScoreEvent(int LaneID, int Points);
	void PlayAudio_Countdown();
	void ExecuteUbergraph_BW_Train_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
