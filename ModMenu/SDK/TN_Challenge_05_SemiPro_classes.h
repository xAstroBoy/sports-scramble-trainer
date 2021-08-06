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

// BlueprintGeneratedClass TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C
// 0x0037 (FullSize[0x06F1] - InheritedSize[0x06BA])
class ATN_Challenge_05_SemiPro_C : public ATN_Challenge_Base_C
{
public:
	unsigned char                                      UnknownData_6CAM[0x6];                                     // 0x06BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Crowd;                                                     // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              Scoreboards;                                               // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FName>                               AnnouncerSequence;                                         // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PlayerHadRacketChange;                                     // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C");
		return ptr;
	}



	void SetUpInfoText();
	void AddActorToGameElementList(class AActor* Actor, bool* Callback);
	void Shutdown(bool* ShutdownBegun);
	void Initialize();
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void SportManager_MatchComplete(TEnumAsByte<GameResult_EGameResult> Result);
	void NotifyChallengeContinue(class AActor* DestroyedActor);
	void TriggerAlternativeCadence();
	void DelayDestroy();
	void OnInstrumentGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ReceiveBeginPlay();
	void Shortcut();
	void ExecuteUbergraph_TN_Challenge_05_SemiPro(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
