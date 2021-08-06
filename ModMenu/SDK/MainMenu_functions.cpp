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

// Function MainMenu.MainMenu_C.SpawnButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FUI_ButtonData          ButtonDataStart                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FUI_ButtonData          ButtonDataToggled              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AButton_Standard_C*      Button                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenu_C::SpawnButton(const struct FTransform& SpawnTransform, const struct FUI_ButtonData& ButtonDataStart, const struct FUI_ButtonData& ButtonDataToggled, int ID, class AButton_Standard_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.SpawnButton");

	AMainMenu_C_SpawnButton_Params params;
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


// Function MainMenu.MainMenu_C.DestroyMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
void AMainMenu_C::DestroyMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.DestroyMainMenu");

	AMainMenu_C_DestroyMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu.MainMenu_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AMainMenu_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Initialize");

	AMainMenu_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu.MainMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMainMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.UserConstructionScript");

	AMainMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu.MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMainMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ReceiveBeginPlay");

	AMainMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu.MainMenu_C.SelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenu_C::SelectionMade(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.SelectionMade");

	AMainMenu_C_SelectionMade_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu.MainMenu_C.ButtonSwapped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenu_C::ButtonSwapped(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ButtonSwapped");

	AMainMenu_C_ButtonSwapped_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu.MainMenu_C.ButtonDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenu_C::ButtonDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ButtonDestroyed");

	AMainMenu_C_ButtonDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu.MainMenu_C.ButtonTouched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenu_C::ButtonTouched(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ButtonTouched");

	AMainMenu_C_ButtonTouched_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu.MainMenu_C.ButtonUntouched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenu_C::ButtonUntouched(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ButtonUntouched");

	AMainMenu_C_ButtonUntouched_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu.MainMenu_C.CreateMenu
// (BlueprintCallable, BlueprintEvent)
void AMainMenu_C::CreateMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.CreateMenu");

	AMainMenu_C_CreateMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenu_C::ExecuteUbergraph_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu");

	AMainMenu_C_ExecuteUbergraph_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu.MainMenu_C.MainMenuSelectionMade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<MainMenuChoices_EMainMenuChoices> Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenu_C::MainMenuSelectionMade__DelegateSignature(TEnumAsByte<MainMenuChoices_EMainMenuChoices> Choice)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MainMenuSelectionMade__DelegateSignature");

	AMainMenu_C_MainMenuSelectionMade__DelegateSignature_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu.MainMenu_C.TopMenuDeactivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AMainMenu_C::TopMenuDeactivated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.TopMenuDeactivated__DelegateSignature");

	AMainMenu_C_TopMenuDeactivated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu.MainMenu_C.TopMenuActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AMainMenu_C::TopMenuActivated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.TopMenuActivated__DelegateSignature");

	AMainMenu_C_TopMenuActivated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
