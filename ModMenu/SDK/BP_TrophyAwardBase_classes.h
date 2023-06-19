#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_TrophyAwardBase.BP_TrophyAwardBase_C
	 * Size -> 0x0031 (FullSize[0x0391] - InheritedSize[0x0360])
	 */
	class ABP_TrophyAwardBase_C : public ATrophyAwardListenerBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AScramTrophyManager_BP_C*                            TrophyManager;                                           // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScramSport                                                Sport;                                                   // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanOnlyObtainInChallenges;                               // 0x0379(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShowDebugMessages;                                       // 0x037A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I7OL[0x5];                                   // 0x037B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 TrophyRowEntry;                                          // 0x0380(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       CanObtainInChallenges;                                   // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void DebugMessage2(const class FString& Key, const class FString& Value);
		void NewFunction_1();
		void ModeCheck(bool* shldContinue);
		void CheckPlayer(int32_t PlayerIndex, bool* IsLocalPlayer);
		void IsMultiplayer(bool* isMulti);
		void ForceEarn(class AActor** WorldObject, class UScramEventTennisEventPayload** Payload);
		void DebugEarn();
		void DebugMessage(const class FString& Message);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_TrophyAwardBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
