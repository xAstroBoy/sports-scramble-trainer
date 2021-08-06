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

// Function SwapIndicator_BP.SwapIndicator_BP_C.SetRiftMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASwapIndicator_BP_C::SetRiftMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwapIndicator_BP.SwapIndicator_BP_C.SetRiftMeshes");

	ASwapIndicator_BP_C_SetRiftMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SwapIndicator_BP.SwapIndicator_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASwapIndicator_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwapIndicator_BP.SwapIndicator_BP_C.UserConstructionScript");

	ASwapIndicator_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SwapIndicator_BP.SwapIndicator_BP_C.OnBeginSwap
// (Event, Protected, BlueprintEvent)
void ASwapIndicator_BP_C::OnBeginSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwapIndicator_BP.SwapIndicator_BP_C.OnBeginSwap");

	ASwapIndicator_BP_C_OnBeginSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SwapIndicator_BP.SwapIndicator_BP_C.OnConfirmSwap
// (Event, Protected, BlueprintEvent)
void ASwapIndicator_BP_C::OnConfirmSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwapIndicator_BP.SwapIndicator_BP_C.OnConfirmSwap");

	ASwapIndicator_BP_C_OnConfirmSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SwapIndicator_BP.SwapIndicator_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASwapIndicator_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwapIndicator_BP.SwapIndicator_BP_C.ReceiveBeginPlay");

	ASwapIndicator_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SwapIndicator_BP.SwapIndicator_BP_C.OnHandednessSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// SportsScramble_EScramHandedness Handedness                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASwapIndicator_BP_C::OnHandednessSet(SportsScramble_EScramHandedness Handedness)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwapIndicator_BP.SwapIndicator_BP_C.OnHandednessSet");

	ASwapIndicator_BP_C_OnHandednessSet_Params params;
	params.Handedness = Handedness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SwapIndicator_BP.SwapIndicator_BP_C.ExecuteUbergraph_SwapIndicator_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASwapIndicator_BP_C::ExecuteUbergraph_SwapIndicator_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwapIndicator_BP.SwapIndicator_BP_C.ExecuteUbergraph_SwapIndicator_BP");

	ASwapIndicator_BP_C_ExecuteUbergraph_SwapIndicator_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
