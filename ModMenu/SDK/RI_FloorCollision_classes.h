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

// BlueprintGeneratedClass RI_FloorCollision.RI_FloorCollision_C
// 0x0040 (FullSize[0x0398] - InheritedSize[0x0358])
class ARI_FloorCollision_C : public AScramTarget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               FloorCollision;                                            // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ATball_Impact_BP_C*>                  Impacts;                                                   // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    BallLanded;                                                // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    BB_BallLanded;                                             // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RI_FloorCollision.RI_FloorCollision_C");
		return ptr;
	}



	void CreateBallMark(const struct FVector& Location);
	void RemoveMarks();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void TargetHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ReceiveDestroyed();
	void ExecuteUbergraph_RI_FloorCollision(int EntryPoint);
	void BB_BallLanded__DelegateSignature(class ABB_Ball_Base_C* Ball, const struct FVector& HitLocation);
	void BallLanded__DelegateSignature(const struct FVector& HitLocation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
