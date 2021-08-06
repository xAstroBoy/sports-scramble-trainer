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

// Function TN_FishRacket.TN_FishRacket_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_FishRacket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_FishRacket.TN_FishRacket_C.UserConstructionScript");

	ATN_FishRacket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_FishRacket.TN_FishRacket_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_FishRacket_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_FishRacket.TN_FishRacket_C.ReceiveBeginPlay");

	ATN_FishRacket_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_FishRacket.TN_FishRacket_C.UpdateSkeleton
// (BlueprintCallable, BlueprintEvent)
void ATN_FishRacket_C::UpdateSkeleton()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_FishRacket.TN_FishRacket_C.UpdateSkeleton");

	ATN_FishRacket_C_UpdateSkeleton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_FishRacket.TN_FishRacket_C.ExecuteUbergraph_TN_FishRacket
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_FishRacket_C::ExecuteUbergraph_TN_FishRacket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_FishRacket.TN_FishRacket_C.ExecuteUbergraph_TN_FishRacket");

	ATN_FishRacket_C_ExecuteUbergraph_TN_FishRacket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
