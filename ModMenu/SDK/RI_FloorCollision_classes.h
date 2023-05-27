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
	 * BlueprintGeneratedClass RI_FloorCollision.RI_FloorCollision_C
	 * Size -> 0x0040 (FullSize[0x0398] - InheritedSize[0x0358])
	 */
	class ARI_FloorCollision_C : public AScramTarget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       FloorCollision;                                          // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class ATball_Impact_BP_C*>                          Impacts;                                                 // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class FScriptMulticastDelegate                             BallLanded;                                              // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BB_BallLanded;                                           // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void CreateBallMark(const struct FVector& Location);
		void RemoveMarks();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void TargetHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ReceiveDestroyed();
		void ExecuteUbergraph_RI_FloorCollision(int32_t EntryPoint);
		void BB_BallLanded__DelegateSignature(class ABB_Ball_Base_C* Ball, const struct FVector& HitLocation);
		void BallLanded__DelegateSignature(const struct FVector& HitLocation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
