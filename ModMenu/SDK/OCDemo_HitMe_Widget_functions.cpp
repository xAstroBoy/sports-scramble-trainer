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

// Function OCDemo_HitMe_Widget.OCDemo_HitMe_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOCDemo_HitMe_Widget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCDemo_HitMe_Widget.OCDemo_HitMe_Widget_C.PreConstruct");

	UOCDemo_HitMe_Widget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OCDemo_HitMe_Widget.OCDemo_HitMe_Widget_C.ExecuteUbergraph_OCDemo_HitMe_Widget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOCDemo_HitMe_Widget_C::ExecuteUbergraph_OCDemo_HitMe_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCDemo_HitMe_Widget.OCDemo_HitMe_Widget_C.ExecuteUbergraph_OCDemo_HitMe_Widget");

	UOCDemo_HitMe_Widget_C_ExecuteUbergraph_OCDemo_HitMe_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
