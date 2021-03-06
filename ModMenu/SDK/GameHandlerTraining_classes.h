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

// BlueprintGeneratedClass GameHandlerTraining.GameHandlerTraining_C
// 0x0040 (FullSize[0x0390] - InheritedSize[0x0350])
class AGameHandlerTraining_C : public AGameHandlerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	SportsScramble_EScramSport                         Sport;                                                     // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9TIA[0x7];                                     // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              Scoreboards;                                               // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UScramGameInstance_C*                        GameInstance;                                              // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      MiniGame;                                                  // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              GameElements;                                              // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameHandlerTraining.GameHandlerTraining_C");
		return ptr;
	}



	void SetupBaseball();
	void SetupBowling();
	void Shutdown();
	void StartTraining();
	void SetupTennis();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void MiniGameDestroyed(class AActor* DestroyedActor);
	void TrainingComplete(const struct FResultsData& Results);
	void QuitGame();
	void ExecuteUbergraph_GameHandlerTraining(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
