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
	 * WidgetBlueprintGeneratedClass OCDemo_HitMe_Widget.OCDemo_HitMe_Widget_C
	 * Size -> 0x0010 (FullSize[0x0220] - InheritedSize[0x0210])
	 */
	class UOCDemo_HitMe_Widget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0210(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          HitMeText;                                               // 0x0218(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_OCDemo_HitMe_Widget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
