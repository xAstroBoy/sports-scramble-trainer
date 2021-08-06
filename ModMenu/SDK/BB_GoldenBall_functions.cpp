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

// Function BB_GoldenBall.BB_GoldenBall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_GoldenBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GoldenBall.BB_GoldenBall_C.UserConstructionScript");

	ABB_GoldenBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GoldenBall.BB_GoldenBall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_GoldenBall_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GoldenBall.BB_GoldenBall_C.ReceiveBeginPlay");

	ABB_GoldenBall_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GoldenBall.BB_GoldenBall_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_GoldenBall_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GoldenBall.BB_GoldenBall_C.ReceiveEndPlay");

	ABB_GoldenBall_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GoldenBall.BB_GoldenBall_C.GoldenBallGrabbed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_GoldenBall_C::GoldenBallGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GoldenBall.BB_GoldenBall_C.GoldenBallGrabbed");

	ABB_GoldenBall_C_GoldenBallGrabbed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_GoldenBall.BB_GoldenBall_C.ExecuteUbergraph_BB_GoldenBall
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_GoldenBall_C::ExecuteUbergraph_BB_GoldenBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_GoldenBall.BB_GoldenBall_C.ExecuteUbergraph_BB_GoldenBall");

	ABB_GoldenBall_C_ExecuteUbergraph_BB_GoldenBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
