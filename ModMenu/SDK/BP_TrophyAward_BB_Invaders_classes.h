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

// BlueprintGeneratedClass BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C
// 0x0004 (FullSize[0x03BC] - InheritedSize[0x03B8])
class ABP_TrophyAward_BB_Invaders_C : public ABP_TrophyAward_BW_Base_C
{
public:
	int                                                AlienDestroyRequirement;                                   // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C");
		return ptr;
	}



	void SetRequirement(int alienCount);
	void AlienEliminated();
	void ResetCount();
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
