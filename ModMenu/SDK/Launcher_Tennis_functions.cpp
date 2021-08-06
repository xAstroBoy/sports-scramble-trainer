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

// Function Launcher_Tennis.Launcher_Tennis_C.RemoveGameElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALauncher_Tennis_C::RemoveGameElement(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Tennis.Launcher_Tennis_C.RemoveGameElement");

	ALauncher_Tennis_C_RemoveGameElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Launcher_Tennis.Launcher_Tennis_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ALauncher_Tennis_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Tennis.Launcher_Tennis_C.UserConstructionScript");

	ALauncher_Tennis_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Tennis.Launcher_Tennis_C.Timeline_ScaleUp__FinishedFunc
// (BlueprintEvent)
void ALauncher_Tennis_C::Timeline_ScaleUp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Tennis.Launcher_Tennis_C.Timeline_ScaleUp__FinishedFunc");

	ALauncher_Tennis_C_Timeline_ScaleUp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Tennis.Launcher_Tennis_C.Timeline_ScaleUp__UpdateFunc
// (BlueprintEvent)
void ALauncher_Tennis_C::Timeline_ScaleUp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Tennis.Launcher_Tennis_C.Timeline_ScaleUp__UpdateFunc");

	ALauncher_Tennis_C_Timeline_ScaleUp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Tennis.Launcher_Tennis_C.ScaleUp
// (BlueprintCallable, BlueprintEvent)
void ALauncher_Tennis_C::ScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Tennis.Launcher_Tennis_C.ScaleUp");

	ALauncher_Tennis_C_ScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Tennis.Launcher_Tennis_C.ScaleDown
// (BlueprintCallable, BlueprintEvent)
void ALauncher_Tennis_C::ScaleDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Tennis.Launcher_Tennis_C.ScaleDown");

	ALauncher_Tennis_C_ScaleDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Tennis.Launcher_Tennis_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ALauncher_Tennis_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Tennis.Launcher_Tennis_C.ReceiveBeginPlay");

	ALauncher_Tennis_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Tennis.Launcher_Tennis_C.ExecuteUbergraph_Launcher_Tennis
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALauncher_Tennis_C::ExecuteUbergraph_Launcher_Tennis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Tennis.Launcher_Tennis_C.ExecuteUbergraph_Launcher_Tennis");

	ALauncher_Tennis_C_ExecuteUbergraph_Launcher_Tennis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
