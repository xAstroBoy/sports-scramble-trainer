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

// Function Button_SideOption.Button_SideOption_C.EnableButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AButton_SideOption_C::EnableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_SideOption.Button_SideOption_C.EnableButtons");

	AButton_SideOption_C_EnableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_SideOption.Button_SideOption_C.DisableButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AButton_SideOption_C::DisableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_SideOption.Button_SideOption_C.DisableButtons");

	AButton_SideOption_C_DisableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_SideOption.Button_SideOption_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AButton_SideOption_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_SideOption.Button_SideOption_C.Initialize");

	AButton_SideOption_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_SideOption.Button_SideOption_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AButton_SideOption_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_SideOption.Button_SideOption_C.UserConstructionScript");

	AButton_SideOption_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_SideOption.Button_SideOption_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AButton_SideOption_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_SideOption.Button_SideOption_C.ReceiveBeginPlay");

	AButton_SideOption_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_SideOption.Button_SideOption_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_SideOption_C::ButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_SideOption.Button_SideOption_C.ButtonPressed");

	AButton_SideOption_C_ButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_SideOption.Button_SideOption_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_SideOption_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_SideOption.Button_SideOption_C.ReceiveTick");

	AButton_SideOption_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_SideOption.Button_SideOption_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_SideOption_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_SideOption.Button_SideOption_C.ReceiveEndPlay");

	AButton_SideOption_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_SideOption.Button_SideOption_C.ButtonSwapComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_SideOption_C::ButtonSwapComplete(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_SideOption.Button_SideOption_C.ButtonSwapComplete");

	AButton_SideOption_C_ButtonSwapComplete_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_SideOption.Button_SideOption_C.ExecuteUbergraph_Button_SideOption
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_SideOption_C::ExecuteUbergraph_Button_SideOption(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_SideOption.Button_SideOption_C.ExecuteUbergraph_Button_SideOption");

	AButton_SideOption_C_ExecuteUbergraph_Button_SideOption_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_SideOption.Button_SideOption_C.OptionChanging__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_SideOption_C::OptionChanging__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_SideOption.Button_SideOption_C.OptionChanging__DelegateSignature");

	AButton_SideOption_C_OptionChanging__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_SideOption.Button_SideOption_C.OptionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_SideOption_C::OptionChanged__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_SideOption.Button_SideOption_C.OptionChanged__DelegateSignature");

	AButton_SideOption_C_OptionChanged__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
