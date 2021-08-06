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

// Function TennisArenaScoreboardWidget.TennisArenaScoreboardWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTennisArenaScoreboardWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboardWidget.TennisArenaScoreboardWidget_C.PreConstruct");

	UTennisArenaScoreboardWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboardWidget.TennisArenaScoreboardWidget_C.ExecuteUbergraph_TennisArenaScoreboardWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTennisArenaScoreboardWidget_C::ExecuteUbergraph_TennisArenaScoreboardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboardWidget.TennisArenaScoreboardWidget_C.ExecuteUbergraph_TennisArenaScoreboardWidget");

	UTennisArenaScoreboardWidget_C_ExecuteUbergraph_TennisArenaScoreboardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
