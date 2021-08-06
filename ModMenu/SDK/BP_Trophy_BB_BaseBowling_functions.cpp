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

// Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Trophy_BB_BaseBowling_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.UserConstructionScript");

	ABP_Trophy_BB_BaseBowling_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.Strike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trophy_BB_BaseBowling_C::Strike(class AScramPlayer* Player, int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.Strike");

	ABP_Trophy_BB_BaseBowling_C_Strike_Params params;
	params.Player = Player;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.PitchEvent
// (BlueprintCallable, BlueprintEvent)
void ABP_Trophy_BB_BaseBowling_C::PitchEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.PitchEvent");

	ABP_Trophy_BB_BaseBowling_C_PitchEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.BadPitch
// (BlueprintCallable, BlueprintEvent)
void ABP_Trophy_BB_BaseBowling_C::BadPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.BadPitch");

	ABP_Trophy_BB_BaseBowling_C_BadPitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.SwingAndMiss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trophy_BB_BaseBowling_C::SwingAndMiss(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.SwingAndMiss");

	ABP_Trophy_BB_BaseBowling_C_SwingAndMiss_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.OnHit
// (BlueprintCallable, BlueprintEvent)
void ABP_Trophy_BB_BaseBowling_C::OnHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.OnHit");

	ABP_Trophy_BB_BaseBowling_C_OnHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.ExecuteUbergraph_BP_Trophy_BB_BaseBowling
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trophy_BB_BaseBowling_C::ExecuteUbergraph_BP_Trophy_BB_BaseBowling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.ExecuteUbergraph_BP_Trophy_BB_BaseBowling");

	ABP_Trophy_BB_BaseBowling_C_ExecuteUbergraph_BP_Trophy_BB_BaseBowling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
