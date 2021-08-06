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

// BlueprintGeneratedClass TN_Train_05_ScrambleBalls.TN_Train_05_ScrambleBalls_C
// 0x00E6 (FullSize[0x0678] - InheritedSize[0x0592])
class ATN_Train_05_ScrambleBalls_C : public ATN_Train_Base_C
{
public:
	unsigned char                                      UnknownData_TDZZ[0x6];                                     // 0x0592(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0598(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                maxBalls;                                                  // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBetweenLauncherBalls;                                 // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LoopCount;                                                 // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BallsMissed;                                               // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BallsRegistered;                                           // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Q76O[0x4];                                     // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LivingRoom_RightHanded;                                    // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBallLauncherParameters>             LaunchTargets;                                             // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBallLauncherParameters                     ActiveLaunchParameters;                                    // 0x05D8(0x0084) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               IntroDone;                                                 // 0x065C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LauncherPos01;                                             // 0x065D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LauncherPos02;                                             // 0x065E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LauncherPos03;                                             // 0x065F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LauncherPos04;                                             // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_045Z[0x7];                                     // 0x0661(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LivingRoom_LeftHanded;                                     // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_Train_05_ScrambleBalls.TN_Train_05_ScrambleBalls_C");
		return ptr;
	}



	void AdjustScramTargetInfluencers(class ATennisScrambleTarget_C* Target);
	void UnbindEvents();
	void SetUpInfoText();
	void UserConstructionScript();
	void OnLoaded_EF0E582E46E09E77AC0CE6A0DF3BE210(class UObject* Loaded);
	void OnLoaded_F40B72DF4F7534DEC1F000AE58DF7BDD(class UObject* Loaded);
	void OnLoaded_ACCB9E5244E2AAD5DE2A359BD1D441C6(class UObject* Loaded);
	void OnLoaded_FCC166974D9907A6014E748CFF0B63B0(class UObject* Loaded);
	void OnLoaded_3391CD2A49DEC8B3A2AFE5B7DFD0070C(class UObject* Loaded);
	void OnLoaded_D6218B674F54ADB3B78BD2B92B69592C(class UObject* Loaded);
	void OnLoaded_DB4AEB094F1E42CF97328DA0CF9FF3C5(class UObject* Loaded);
	void OnLoaded_CDE623804916648F835ECA83BF3346C6(class UObject* Loaded);
	void OnLoaded_84CC097A4FF77257444D188E925D7D36(class UObject* Loaded);
	void ReceiveBeginPlay();
	void PreTrainingGameCountDown();
	void CountDownCompleted();
	void TN_LaunchedBallHit(float HitLocationX, float HitLocationY);
	void TN_LaunchedBallMissed();
	void LaunchNextBall();
	void PreTrainingDialog_01();
	void PreTrainingDialog_02();
	void PreTrainingDialog_03();
	void PreTrainingDialog_04();
	void PreTrainingDialog_05();
	void IntroTargetHit(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int ID);
	void FirstTargetHit(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int ID);
	void ScorePlayer();
	void FinalScore(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int ID);
	void SecondScore(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int ID);
	void ThirdScore(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int ID);
	void NotifyTrainingContinue(class AActor* DestroyedActor);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void AnnouncerExitSequenceComplete();
	void CustomEvent_1();
	void CustomEvent();
	void CustomEvent_2();
	void CustomEvent_3();
	void CustomEvent_4();
	void ExecuteUbergraph_TN_Train_05_ScrambleBalls(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
