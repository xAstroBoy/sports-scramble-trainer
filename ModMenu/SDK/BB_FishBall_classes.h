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

// BlueprintGeneratedClass BB_FishBall.BB_FishBall_C
// 0x0010 (FullSize[0x1048] - InheritedSize[0x1038])
class ABB_FishBall_C : public ABB_Ball_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1038(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x1040(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_FishBall.BB_FishBall_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetupSkeleton();
	void ExecuteUbergraph_BB_FishBall(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
