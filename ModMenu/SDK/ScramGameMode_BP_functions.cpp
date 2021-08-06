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

// Function ScramGameMode_BP.ScramGameMode_BP_C.ServerForceUpdateDormancy
// (Public, BlueprintCallable, BlueprintEvent)
void AScramGameMode_BP_C::ServerForceUpdateDormancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.ServerForceUpdateDormancy");

	AScramGameMode_BP_C_ServerForceUpdateDormancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameMode_BP.ScramGameMode_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramGameMode_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.UserConstructionScript");

	AScramGameMode_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameMode_BP.ScramGameMode_BP_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             ExitingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramGameMode_BP_C::K2_OnLogout(class AController* ExitingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.K2_OnLogout");

	AScramGameMode_BP_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameMode_BP.ScramGameMode_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScramGameMode_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.ReceiveBeginPlay");

	AScramGameMode_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameMode_BP.ScramGameMode_BP_C.StartOnlineMatchOfType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramSport     SportType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramGameMode_BP_C::StartOnlineMatchOfType(SportsScramble_EScramSport SportType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.StartOnlineMatchOfType");

	AScramGameMode_BP_C_StartOnlineMatchOfType_Params params;
	params.SportType = SportType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameMode_BP.ScramGameMode_BP_C.ClientSportPreferencesReceived
// (Event, Public, BlueprintEvent)
void AScramGameMode_BP_C::ClientSportPreferencesReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.ClientSportPreferencesReceived");

	AScramGameMode_BP_C_ClientSportPreferencesReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameMode_BP.ScramGameMode_BP_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramGameMode_BP_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.K2_PostLogin");

	AScramGameMode_BP_C_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameMode_BP.ScramGameMode_BP_C.SpawnOnlineGameHandler
// (BlueprintCallable, BlueprintEvent)
void AScramGameMode_BP_C::SpawnOnlineGameHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.SpawnOnlineGameHandler");

	AScramGameMode_BP_C_SpawnOnlineGameHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameMode_BP.ScramGameMode_BP_C.ExecuteUbergraph_ScramGameMode_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramGameMode_BP_C::ExecuteUbergraph_ScramGameMode_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.ExecuteUbergraph_ScramGameMode_BP");

	AScramGameMode_BP_C_ExecuteUbergraph_ScramGameMode_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameMode_BP.ScramGameMode_BP_C.ClientPlayerExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             ExitingPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSpectator                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramGameMode_BP_C::ClientPlayerExit__DelegateSignature(class AController* ExitingPlayer, bool IsSpectator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.ClientPlayerExit__DelegateSignature");

	AScramGameMode_BP_C_ClientPlayerExit__DelegateSignature_Params params;
	params.ExitingPlayer = ExitingPlayer;
	params.IsSpectator = IsSpectator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramGameMode_BP.ScramGameMode_BP_C.NewPlayerJoin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSpectator                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramGameMode_BP_C::NewPlayerJoin__DelegateSignature(class APlayerController* NewPlayer, bool IsSpectator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramGameMode_BP.ScramGameMode_BP_C.NewPlayerJoin__DelegateSignature");

	AScramGameMode_BP_C_NewPlayerJoin__DelegateSignature_Params params;
	params.NewPlayer = NewPlayer;
	params.IsSpectator = IsSpectator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
