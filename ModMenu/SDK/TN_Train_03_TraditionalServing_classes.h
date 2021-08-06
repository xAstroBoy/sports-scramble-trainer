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

// BlueprintGeneratedClass TN_Train_03_TraditionalServing.TN_Train_03_TraditionalServing_C
// 0x010E (FullSize[0x06A0] - InheritedSize[0x0592])
class ATN_Train_03_TraditionalServing_C : public ATN_Train_Base_C
{
public:
	unsigned char                                      UnknownData_3WSX[0x6];                                     // 0x0592(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0598(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             TN_TRN_RM03_ServeTraditionalBall_03b_Dialogue_Cue;         // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             TN_TRN_RM03_ServeTraditionalBall_03_Cue;                   // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                maxBalls;                                                  // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBetweenLauncherBalls;                                 // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LoopCount;                                                 // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BallsMissed;                                               // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BallsRegistered;                                           // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JXBJ[0x4];                                     // 0x05C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LivingRoom_RightHanded_2;                                  // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBallLauncherParameters>             LaunchTargets;                                             // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBallLauncherParameters                     ActiveLaunchParameters;                                    // 0x05E8(0x0084) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               PracticeShotDone;                                          // 0x066C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6HW4[0x3];                                     // 0x066D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Text_Instructions01;                                       // 0x0670(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AScramBall*                                  BallInPlay;                                                // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PracticeBallGrabbed;                                       // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PracticeBallReleased;                                      // 0x0691(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VW44[0x6];                                     // 0x0692(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AScramBall*                                  GrabbedBall;                                               // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_Train_03_TraditionalServing.TN_Train_03_TraditionalServing_C");
		return ptr;
	}



	void SetUpInfoText();
	void UserConstructionScript();
	void OnLoaded_F26E177244918D593E0E2F807C060E9B(class UObject* Loaded);
	void OnLoaded_F26E177244918D593E0E2F805941E1E9(class UObject* Loaded);
	void OnLoaded_1BFD479047082CB1685960BD547A1895(class UObject* Loaded);
	void OnLoaded_FAF29E0648E8BF0BBFB56CBA8F21ABA8(class UObject* Loaded);
	void OnLoaded_5D76DF014E24509100600997D2772610(class UObject* Loaded);
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
	void TN_TNG_BallGrabbed(class AScramBall* Ball);
	void NotifyTrainingContinue(class AActor* DestroyedActor);
	void AnnouncerExitSequenceComplete();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void InstrumentRelease(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void CustomEvent_1();
	void CustomEvent();
	void CustomEvent_2();
	void CustomEvent_3();
	void ExecuteUbergraph_TN_Train_03_TraditionalServing(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
