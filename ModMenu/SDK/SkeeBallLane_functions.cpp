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

// Function SkeeBallLane.SkeeBallLane_C.CallClearPatternAndResolve
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PatternCleared                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USkeeBallLane_C::CallClearPatternAndResolve(bool* PatternCleared)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkeeBallLane.SkeeBallLane_C.CallClearPatternAndResolve");

	USkeeBallLane_C_CallClearPatternAndResolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PatternCleared != nullptr)
		*PatternCleared = params.PatternCleared;

}


// Function SkeeBallLane.SkeeBallLane_C.UpdateGoodHoleCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewGoodHoleCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HoleCountUpdated               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USkeeBallLane_C::UpdateGoodHoleCount(int NewGoodHoleCount, bool* HoleCountUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkeeBallLane.SkeeBallLane_C.UpdateGoodHoleCount");

	USkeeBallLane_C_UpdateGoodHoleCount_Params params;
	params.NewGoodHoleCount = NewGoodHoleCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoleCountUpdated != nullptr)
		*HoleCountUpdated = params.HoleCountUpdated;

}


// Function SkeeBallLane.SkeeBallLane_C.ShowScoreboard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ScoreboardRaised               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USkeeBallLane_C::ShowScoreboard(bool* ScoreboardRaised)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkeeBallLane.SkeeBallLane_C.ShowScoreboard");

	USkeeBallLane_C_ShowScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreboardRaised != nullptr)
		*ScoreboardRaised = params.ScoreboardRaised;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
