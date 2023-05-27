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
	 * BlueprintGeneratedClass BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C
	 * Size -> 0x0018 (FullSize[0x03A9] - InheritedSize[0x0391])
	 */
	class ABP_TrophyAward_TennisBase_C : public ABP_TrophyAwardBase_C
	{
	public:
		unsigned char                                              UnknownData_2JNQ[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AScramSportManagerTennis_Blueprint_C*                TennisManager;                                           // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLocalPlayer;                                           // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnTennisEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void Initialize();
		void OnScorePoint();
		void OnMatchComplete(class AScramPlayer* Player);
		void OnAceEvent();
		void BallInPlay();
		void ExecuteUbergraph_BP_TrophyAward_TennisBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
