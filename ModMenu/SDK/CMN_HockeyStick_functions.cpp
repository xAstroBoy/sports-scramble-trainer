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

// Function CMN_HockeyStick.CMN_HockeyStick_C.PlaySpawnFX
// (Public, BlueprintCallable, BlueprintEvent)
void ACMN_HockeyStick_C::PlaySpawnFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_HockeyStick.CMN_HockeyStick_C.PlaySpawnFX");

	ACMN_HockeyStick_C_PlaySpawnFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_HockeyStick.CMN_HockeyStick_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ACMN_HockeyStick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_HockeyStick.CMN_HockeyStick_C.UserConstructionScript");

	ACMN_HockeyStick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_HockeyStick.CMN_HockeyStick_C.SpawnEffect
// (BlueprintCallable, BlueprintEvent)
void ACMN_HockeyStick_C::SpawnEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_HockeyStick.CMN_HockeyStick_C.SpawnEffect");

	ACMN_HockeyStick_C_SpawnEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_HockeyStick.CMN_HockeyStick_C.ExecuteUbergraph_CMN_HockeyStick
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACMN_HockeyStick_C::ExecuteUbergraph_CMN_HockeyStick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_HockeyStick.CMN_HockeyStick_C.ExecuteUbergraph_CMN_HockeyStick");

	ACMN_HockeyStick_C_ExecuteUbergraph_CMN_HockeyStick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
