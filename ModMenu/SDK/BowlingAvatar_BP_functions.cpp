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

// Function BowlingAvatar_BP.BowlingAvatar_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABowlingAvatar_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAvatar_BP.BowlingAvatar_BP_C.UserConstructionScript");

	ABowlingAvatar_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAvatar_BP.BowlingAvatar_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABowlingAvatar_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAvatar_BP.BowlingAvatar_BP_C.Timeline_0__FinishedFunc");

	ABowlingAvatar_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAvatar_BP.BowlingAvatar_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABowlingAvatar_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAvatar_BP.BowlingAvatar_BP_C.Timeline_0__UpdateFunc");

	ABowlingAvatar_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAvatar_BP.BowlingAvatar_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABowlingAvatar_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAvatar_BP.BowlingAvatar_BP_C.ReceiveBeginPlay");

	ABowlingAvatar_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAvatar_BP.BowlingAvatar_BP_C.CapsuleOpening
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAvatar_BP_C::CapsuleOpening(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAvatar_BP.BowlingAvatar_BP_C.CapsuleOpening");

	ABowlingAvatar_BP_C_CapsuleOpening_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAvatar_BP.BowlingAvatar_BP_C.ScaleUp
// (BlueprintCallable, BlueprintEvent)
void ABowlingAvatar_BP_C::ScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAvatar_BP.BowlingAvatar_BP_C.ScaleUp");

	ABowlingAvatar_BP_C_ScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingAvatar_BP.BowlingAvatar_BP_C.ExecuteUbergraph_BowlingAvatar_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingAvatar_BP_C::ExecuteUbergraph_BowlingAvatar_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingAvatar_BP.BowlingAvatar_BP_C.ExecuteUbergraph_BowlingAvatar_BP");

	ABowlingAvatar_BP_C_ExecuteUbergraph_BowlingAvatar_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
