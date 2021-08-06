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

// BlueprintGeneratedClass BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C
// 0x000F (FullSize[0x03C9] - InheritedSize[0x03BA])
class ABP_TrophyAward_TN_FullService_C : public ABP_TrophyAward_TN_MatchCompleteBase_C
{
public:
	unsigned char                                      UnknownData_4GFJ[0x6];                                     // 0x03BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               UsingTraditionalServing;                                   // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C");
		return ptr;
	}



	void GetService(SportsScramble_ETennisServiceStyle* ServiceStyle);
	void UserConstructionScript();
	void DebugEarn();
	void OnScorePoint();
	void ReceiveBeginPlay();
	void OnMatchComplete(class AScramPlayer* Player);
	void BallInPlay();
	void ExecuteUbergraph_BP_TrophyAward_TN_FullService(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
