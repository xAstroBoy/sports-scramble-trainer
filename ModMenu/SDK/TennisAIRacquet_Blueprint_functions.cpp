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

// Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATennisAIRacquet_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.UserConstructionScript");

	ATennisAIRacquet_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.PlayForehandSwingFX
// (BlueprintCallable, BlueprintEvent)
void ATennisAIRacquet_Blueprint_C::PlayForehandSwingFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.PlayForehandSwingFX");

	ATennisAIRacquet_Blueprint_C_PlayForehandSwingFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.PlayHitFX
// (BlueprintCallable, BlueprintEvent)
void ATennisAIRacquet_Blueprint_C::PlayHitFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.PlayHitFX");

	ATennisAIRacquet_Blueprint_C_PlayHitFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.ExecuteUbergraph_TennisAIRacquet_Blueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisAIRacquet_Blueprint_C::ExecuteUbergraph_TennisAIRacquet_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.ExecuteUbergraph_TennisAIRacquet_Blueprint");

	ATennisAIRacquet_Blueprint_C_ExecuteUbergraph_TennisAIRacquet_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
