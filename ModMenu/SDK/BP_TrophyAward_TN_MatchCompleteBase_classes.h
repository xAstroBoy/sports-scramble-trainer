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

// BlueprintGeneratedClass BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C
// 0x0011 (FullSize[0x03BA] - InheritedSize[0x03A9])
class ABP_TrophyAward_TN_MatchCompleteBase_C : public ABP_TrophyAward_TennisBase_C
{
public:
	unsigned char                                      UnknownData_MHF4[0x7];                                     // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CheckForMultiplayer;                                       // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AnyOutcome;                                                // 0x03B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C");
		return ptr;
	}



	void SystemsCheck(class UObject* WorldObject, class UScramEventBasePayload* Payload, bool* IsGood);
	void UserConstructionScript();
	void OnMatchComplete(class AScramPlayer* Player);
	void DebugEarn();
	void ExecuteUbergraph_BP_TrophyAward_TN_MatchCompleteBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
