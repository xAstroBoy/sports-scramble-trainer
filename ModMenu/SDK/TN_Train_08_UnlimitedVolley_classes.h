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

// BlueprintGeneratedClass TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C
// 0x012E (FullSize[0x06C0] - InheritedSize[0x0592])
class ATN_Train_08_UnlimitedVolley_C : public ATN_Train_Base_C
{
public:
	unsigned char                                      UnknownData_03Q2[0x6];                                     // 0x0592(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0598(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DelayBetweenLauncherBalls;                                 // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7FAP[0x4];                                     // 0x05A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LivingRoom_ForehandOnly;                                   // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBallLauncherParameters>             LaunchTargets;                                             // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      BallClass_1;                                               // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_ETennisShotType                     LaunchSetting;                                             // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<TN_ShotDirection_ETN_ShotDirection>    LaunchSide;                                                // 0x05D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G1TO[0x6];                                     // 0x05D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      InstrumentClass;                                           // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              ValidBallClassList_0_1;                                    // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               RandomBall;                                                // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_007O[0x3];                                     // 0x05F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DelayBetweenLaunches;                                      // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               LivingRoom_BackhandOnly;                                   // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               LivingRoom_Alternating;                                    // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               LivingRoom_Random;                                         // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       LivingRoom_Forehand;                                       // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LivingRoom_Backhand;                                       // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBallLauncherParameters                     LaunchTarget;                                              // 0x0638(0x0084) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                BallDirectionIndex;                                        // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C");
		return ptr;
	}



	void UpdateOptions();
	void GetNextLaunchTarget(struct FBallLauncherParameters* LauncherParameter);
	void GetRandomLaunchTargetList();
	void InitializeTrainingRoom08();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void LaunchLoop();
	void NormalLaunch();
	void ChargeShot();
	void SliceShot();
	void ChangePlayerInstrument(class UClass* PlayerInstrumentClass);
	void CountDownCompleted();
	void ShowCountdown();
	void Unpaused();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_TN_Train_08_UnlimitedVolley(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
