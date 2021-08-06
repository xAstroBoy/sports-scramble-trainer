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

// Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABaseballAI_Dummy_Batter_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.UserConstructionScript");

	ABaseballAI_Dummy_Batter_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABaseballAI_Dummy_Batter_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ReceiveBeginPlay");

	ABaseballAI_Dummy_Batter_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballAI_Dummy_Batter_Blueprint_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ReceiveEndPlay");

	ABaseballAI_Dummy_Batter_Blueprint_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ExecuteUbergraph_BaseballAI_Dummy_Batter_Blueprint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballAI_Dummy_Batter_Blueprint_C::ExecuteUbergraph_BaseballAI_Dummy_Batter_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ExecuteUbergraph_BaseballAI_Dummy_Batter_Blueprint");

	ABaseballAI_Dummy_Batter_Blueprint_C_ExecuteUbergraph_BaseballAI_Dummy_Batter_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
