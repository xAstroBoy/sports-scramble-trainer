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

// BlueprintGeneratedClass BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C
// 0x000C (FullSize[0x03C0] - InheritedSize[0x03B4])
class ABP_Trophy_BB_Candyman_C : public ABP_TrophyAward_Baseball_InstrumentHitBase_C
{
public:
	unsigned char                                      UnknownData_J7KG[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnHit(class ABaseballBall* Baseball, class ABB_Instrument_Base_C* Instrument, SportsScramble_EBaseballBallType BallType);
	void DebugEarn();
	void ExecuteUbergraph_BP_Trophy_BB_Candyman(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
