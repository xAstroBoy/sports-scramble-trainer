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
	 * 		Name   -> Function BP_TrophyR_Complete.BP_TrophyR_Complete_C.HideTrophyInfoDisplay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_TrophyR_Complete_C::HideTrophyInfoDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyR_Complete.BP_TrophyR_Complete_C.HideTrophyInfoDisplay");
		
		UBP_TrophyR_Complete_C_HideTrophyInfoDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyR_Complete.BP_TrophyR_Complete_C.ShowTrophyInfoDisplay
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TrophyNameText                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TrophyDescText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        DateEarned                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_TrophyR_Complete_C::ShowTrophyInfoDisplay(const class FName& TrophyNameText, const class FText& TrophyDescText, const class FText& DateEarned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyR_Complete.BP_TrophyR_Complete_C.ShowTrophyInfoDisplay");
		
		UBP_TrophyR_Complete_C_ShowTrophyInfoDisplay_Params params {};
		params.TrophyNameText = TrophyNameText;
		params.TrophyDescText = TrophyDescText;
		params.DateEarned = DateEarned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_TrophyR_Complete_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TrophyR_Complete_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_TrophyR_Complete.BP_TrophyR_Complete_C");
		return ptr;
	}

}


