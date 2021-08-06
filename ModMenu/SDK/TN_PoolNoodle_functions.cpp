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

// Function TN_PoolNoodle.TN_PoolNoodle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_PoolNoodle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PoolNoodle.TN_PoolNoodle_C.UserConstructionScript");

	ATN_PoolNoodle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PoolNoodle.TN_PoolNoodle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_PoolNoodle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PoolNoodle.TN_PoolNoodle_C.ReceiveBeginPlay");

	ATN_PoolNoodle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PoolNoodle.TN_PoolNoodle_C.UpdateSkeleton
// (BlueprintCallable, BlueprintEvent)
void ATN_PoolNoodle_C::UpdateSkeleton()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PoolNoodle.TN_PoolNoodle_C.UpdateSkeleton");

	ATN_PoolNoodle_C_UpdateSkeleton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_PoolNoodle.TN_PoolNoodle_C.ExecuteUbergraph_TN_PoolNoodle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_PoolNoodle_C::ExecuteUbergraph_TN_PoolNoodle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_PoolNoodle.TN_PoolNoodle_C.ExecuteUbergraph_TN_PoolNoodle");

	ATN_PoolNoodle_C_ExecuteUbergraph_TN_PoolNoodle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
