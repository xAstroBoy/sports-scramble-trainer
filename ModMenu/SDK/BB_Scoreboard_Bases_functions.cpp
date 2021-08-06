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

// Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.SetNoGameActive
// (BlueprintCallable, BlueprintEvent)
void UBB_Scoreboard_Bases_C::SetNoGameActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.SetNoGameActive");

	UBB_Scoreboard_Bases_C_SetNoGameActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.NewInning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Inning                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Top                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_Bases_C::NewInning(int Inning, bool Top)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.NewInning");

	UBB_Scoreboard_Bases_C_NewInning_Params params;
	params.Inning = Inning;
	params.Top = Top;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.UpdateBaserunners
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RunnerOn1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           RunnderOn2                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           RunnderOn3                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBB_Scoreboard_Bases_C::UpdateBaserunners(bool RunnerOn1, bool RunnderOn2, bool RunnderOn3)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.UpdateBaserunners");

	UBB_Scoreboard_Bases_C_UpdateBaserunners_Params params;
	params.RunnerOn1 = RunnerOn1;
	params.RunnderOn2 = RunnderOn2;
	params.RunnderOn3 = RunnderOn3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.ExecuteUbergraph_BB_Scoreboard_Bases
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBB_Scoreboard_Bases_C::ExecuteUbergraph_BB_Scoreboard_Bases(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.ExecuteUbergraph_BB_Scoreboard_Bases");

	UBB_Scoreboard_Bases_C_ExecuteUbergraph_BB_Scoreboard_Bases_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
