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

// BlueprintGeneratedClass BP_Trophy_BB_RunRule.BP_Trophy_BB_RunRule_C
// 0x000C (FullSize[0x03E4] - InheritedSize[0x03D8])
class ABP_Trophy_BB_RunRule_C : public ABP_TrophyAward_BaseballBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                ScoreThreshold;                                            // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trophy_BB_RunRule.BP_Trophy_BB_RunRule_C");
		return ptr;
	}



	void UserConstructionScript();
	void RunnerHome(class AScramPlayer* Player, int PlayerId);
	void ExecuteUbergraph_BP_Trophy_BB_RunRule(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
