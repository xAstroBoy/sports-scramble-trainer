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

// Function MultiplayerMenu.MultiplayerMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMultiplayerMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.UserConstructionScript");

	AMultiplayerMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMultiplayerMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.ReceiveBeginPlay");

	AMultiplayerMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.SessionsFound
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         SessionsFound                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AMultiplayerMenu_C::SessionsFound(TArray<struct FString>* SessionsFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.SessionsFound");

	AMultiplayerMenu_C_SessionsFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SessionsFound != nullptr)
		*SessionsFound = params.SessionsFound;

}


// Function MultiplayerMenu.MultiplayerMenu_C.NoSessionsFound
// (BlueprintCallable, BlueprintEvent)
void AMultiplayerMenu_C::NoSessionsFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.NoSessionsFound");

	AMultiplayerMenu_C_NoSessionsFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.UnbindFromInstance
// (BlueprintCallable, BlueprintEvent)
void AMultiplayerMenu_C::UnbindFromInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.UnbindFromInstance");

	AMultiplayerMenu_C_UnbindFromInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.CreateButtons
// (BlueprintCallable, BlueprintEvent)
void AMultiplayerMenu_C::CreateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.CreateButtons");

	AMultiplayerMenu_C_CreateButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.ChoiceMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultiplayerMenu_C::ChoiceMade(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.ChoiceMade");

	AMultiplayerMenu_C_ChoiceMade_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.JoinFailed
// (BlueprintCallable, BlueprintEvent)
void AMultiplayerMenu_C::JoinFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.JoinFailed");

	AMultiplayerMenu_C_JoinFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.JoinSuccess
// (BlueprintCallable, BlueprintEvent)
void AMultiplayerMenu_C::JoinSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.JoinSuccess");

	AMultiplayerMenu_C_JoinSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.GameSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultiplayerMenu_C::GameSelected(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.GameSelected");

	AMultiplayerMenu_C_GameSelected_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.SpawnTypeSelectionMenu
// (BlueprintCallable, BlueprintEvent)
void AMultiplayerMenu_C::SpawnTypeSelectionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.SpawnTypeSelectionMenu");

	AMultiplayerMenu_C_SpawnTypeSelectionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.GetSessions
// (BlueprintCallable, BlueprintEvent)
void AMultiplayerMenu_C::GetSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.GetSessions");

	AMultiplayerMenu_C_GetSessions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.CreateSportButtons
// (BlueprintCallable, BlueprintEvent)
void AMultiplayerMenu_C::CreateSportButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.CreateSportButtons");

	AMultiplayerMenu_C_CreateSportButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.SportChosen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultiplayerMenu_C::SportChosen(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.SportChosen");

	AMultiplayerMenu_C_SportChosen_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultiplayerMenu_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.ReceiveTick");

	AMultiplayerMenu_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.AvatarDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultiplayerMenu_C::AvatarDone(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.AvatarDone");

	AMultiplayerMenu_C_AvatarDone_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.ExecuteUbergraph_MultiplayerMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultiplayerMenu_C::ExecuteUbergraph_MultiplayerMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.ExecuteUbergraph_MultiplayerMenu");

	AMultiplayerMenu_C_ExecuteUbergraph_MultiplayerMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiplayerMenu.MultiplayerMenu_C.BackButtonSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AMultiplayerMenu_C::BackButtonSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.BackButtonSelected__DelegateSignature");

	AMultiplayerMenu_C_BackButtonSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
