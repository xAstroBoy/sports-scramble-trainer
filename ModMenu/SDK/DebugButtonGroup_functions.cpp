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

// Function DebugButtonGroup.DebugButtonGroup_C.DestroyButtons
// (Public, BlueprintCallable, BlueprintEvent)
void ADebugButtonGroup_C::DestroyButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugButtonGroup.DebugButtonGroup_C.DestroyButtons");

	ADebugButtonGroup_C_DestroyButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugButtonGroup.DebugButtonGroup_C.CreateButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ADebugButtonGroup_C::CreateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugButtonGroup.DebugButtonGroup_C.CreateButtons");

	ADebugButtonGroup_C_CreateButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugButtonGroup.DebugButtonGroup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ADebugButtonGroup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugButtonGroup.DebugButtonGroup_C.UserConstructionScript");

	ADebugButtonGroup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugButtonGroup.DebugButtonGroup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADebugButtonGroup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugButtonGroup.DebugButtonGroup_C.ReceiveBeginPlay");

	ADebugButtonGroup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugButtonGroup.DebugButtonGroup_C.Button Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugButtonGroup_C::Button_Pressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugButtonGroup.DebugButtonGroup_C.Button Pressed");

	ADebugButtonGroup_C_Button_Pressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugButtonGroup.DebugButtonGroup_C.ChoiceComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugButtonGroup_C::ChoiceComplete(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugButtonGroup.DebugButtonGroup_C.ChoiceComplete");

	ADebugButtonGroup_C_ChoiceComplete_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugButtonGroup.DebugButtonGroup_C.CloseSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugButtonGroup_C::CloseSelected(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugButtonGroup.DebugButtonGroup_C.CloseSelected");

	ADebugButtonGroup_C_CloseSelected_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugButtonGroup.DebugButtonGroup_C.DestroyButtonGroup
// (BlueprintCallable, BlueprintEvent)
void ADebugButtonGroup_C::DestroyButtonGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugButtonGroup.DebugButtonGroup_C.DestroyButtonGroup");

	ADebugButtonGroup_C_DestroyButtonGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugButtonGroup.DebugButtonGroup_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugButtonGroup_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugButtonGroup.DebugButtonGroup_C.ReceiveTick");

	ADebugButtonGroup_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugButtonGroup.DebugButtonGroup_C.ExecuteUbergraph_DebugButtonGroup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugButtonGroup_C::ExecuteUbergraph_DebugButtonGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugButtonGroup.DebugButtonGroup_C.ExecuteUbergraph_DebugButtonGroup");

	ADebugButtonGroup_C_ExecuteUbergraph_DebugButtonGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugButtonGroup.DebugButtonGroup_C.ChoiceMadePreAutoDestroy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugButtonGroup_C::ChoiceMadePreAutoDestroy__DelegateSignature(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugButtonGroup.DebugButtonGroup_C.ChoiceMadePreAutoDestroy__DelegateSignature");

	ADebugButtonGroup_C_ChoiceMadePreAutoDestroy__DelegateSignature_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DebugButtonGroup.DebugButtonGroup_C.ChoiceMade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugButtonGroup_C::ChoiceMade__DelegateSignature(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugButtonGroup.DebugButtonGroup_C.ChoiceMade__DelegateSignature");

	ADebugButtonGroup_C_ChoiceMade__DelegateSignature_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
