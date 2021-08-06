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

// Function ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramPlayerHand_BP_Right_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C.UserConstructionScript");

	AScramPlayerHand_BP_Right_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScramPlayerHand_BP_Right_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C.ReceiveBeginPlay");

	AScramPlayerHand_BP_Right_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C.ExecuteUbergraph_ScramPlayerHand_BP_Right
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramPlayerHand_BP_Right_C::ExecuteUbergraph_ScramPlayerHand_BP_Right(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C.ExecuteUbergraph_ScramPlayerHand_BP_Right");

	AScramPlayerHand_BP_Right_C_ExecuteUbergraph_ScramPlayerHand_BP_Right_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
