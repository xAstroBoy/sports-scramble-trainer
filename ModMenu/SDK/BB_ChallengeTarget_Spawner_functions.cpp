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

// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.RemoveTargets
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_ChallengeTarget_Spawner_C::RemoveTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.RemoveTargets");

	ABB_ChallengeTarget_Spawner_C_RemoveTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.SpawnTargets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PatternIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bonus                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            ScoreValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_ChallengeTarget_Spawner_C::SpawnTargets(int PatternIndex, bool bonus, int ScoreValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.SpawnTargets");

	ABB_ChallengeTarget_Spawner_C_SpawnTargets_Params params;
	params.PatternIndex = PatternIndex;
	params.bonus = bonus;
	params.ScoreValue = ScoreValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_ChallengeTarget_Spawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.UserConstructionScript");

	ABB_ChallengeTarget_Spawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.Score Target
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABB_ChallengeTarget_C*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_ChallengeTarget_Spawner_C::Score_Target(class ABB_ChallengeTarget_C* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.Score Target");

	ABB_ChallengeTarget_Spawner_C_Score_Target_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_ChallengeTarget_Spawner_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ReceiveEndPlay");

	ABB_ChallengeTarget_Spawner_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_ChallengeTarget_Spawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ReceiveBeginPlay");

	ABB_ChallengeTarget_Spawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ExecuteUbergraph_BB_ChallengeTarget_Spawner
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_ChallengeTarget_Spawner_C::ExecuteUbergraph_BB_ChallengeTarget_Spawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ExecuteUbergraph_BB_ChallengeTarget_Spawner");

	ABB_ChallengeTarget_Spawner_C_ExecuteUbergraph_BB_ChallengeTarget_Spawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.GroupCleared__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BonusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_ChallengeTarget_Spawner_C::GroupCleared__DelegateSignature(bool BonusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.GroupCleared__DelegateSignature");

	ABB_ChallengeTarget_Spawner_C_GroupCleared__DelegateSignature_Params params;
	params.BonusGroup = BonusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ScoreATarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBonus                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_ChallengeTarget_Spawner_C::ScoreATarget__DelegateSignature(bool IsBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ScoreATarget__DelegateSignature");

	ABB_ChallengeTarget_Spawner_C_ScoreATarget__DelegateSignature_Params params;
	params.IsBonus = IsBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
