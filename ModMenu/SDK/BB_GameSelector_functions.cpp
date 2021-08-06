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

// Function BB_GameSelector.BB_GameSelector_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_GameSelector_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.Cleanup");

	ABB_GameSelector_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.ResetInstrument
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_GameSelector_C::ResetInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.ResetInstrument");

	ABB_GameSelector_C_ResetInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.VanishAllBalls
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_GameSelector_C::VanishAllBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.VanishAllBalls");

	ABB_GameSelector_C_VanishAllBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_GameSelector_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.Initialize");

	ABB_GameSelector_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.DestroyGameManagers
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_GameSelector_C::DestroyGameManagers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.DestroyGameManagers");

	ABB_GameSelector_C_DestroyGameManagers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_GameSelector_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.UserConstructionScript");

	ABB_GameSelector_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_GameSelector_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.ReceiveBeginPlay");

	ABB_GameSelector_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_GameSelector_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.ReceiveEndPlay");

	ABB_GameSelector_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.SpawnGameTypeSelectionMenu
// (BlueprintCallable, BlueprintEvent)
void ABB_GameSelector_C::SpawnGameTypeSelectionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.SpawnGameTypeSelectionMenu");

	ABB_GameSelector_C_SpawnGameTypeSelectionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.GameTypeSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_GameSelector_C::GameTypeSelected(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.GameTypeSelected");

	ABB_GameSelector_C_GameTypeSelected_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.GameOver
// (BlueprintCallable, BlueprintEvent)
void ABB_GameSelector_C::GameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.GameOver");

	ABB_GameSelector_C_GameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.SpawnPitchingGameSelector
// (BlueprintCallable, BlueprintEvent)
void ABB_GameSelector_C::SpawnPitchingGameSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.SpawnPitchingGameSelector");

	ABB_GameSelector_C_SpawnPitchingGameSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.PitchingGameSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_GameSelector_C::PitchingGameSelected(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.PitchingGameSelected");

	ABB_GameSelector_C_PitchingGameSelected_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.SpawnBattingGameSelector
// (BlueprintCallable, BlueprintEvent)
void ABB_GameSelector_C::SpawnBattingGameSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.SpawnBattingGameSelector");

	ABB_GameSelector_C_SpawnBattingGameSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.BattingGameSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_GameSelector_C::BattingGameSelected(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.BattingGameSelected");

	ABB_GameSelector_C_BattingGameSelected_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.ResetGame
// (BlueprintCallable, BlueprintEvent)
void ABB_GameSelector_C::ResetGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.ResetGame");

	ABB_GameSelector_C_ResetGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.HomeAwayMenu
// (BlueprintCallable, BlueprintEvent)
void ABB_GameSelector_C::HomeAwayMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.HomeAwayMenu");

	ABB_GameSelector_C_HomeAwayMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.SubChoiceMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_GameSelector_C::SubChoiceMade(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.SubChoiceMade");

	ABB_GameSelector_C_SubChoiceMade_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.ExecuteUbergraph_BB_GameSelector
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_GameSelector_C::ExecuteUbergraph_BB_GameSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.ExecuteUbergraph_BB_GameSelector");

	ABB_GameSelector_C_ExecuteUbergraph_BB_GameSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GameSelector.BB_GameSelector_C.ResetButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_GameSelector_C::ResetButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.ResetButtonPressed__DelegateSignature");

	ABB_GameSelector_C_ResetButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
