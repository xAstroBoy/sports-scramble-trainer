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

// Function BP_Trophy_BB_Minor.BP_Trophy_BB_Minor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Trophy_BB_Minor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Minor.BP_Trophy_BB_Minor_C.UserConstructionScript");

	ABP_Trophy_BB_Minor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_Minor.BP_Trophy_BB_Minor_C.GameEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trophy_BB_Minor_C::GameEnd(class AScramPlayer* Player, int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Minor.BP_Trophy_BB_Minor_C.GameEnd");

	ABP_Trophy_BB_Minor_C_GameEnd_Params params;
	params.Player = Player;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_Minor.BP_Trophy_BB_Minor_C.ExecuteUbergraph_BP_Trophy_BB_Minor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trophy_BB_Minor_C::ExecuteUbergraph_BP_Trophy_BB_Minor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Minor.BP_Trophy_BB_Minor_C.ExecuteUbergraph_BP_Trophy_BB_Minor");

	ABP_Trophy_BB_Minor_C_ExecuteUbergraph_BP_Trophy_BB_Minor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
