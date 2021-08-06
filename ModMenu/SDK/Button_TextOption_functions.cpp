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

// Function Button_TextOption.Button_TextOption_C.EnableButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AButton_TextOption_C::EnableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_TextOption.Button_TextOption_C.EnableButtons");

	AButton_TextOption_C_EnableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_TextOption.Button_TextOption_C.DisableButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AButton_TextOption_C::DisableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_TextOption.Button_TextOption_C.DisableButtons");

	AButton_TextOption_C_DisableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_TextOption.Button_TextOption_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AButton_TextOption_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_TextOption.Button_TextOption_C.Initialize");

	AButton_TextOption_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_TextOption.Button_TextOption_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AButton_TextOption_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_TextOption.Button_TextOption_C.UserConstructionScript");

	AButton_TextOption_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_TextOption.Button_TextOption_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AButton_TextOption_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_TextOption.Button_TextOption_C.ReceiveBeginPlay");

	AButton_TextOption_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_TextOption.Button_TextOption_C.PreviousButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_TextOption_C::PreviousButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_TextOption.Button_TextOption_C.PreviousButtonPressed");

	AButton_TextOption_C_PreviousButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_TextOption.Button_TextOption_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_TextOption_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_TextOption.Button_TextOption_C.ReceiveTick");

	AButton_TextOption_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_TextOption.Button_TextOption_C.NextButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_TextOption_C::NextButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_TextOption.Button_TextOption_C.NextButtonPressed");

	AButton_TextOption_C_NextButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_TextOption.Button_TextOption_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_TextOption_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_TextOption.Button_TextOption_C.ReceiveEndPlay");

	AButton_TextOption_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_TextOption.Button_TextOption_C.ExecuteUbergraph_Button_TextOption
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_TextOption_C::ExecuteUbergraph_Button_TextOption(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_TextOption.Button_TextOption_C.ExecuteUbergraph_Button_TextOption");

	AButton_TextOption_C_ExecuteUbergraph_Button_TextOption_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_TextOption.Button_TextOption_C.OptionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_TextOption_C::OptionChanged__DelegateSignature(int NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_TextOption.Button_TextOption_C.OptionChanged__DelegateSignature");

	AButton_TextOption_C_OptionChanged__DelegateSignature_Params params;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
