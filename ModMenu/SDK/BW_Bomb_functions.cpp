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

// Function BW_Bomb.BW_Bomb_C.TryExplode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Bomb_C::TryExplode(bool Force, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Bomb.BW_Bomb_C.TryExplode");

	ABW_Bomb_C_TryExplode_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BW_Bomb.BW_Bomb_C.HasExploded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           has                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Bomb_C::HasExploded(bool* has)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Bomb.BW_Bomb_C.HasExploded");

	ABW_Bomb_C_HasExploded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (has != nullptr)
		*has = params.has;

}


// Function BW_Bomb.BW_Bomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_Bomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Bomb.BW_Bomb_C.UserConstructionScript");

	ABW_Bomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Bomb.BW_Bomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_Bomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Bomb.BW_Bomb_C.ReceiveBeginPlay");

	ABW_Bomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Bomb.BW_Bomb_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Bomb_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Bomb.BW_Bomb_C.ReceiveEndPlay");

	ABW_Bomb_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Bomb.BW_Bomb_C.ExplodeCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Bomb_C::ExplodeCheck(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Bomb.BW_Bomb_C.ExplodeCheck");

	ABW_Bomb_C_ExplodeCheck_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Bomb.BW_Bomb_C.Local_ExplodeFX
// (BlueprintCallable, BlueprintEvent)
void ABW_Bomb_C::Local_ExplodeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Bomb.BW_Bomb_C.Local_ExplodeFX");

	ABW_Bomb_C_Local_ExplodeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Bomb.BW_Bomb_C.PickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Bomb_C::PickedUp(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Bomb.BW_Bomb_C.PickedUp");

	ABW_Bomb_C_PickedUp_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Bomb.BW_Bomb_C.Multi_ExplodeFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABW_Bomb_C::Multi_ExplodeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Bomb.BW_Bomb_C.Multi_ExplodeFX");

	ABW_Bomb_C_Multi_ExplodeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Bomb.BW_Bomb_C.Server_ExplodeFX
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABW_Bomb_C::Server_ExplodeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Bomb.BW_Bomb_C.Server_ExplodeFX");

	ABW_Bomb_C_Server_ExplodeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Bomb.BW_Bomb_C.LR_ExplodeFX
// (BlueprintCallable, BlueprintEvent)
void ABW_Bomb_C::LR_ExplodeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Bomb.BW_Bomb_C.LR_ExplodeFX");

	ABW_Bomb_C_LR_ExplodeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Bomb.BW_Bomb_C.ExecuteUbergraph_BW_Bomb
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Bomb_C::ExecuteUbergraph_BW_Bomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Bomb.BW_Bomb_C.ExecuteUbergraph_BW_Bomb");

	ABW_Bomb_C_ExecuteUbergraph_BW_Bomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
