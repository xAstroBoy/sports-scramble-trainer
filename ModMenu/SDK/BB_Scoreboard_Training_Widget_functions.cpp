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

// Function BB_Scoreboard_Training_Widget.BB_Scoreboard_Training_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBB_Scoreboard_Training_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Training_Widget.BB_Scoreboard_Training_Widget_C.Construct");

	UBB_Scoreboard_Training_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Training_Widget.BB_Scoreboard_Training_Widget_C.ExecuteUbergraph_BB_Scoreboard_Training_Widget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBB_Scoreboard_Training_Widget_C::ExecuteUbergraph_BB_Scoreboard_Training_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Training_Widget.BB_Scoreboard_Training_Widget_C.ExecuteUbergraph_BB_Scoreboard_Training_Widget");

	UBB_Scoreboard_Training_Widget_C_ExecuteUbergraph_BB_Scoreboard_Training_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
