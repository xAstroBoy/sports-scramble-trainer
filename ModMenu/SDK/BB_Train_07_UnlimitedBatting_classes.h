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

// BlueprintGeneratedClass BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C
// 0x00A4 (FullSize[0x06C4] - InheritedSize[0x0620])
class ABB_Train_07_UnlimitedBatting_C : public ABB_Train_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Crowd;                                                     // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABatting_Target_01_C*>                TargetList;                                                // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              LaunchDelay;                                               // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0TAQ[0x4];                                     // 0x0644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABB_Ball_Base_C*                             HitBall;                                                   // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LaunchTime;                                                // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomBall;                                                // 0x0654(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WWNO[0x3];                                     // 0x0655(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BallClass;                                                 // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      InstumentClass;                                            // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              ValidBallClassList;                                        // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               RandomInstrument;                                          // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DC8B[0x7];                                     // 0x0679(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              DisabledBallClassList;                                     // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LaunchSpeed;                                               // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FireTime;                                                  // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              ValidInstrumentClassList;                                  // 0x0698(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBaseballBatterPreferences                  OriginalBattingPreferences;                                // 0x06A8(0x0003) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               GameStarted;                                               // 0x06AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	SportsScramble_EDifficulty                         ActiveLauncherDifficulty;                                  // 0x06AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E4OG[0x3];                                     // 0x06AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABaseballBall*>                       HitBalls;                                                  // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              GroundKillTime;                                            // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C");
		return ptr;
	}



	void UpdateOptions();
	void GetAllInstruments();
	void GetAllBallClasses();
	void GetRandomBallClass(class UClass** RandomBallClass);
	void BB_TRN_Initialize();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SpawnLauncherAndBarrier();
	void ChangeBallClass(class UClass* NewBallClass);
	void LaunchTrainingBall();
	void TrainingBallLaunched(class AActor* Ball);
	void InitializeOutfieldTargets();
	void TargetHit(class AScramBall* Ball, int TargetId);
	void InitializeInstrumentSelector();
	void InstrumentSelected(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void StartTheLauncher();
	void WhenTutorialBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void Unpaused();
	void ResetOutfieldTargets();
	void CountDownCompleted();
	void ShowCountdown();
	void ExecuteUbergraph_BB_Train_07_UnlimitedBatting(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
