// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_TrophyR_Complete.BP_TrophyR_Complete_C.HideTrophyInfoDisplay
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_TrophyR_Complete_C::HideTrophyInfoDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyR_Complete.BP_TrophyR_Complete_C.HideTrophyInfoDisplay");

	UBP_TrophyR_Complete_C_HideTrophyInfoDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyR_Complete.BP_TrophyR_Complete_C.ShowTrophyInfoDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TrophyNameText                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   TrophyDescText                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   DateEarned                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_TrophyR_Complete_C::ShowTrophyInfoDisplay(const struct FName& TrophyNameText, const struct FText& TrophyDescText, const struct FText& DateEarned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyR_Complete.BP_TrophyR_Complete_C.ShowTrophyInfoDisplay");

	UBP_TrophyR_Complete_C_ShowTrophyInfoDisplay_Params params;
	params.TrophyNameText = TrophyNameText;
	params.TrophyDescText = TrophyDescText;
	params.DateEarned = DateEarned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
