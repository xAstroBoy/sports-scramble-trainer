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

// BlueprintGeneratedClass TN_NetMatchScoreboard.TN_NetMatchScoreboard_C
// 0x00C2 (FullSize[0x03EA] - InheritedSize[0x0328])
class ATN_NetMatchScoreboard_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             VFXLocP2;                                                  // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFXLocP1;                                                  // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            ScoreboardFront;                                           // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              ShowHideDebug_Alpha_93F39B684A627519F312A5849030BAD0;      // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ShowHideDebug__Direction_93F39B684A627519F312A5849030BAD0; // 0x0354(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DA11[0x3];                                     // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ShowHideDebug;                                             // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_Reveal_Text_Alpha_BFFC22FA46A0B1D86DED8EBB5F39C146; // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_Reveal_Text__Direction_BFFC22FA46A0B1D86DED8EBB5F39C146; // 0x0364(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VNAY[0x3];                                     // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_Reveal_Text;                                      // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_Reveal_Scores_Alpha_3D49AB7849F301B683CB82AA523A478A; // 0x0370(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_Reveal_Scores__Direction_3D49AB7849F301B683CB82AA523A478A; // 0x0374(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X032[0x3];                                     // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_Reveal_Scores;                                    // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_Pop_Scale_4504670641E94856768916A82DFE50E7;       // 0x0380(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_Pop__Direction_4504670641E94856768916A82DFE50E7;  // 0x0384(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5M1T[0x3];                                     // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_Pop;                                              // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTN_NetMatchScoreboard_Widget_C*             ScoreboardWidget;                                          // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSpectator;                                               // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TraditionalScoring;                                        // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               ShowAdvantage;                                             // 0x039A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GEB7[0x5];                                     // 0x039B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       AdText;                                                    // 0x03A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       NewTopText;                                                // 0x03B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       NewBottomText;                                             // 0x03D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SwappingText;                                              // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Open;                                                      // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_NetMatchScoreboard.TN_NetMatchScoreboard_C");
		return ptr;
	}



	void UpdateNewText();
	void UpdateRuleType(bool TraditionalScoring);
	void Initialize();
	void UserConstructionScript();
	void Timeline_Pop__FinishedFunc();
	void Timeline_Pop__UpdateFunc();
	void Timeline_Reveal_Scores__FinishedFunc();
	void Timeline_Reveal_Scores__UpdateFunc();
	void Timeline_Reveal_Text__FinishedFunc();
	void Timeline_Reveal_Text__UpdateFunc();
	void ShowHideDebug__FinishedFunc();
	void ShowHideDebug__UpdateFunc();
	void ReceiveBeginPlay();
	void UpdateScore(int Player1, int Player2);
	void DisplayScoreboard(const struct FText& TextMajor, const struct FText& TextMinor, bool UpdateScoreOnDelay, float Delay, int NewScoreP1, int NewScoreP2);
	void HideScoreBoard();
	void SetScoreToZero();
	void UpdateText(const struct FText& TopText, const struct FText& BottomText);
	void SpawnScoreVFX(bool P1);
	void DisplayDebugText(const struct FText& DebugText);
	void HideNormalTennisScoring();
	void ShowScores();
	void HideScores();
	void ShowText();
	void HideText();
	void RevealDebugText();
	void HideDebugText();
	void ExecuteUbergraph_TN_NetMatchScoreboard(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
