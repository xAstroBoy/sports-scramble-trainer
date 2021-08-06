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

// Function TN_Fish.TN_Fish_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_Fish_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Fish.TN_Fish_C.UserConstructionScript");

	ATN_Fish_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Fish.TN_Fish_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_Fish_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Fish.TN_Fish_C.ReceiveBeginPlay");

	ATN_Fish_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Fish.TN_Fish_C.SetupSkeleton
// (BlueprintCallable, BlueprintEvent)
void ATN_Fish_C::SetupSkeleton()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Fish.TN_Fish_C.SetupSkeleton");

	ATN_Fish_C_SetupSkeleton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Fish.TN_Fish_C.ExecuteUbergraph_TN_Fish
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Fish_C::ExecuteUbergraph_TN_Fish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Fish.TN_Fish_C.ExecuteUbergraph_TN_Fish");

	ATN_Fish_C_ExecuteUbergraph_TN_Fish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
