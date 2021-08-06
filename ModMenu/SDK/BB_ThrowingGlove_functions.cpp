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

// Function BB_ThrowingGlove.BB_ThrowingGlove_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_ThrowingGlove_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ThrowingGlove.BB_ThrowingGlove_C.UserConstructionScript");

	ABB_ThrowingGlove_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ThrowingGlove.BB_ThrowingGlove_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_ThrowingGlove_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ThrowingGlove.BB_ThrowingGlove_C.ReceiveBeginPlay");

	ABB_ThrowingGlove_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ThrowingGlove.BB_ThrowingGlove_C.BallThrown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_ThrowingGlove_C::BallThrown(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ThrowingGlove.BB_ThrowingGlove_C.BallThrown");

	ABB_ThrowingGlove_C_BallThrown_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ThrowingGlove.BB_ThrowingGlove_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_ThrowingGlove_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ThrowingGlove.BB_ThrowingGlove_C.ReceiveEndPlay");

	ABB_ThrowingGlove_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ThrowingGlove.BB_ThrowingGlove_C.DestroyPrimitive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           playOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_ThrowingGlove_C::DestroyPrimitive(bool playOut, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ThrowingGlove.BB_ThrowingGlove_C.DestroyPrimitive");

	ABB_ThrowingGlove_C_DestroyPrimitive_Params params;
	params.playOut = playOut;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ThrowingGlove.BB_ThrowingGlove_C.ExecuteUbergraph_BB_ThrowingGlove
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_ThrowingGlove_C::ExecuteUbergraph_BB_ThrowingGlove(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ThrowingGlove.BB_ThrowingGlove_C.ExecuteUbergraph_BB_ThrowingGlove");

	ABB_ThrowingGlove_C_ExecuteUbergraph_BB_ThrowingGlove_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
