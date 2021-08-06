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

// BlueprintGeneratedClass BB_Challenge_01_HRD.BB_Challenge_01_HRD_C
// 0x0050 (FullSize[0x05D0] - InheritedSize[0x0580])
class ABB_Challenge_01_HRD_C : public ABB_Challenge_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Crowd;                                                     // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AHRD_Challenge_Manager_C*                    HRD_Manager;                                               // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               PrimaryAudioList;                                          // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DEBUG_MAIN_AUDIO;                                          // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseAlternateAnnouncerVO;                                   // 0x05A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O6GX[0x6];                                     // 0x05AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               AlternateAudioList;                                        // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UScramSaveData*                              SaveData;                                                  // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HomeRunCount;                                              // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HomeRunThreshold;                                          // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_Challenge_01_HRD.BB_Challenge_01_HRD_C");
		return ptr;
	}



	void InitializeChallenge();
	void SetUpInfoText();
	void CheckProperAudioList(bool* UseAlternate);
	void RequestNewBat(class UClass** New_Instrument_Class, bool* Success);
	void RequestNewBall(class UClass** New_Ball_Class, bool* Success);
	void Cleanup();
	void UserConstructionScript();
	void OnLoaded_618E959F46A70B0ED3A8958638CE6E1E(class UObject* Loaded);
	void OnLoaded_3FA9753143D16E5E38723691EAE3CEF5(class UObject* Loaded);
	void OnLoaded_7516DD6F4DA5C7F8453FFA8DFC85BCCD(class UObject* Loaded);
	void AnnouncerPlayingSequence(const struct FName& SequenceName);
	void AnnouncerPresenting();
	void AnnouncerPaused();
	void ReceiveBeginPlay();
	void BB_TriggerCountdown();
	void Start_Game();
	void End_Game();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void AnnouncerExitSequenceComplete();
	void PlayerScoredRun();
	void PlayerHitHomerun();
	void Shortcut();
	void ExecuteUbergraph_BB_Challenge_01_HRD(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
