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

// BlueprintGeneratedClass BB_DeadEyeChallenge_Bonus.BB_DeadEyeChallenge_Bonus_C
// 0x0098 (FullSize[0x03C0] - InheritedSize[0x0328])
class ABB_DeadEyeChallenge_Bonus_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_ScaleScoreDown_Alpha_E7288B6B419CA82448B153BB84EB7066; // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_ScaleScoreDown__Direction_E7288B6B419CA82448B153BB84EB7066; // 0x0344(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AVX5[0x3];                                     // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_ScaleScoreDown;                                   // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_BonusScaleUp_Alpha_CE2370554070F2040759B9B0794885B2; // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_BonusScaleUp__Direction_CE2370554070F2040759B9B0794885B2; // 0x0354(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WCBQ[0x3];                                     // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_BonusScaleUp;                                     // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_RevealBonusScore_Alpha_CD7AA00D4F340734EEAE2FAFAFCAE92F; // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_RevealBonusScore__Direction_CD7AA00D4F340734EEAE2FAFAFCAE92F; // 0x0364(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0J1J[0x3];                                     // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_RevealBonusScore;                                 // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_BonusScaleDown_Alpha_6ECFFABF4FC762B368BA70BE0C871F0A; // 0x0370(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_BonusScaleDown__Direction_6ECFFABF4FC762B368BA70BE0C871F0A; // 0x0374(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2FFJ[0x3];                                     // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_BonusScaleDown;                                   // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_BonusUp_Alpha_CF7E0B1F40CBEBBB07A482A3090E493C;   // 0x0380(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_BonusUp__Direction_CF7E0B1F40CBEBBB07A482A3090E493C; // 0x0384(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QJDW[0x3];                                     // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_BonusUp;                                          // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBB_DeadeyeChallenge_BonusNotification_C*    BonusWidget;                                               // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  StringText;                                                // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    ScoreReveal;                                               // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    BonusMovedUp;                                              // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_DeadEyeChallenge_Bonus.BB_DeadEyeChallenge_Bonus_C");
		return ptr;
	}



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
	void ExecuteUbergraph_BB_DeadEyeChallenge_Bonus(int EntryPoint);
	void BonusMovedUp__DelegateSignature();
	void ScoreReveal__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
