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

// Function ChallengeTemp.ChallengeTemp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AChallengeTemp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTemp.ChallengeTemp_C.UserConstructionScript");

	AChallengeTemp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeTemp.ChallengeTemp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AChallengeTemp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTemp.ChallengeTemp_C.ReceiveBeginPlay");

	AChallengeTemp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeTemp.ChallengeTemp_C.ExecuteUbergraph_ChallengeTemp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChallengeTemp_C::ExecuteUbergraph_ChallengeTemp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTemp.ChallengeTemp_C.ExecuteUbergraph_ChallengeTemp");

	AChallengeTemp_C_ExecuteUbergraph_ChallengeTemp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
