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

// Function DemoMainMenu.DemoMainMenu_C.ShowMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ADemoMainMenu_C::ShowMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.ShowMenu");

	ADemoMainMenu_C_ShowMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.HideMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ADemoMainMenu_C::HideMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.HideMenu");

	ADemoMainMenu_C_HideMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.BindPause
// (Public, BlueprintCallable, BlueprintEvent)
void ADemoMainMenu_C::BindPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.BindPause");

	ADemoMainMenu_C_BindPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.RemoveButtons
// (Public, BlueprintCallable, BlueprintEvent)
void ADemoMainMenu_C::RemoveButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.RemoveButtons");

	ADemoMainMenu_C_RemoveButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.DisableButtonInput
// (Public, BlueprintCallable, BlueprintEvent)
void ADemoMainMenu_C::DisableButtonInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.DisableButtonInput");

	ADemoMainMenu_C_DisableButtonInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.SpawnButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FUI_ButtonData          ButtonDataStart                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FUI_ButtonData          ButtonDataToggled              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AButton_Standard_C*      Button                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADemoMainMenu_C::SpawnButton(const struct FTransform& SpawnTransform, const struct FUI_ButtonData& ButtonDataStart, const struct FUI_ButtonData& ButtonDataToggled, int ID, class AButton_Standard_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.SpawnButton");

	ADemoMainMenu_C_SpawnButton_Params params;
	params.SpawnTransform = SpawnTransform;
	params.ButtonDataStart = ButtonDataStart;
	params.ButtonDataToggled = ButtonDataToggled;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;

}


// Function DemoMainMenu.DemoMainMenu_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ADemoMainMenu_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.Initialize");

	ADemoMainMenu_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ADemoMainMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.UserConstructionScript");

	ADemoMainMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADemoMainMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.ReceiveBeginPlay");

	ADemoMainMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.SelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADemoMainMenu_C::SelectionMade(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.SelectionMade");

	ADemoMainMenu_C_SelectionMade_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
void ADemoMainMenu_C::CloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.CloseMenu");

	ADemoMainMenu_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADemoMainMenu_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.ReceiveTick");

	ADemoMainMenu_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.ButtonSwapped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADemoMainMenu_C::ButtonSwapped(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.ButtonSwapped");

	ADemoMainMenu_C_ButtonSwapped_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.OpenMenu
// (BlueprintCallable, BlueprintEvent)
void ADemoMainMenu_C::OpenMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.OpenMenu");

	ADemoMainMenu_C_OpenMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.ButtonDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADemoMainMenu_C::ButtonDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.ButtonDestroyed");

	ADemoMainMenu_C_ButtonDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.GamePaused
// (BlueprintCallable, BlueprintEvent)
void ADemoMainMenu_C::GamePaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.GamePaused");

	ADemoMainMenu_C_GamePaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.GameUnpaused
// (BlueprintCallable, BlueprintEvent)
void ADemoMainMenu_C::GameUnpaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.GameUnpaused");

	ADemoMainMenu_C_GameUnpaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.ExecuteUbergraph_DemoMainMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADemoMainMenu_C::ExecuteUbergraph_DemoMainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.ExecuteUbergraph_DemoMainMenu");

	ADemoMainMenu_C_ExecuteUbergraph_DemoMainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DemoMainMenu.DemoMainMenu_C.ChoiceMade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADemoMainMenu_C::ChoiceMade__DelegateSignature(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.ChoiceMade__DelegateSignature");

	ADemoMainMenu_C_ChoiceMade__DelegateSignature_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
