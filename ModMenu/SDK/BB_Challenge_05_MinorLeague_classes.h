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

// BlueprintGeneratedClass BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C
// 0x0058 (FullSize[0x05D8] - InheritedSize[0x0580])
class ABB_Challenge_05_MinorLeague_C : public ABB_Challenge_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Crowd;                                                     // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              PauseBetweenVO;                                            // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Tutorial_InstrumentGrabbed;                                // 0x0594(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Tutorial_FirstTargetHit;                                   // 0x0595(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Tutorial_SecondTargetHit;                                  // 0x0596(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Tutorial_TrainingStarted;                                  // 0x0597(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Tutorial_TrainingOver;                                     // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NFZA[0x7];                                     // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABatting_Target_01_C*>                TargetList;                                                // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Tutorial_BallBeingLaunched;                                // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Tutorial_LauncherCanFire;                                  // 0x05B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Tutorial_FirstHitReminderPlayed;                           // 0x05B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Tutorial_SecondHitReminderPlayed;                          // 0x05B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              LaunchDelay;                                               // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABB_Ball_Base_C*                             HitBall;                                                   // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LaunchTime;                                                // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBaseballBatterPreferences                  OriginalBattingPreferences;                                // 0x05C4(0x0003) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_KC83[0x1];                                     // 0x05C7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               PairedList;                                                // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_Challenge_05_MinorLeague.BB_Challenge_05_MinorLeague_C");
		return ptr;
	}



	void StopPlayingAudioComponents();
	void SetUpInfoText();
	void BB_Initialize();
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void BaseballGameCompleted(bool LocalPlayerVictory, int AwayScore, int HomeScore);
	void AnnouncerExitSequenceComplete();
	void TriggerAlternateCadence();
	void Shortcut();
	void PreTeleportation();
	void ReceiveBeginPlay();
	void PostTeleportation();
	void ExecuteUbergraph_BB_Challenge_05_MinorLeague(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
