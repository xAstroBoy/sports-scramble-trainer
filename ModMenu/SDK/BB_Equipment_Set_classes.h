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

// BlueprintGeneratedClass BB_Equipment_Set.BB_Equipment_Set_C
// 0x0041 (FullSize[0x0A51] - InheritedSize[0x0A10])
class ABB_Equipment_Set_C : public AScramEquipmentSet
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      AnimatedMesh;                                              // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            Widget;                                                    // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AScramStrikeZone*                            TargetZone;                                                // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BallTypeOverride;                                          // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    EquipmentGrabbed;                                          // 0x0A38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstance*                           OffhandMaterialOverride;                                   // 0x0A48(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               HomeTeam;                                                  // 0x0A50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_Equipment_Set.BB_Equipment_Set_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PostEquipmentSpawn(class AScramPrimitiveGrabbable* DominantHandSpawnedEquipment, class AScramPrimitiveGrabbable* OffHandSpawnedEquipment);
	void ExecuteUbergraph_BB_Equipment_Set(int EntryPoint);
	void EquipmentGrabbed__DelegateSignature(class AActor* DominantHand, class ABB_Mitt_C* Mitt);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
