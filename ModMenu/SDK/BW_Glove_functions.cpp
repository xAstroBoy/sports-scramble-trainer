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

// Function BW_Glove.BW_Glove_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_Glove_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Glove.BW_Glove_C.UserConstructionScript");

	ABW_Glove_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Glove.BW_Glove_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Glove_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Glove.BW_Glove_C.ReceiveEndPlay");

	ABW_Glove_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Glove.BW_Glove_C.BallThrown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Glove_C::BallThrown(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Glove.BW_Glove_C.BallThrown");

	ABW_Glove_C_BallThrown_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Glove.BW_Glove_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_Glove_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Glove.BW_Glove_C.ReceiveBeginPlay");

	ABW_Glove_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Glove.BW_Glove_C.OnThrowFinalized
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Glove_C::OnThrowFinalized(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Glove.BW_Glove_C.OnThrowFinalized");

	ABW_Glove_C_OnThrowFinalized_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Glove.BW_Glove_C.DestroyPrimitive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           playOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Glove_C::DestroyPrimitive(bool playOut, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Glove.BW_Glove_C.DestroyPrimitive");

	ABW_Glove_C_DestroyPrimitive_Params params;
	params.playOut = playOut;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Glove.BW_Glove_C.ExecuteUbergraph_BW_Glove
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Glove_C::ExecuteUbergraph_BW_Glove(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Glove.BW_Glove_C.ExecuteUbergraph_BW_Glove");

	ABW_Glove_C_ExecuteUbergraph_BW_Glove_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Glove.BW_Glove_C.FinalizeThrow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingBall*            BowlingBall                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Glove_C::FinalizeThrow__DelegateSignature(class ABowlingBall* BowlingBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Glove.BW_Glove_C.FinalizeThrow__DelegateSignature");

	ABW_Glove_C_FinalizeThrow__DelegateSignature_Params params;
	params.BowlingBall = BowlingBall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
