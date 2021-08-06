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

// Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.RemoveGameElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALauncherBarrier_Blueprint_C::RemoveGameElement(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.RemoveGameElement");

	ALauncherBarrier_Blueprint_C_RemoveGameElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ALauncherBarrier_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.UserConstructionScript");

	ALauncherBarrier_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ALauncherBarrier_Blueprint_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.Timeline_0__FinishedFunc");

	ALauncherBarrier_Blueprint_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ALauncherBarrier_Blueprint_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.Timeline_0__UpdateFunc");

	ALauncherBarrier_Blueprint_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ALauncherBarrier_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.ReceiveBeginPlay");

	ALauncherBarrier_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.Grow
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ALauncherBarrier_Blueprint_C::Grow()
{
	static auto fn = UObject::FindObject<UFunction>("Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.Grow");

	ALauncherBarrier_Blueprint_C_Grow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.Shrink
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ALauncherBarrier_Blueprint_C::Shrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.Shrink");

	ALauncherBarrier_Blueprint_C_Shrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALauncherBarrier_Blueprint_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.ReceiveEndPlay");

	ALauncherBarrier_Blueprint_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.ExecuteUbergraph_LauncherBarrier_Blueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALauncherBarrier_Blueprint_C::ExecuteUbergraph_LauncherBarrier_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LauncherBarrier_Blueprint.LauncherBarrier_Blueprint_C.ExecuteUbergraph_LauncherBarrier_Blueprint");

	ALauncherBarrier_Blueprint_C_ExecuteUbergraph_LauncherBarrier_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
