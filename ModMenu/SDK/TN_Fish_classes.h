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

// BlueprintGeneratedClass TN_Fish.TN_Fish_C
// 0x0018 (FullSize[0x1170] - InheritedSize[0x1158])
class ATN_Fish_C : public ATN_Ball_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1158(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      AnimationMesh;                                             // 0x1160(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRacketImpulse_1;                                        // 0x1168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinRacketImpulse_1;                                        // 0x116C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_Fish.TN_Fish_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetupSkeleton();
	void ExecuteUbergraph_TN_Fish(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
