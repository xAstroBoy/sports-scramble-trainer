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
	 * BlueprintGeneratedClass TN_Minigame_AiTest.TN_Minigame_AiTest_C
	 * Size -> 0x0048 (FullSize[0x0370] - InheritedSize[0x0328])
	 */
	class ATN_Minigame_AiTest_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      Scoreboards;                                             // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      GameElements;                                            // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class ATN_GameSelector_C*                                  GameSelector;                                            // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AScramSportManagerTennis_Blueprint_C*                Manager;                                                 // 0x0360(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddActorToGameElementList(class AActor* Actor, bool* Callback);
		void Shutdown(bool* ShutdownBegun);
		void BindToManager();
		void OnRep_Manager();
		void SpawnGameElements();
		void Initialize();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void DelayDestroy();
		void MatchComplete(EGameResult Result);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_TN_Minigame_AiTest(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
