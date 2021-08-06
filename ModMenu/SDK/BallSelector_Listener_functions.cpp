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

// Function BallSelector_Listener.BallSelector_Listener_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABallSelector_Listener_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallSelector_Listener.BallSelector_Listener_C.UserConstructionScript");

	ABallSelector_Listener_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallSelector_Listener.BallSelector_Listener_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABallSelector_Listener_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallSelector_Listener.BallSelector_Listener_C.ReceiveBeginPlay");

	ABallSelector_Listener_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallSelector_Listener.BallSelector_Listener_C.ReceiveBaseballEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallSelector_Listener_C::ReceiveBaseballEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallSelector_Listener.BallSelector_Listener_C.ReceiveBaseballEvent");

	ABallSelector_Listener_C_ReceiveBaseballEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallSelector_Listener.BallSelector_Listener_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallSelector_Listener_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallSelector_Listener.BallSelector_Listener_C.ReceiveEndPlay");

	ABallSelector_Listener_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallSelector_Listener.BallSelector_Listener_C.Sides_Switched
// (BlueprintCallable, BlueprintEvent)
void ABallSelector_Listener_C::Sides_Switched()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallSelector_Listener.BallSelector_Listener_C.Sides_Switched");

	ABallSelector_Listener_C_Sides_Switched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallSelector_Listener.BallSelector_Listener_C.ExecuteUbergraph_BallSelector_Listener
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallSelector_Listener_C::ExecuteUbergraph_BallSelector_Listener(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallSelector_Listener.BallSelector_Listener_C.ExecuteUbergraph_BallSelector_Listener");

	ABallSelector_Listener_C_ExecuteUbergraph_BallSelector_Listener_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
