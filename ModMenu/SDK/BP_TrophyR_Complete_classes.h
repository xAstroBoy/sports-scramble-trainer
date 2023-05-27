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
	 * WidgetBlueprintGeneratedClass BP_TrophyR_Complete.BP_TrophyR_Complete_C
	 * Size -> 0x0020 (FullSize[0x0230] - InheritedSize[0x0210])
	 */
	class UBP_TrophyR_Complete_C : public UUserWidget
	{
	public:
		class UTextBlock*                                          Description;                                             // 0x0210(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          EarnedDate;                                              // 0x0218(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_2;                                       // 0x0220(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Title;                                                   // 0x0228(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void HideTrophyInfoDisplay();
		void ShowTrophyInfoDisplay(const class FName& TrophyNameText, const class FText& TrophyDescText, const class FText& DateEarned);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
