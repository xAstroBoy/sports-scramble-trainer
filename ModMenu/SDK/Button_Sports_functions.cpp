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

// Function Button_Sports.Button_Sports_C.EnableButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AButton_Sports_C::EnableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Sports.Button_Sports_C.EnableButtons");

	AButton_Sports_C_EnableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Sports.Button_Sports_C.DisableButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AButton_Sports_C::DisableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Sports.Button_Sports_C.DisableButtons");

	AButton_Sports_C_DisableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Sports.Button_Sports_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AButton_Sports_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Sports.Button_Sports_C.Initialize");

	AButton_Sports_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Sports.Button_Sports_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AButton_Sports_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Sports.Button_Sports_C.UserConstructionScript");

	AButton_Sports_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Sports.Button_Sports_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AButton_Sports_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Sports.Button_Sports_C.ReceiveBeginPlay");

	AButton_Sports_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Sports.Button_Sports_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Sports_C::ButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Sports.Button_Sports_C.ButtonPressed");

	AButton_Sports_C_ButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Sports.Button_Sports_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Sports_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Sports.Button_Sports_C.ReceiveTick");

	AButton_Sports_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Sports.Button_Sports_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Sports_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Sports.Button_Sports_C.ReceiveEndPlay");

	AButton_Sports_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Sports.Button_Sports_C.ButtonSwapComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Sports_C::ButtonSwapComplete(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Sports.Button_Sports_C.ButtonSwapComplete");

	AButton_Sports_C_ButtonSwapComplete_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Sports.Button_Sports_C.ExecuteUbergraph_Button_Sports
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Sports_C::ExecuteUbergraph_Button_Sports(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Sports.Button_Sports_C.ExecuteUbergraph_Button_Sports");

	AButton_Sports_C_ExecuteUbergraph_Button_Sports_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Sports.Button_Sports_C.OptionChanging__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Sports_C::OptionChanging__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Sports.Button_Sports_C.OptionChanging__DelegateSignature");

	AButton_Sports_C_OptionChanging__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_Sports.Button_Sports_C.OptionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_Sports_C::OptionChanged__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Sports.Button_Sports_C.OptionChanged__DelegateSignature");

	AButton_Sports_C_OptionChanged__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
