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
	 * BlueprintGeneratedClass BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C
	 * Size -> 0x003C (FullSize[0x0364] - InheritedSize[0x0328])
	 */
	class ABW_Minigame_AiVsAI_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Root;                                                    // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      GameElements;                                            // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABowlingAlley_BP_C*>                          BowlingAlleys;                                           // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class AScramSportManagerBowling_Blueprint_C*               Manager;                                                 // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OldWorldToMetersScale;                                   // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddActorToGameElementList(class AActor* Actor, bool* Callback);
		void Shutdown(bool* ShutdownBegun);
		void SpawnGameElements();
		void Initialize();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void DelayDestroy();
		void GameOver();
		void ExecuteUbergraph_BW_Minigame_AiVsAI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
