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

// BlueprintGeneratedClass TN_Train_Base.TN_Train_Base_C
// 0x0181 (FullSize[0x0592] - InheritedSize[0x0411])
class ATN_Train_Base_C : public ATrainingBase_C
{
public:
	unsigned char                                      UnknownData_XH9I[0x7];                                     // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                              Scoreboards;                                               // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ATN_GameSelector_C*                          GameSelector;                                              // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScramSportManagerTennis_Blueprint_C*        Manager;                                                   // 0x0438(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABallLauncher_C*                             LauncherLeft;                                              // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUI_RoomDetailsData                         LevelData;                                                 // 0x0448(0x0068) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class ATravelcapsule_C*                            TravelCapsule;                                             // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LevelWon;                                                  // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XPJT[0x7];                                     // 0x04B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     ResultsMenu;                                               // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABallLauncher_C*                             LauncherRight;                                             // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              ActivePayloads;                                            // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AFloorLightUpGroup_C*                        LightUpGroup;                                              // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Bounces;                                                   // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CH2L[0x4];                                     // 0x04EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATN_NetMatchScoreboard_C*                    NetScoreBoard;                                             // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SFX_BallGoodSound;                                         // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SFX_BallBadSound;                                          // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LevelCompleted;                                            // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F7CW[0x7];                                     // 0x0509(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABallLauncher_C*                             LauncherCenter;                                            // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AServeLocationIndicator_C*                   ServeLocationIndicator;                                    // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AServeLauncher_C*                            ServeLauncher;                                             // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATN_TRN_CHG_TargetWall_C*                    GameWall;                                                  // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              BallTargets;                                               // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              TargetPool;                                                // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               BindToBallSpawned;                                         // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L6ZU[0x7];                                     // 0x0551(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATennisTrainingScrambleTargetGroup_C*        TennisTargetGroup;                                         // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              ValidBallClassList;                                        // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      BallClass;                                                 // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              DisabledBallClassList;                                     // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ATennisNet_BP_C*                             TennisNet;                                                 // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GameResult_EGameResult>                TrainingResult;                                            // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreBallsNeverHitByInstruments;                          // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_Train_Base.TN_Train_Base_C");
		return ptr;
	}



	void AddActorToGameElementList(class AActor* Actor, bool* Callback);
	void Shutdown(bool* ShutdownBegun);
	void TN_UnbindEvents();
	void TN_CalculateEndScore(int CurrentScore, int TargetScore);
	void GetListOfBallClasses();
	void GetRandomBallClass();
	void TN_ScrambleTargetBallHit(float HitLocationX, float HitLocationY);
	void PBP_ScrambleTargetHit(class UClass* EventClass);
	void ProcessLightNormalShot();
	void ProcessChargeShot();
	void TN_ScrambleTargetInstrumentChangeMissed();
	void TN_TRN_InstrumentHit();
	void SpawnScrambler();
	void DestroyAllBalls_1();
	void ProcessSliceShot();
	void FindNewTrainingTarget(class AActor* OldTarget);
	void SpawnTrainingTargets();
	void SpawnServeLauncher(bool TeeBall, bool MoveSpawnedBalls);
	void SpawnCenterLaucher(float InitialHeight);
	void TN_LaunchedBallMissed();
	void TN_LaunchedBallHit(float HitLocationX, float HitLocationY);
	void SpawnFloorLightUp(bool OutOnly, bool InOnly, bool BothInOut);
	void SpawnLeftRightLauchers(bool SpawnLeftLauncher, bool SpawnRightLauncher);
	void SpawnNetScoreboard();
	void BallAccuracySound(bool In);
	void CheckInBounds(float XLocation, float YLocation, bool PlaySound, bool* InBounds);
	void Initialize();
	void UserConstructionScript();
	void OnLoaded_A43C58794D9F2CCF6D593985EC3E313B(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void NewLauncherBall(class AActor* NewBallActor);
	void BallHasBeenHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void TN_TNG_BallSpawned(class AScramBall* Ball);
	void TN_TNG_BallHit(class AScramBall* Ball);
	void TN_TNG_WallTargetHit(class AActor* PayloadActor, class AActor* BallTargetActor, int RegionHit);
	void TN_TNG_BallGrabbed(class AScramBall* Ball);
	void BallShotTypeChange(SportsScramble_ETennisShotType ShotType);
	void ScrambleTargetLaunchedBall(class ATN_Ball_Base_C* LaunchedBall);
	void ScrambleIconBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void TN_TNG_ScrambleTargetHit(class ATennisScrambleTarget_C* TargetActor, class UClass* EventClass, int TargetId);
	void ScrambleIconBallTypeShotChange(SportsScramble_ETennisShotType ShotType);
	void ChangeBallClass(class UClass* BallClass);
	void EndOfGame();
	void PlayAsync2D();
	void ExecuteUbergraph_TN_Train_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
