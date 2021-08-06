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

// BlueprintGeneratedClass BB_FloorCollision.BB_FloorCollision_C
// 0x0030 (FullSize[0x03A0] - InheritedSize[0x0370])
class ABB_FloorCollision_C : public ABaseballField
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        FloorCollisionMesh;                                        // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    BallLanded;                                                // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    BB_BallLanded;                                             // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_FloorCollision.BB_FloorCollision_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void TargetHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ExecuteUbergraph_BB_FloorCollision(int EntryPoint);
	void BB_BallLanded__DelegateSignature(class ABB_Ball_Base_C* Ball, const struct FVector& HitLocation);
	void BallLanded__DelegateSignature(const struct FVector& HitLocation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
