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

// BlueprintGeneratedClass SwapIndicator_BP.SwapIndicator_BP_C
// 0x0010 (FullSize[0x05E0] - InheritedSize[0x05D0])
class ASwapIndicator_BP_C : public ASwapIndicator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    BB_Controller_Rings_par;                                   // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SwapIndicator_BP.SwapIndicator_BP_C");
		return ptr;
	}



	void SetRiftMeshes();
	void UserConstructionScript();
	void OnBeginSwap();
	void OnConfirmSwap();
	void ReceiveBeginPlay();
	void OnHandednessSet(SportsScramble_EScramHandedness Handedness);
	void ExecuteUbergraph_SwapIndicator_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
