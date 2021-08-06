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

// BlueprintGeneratedClass TN_GameSelector.TN_GameSelector_C
// 0x0061 (FullSize[0x0389] - InheritedSize[0x0328])
class ATN_GameSelector_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Root;                                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDebugButtonInfo>                    Buttons;                                                   // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference)
	struct FScriptMulticastDelegate                    GeoChanged;                                                // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ADebugButtonGroup_C*                         MainMenu;                                                  // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GameActive;                                                // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RFH8[0x7];                                     // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScramGameInstance_C*                        GameInstance;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATN_MiniGameScoreboard_C*                    MinigameScoreboard;                                        // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UsingNewMenuSystem;                                        // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DebugButtonUsed;                                           // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F8RF[0x6];                                     // 0x037A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ADebugMainMenu_C*                            DebugMainMenu;                                             // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowReset;                                                // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_GameSelector.TN_GameSelector_C");
		return ptr;
	}



	void Initialize_Spectator();
	void ResetRacket();
	void DestroyAllMenus();
	void VanishAllBalls();
	void Initialize();
	void DestroyGameManagers();
	void UserConstructionScript();
	void OnLoaded_D047EA744DB91F927291E1A0E96E30B4(class UClass* Loaded);
	void ReceiveBeginPlay();
	void GameSelected(int ButtonSelected);
	void SpawnGameSelectionMenu();
	void GameOver();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ResetGame();
	void ExecuteUbergraph_TN_GameSelector(int EntryPoint);
	void GeoChanged__DelegateSignature(const struct FName& NewGeo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
