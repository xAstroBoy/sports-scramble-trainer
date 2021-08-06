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

// BlueprintGeneratedClass BB_BatterToPitcherInfluencer_BP.BB_BatterToPitcherInfluencer_BP_C
// 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
class ABB_BatterToPitcherInfluencer_BP_C : public AScramSceneComponentActor
{
public:
	class UScramTrajectoryInfluencerBaseball*          ScramTrajectoryInfluencerBaseball;                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_BatterToPitcherInfluencer_BP.BB_BatterToPitcherInfluencer_BP_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
