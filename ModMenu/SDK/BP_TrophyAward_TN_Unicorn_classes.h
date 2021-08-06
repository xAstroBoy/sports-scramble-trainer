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

// BlueprintGeneratedClass BP_TrophyAward_TN_Unicorn.BP_TrophyAward_TN_Unicorn_C
// 0x0010 (FullSize[0x03C0] - InheritedSize[0x03B0])
class ABP_TrophyAward_TN_Unicorn_C : public ABP_TrophyAward_Tennis_InstrumentHitBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              VelocityThreshold;                                         // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PitchThreshold;                                            // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_TN_Unicorn.BP_TrophyAward_TN_Unicorn_C");
		return ptr;
	}



	void UserConstructionScript();
	void DebugEarn();
	void OnHit(class ATennisBall* TennisBall, class ATN_Instrument_Base_C* Instrument, SportsScramble_ETennisBallType BallType);
	void ExecuteUbergraph_BP_TrophyAward_TN_Unicorn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
