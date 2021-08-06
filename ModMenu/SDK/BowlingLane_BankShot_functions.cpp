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

// Function BowlingLane_BankShot.BowlingLane_BankShot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABowlingLane_BankShot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_BankShot.BowlingLane_BankShot_C.UserConstructionScript");

	ABowlingLane_BankShot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingLane_BankShot.BowlingLane_BankShot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABowlingLane_BankShot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_BankShot.BowlingLane_BankShot_C.ReceiveBeginPlay");

	ABowlingLane_BankShot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingLane_BankShot.BowlingLane_BankShot_C.ExecuteUbergraph_BowlingLane_BankShot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingLane_BankShot_C::ExecuteUbergraph_BowlingLane_BankShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_BankShot.BowlingLane_BankShot_C.ExecuteUbergraph_BowlingLane_BankShot");

	ABowlingLane_BankShot_C_ExecuteUbergraph_BowlingLane_BankShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
