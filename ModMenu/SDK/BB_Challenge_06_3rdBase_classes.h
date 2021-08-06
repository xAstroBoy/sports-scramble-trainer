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

// BlueprintGeneratedClass BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C
// 0x0064 (FullSize[0x05E4] - InheritedSize[0x0580])
class ABB_Challenge_06_3rdBase_C : public ABB_Challenge_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Crowd;                                                     // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABB_Minigame_PracticeSportManager_C*         BaseballManager;                                           // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABB_Strikezone_C*                            strikeZone;                                                // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxFieldedBalls;                                           // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W0IK[0x4];                                     // 0x05A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPhysicalMaterial*                           OldFloorMaterial;                                          // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABB_Challenge_06_3rdBase_Helper_C*           Helper;                                                    // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABB_BallLauncher_C*                          Launcher;                                                  // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeBetweenBalls;                                          // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Firing;                                                    // 0x05C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q5CQ[0x3];                                     // 0x05C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               PairedSequences;                                           // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              BombChance;                                                // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GoldenBallChance;                                          // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BallsCaught;                                               // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C");
		return ptr;
	}



	void SetZoneTimeScales(const struct FMinMaxFloat& PopFlyTimeScale, const struct FMinMaxFloat& SweetSpotTimeScale, const struct FMinMaxFloat& LineDriveTimeScale, const struct FMinMaxFloat& GroundBallTimeScale);
	void GetNextBallClass(class UClass** NextBallClass);
	void SetUpInfoText();
	void SetZoneChances(float PopFlyChance, float SweetSpotChance, float LineDriveChance, float GroundBallChance);
	void SetParameters(float TimeBetweenBalls, float BombChance, float GoldenBallChance);
	void Initialized3rdBase();
	void Cleanup();
	void UserConstructionScript();
	void OnLoaded_25CCB05E4E04939CC232B8BB23AB186B(class UObject* Loaded);
	void OnLoaded_70510E9640399C2A919A79A38EF129A0(class UObject* Loaded);
	void OnLoaded_32444B0A4E135437E255DFAB39579AF8(class UObject* Loaded);
	void OnLoaded_49C6C46244429E83F6C5859C5D9D417C(class UObject* Loaded);
	void AnnouncerPaused();
	void AnnouncerPresenting();
	void AnnouncerPlayingSequence(const struct FName& SequenceName);
	void ReceiveBeginPlay();
	void NotifyChallengeContinue(class AActor* DestroyedActor);
	void BallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void BaseballEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void FireLoop();
	void Start_Challenge();
	void AnnouncerExitSequenceComplete();
	void BB_TriggerCountdown();
	void GameEnd();
	void Shortcut();
	void ExecuteUbergraph_BB_Challenge_06_3rdBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
