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

// WidgetBlueprintGeneratedClass BB_Scoreboard_JustTimer_Widget.BB_Scoreboard_JustTimer_Widget_C
// 0x0018 (FullSize[0x0228] - InheritedSize[0x0210])
class UBB_Scoreboard_JustTimer_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0210(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                                    Parent;                                                    // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  StandAloneTimer;                                           // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BB_Scoreboard_JustTimer_Widget.BB_Scoreboard_JustTimer_Widget_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_BB_Scoreboard_JustTimer_Widget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
