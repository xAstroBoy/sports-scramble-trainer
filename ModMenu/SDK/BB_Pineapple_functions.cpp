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

// Function BB_Pineapple.BB_Pineapple_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Pineapple_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Pineapple.BB_Pineapple_C.UserConstructionScript");

	ABB_Pineapple_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Pineapple.BB_Pineapple_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Pineapple_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Pineapple.BB_Pineapple_C.ReceiveBeginPlay");

	ABB_Pineapple_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Pineapple.BB_Pineapple_C.Impact Scripting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Pineapple_C::Impact_Scripting(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Pineapple.BB_Pineapple_C.Impact Scripting");

	ABB_Pineapple_C_Impact_Scripting_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Pineapple.BB_Pineapple_C.ExecuteUbergraph_BB_Pineapple
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Pineapple_C::ExecuteUbergraph_BB_Pineapple(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Pineapple.BB_Pineapple_C.ExecuteUbergraph_BB_Pineapple");

	ABB_Pineapple_C_ExecuteUbergraph_BB_Pineapple_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
