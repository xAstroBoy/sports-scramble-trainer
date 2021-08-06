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

// BlueprintGeneratedClass BP_TrophyAwardBase.BP_TrophyAwardBase_C
// 0x0031 (FullSize[0x0391] - InheritedSize[0x0360])
class ABP_TrophyAwardBase_C : public ATrophyAwardListenerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AScramTrophyManager_BP_C*                    TrophyManager;                                             // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EScramSport                         Sport;                                                     // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanOnlyObtainInChallenges;                                 // 0x0379(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowDebugMessages;                                         // 0x037A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IRBR[0x5];                                     // 0x037B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         TrophyRowEntry;                                            // 0x0380(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               CanObtainInChallenges;                                     // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAwardBase.BP_TrophyAwardBase_C");
		return ptr;
	}



	void DebugMessage2(const struct FString& Key, const struct FString& Value);
	void NewFunction_1();
	void ModeCheck(bool* shldContinue);
	void CheckPlayer(int PlayerIndex, bool* IsLocalPlayer);
	void IsMultiplayer(bool* isMulti);
	void ForceEarn(class AActor** WorldObject, class UScramEventTennisEventPayload** Payload);
	void DebugEarn();
	void DebugMessage(const struct FString& Message);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TrophyAwardBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
