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

// Function BreakTargetParent.BreakTargetParent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABreakTargetParent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreakTargetParent.BreakTargetParent_C.UserConstructionScript");

	ABreakTargetParent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BreakTargetParent.BreakTargetParent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABreakTargetParent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreakTargetParent.BreakTargetParent_C.ReceiveBeginPlay");

	ABreakTargetParent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BreakTargetParent.BreakTargetParent_C.ExecuteUbergraph_BreakTargetParent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABreakTargetParent_C::ExecuteUbergraph_BreakTargetParent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreakTargetParent.BreakTargetParent_C.ExecuteUbergraph_BreakTargetParent");

	ABreakTargetParent_C_ExecuteUbergraph_BreakTargetParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
