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
	 * BlueprintGeneratedClass ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C
	 * Size -> 0x0030 (FullSize[0x0490] - InheritedSize[0x0460])
	 */
	class AScramTrophyRoomTrophy_C : public AScramTrophy
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AInfoDisplay_C*                                      DisplayActor;                                            // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  BronzeMaterial;                                          // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  SilverMaterial;                                          // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  GoldMaterial;                                            // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  DisabledMaterial;                                        // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckTrophyCompletion();
		void Initialize();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnPlayerLookAtTrophy();
		void OnPlayerStopLookAtTrophy();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_ScramTrophyRoomTrophy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
