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

// BlueprintGeneratedClass BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C
// 0x0009 (FullSize[0x03E1] - InheritedSize[0x03D8])
class ABP_Trophy_BB_BaseBowling_C : public ABP_TrophyAward_BaseballBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               UsingBowlingBall;                                          // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C");
		return ptr;
	}



	void UserConstructionScript();
	void Strike(class AScramPlayer* Player, int PlayerId);
	void PitchEvent();
	void BadPitch();
	void SwingAndMiss(class AScramPlayer* Player);
	void OnHit();
	void ExecuteUbergraph_BP_Trophy_BB_BaseBowling(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
