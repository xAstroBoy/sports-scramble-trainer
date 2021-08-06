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

// Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.RemoveGameElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATennisScrambleIconNoLauncher_C::RemoveGameElement(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.RemoveGameElement");

	ATennisScrambleIconNoLauncher_C_RemoveGameElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ATennisScrambleIconNoLauncher_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.Initialize");

	ATennisScrambleIconNoLauncher_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATennisScrambleIconNoLauncher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.UserConstructionScript");

	ATennisScrambleIconNoLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.GrowShrinkIcon__FinishedFunc
// (BlueprintEvent)
void ATennisScrambleIconNoLauncher_C::GrowShrinkIcon__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.GrowShrinkIcon__FinishedFunc");

	ATennisScrambleIconNoLauncher_C_GrowShrinkIcon__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.GrowShrinkIcon__UpdateFunc
// (BlueprintEvent)
void ATennisScrambleIconNoLauncher_C::GrowShrinkIcon__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.GrowShrinkIcon__UpdateFunc");

	ATennisScrambleIconNoLauncher_C_GrowShrinkIcon__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATennisScrambleIconNoLauncher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.ReceiveBeginPlay");

	ATennisScrambleIconNoLauncher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.Grow
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ATennisScrambleIconNoLauncher_C::Grow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.Grow");

	ATennisScrambleIconNoLauncher_C_Grow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.Shrink
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ATennisScrambleIconNoLauncher_C::Shrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.Shrink");

	ATennisScrambleIconNoLauncher_C_Shrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.ExecuteUbergraph_TennisScrambleIconNoLauncher
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScrambleIconNoLauncher_C::ExecuteUbergraph_TennisScrambleIconNoLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleIconNoLauncher.TennisScrambleIconNoLauncher_C.ExecuteUbergraph_TennisScrambleIconNoLauncher");

	ATennisScrambleIconNoLauncher_C_ExecuteUbergraph_TennisScrambleIconNoLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
