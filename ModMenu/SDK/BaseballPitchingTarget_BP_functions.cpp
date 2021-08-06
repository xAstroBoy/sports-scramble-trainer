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

// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ValidateBallTrajectory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AScramBall*              Incoming_Ball                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Valid_Hit                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballPitchingTarget_BP_C::ValidateBallTrajectory(class AScramBall* Incoming_Ball, bool* Valid_Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ValidateBallTrajectory");

	ABaseballPitchingTarget_BP_C_ValidateBallTrajectory_Params params;
	params.Incoming_Ball = Incoming_Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid_Hit != nullptr)
		*Valid_Hit = params.Valid_Hit;

}


// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.SetVisibleElements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABaseballPitchingTarget_BP_C::SetVisibleElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.SetVisibleElements");

	ABaseballPitchingTarget_BP_C_SetVisibleElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABaseballPitchingTarget_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.UserConstructionScript");

	ABaseballPitchingTarget_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABaseballPitchingTarget_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveBeginPlay");

	ABaseballPitchingTarget_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballPitchingTarget_BP_C::OnTriggered(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.OnTriggered");

	ABaseballPitchingTarget_BP_C_OnTriggered_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.AutoCleanup
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABaseballPitchingTarget_BP_C::AutoCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.AutoCleanup");

	ABaseballPitchingTarget_BP_C_AutoCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.Break Target
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABaseballPitchingTarget_BP_C::Break_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.Break Target");

	ABaseballPitchingTarget_BP_C_Break_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalShow
// (BlueprintCallable, BlueprintEvent)
void ABaseballPitchingTarget_BP_C::LocalShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalShow");

	ABaseballPitchingTarget_BP_C_LocalShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalHide
// (BlueprintCallable, BlueprintEvent)
void ABaseballPitchingTarget_BP_C::LocalHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalHide");

	ABaseballPitchingTarget_BP_C_LocalHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ChangeTargetVisibility
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowTarget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballPitchingTarget_BP_C::ChangeTargetVisibility(bool ShowTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ChangeTargetVisibility");

	ABaseballPitchingTarget_BP_C_ChangeTargetVisibility_Params params;
	params.ShowTarget = ShowTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballPitchingTarget_BP_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveEndPlay");

	ABaseballPitchingTarget_BP_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ExecuteUbergraph_BaseballPitchingTarget_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballPitchingTarget_BP_C::ExecuteUbergraph_BaseballPitchingTarget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ExecuteUbergraph_BaseballPitchingTarget_BP");

	ABaseballPitchingTarget_BP_C_ExecuteUbergraph_BaseballPitchingTarget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.PitchingTargetHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballScrambleTargetLocations Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballPitchingTarget_BP_C::PitchingTargetHit__DelegateSignature(SportsScramble_EBaseballScrambleTargetLocations Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.PitchingTargetHit__DelegateSignature");

	ABaseballPitchingTarget_BP_C_PitchingTargetHit__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
