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

// BlueprintGeneratedClass BP_TrophyAward_BW_Limit.BP_TrophyAward_BW_Limit_C
// 0x000C (FullSize[0x03C4] - InheritedSize[0x03B8])
class ABP_TrophyAward_BW_Limit_C : public ABP_TrophyAward_BW_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                ScoreThreshold;                                            // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_BW_Limit.BP_TrophyAward_BW_Limit_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnGameEnd();
	void OnGutterBall(class ABowlingBall* Ball);
	void OnSpare(class ABowlingBall* Ball);
	void OnStrike(class ABowlingBall* Ball);
	void ExecuteUbergraph_BP_TrophyAward_BW_Limit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
