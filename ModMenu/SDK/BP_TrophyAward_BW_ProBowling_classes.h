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

// BlueprintGeneratedClass BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C
// 0x0008 (FullSize[0x03C0] - InheritedSize[0x03B8])
class ABP_TrophyAward_BW_ProBowling_C : public ABP_TrophyAward_BW_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnGameEnd();
	void ExecuteUbergraph_BP_TrophyAward_BW_ProBowling(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
