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

// Function ScramPlayerHand_BP_Left.ScramPlayerHand_BP_Left_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramPlayerHand_BP_Left_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP_Left.ScramPlayerHand_BP_Left_C.UserConstructionScript");

	AScramPlayerHand_BP_Left_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerHand_BP_Left.ScramPlayerHand_BP_Left_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScramPlayerHand_BP_Left_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP_Left.ScramPlayerHand_BP_Left_C.ReceiveBeginPlay");

	AScramPlayerHand_BP_Left_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerHand_BP_Left.ScramPlayerHand_BP_Left_C.ExecuteUbergraph_ScramPlayerHand_BP_Left
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramPlayerHand_BP_Left_C::ExecuteUbergraph_ScramPlayerHand_BP_Left(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP_Left.ScramPlayerHand_BP_Left_C.ExecuteUbergraph_ScramPlayerHand_BP_Left");

	AScramPlayerHand_BP_Left_C_ExecuteUbergraph_ScramPlayerHand_BP_Left_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
