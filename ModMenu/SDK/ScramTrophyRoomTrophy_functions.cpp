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

// Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.CheckTrophyCompletion
// (Public, BlueprintCallable, BlueprintEvent)
void AScramTrophyRoomTrophy_C::CheckTrophyCompletion()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.CheckTrophyCompletion");

	AScramTrophyRoomTrophy_C_CheckTrophyCompletion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AScramTrophyRoomTrophy_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.Initialize");

	AScramTrophyRoomTrophy_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramTrophyRoomTrophy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.UserConstructionScript");

	AScramTrophyRoomTrophy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScramTrophyRoomTrophy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ReceiveBeginPlay");

	AScramTrophyRoomTrophy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.OnPlayerLookAtTrophy
// (Event, Public, BlueprintEvent)
void AScramTrophyRoomTrophy_C::OnPlayerLookAtTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.OnPlayerLookAtTrophy");

	AScramTrophyRoomTrophy_C_OnPlayerLookAtTrophy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.OnPlayerStopLookAtTrophy
// (Event, Public, BlueprintEvent)
void AScramTrophyRoomTrophy_C::OnPlayerStopLookAtTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.OnPlayerStopLookAtTrophy");

	AScramTrophyRoomTrophy_C_OnPlayerStopLookAtTrophy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTrophyRoomTrophy_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ReceiveEndPlay");

	AScramTrophyRoomTrophy_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ExecuteUbergraph_ScramTrophyRoomTrophy
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramTrophyRoomTrophy_C::ExecuteUbergraph_ScramTrophyRoomTrophy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramTrophyRoomTrophy.ScramTrophyRoomTrophy_C.ExecuteUbergraph_ScramTrophyRoomTrophy");

	AScramTrophyRoomTrophy_C_ExecuteUbergraph_ScramTrophyRoomTrophy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
