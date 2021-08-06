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

// BlueprintGeneratedClass BP_TrophyAward_MatchMaker.BP_TrophyAward_MatchMaker_C
// 0x0008 (FullSize[0x03B8] - InheritedSize[0x03B0])
class ABP_TrophyAward_MatchMaker_C : public ABP_TrophyAward_Tennis_InstrumentHitBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_MatchMaker.BP_TrophyAward_MatchMaker_C");
		return ptr;
	}



	void UserConstructionScript();
	void DebugEarn();
	void OnHit(class ATennisBall* TennisBall, class ATN_Instrument_Base_C* Instrument, SportsScramble_ETennisBallType BallType);
	void ExecuteUbergraph_BP_TrophyAward_MatchMaker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
