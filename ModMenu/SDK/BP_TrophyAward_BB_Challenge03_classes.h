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

// BlueprintGeneratedClass BP_TrophyAward_BB_Challenge03.BP_TrophyAward_BB_Challenge03_C
// 0x0008 (FullSize[0x03E0] - InheritedSize[0x03D8])
class ABP_TrophyAward_BB_Challenge03_C : public ABP_TrophyAward_BaseballBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_BB_Challenge03.BP_TrophyAward_BB_Challenge03_C");
		return ptr;
	}



	void ResetProgress();
	void UserConstructionScript();
	void RunnerHome(class AScramPlayer* Player, int PlayerId);
	void HomeRun(class AScramPlayer* Player, int PlayerId);
	void ExecuteUbergraph_BP_TrophyAward_BB_Challenge03(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
