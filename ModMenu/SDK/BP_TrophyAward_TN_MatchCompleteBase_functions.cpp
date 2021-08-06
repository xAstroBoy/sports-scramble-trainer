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

// Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.SystemsCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldObject                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsGood                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyAward_TN_MatchCompleteBase_C::SystemsCheck(class UObject* WorldObject, class UScramEventBasePayload* Payload, bool* IsGood)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.SystemsCheck");

	ABP_TrophyAward_TN_MatchCompleteBase_C_SystemsCheck_Params params;
	params.WorldObject = WorldObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsGood != nullptr)
		*IsGood = params.IsGood;

}


// Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_TN_MatchCompleteBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.UserConstructionScript");

	ABP_TrophyAward_TN_MatchCompleteBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.OnMatchComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_TN_MatchCompleteBase_C::OnMatchComplete(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.OnMatchComplete");

	ABP_TrophyAward_TN_MatchCompleteBase_C_OnMatchComplete_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.DebugEarn
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_TN_MatchCompleteBase_C::DebugEarn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.DebugEarn");

	ABP_TrophyAward_TN_MatchCompleteBase_C_DebugEarn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.ExecuteUbergraph_BP_TrophyAward_TN_MatchCompleteBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_TN_MatchCompleteBase_C::ExecuteUbergraph_BP_TrophyAward_TN_MatchCompleteBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.ExecuteUbergraph_BP_TrophyAward_TN_MatchCompleteBase");

	ABP_TrophyAward_TN_MatchCompleteBase_C_ExecuteUbergraph_BP_TrophyAward_TN_MatchCompleteBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
