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

// Function NoPause_BP.NoPause_BP_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ANoPause_BP_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function NoPause_BP.NoPause_BP_C.Initialize");

	ANoPause_BP_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NoPause_BP.NoPause_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ANoPause_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NoPause_BP.NoPause_BP_C.UserConstructionScript");

	ANoPause_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NoPause_BP.NoPause_BP_C.Timeline_Scale__FinishedFunc
// (BlueprintEvent)
void ANoPause_BP_C::Timeline_Scale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function NoPause_BP.NoPause_BP_C.Timeline_Scale__FinishedFunc");

	ANoPause_BP_C_Timeline_Scale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NoPause_BP.NoPause_BP_C.Timeline_Scale__UpdateFunc
// (BlueprintEvent)
void ANoPause_BP_C::Timeline_Scale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function NoPause_BP.NoPause_BP_C.Timeline_Scale__UpdateFunc");

	ANoPause_BP_C_Timeline_Scale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NoPause_BP.NoPause_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ANoPause_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NoPause_BP.NoPause_BP_C.ReceiveBeginPlay");

	ANoPause_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NoPause_BP.NoPause_BP_C.Refresh
// (BlueprintCallable, BlueprintEvent)
void ANoPause_BP_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function NoPause_BP.NoPause_BP_C.Refresh");

	ANoPause_BP_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NoPause_BP.NoPause_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANoPause_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NoPause_BP.NoPause_BP_C.ReceiveTick");

	ANoPause_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NoPause_BP.NoPause_BP_C.ExecuteUbergraph_NoPause_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANoPause_BP_C::ExecuteUbergraph_NoPause_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NoPause_BP.NoPause_BP_C.ExecuteUbergraph_NoPause_BP");

	ANoPause_BP_C_ExecuteUbergraph_NoPause_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
