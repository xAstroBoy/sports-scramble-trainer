﻿#pragma once

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

// WidgetBlueprintGeneratedClass OCDemo_HitMe_Widget.OCDemo_HitMe_Widget_C
// 0x0010 (FullSize[0x0220] - InheritedSize[0x0210])
class UOCDemo_HitMe_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0210(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  HitMeText;                                                 // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OCDemo_HitMe_Widget.OCDemo_HitMe_Widget_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_OCDemo_HitMe_Widget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif