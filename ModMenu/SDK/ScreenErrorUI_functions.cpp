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

// Function ScreenErrorUI.ScreenErrorUI_C.DestroyActor?
// (Public, BlueprintCallable, BlueprintEvent)
void AScreenErrorUI_C::DestroyActor_()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenErrorUI.ScreenErrorUI_C.DestroyActor?");

	AScreenErrorUI_C_DestroyActor__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScreenErrorUI.ScreenErrorUI_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AScreenErrorUI_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenErrorUI.ScreenErrorUI_C.Initialize");

	AScreenErrorUI_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScreenErrorUI.ScreenErrorUI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScreenErrorUI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenErrorUI.ScreenErrorUI_C.UserConstructionScript");

	AScreenErrorUI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScreenErrorUI.ScreenErrorUI_C.Timeline_Scale__FinishedFunc
// (BlueprintEvent)
void AScreenErrorUI_C::Timeline_Scale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenErrorUI.ScreenErrorUI_C.Timeline_Scale__FinishedFunc");

	AScreenErrorUI_C_Timeline_Scale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScreenErrorUI.ScreenErrorUI_C.Timeline_Scale__UpdateFunc
// (BlueprintEvent)
void AScreenErrorUI_C::Timeline_Scale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenErrorUI.ScreenErrorUI_C.Timeline_Scale__UpdateFunc");

	AScreenErrorUI_C_Timeline_Scale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScreenErrorUI.ScreenErrorUI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScreenErrorUI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenErrorUI.ScreenErrorUI_C.ReceiveBeginPlay");

	AScreenErrorUI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScreenErrorUI.ScreenErrorUI_C.ShowIcon
// (BlueprintCallable, BlueprintEvent)
void AScreenErrorUI_C::ShowIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenErrorUI.ScreenErrorUI_C.ShowIcon");

	AScreenErrorUI_C_ShowIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScreenErrorUI.ScreenErrorUI_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScreenErrorUI_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenErrorUI.ScreenErrorUI_C.ReceiveTick");

	AScreenErrorUI_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScreenErrorUI.ScreenErrorUI_C.FloaterLoop
// (BlueprintCallable, BlueprintEvent)
void AScreenErrorUI_C::FloaterLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenErrorUI.ScreenErrorUI_C.FloaterLoop");

	AScreenErrorUI_C_FloaterLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScreenErrorUI.ScreenErrorUI_C.ShowErrorMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   MessageText                    (BlueprintVisible, BlueprintReadOnly, Parm)
void AScreenErrorUI_C::ShowErrorMessage(const struct FText& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenErrorUI.ScreenErrorUI_C.ShowErrorMessage");

	AScreenErrorUI_C_ShowErrorMessage_Params params;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScreenErrorUI.ScreenErrorUI_C.HideMessage
// (BlueprintCallable, BlueprintEvent)
void AScreenErrorUI_C::HideMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenErrorUI.ScreenErrorUI_C.HideMessage");

	AScreenErrorUI_C_HideMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScreenErrorUI.ScreenErrorUI_C.ExecuteUbergraph_ScreenErrorUI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScreenErrorUI_C::ExecuteUbergraph_ScreenErrorUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenErrorUI.ScreenErrorUI_C.ExecuteUbergraph_ScreenErrorUI");

	AScreenErrorUI_C_ExecuteUbergraph_ScreenErrorUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
