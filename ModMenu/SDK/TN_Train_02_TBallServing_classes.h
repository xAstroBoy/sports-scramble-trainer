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

// BlueprintGeneratedClass TN_Train_02_TBallServing.TN_Train_02_TBallServing_C
// 0x00EF (FullSize[0x0681] - InheritedSize[0x0592])
class ATN_Train_02_TBallServing_C : public ATN_Train_Base_C
{
public:
	unsigned char                                      UnknownData_DWM6[0x6];                                     // 0x0592(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0598(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                maxBalls;                                                  // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBetweenLauncherBalls;                                 // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LoopCount;                                                 // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BallsMissed;                                               // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BallsRegistered;                                           // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZTDO[0x4];                                     // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LivingRoom_RightHanded_2;                                  // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBallLauncherParameters>             LaunchTargets;                                             // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBallLauncherParameters                     ActiveLaunchParameters;                                    // 0x05D8(0x0084) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               PracticeShotDone;                                          // 0x065C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MKZQ[0x3];                                     // 0x065D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Text_Instructions01;                                       // 0x0660(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ATN_Ball_Base_C*                             BallInPlay;                                                // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CountDownComplete;                                         // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_Train_02_TBallServing.TN_Train_02_TBallServing_C");
		return ptr;
	}



	void SetUpInfoText();
	void UserConstructionScript();
	void OnLoaded_CE29F7854F25E6982077878960FA43EF(class UObject* Loaded);
	void OnLoaded_3A18E96343B9DD14EF90B098408B7AFD(class UObject* Loaded);
	void OnLoaded_3111E7564B39D20A9BB2878590F329BC(class UObject* Loaded);
	void ReceiveBeginPlay();
	void StartCountdown();
	void StartTraining();
	void CountDownCompleted();
	void TN_LaunchedBallHit(float HitLocationX, float HitLocationY);
	void TN_LaunchedBallMissed();
	void SpawnFirstBall();
	void PreTrainingAnnouncer();
	void TN_TNG_BallHit(class AScramBall* Ball);
	void TN_TNG_RespawnBall();
	void TN_TNG_WallTargetHit(class AActor* PayloadActor, class AActor* BallTargetActor, int RegionHit);
	void NotifyTrainingContinue(class AActor* DestroyedActor);
	void AnnouncerExitSequenceComplete();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void CustomEvent_1();
	void CustomEvent();
	void CustomEvent_2();
	void ExecuteUbergraph_TN_Train_02_TBallServing(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
