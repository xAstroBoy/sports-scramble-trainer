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

// BlueprintGeneratedClass BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C
// 0x0038 (FullSize[0x0360] - InheritedSize[0x0328])
class ABW_Minigame_HumanVsAI_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Root;                                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              GameElements;                                              // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABowlingAlley_BP_C*>                  BowlingAlleys;                                             // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AScramSportManagerBowling_Blueprint_C*       Manager;                                                   // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C");
		return ptr;
	}



	void AddActorToGameElementList(class AActor* Actor, bool* Callback);
	void Shutdown(bool* ShutdownBegun);
	void SpawnGameElements();
	void Initialize();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DelayDestroy();
	void GameOver();
	void ExecuteUbergraph_BW_Minigame_HumanVsAI(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
