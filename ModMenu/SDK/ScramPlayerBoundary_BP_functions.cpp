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

// Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramPlayerBoundary_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.UserConstructionScript");

	AScramPlayerBoundary_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.OCDemo_SetupSmallPlayArea
// (BlueprintCallable, BlueprintEvent)
void AScramPlayerBoundary_BP_C::OCDemo_SetupSmallPlayArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.OCDemo_SetupSmallPlayArea");

	AScramPlayerBoundary_BP_C_OCDemo_SetupSmallPlayArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.OCDemo_SetupLargePlayArea
// (BlueprintCallable, BlueprintEvent)
void AScramPlayerBoundary_BP_C::OCDemo_SetupLargePlayArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.OCDemo_SetupLargePlayArea");

	AScramPlayerBoundary_BP_C_OCDemo_SetupLargePlayArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScramPlayerBoundary_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ReceiveBeginPlay");

	AScramPlayerBoundary_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.HideBoundary
// (BlueprintCallable, BlueprintEvent)
void AScramPlayerBoundary_BP_C::HideBoundary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.HideBoundary");

	AScramPlayerBoundary_BP_C_HideBoundary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.UnhideBoundary
// (BlueprintCallable, BlueprintEvent)
void AScramPlayerBoundary_BP_C::UnhideBoundary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.UnhideBoundary");

	AScramPlayerBoundary_BP_C_UnhideBoundary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramPlayerBoundary_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ReceiveTick");

	AScramPlayerBoundary_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ExecuteUbergraph_ScramPlayerBoundary_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramPlayerBoundary_BP_C::ExecuteUbergraph_ScramPlayerBoundary_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ExecuteUbergraph_ScramPlayerBoundary_BP");

	AScramPlayerBoundary_BP_C_ExecuteUbergraph_ScramPlayerBoundary_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
