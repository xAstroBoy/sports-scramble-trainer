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

// Function BB_FishBall.BB_FishBall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_FishBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_FishBall.BB_FishBall_C.UserConstructionScript");

	ABB_FishBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_FishBall.BB_FishBall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_FishBall_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_FishBall.BB_FishBall_C.ReceiveBeginPlay");

	ABB_FishBall_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_FishBall.BB_FishBall_C.SetupSkeleton
// (BlueprintCallable, BlueprintEvent)
void ABB_FishBall_C::SetupSkeleton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_FishBall.BB_FishBall_C.SetupSkeleton");

	ABB_FishBall_C_SetupSkeleton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_FishBall.BB_FishBall_C.ExecuteUbergraph_BB_FishBall
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_FishBall_C::ExecuteUbergraph_BB_FishBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_FishBall.BB_FishBall_C.ExecuteUbergraph_BB_FishBall");

	ABB_FishBall_C_ExecuteUbergraph_BB_FishBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
