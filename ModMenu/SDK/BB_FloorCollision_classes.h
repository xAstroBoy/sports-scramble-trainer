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
	 * BlueprintGeneratedClass BB_FloorCollision.BB_FloorCollision_C
	 * Size -> 0x0030 (FullSize[0x03A0] - InheritedSize[0x0370])
	 */
	class ABB_FloorCollision_C : public ABaseballField
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                FloorCollisionMesh;                                      // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BallLanded;                                              // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BB_BallLanded;                                           // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void TargetHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ExecuteUbergraph_BB_FloorCollision(int32_t EntryPoint);
		void BB_BallLanded__DelegateSignature(class ABB_Ball_Base_C* Ball, const struct FVector& HitLocation);
		void BallLanded__DelegateSignature(const struct FVector& HitLocation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
