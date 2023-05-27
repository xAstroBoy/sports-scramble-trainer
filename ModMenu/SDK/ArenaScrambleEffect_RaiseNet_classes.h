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
	 * BlueprintGeneratedClass ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C
	 * Size -> 0x0050 (FullSize[0x0378] - InheritedSize[0x0328])
	 */
	class AArenaScrambleEffect_RaiseNet_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_RaiseNet_Alpha_38FA3747460EE7CB9CF7FE91FDA69741; // 0x0338(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_RaiseNet__Direction_38FA3747460EE7CB9CF7FE91FDA69741; // 0x033C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TJ5V[0x3];                                   // 0x033D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_RaiseNet;                                       // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialTargetBottomMargin;                               // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialBufferBottomMargin;                               // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATennisNet_BP_C*                                     Net;                                                     // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            DisableLocations;                                        // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      Delay;                                                   // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector                                             InitialLocation;                                         // 0x036C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ArenaScrambleEnd(bool* Callback);
		void UserConstructionScript();
		void Timeline_RaiseNet__FinishedFunc();
		void Timeline_RaiseNet__UpdateFunc();
		void ReceiveBeginPlay();
		void StartArenaScramble();
		void EndArenaScramble();
		void RaiseNet();
		void ResetNetHeight();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_ArenaScrambleEffect_RaiseNet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
