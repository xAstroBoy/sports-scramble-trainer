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

// Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_StadiumWindowSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.UserConstructionScript");

	ABB_StadiumWindowSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ActivateBreakables
// (BlueprintCallable, BlueprintEvent)
void ABB_StadiumWindowSpawner_C::ActivateBreakables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ActivateBreakables");

	ABB_StadiumWindowSpawner_C_ActivateBreakables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ResetBreakables
// (BlueprintCallable, BlueprintEvent)
void ABB_StadiumWindowSpawner_C::ResetBreakables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ResetBreakables");

	ABB_StadiumWindowSpawner_C_ResetBreakables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.CleanUpAllBreakables
// (BlueprintCallable, BlueprintEvent)
void ABB_StadiumWindowSpawner_C::CleanUpAllBreakables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.CleanUpAllBreakables");

	ABB_StadiumWindowSpawner_C_CleanUpAllBreakables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_StadiumWindowSpawner_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ReceiveEndPlay");

	ABB_StadiumWindowSpawner_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.SetBreakableScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WindowScore                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            LightFixtureScore              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_StadiumWindowSpawner_C::SetBreakableScore(int WindowScore, int LightFixtureScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.SetBreakableScore");

	ABB_StadiumWindowSpawner_C_SetBreakableScore_Params params;
	params.WindowScore = WindowScore;
	params.LightFixtureScore = LightFixtureScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ExecuteUbergraph_BB_StadiumWindowSpawner
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_StadiumWindowSpawner_C::ExecuteUbergraph_BB_StadiumWindowSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ExecuteUbergraph_BB_StadiumWindowSpawner");

	ABB_StadiumWindowSpawner_C_ExecuteUbergraph_BB_StadiumWindowSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
