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

// Function BB_PitchTarget.BB_PitchTarget_C.HideAvatar
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::HideAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.HideAvatar");

	ABB_PitchTarget_C_HideAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.SetAllTargetsUnbroken
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::SetAllTargetsUnbroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.SetAllTargetsUnbroken");

	ABB_PitchTarget_C_SetAllTargetsUnbroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.DisableTargets
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::DisableTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.DisableTargets");

	ABB_PitchTarget_C_DisableTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.SetTargetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::SetTargetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.SetTargetVisibility");

	ABB_PitchTarget_C_SetTargetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.PickNewRandomTarget
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::PickNewRandomTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.PickNewRandomTarget");

	ABB_PitchTarget_C_PickNewRandomTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.ResetTargets
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::ResetTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ResetTargets");

	ABB_PitchTarget_C_ResetTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.ValidateTargets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APitching_Target_02_C*   TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Validation                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_PitchTarget_C::ValidateTargets(class APitching_Target_02_C* TargetActor, bool* Validation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ValidateTargets");

	ABB_PitchTarget_C_ValidateTargets_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Validation != nullptr)
		*Validation = params.Validation;

}


// Function BB_PitchTarget.BB_PitchTarget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.Initialize");

	ABB_PitchTarget_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.ShowDebugText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_PitchTarget_C::ShowDebugText(const struct FString& String, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ShowDebugText");

	ABB_PitchTarget_C_ShowDebugText_Params params;
	params.String = String;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.MaintainTargets
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::MaintainTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.MaintainTargets");

	ABB_PitchTarget_C_MaintainTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.UserConstructionScript");

	ABB_PitchTarget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_PitchTarget_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ReceiveBeginPlay");

	ABB_PitchTarget_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.ResetAllTargets
// (BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::ResetAllTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ResetAllTargets");

	ABB_PitchTarget_C_ResetAllTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.Target_5
// (BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::Target_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.Target_5");

	ABB_PitchTarget_C_Target_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.Target_4
// (BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::Target_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.Target_4");

	ABB_PitchTarget_C_Target_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.Target_2
// (BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::Target_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.Target_2");

	ABB_PitchTarget_C_Target_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.ResetDoubleHit
// (BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::ResetDoubleHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ResetDoubleHit");

	ABB_PitchTarget_C_ResetDoubleHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.Target_3
// (BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::Target_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.Target_3");

	ABB_PitchTarget_C_Target_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.PickRandomTarget
// (BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::PickRandomTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.PickRandomTarget");

	ABB_PitchTarget_C_PickRandomTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.SpawnInitialRandomTarget
// (BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::SpawnInitialRandomTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.SpawnInitialRandomTarget");

	ABB_PitchTarget_C_SpawnInitialRandomTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.ShrinkAndPickNewTarget
// (BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::ShrinkAndPickNewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ShrinkAndPickNewTarget");

	ABB_PitchTarget_C_ShrinkAndPickNewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.ExecuteUbergraph_BB_PitchTarget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_PitchTarget_C::ExecuteUbergraph_BB_PitchTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ExecuteUbergraph_BB_PitchTarget");

	ABB_PitchTarget_C_ExecuteUbergraph_BB_PitchTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.TargetHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_PitchTarget_C::TargetHit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.TargetHit__DelegateSignature");

	ABB_PitchTarget_C_TargetHit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_PitchTarget.BB_PitchTarget_C.UpdateScoreboardScore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScoreAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_PitchTarget_C::UpdateScoreboardScore__DelegateSignature(int ScoreAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.UpdateScoreboardScore__DelegateSignature");

	ABB_PitchTarget_C_UpdateScoreboardScore__DelegateSignature_Params params;
	params.ScoreAmount = ScoreAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
