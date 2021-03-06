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

// Function BB_Multiplayer.BB_Multiplayer_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Multiplayer_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Multiplayer.BB_Multiplayer_C.Initialize");

	ABB_Multiplayer_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Multiplayer.BB_Multiplayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Multiplayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Multiplayer.BB_Multiplayer_C.UserConstructionScript");

	ABB_Multiplayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Multiplayer.BB_Multiplayer_C.InpActEvt_G_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABB_Multiplayer_C::InpActEvt_G_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Multiplayer.BB_Multiplayer_C.InpActEvt_G_K2Node_InputKeyEvent_1");

	ABB_Multiplayer_C_InpActEvt_G_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Multiplayer.BB_Multiplayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Multiplayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Multiplayer.BB_Multiplayer_C.ReceiveBeginPlay");

	ABB_Multiplayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Multiplayer.BB_Multiplayer_C.CreateHubButton
// (BlueprintCallable, BlueprintEvent)
void ABB_Multiplayer_C::CreateHubButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Multiplayer.BB_Multiplayer_C.CreateHubButton");

	ABB_Multiplayer_C_CreateHubButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Multiplayer.BB_Multiplayer_C.ReturnToHub
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Multiplayer_C::ReturnToHub(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Multiplayer.BB_Multiplayer_C.ReturnToHub");

	ABB_Multiplayer_C_ReturnToHub_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Multiplayer.BB_Multiplayer_C.PlayerExited
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             ExitingPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSpectator                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Multiplayer_C::PlayerExited(class AController* ExitingPlayer, bool IsSpectator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Multiplayer.BB_Multiplayer_C.PlayerExited");

	ABB_Multiplayer_C_PlayerExited_Params params;
	params.ExitingPlayer = ExitingPlayer;
	params.IsSpectator = IsSpectator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Multiplayer.BB_Multiplayer_C.CreateStartButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSpectator                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Multiplayer_C::CreateStartButton(class APlayerController* NewPlayer, bool IsSpectator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Multiplayer.BB_Multiplayer_C.CreateStartButton");

	ABB_Multiplayer_C_CreateStartButton_Params params;
	params.NewPlayer = NewPlayer;
	params.IsSpectator = IsSpectator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Multiplayer.BB_Multiplayer_C.GameSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Multiplayer_C::GameSelected(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Multiplayer.BB_Multiplayer_C.GameSelected");

	ABB_Multiplayer_C_GameSelected_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Multiplayer.BB_Multiplayer_C.CreateEndGameButton
// (BlueprintCallable, BlueprintEvent)
void ABB_Multiplayer_C::CreateEndGameButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Multiplayer.BB_Multiplayer_C.CreateEndGameButton");

	ABB_Multiplayer_C_CreateEndGameButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Multiplayer.BB_Multiplayer_C.EndGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Multiplayer_C::EndGame(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Multiplayer.BB_Multiplayer_C.EndGame");

	ABB_Multiplayer_C_EndGame_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Multiplayer.BB_Multiplayer_C.ExecuteUbergraph_BB_Multiplayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Multiplayer_C::ExecuteUbergraph_BB_Multiplayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Multiplayer.BB_Multiplayer_C.ExecuteUbergraph_BB_Multiplayer");

	ABB_Multiplayer_C_ExecuteUbergraph_BB_Multiplayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
