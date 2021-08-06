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

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.HideSlowConnection
// (Public, BlueprintCallable, BlueprintEvent)
void AScramPlayerController_BP_C::HideSlowConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.HideSlowConnection");

	AScramPlayerController_BP_C_HideSlowConnection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.ShowSlowConnection
// (Public, BlueprintCallable, BlueprintEvent)
void AScramPlayerController_BP_C::ShowSlowConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.ShowSlowConnection");

	AScramPlayerController_BP_C_ShowSlowConnection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.SpawnUIFloater
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NoPause                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           SlowConnection                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramPlayerController_BP_C::SpawnUIFloater(bool NoPause, const struct FText& Error, bool SlowConnection)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.SpawnUIFloater");

	AScramPlayerController_BP_C_SpawnUIFloater_Params params;
	params.NoPause = NoPause;
	params.Error = Error;
	params.SlowConnection = SlowConnection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.IsMultiplayerQueued
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           MultiplayerQueued              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramPlayerController_BP_C::IsMultiplayerQueued(bool* MultiplayerQueued)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.IsMultiplayerQueued");

	AScramPlayerController_BP_C_IsMultiplayerQueued_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MultiplayerQueued != nullptr)
		*MultiplayerQueued = params.MultiplayerQueued;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.DoesPauseManagerExist?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Exists                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramPlayerController_BP_C::DoesPauseManagerExist_(bool* Exists)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.DoesPauseManagerExist?");

	AScramPlayerController_BP_C_DoesPauseManagerExist__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Exists != nullptr)
		*Exists = params.Exists;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.IsPauseRestricted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           restricted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramPlayerController_BP_C::IsPauseRestricted(bool* restricted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.IsPauseRestricted");

	AScramPlayerController_BP_C_IsPauseRestricted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (restricted != nullptr)
		*restricted = params.restricted;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.SpawnNoPause
// (Public, BlueprintCallable, BlueprintEvent)
void AScramPlayerController_BP_C::SpawnNoPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.SpawnNoPause");

	AScramPlayerController_BP_C_SpawnNoPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AScramPlayerController_BP_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.Initialize");

	AScramPlayerController_BP_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramPlayerController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.UserConstructionScript");

	AScramPlayerController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.InpActEvt_Pause_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AScramPlayerController_BP_C::InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.InpActEvt_Pause_K2Node_InputActionEvent_1");

	AScramPlayerController_BP_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CheckIfPausedAllowed           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramPlayerController_BP_C::PauseGame(bool CheckIfPausedAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseGame");

	AScramPlayerController_BP_C_PauseGame_Params params;
	params.CheckIfPausedAllowed = CheckIfPausedAllowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScramPlayerController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.ReceiveBeginPlay");

	AScramPlayerController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.UnpauseGame
// (BlueprintCallable, BlueprintEvent)
void AScramPlayerController_BP_C::UnpauseGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.UnpauseGame");

	AScramPlayerController_BP_C_UnpauseGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseEndNotify
// (BlueprintCallable, BlueprintEvent)
void AScramPlayerController_BP_C::PauseEndNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseEndNotify");

	AScramPlayerController_BP_C_PauseEndNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseStartNotify
// (BlueprintCallable, BlueprintEvent)
void AScramPlayerController_BP_C::PauseStartNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseStartNotify");

	AScramPlayerController_BP_C_PauseStartNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.QueuedPauseGame
// (BlueprintCallable, BlueprintEvent)
void AScramPlayerController_BP_C::QueuedPauseGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.QueuedPauseGame");

	AScramPlayerController_BP_C_QueuedPauseGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.QueuedUnpauseGame
// (BlueprintCallable, BlueprintEvent)
void AScramPlayerController_BP_C::QueuedUnpauseGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.QueuedUnpauseGame");

	AScramPlayerController_BP_C_QueuedUnpauseGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.Server_ClientCanStartTravel
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameHandlerOnline_C*    GameHandler                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramPlayerController_BP_C::Server_ClientCanStartTravel(class AGameHandlerOnline_C* GameHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.Server_ClientCanStartTravel");

	AScramPlayerController_BP_C_Server_ClientCanStartTravel_Params params;
	params.GameHandler = GameHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.Server_ClientCanBeginMatch
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameHandlerOnline_C*    Game_Handler                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramPlayerController_BP_C::Server_ClientCanBeginMatch(class AGameHandlerOnline_C* Game_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.Server_ClientCanBeginMatch");

	AScramPlayerController_BP_C_Server_ClientCanBeginMatch_Params params;
	params.Game_Handler = Game_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.UpdateSlowConnectionDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isOverThreshold                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramPlayerController_BP_C::UpdateSlowConnectionDisplay(bool isOverThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.UpdateSlowConnectionDisplay");

	AScramPlayerController_BP_C_UpdateSlowConnectionDisplay_Params params;
	params.isOverThreshold = isOverThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramPlayerController_BP_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.ReceiveEndPlay");

	AScramPlayerController_BP_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.ExecuteUbergraph_ScramPlayerController_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramPlayerController_BP_C::ExecuteUbergraph_ScramPlayerController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.ExecuteUbergraph_ScramPlayerController_BP");

	AScramPlayerController_BP_C_ExecuteUbergraph_ScramPlayerController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AScramPlayerController_BP_C::PauseEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseEnd__DelegateSignature");

	AScramPlayerController_BP_C_PauseEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AScramPlayerController_BP_C::PauseStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseStart__DelegateSignature");

	AScramPlayerController_BP_C_PauseStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
