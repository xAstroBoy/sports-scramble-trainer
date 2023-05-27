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
	 * BlueprintGeneratedClass BB_DeadEyeChallenge_Bonus.BB_DeadEyeChallenge_Bonus_C
	 * Size -> 0x0098 (FullSize[0x03C0] - InheritedSize[0x0328])
	 */
	class ABB_DeadEyeChallenge_Bonus_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    Widget;                                                  // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_ScaleScoreDown_Alpha_E7288B6B419CA82448B153BB84EB7066; // 0x0340(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_ScaleScoreDown__Direction_E7288B6B419CA82448B153BB84EB7066; // 0x0344(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QQRB[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_ScaleScoreDown;                                 // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_BonusScaleUp_Alpha_CE2370554070F2040759B9B0794885B2; // 0x0350(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_BonusScaleUp__Direction_CE2370554070F2040759B9B0794885B2; // 0x0354(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YQMU[0x3];                                   // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_BonusScaleUp;                                   // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_RevealBonusScore_Alpha_CD7AA00D4F340734EEAE2FAFAFCAE92F; // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_RevealBonusScore__Direction_CD7AA00D4F340734EEAE2FAFAFCAE92F; // 0x0364(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HH3E[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_RevealBonusScore;                               // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_BonusScaleDown_Alpha_6ECFFABF4FC762B368BA70BE0C871F0A; // 0x0370(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_BonusScaleDown__Direction_6ECFFABF4FC762B368BA70BE0C871F0A; // 0x0374(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HSIJ[0x3];                                   // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_BonusScaleDown;                                 // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_BonusUp_Alpha_CF7E0B1F40CBEBBB07A482A3090E493C; // 0x0380(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_BonusUp__Direction_CF7E0B1F40CBEBBB07A482A3090E493C; // 0x0384(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GEI6[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_BonusUp;                                        // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBB_DeadeyeChallenge_BonusNotification_C*            BonusWidget;                                             // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          StringText;                                              // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ScoreReveal;                                             // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BonusMovedUp;                                            // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void Initialize();
		void UserConstructionScript();
		void Timeline_BonusUp__FinishedFunc();
		void Timeline_BonusUp__UpdateFunc();
		void Timeline_BonusScaleDown__FinishedFunc();
		void Timeline_BonusScaleDown__UpdateFunc();
		void Timeline_RevealBonusScore__FinishedFunc();
		void Timeline_RevealBonusScore__UpdateFunc();
		void Timeline_BonusScaleUp__FinishedFunc();
		void Timeline_BonusScaleUp__UpdateFunc();
		void Timeline_ScaleScoreDown__FinishedFunc();
		void Timeline_ScaleScoreDown__UpdateFunc();
		void ReceiveBeginPlay();
		void BonusMoveUp();
		void BonusScaleDown();
		void InitialRevealOfBonus();
		void ScaleScoreDown();
		void ExecuteUbergraph_BB_DeadEyeChallenge_Bonus(int32_t EntryPoint);
		void BonusMovedUp__DelegateSignature();
		void ScoreReveal__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
