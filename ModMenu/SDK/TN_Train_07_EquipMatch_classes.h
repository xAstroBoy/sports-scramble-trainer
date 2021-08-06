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

// BlueprintGeneratedClass TN_Train_07_EquipMatch.TN_Train_07_EquipMatch_C
// 0x00E7 (FullSize[0x0679] - InheritedSize[0x0592])
class ATN_Train_07_EquipMatch_C : public ATN_Train_Base_C
{
public:
	unsigned char                                      UnknownData_4J5V[0x6];                                     // 0x0592(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0598(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                maxBalls;                                                  // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBetweenLauncherBalls;                                 // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LoopCount;                                                 // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BallsMissed;                                               // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BallsRegistered;                                           // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FDQC[0x4];                                     // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LivingRoom_RightHanded_2;                                  // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBallLauncherParameters>             LaunchTargets;                                             // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBallLauncherParameters                     ActiveLaunchParameters;                                    // 0x05D8(0x0084) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               IntroDone;                                                 // 0x065C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PlayerHasInstrument;                                       // 0x065D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PlayerHasBall;                                             // 0x065E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FirstChargeBallHit;                                        // 0x065F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ChargeBallDetected;                                        // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InstrumentChange;                                          // 0x0661(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_94L2[0x6];                                     // 0x0662(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               FinalAnnouncerSequence;                                    // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AnnouncerClosingSequence;                                  // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_Train_07_EquipMatch.TN_Train_07_EquipMatch_C");
		return ptr;
	}



	void InitializeTrainingRoom07();
	void HandlePostIntroInstrumentChange();
	void HandleProgressBasedOnScore();
	void UserConstructionScript();
	void OnLoaded_5FED347A4F73EC58828916A0A487AFF5(class UObject* Loaded);
	void OnLoaded_30A4BD144E2CD9CA9756B0B9DEC9EEAF(class UObject* Loaded);
	void OnLoaded_AAB170D749F7E7D668910BA4959919FA(class UObject* Loaded);
	void OnLoaded_92798B1B4DD73AA4E33584875349B99E(class UObject* Loaded);
	void OnLoaded_D0632CB845E97B0C0D7827BC61172090(class UObject* Loaded);
	void OnLoaded_F258D8CC426F491A88F75ABFE9903D28(class UObject* Loaded);
	void OnLoaded_A762F3FD4BC7644FD1B1EA8B3282C1E8(class UObject* Loaded);
	void OnLoaded_FDCD6D3347BB13F76879F2B164B470FF(class UObject* Loaded);
	void OnLoaded_41CA612C4173A3904C36C79C39FB916E(class UObject* Loaded);
	void OnLoaded_B39BA55E4F8E5F454F7A2E822F824DF1(class UObject* Loaded);
	void OnLoaded_04842E3D4EADEA3D446B5280C6DB8E9D(class UObject* Loaded);
	void OnLoaded_7346F58F42BE100070807DBC55C73A53(class UObject* Loaded);
	void OnLoaded_E8F87CD545C0CA2F0D9AD3B2D2B69700(class UObject* Loaded);
	void OnLoaded_710DB4C04F6E01AD8BDE0A9AEEE8B2AA(class UObject* Loaded);
	void OnLoaded_13AB75754727C9DEFAB2649A9E19B7AF(class UObject* Loaded);
	void OnLoaded_1A4B6F504552D3D2B55F969D49F86601(class UObject* Loaded);
	void OnLoaded_8EC752A44ADFB0E9F0409798A3B3B4C1(class UObject* Loaded);
	void OnLoaded_860ACDAD4D4D230BB97C2A8583FB2541(class UObject* Loaded);
	void OnLoaded_3D36BDA8486BD0DC34FF3E824AF9CE1A(class UObject* Loaded);
	void OnLoaded_E1F86C564473DBC7E2130EA5D895B4E2(class UObject* Loaded);
	void OnLoaded_7E8DCED749772CAF97995CAC7CAD9720(class UObject* Loaded);
	void ReceiveBeginPlay();
	void PreTrainingGameCountDown();
	void CountDownCompleted();
	void PreTrainingDialog_01();
	void PreTrainingDialog_02();
	void PreTrainingDialog_03();
	void PreTrainingDialog_04();
	void TN_TRN_InstrumentHit();
	void TN_ScrambleTargetInstrumentChangeMissed();
	void PreTrainingMakeLauncherHitBatTarget();
	void PreTrainingMakeLauncherHitBaseballTarget();
	void PreTrainingSpawnBatRightTarget();
	void PreTrainingSpawnLeftTargetBaseball();
	void TN_TNG_ScrambleTargetHit(class ATennisScrambleTarget_C* TargetActor, class UClass* EventClass, int TargetId);
	void ProcessChargeShot();
	void PreTrainingLaunchIntroBaseballAtPlayer();
	void TN_LaunchedBallMissed();
	void LaunchBallAtPingPongPaddleTarget();
	void LaunchBallAtPingPongBallTarget();
	void SpawnRightPoolNoodleTarget();
	void SpawnRightPingPongPaddleTarget();
	void SpawnLeftPingPongBallTarget(float Delay);
	void PreTrainingFirstInstrumentChange();
	void PreTrainingPlayerMissedFirstChargeShot();
	void PreTrainingPlayerMissedChargeShot();
	void PreTrainingPlayerMissedInstrumentChange();
	void LaunchAtPoolNoodleTarget();
	void LaunchBallAtBeachBallTarget();
	void SpawnLeftBeachBallTarget(float Delay);
	void SpawnRightProRacketTarget();
	void LaunchAtProRacketTarget();
	void LaunchBallAtLeftTennisBallTarget();
	void SpawnLeftTennisBallTarget(float Delay);
	void ProcessLightNormalShot();
	void TN_ScrambleTargetBallHit(float HitLocationX, float HitLocationY);
	void TN_LaunchedBallHit(float HitLocationX, float HitLocationY);
	void NotifyTrainingContinue(class AActor* DestroyedActor);
	void AnnouncerExitSequenceComplete();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void CustomEvent_2();
	void CustomEvent();
	void CustomEvent_3();
	void CustomEvent_4();
	void CustomEvent_5();
	void CustomEvent_6();
	void CustomEvent_7();
	void CustomEvent_8();
	void CustomEvent_9();
	void CustomEvent_10();
	void CustomEvent_11();
	void CustomEvent_12();
	void CustomEvent_13();
	void CustomEvent_14();
	void CustomEvent_15();
	void CustomEvent_16();
	void CustomEvent_17();
	void CustomEvent_18();
	void CustomEvent_19();
	void CustomEvent_20();
	void CustomEvent_21();
	void ExecuteUbergraph_TN_Train_07_EquipMatch(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
