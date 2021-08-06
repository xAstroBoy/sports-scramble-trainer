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

// Function TennisNet_BP.TennisNet_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATennisNet_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.UserConstructionScript");

	ATennisNet_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisNet_BP.TennisNet_BP_C.Timeline_HideNet__FinishedFunc
// (BlueprintEvent)
void ATennisNet_BP_C::Timeline_HideNet__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.Timeline_HideNet__FinishedFunc");

	ATennisNet_BP_C_Timeline_HideNet__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisNet_BP.TennisNet_BP_C.Timeline_HideNet__UpdateFunc
// (BlueprintEvent)
void ATennisNet_BP_C::Timeline_HideNet__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.Timeline_HideNet__UpdateFunc");

	ATennisNet_BP_C_Timeline_HideNet__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisNet_BP.TennisNet_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATennisNet_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.ReceiveBeginPlay");

	ATennisNet_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisNet_BP.TennisNet_BP_C.HideNet
// (BlueprintCallable, BlueprintEvent)
void ATennisNet_BP_C::HideNet()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.HideNet");

	ATennisNet_BP_C_HideNet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisNet_BP.TennisNet_BP_C.ShowNet
// (BlueprintCallable, BlueprintEvent)
void ATennisNet_BP_C::ShowNet()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.ShowNet");

	ATennisNet_BP_C_ShowNet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisNet_BP.TennisNet_BP_C.PlayNetMoveSFX 
// (BlueprintCallable, BlueprintEvent)
void ATennisNet_BP_C::PlayNetMoveSFX_()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.PlayNetMoveSFX ");

	ATennisNet_BP_C_PlayNetMoveSFX__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisNet_BP.TennisNet_BP_C.ExecuteUbergraph_TennisNet_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisNet_BP_C::ExecuteUbergraph_TennisNet_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.ExecuteUbergraph_TennisNet_BP");

	ATennisNet_BP_C_ExecuteUbergraph_TennisNet_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
