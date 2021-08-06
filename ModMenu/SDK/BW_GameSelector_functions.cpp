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

// Function BW_GameSelector.BW_GameSelector_C.ResetRacket
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_GameSelector_C::ResetRacket()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_GameSelector.BW_GameSelector_C.ResetRacket");

	ABW_GameSelector_C_ResetRacket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_GameSelector.BW_GameSelector_C.DestroyAllMenus
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_GameSelector_C::DestroyAllMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_GameSelector.BW_GameSelector_C.DestroyAllMenus");

	ABW_GameSelector_C_DestroyAllMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_GameSelector.BW_GameSelector_C.VanishAllBalls
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_GameSelector_C::VanishAllBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_GameSelector.BW_GameSelector_C.VanishAllBalls");

	ABW_GameSelector_C_VanishAllBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_GameSelector.BW_GameSelector_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABW_GameSelector_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_GameSelector.BW_GameSelector_C.Initialize");

	ABW_GameSelector_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_GameSelector.BW_GameSelector_C.DestroyGameManagers
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_GameSelector_C::DestroyGameManagers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_GameSelector.BW_GameSelector_C.DestroyGameManagers");

	ABW_GameSelector_C_DestroyGameManagers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_GameSelector.BW_GameSelector_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_GameSelector_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_GameSelector.BW_GameSelector_C.UserConstructionScript");

	ABW_GameSelector_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_GameSelector.BW_GameSelector_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_GameSelector_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_GameSelector.BW_GameSelector_C.ReceiveBeginPlay");

	ABW_GameSelector_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_GameSelector.BW_GameSelector_C.GameSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_GameSelector_C::GameSelected(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_GameSelector.BW_GameSelector_C.GameSelected");

	ABW_GameSelector_C_GameSelected_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_GameSelector.BW_GameSelector_C.SpawnGameSelectionMenu
// (BlueprintCallable, BlueprintEvent)
void ABW_GameSelector_C::SpawnGameSelectionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_GameSelector.BW_GameSelector_C.SpawnGameSelectionMenu");

	ABW_GameSelector_C_SpawnGameSelectionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_GameSelector.BW_GameSelector_C.GameOver
// (BlueprintCallable, BlueprintEvent)
void ABW_GameSelector_C::GameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_GameSelector.BW_GameSelector_C.GameOver");

	ABW_GameSelector_C_GameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_GameSelector.BW_GameSelector_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_GameSelector_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_GameSelector.BW_GameSelector_C.ReceiveEndPlay");

	ABW_GameSelector_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_GameSelector.BW_GameSelector_C.ResetGame
// (BlueprintCallable, BlueprintEvent)
void ABW_GameSelector_C::ResetGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_GameSelector.BW_GameSelector_C.ResetGame");

	ABW_GameSelector_C_ResetGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_GameSelector.BW_GameSelector_C.ExecuteUbergraph_BW_GameSelector
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_GameSelector_C::ExecuteUbergraph_BW_GameSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_GameSelector.BW_GameSelector_C.ExecuteUbergraph_BW_GameSelector");

	ABW_GameSelector_C_ExecuteUbergraph_BW_GameSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
