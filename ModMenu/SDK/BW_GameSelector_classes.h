#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BW_GameSelector.BW_GameSelector_C
	 * Size -> 0x0041 (FullSize[0x0369] - InheritedSize[0x0328])
	 */
	class ABW_GameSelector_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Root;                                                    // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FDebugButtonInfo>                            Buttons;                                                 // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference
		class ADebugButtonGroup_C*                                 MainMenu;                                                // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GameActive;                                              // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K9YZ[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADebugMainMenu_C*                                    DebugMainMenu;                                           // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowReset;                                              // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ResetRacket();
		void DestroyAllMenus();
		void VanishAllBalls();
		void Initialize();
		void DestroyGameManagers();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void GameSelected(int32_t ButtonSelected);
		void SpawnGameSelectionMenu();
		void GameOver();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ResetGame();
		void ExecuteUbergraph_BW_GameSelector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
