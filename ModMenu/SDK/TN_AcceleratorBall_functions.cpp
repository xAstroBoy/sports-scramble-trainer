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

// Function TN_AcceleratorBall.TN_AcceleratorBall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_AcceleratorBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AcceleratorBall.TN_AcceleratorBall_C.UserConstructionScript");

	ATN_AcceleratorBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_AcceleratorBall.TN_AcceleratorBall_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_AcceleratorBall_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AcceleratorBall.TN_AcceleratorBall_C.ReceiveEndPlay");

	ATN_AcceleratorBall_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_AcceleratorBall.TN_AcceleratorBall_C.PlayChargedFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NoHitSFX                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_AcceleratorBall_C::PlayChargedFX(bool NoHitSFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AcceleratorBall.TN_AcceleratorBall_C.PlayChargedFX");

	ATN_AcceleratorBall_C_PlayChargedFX_Params params;
	params.NoHitSFX = NoHitSFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_AcceleratorBall.TN_AcceleratorBall_C.PlayChargedSliceFX
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_AcceleratorBall_C::PlayChargedSliceFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AcceleratorBall.TN_AcceleratorBall_C.PlayChargedSliceFX");

	ATN_AcceleratorBall_C_PlayChargedSliceFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_AcceleratorBall.TN_AcceleratorBall_C.ExecuteUbergraph_TN_AcceleratorBall
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_AcceleratorBall_C::ExecuteUbergraph_TN_AcceleratorBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_AcceleratorBall.TN_AcceleratorBall_C.ExecuteUbergraph_TN_AcceleratorBall");

	ATN_AcceleratorBall_C_ExecuteUbergraph_TN_AcceleratorBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
