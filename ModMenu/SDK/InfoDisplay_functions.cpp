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

// Function InfoDisplay.InfoDisplay_C.RemoveFireAndForgetActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInfoDisplay_C::RemoveFireAndForgetActor(bool Instant, bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.RemoveFireAndForgetActor");

	AInfoDisplay_C_RemoveFireAndForgetActor_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function InfoDisplay.InfoDisplay_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AInfoDisplay_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.Initialize");

	AInfoDisplay_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoDisplay.InfoDisplay_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AInfoDisplay_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.UserConstructionScript");

	AInfoDisplay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoDisplay.InfoDisplay_C.Timeline_ScaleUp__FinishedFunc
// (BlueprintEvent)
void AInfoDisplay_C::Timeline_ScaleUp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.Timeline_ScaleUp__FinishedFunc");

	AInfoDisplay_C_Timeline_ScaleUp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoDisplay.InfoDisplay_C.Timeline_ScaleUp__UpdateFunc
// (BlueprintEvent)
void AInfoDisplay_C::Timeline_ScaleUp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.Timeline_ScaleUp__UpdateFunc");

	AInfoDisplay_C_Timeline_ScaleUp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoDisplay.InfoDisplay_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInfoDisplay_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.ReceiveBeginPlay");

	AInfoDisplay_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoDisplay.InfoDisplay_C.ScaleUp
// (BlueprintCallable, BlueprintEvent)
void AInfoDisplay_C::ScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.ScaleUp");

	AInfoDisplay_C_ScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoDisplay.InfoDisplay_C.ScaleDown
// (BlueprintCallable, BlueprintEvent)
void AInfoDisplay_C::ScaleDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.ScaleDown");

	AInfoDisplay_C_ScaleDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoDisplay.InfoDisplay_C.UpdateText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   DisplayText                    (BlueprintVisible, BlueprintReadOnly, Parm)
void AInfoDisplay_C::UpdateText(float DisplayTime, const struct FText& DisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.UpdateText");

	AInfoDisplay_C_UpdateText_Params params;
	params.DisplayTime = DisplayTime;
	params.DisplayText = DisplayText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoDisplay.InfoDisplay_C.ResetDisplayTime
// (BlueprintCallable, BlueprintEvent)
void AInfoDisplay_C::ResetDisplayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.ResetDisplayTime");

	AInfoDisplay_C_ResetDisplayTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoDisplay.InfoDisplay_C.ExecuteUbergraph_InfoDisplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInfoDisplay_C::ExecuteUbergraph_InfoDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.ExecuteUbergraph_InfoDisplay");

	AInfoDisplay_C_ExecuteUbergraph_InfoDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoDisplay.InfoDisplay_C.CountdownComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AInfoDisplay_C::CountdownComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.CountdownComplete__DelegateSignature");

	AInfoDisplay_C_CountdownComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
