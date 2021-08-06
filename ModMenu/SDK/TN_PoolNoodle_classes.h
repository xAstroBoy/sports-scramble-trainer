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

// BlueprintGeneratedClass TN_PoolNoodle.TN_PoolNoodle_C
// 0x0014 (FullSize[0x0FCC] - InheritedSize[0x0FB8])
class ATN_PoolNoodle_C : public ATN_Instrument_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0FB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0FC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              PhysicsBlendWeight;                                        // 0x0FC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_PoolNoodle.TN_PoolNoodle_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UpdateSkeleton();
	void ExecuteUbergraph_TN_PoolNoodle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
