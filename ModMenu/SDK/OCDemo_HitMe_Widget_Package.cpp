/**
 * Name: SportsScramble
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function OCDemo_HitMe_Widget.OCDemo_HitMe_Widget_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOCDemo_HitMe_Widget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OCDemo_HitMe_Widget.OCDemo_HitMe_Widget_C.PreConstruct");
		
		UOCDemo_HitMe_Widget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function OCDemo_HitMe_Widget.OCDemo_HitMe_Widget_C.ExecuteUbergraph_OCDemo_HitMe_Widget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOCDemo_HitMe_Widget_C::ExecuteUbergraph_OCDemo_HitMe_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OCDemo_HitMe_Widget.OCDemo_HitMe_Widget_C.ExecuteUbergraph_OCDemo_HitMe_Widget");
		
		UOCDemo_HitMe_Widget_C_ExecuteUbergraph_OCDemo_HitMe_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOCDemo_HitMe_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOCDemo_HitMe_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OCDemo_HitMe_Widget.OCDemo_HitMe_Widget_C");
		return ptr;
	}

}


