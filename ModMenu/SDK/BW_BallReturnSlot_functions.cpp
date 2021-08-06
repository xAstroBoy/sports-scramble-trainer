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

// Function BW_BallReturnSlot.BW_BallReturnSlot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_BallReturnSlot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_BallReturnSlot.BW_BallReturnSlot_C.UserConstructionScript");

	ABW_BallReturnSlot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_BallReturnSlot.BW_BallReturnSlot_C.OnBallAttached
// (Event, Protected, BlueprintEvent)
void ABW_BallReturnSlot_C::OnBallAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_BallReturnSlot.BW_BallReturnSlot_C.OnBallAttached");

	ABW_BallReturnSlot_C_OnBallAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_BallReturnSlot.BW_BallReturnSlot_C.OnMotionStart
// (Event, Protected, BlueprintEvent)
void ABW_BallReturnSlot_C::OnMotionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_BallReturnSlot.BW_BallReturnSlot_C.OnMotionStart");

	ABW_BallReturnSlot_C_OnMotionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_BallReturnSlot.BW_BallReturnSlot_C.OnMotionStop
// (Event, Protected, BlueprintEvent)
void ABW_BallReturnSlot_C::OnMotionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_BallReturnSlot.BW_BallReturnSlot_C.OnMotionStop");

	ABW_BallReturnSlot_C_OnMotionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_BallReturnSlot.BW_BallReturnSlot_C.ExecuteUbergraph_BW_BallReturnSlot
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_BallReturnSlot_C::ExecuteUbergraph_BW_BallReturnSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_BallReturnSlot.BW_BallReturnSlot_C.ExecuteUbergraph_BW_BallReturnSlot");

	ABW_BallReturnSlot_C_ExecuteUbergraph_BW_BallReturnSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
