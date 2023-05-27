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
	 * BlueprintGeneratedClass BB_Bomb.BB_Bomb_C
	 * Size -> 0x0028 (FullSize[0x1060] - InheritedSize[0x1038])
	 */
	class ABB_Bomb_C : public ABB_Ball_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1038(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_LoopingFuse;                                       // 0x1040(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Fuse_VFX;                                                // 0x1048(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      ExplosionVFXScale;                                       // 0x1050(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4IMT[0x4];                                   // 0x1054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ExplosionSFX;                                            // 0x1058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BombHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void BombGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ExecuteUbergraph_BB_Bomb(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
