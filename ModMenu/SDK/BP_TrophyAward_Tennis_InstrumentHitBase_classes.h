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

// BlueprintGeneratedClass BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C
// 0x001F (FullSize[0x03B0] - InheritedSize[0x0391])
class ABP_TrophyAward_Tennis_InstrumentHitBase_C : public ABP_TrophyAwardBase_C
{
public:
	unsigned char                                      UnknownData_UIMG[0x7];                                     // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               TrackerInitialized;                                        // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AI3A[0x7];                                     // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AScramSportManagerTennis_Blueprint_C*        TennisManager;                                             // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C");
		return ptr;
	}



	void OnHit(class ATennisBall* TennisBall, class ATN_Instrument_Base_C* Instrument, SportsScramble_ETennisBallType BallType);
	void UserConstructionScript();
	void OnInstrumentHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void Initialize();
	void ExecuteUbergraph_BP_TrophyAward_Tennis_InstrumentHitBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
