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

// BlueprintGeneratedClass BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C
// 0x0047 (FullSize[0x03D8] - InheritedSize[0x0391])
class ABP_TrophyAward_FinalChallengeBase_C : public ABP_TrophyAwardBase_C
{
public:
	unsigned char                                      UnknownData_S01D[0x7];                                     // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FName>                               ChallengeTrophyIDs;                                        // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                counter;                                                   // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JCRX[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PrependString;                                             // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     FirstID;                                                   // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C");
		return ptr;
	}



	void Restore();
	void IsNewCompletion(const struct FName& GameID, bool* IsValid);
	void GetCompletionCount(int* CompletedCount);
	void RefreshGameProgress();
	void OnChallengeCompleted(const struct FName& ChallengeID);
	void UpdateChallengeProgress();
	void UserConstructionScript();
	void DebugEarn();
	void OnTrophyEarned();
	void ReceiveBeginPlay();
	void Initialize();
	void ExecuteUbergraph_BP_TrophyAward_FinalChallengeBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
