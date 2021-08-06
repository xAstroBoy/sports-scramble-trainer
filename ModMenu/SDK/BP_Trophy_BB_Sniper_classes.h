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

// BlueprintGeneratedClass BP_Trophy_BB_Sniper.BP_Trophy_BB_Sniper_C
// 0x0008 (FullSize[0x03E0] - InheritedSize[0x03D8])
class ABP_Trophy_BB_Sniper_C : public ABP_TrophyAward_BaseballBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trophy_BB_Sniper.BP_Trophy_BB_Sniper_C");
		return ptr;
	}



	void UserConstructionScript();
	void TargetHit(class ABaseballPitchingTarget_BP_C* PitchingTarget);
	void ExecuteUbergraph_BP_Trophy_BB_Sniper(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
