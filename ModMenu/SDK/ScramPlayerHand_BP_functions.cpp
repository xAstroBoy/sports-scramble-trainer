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

// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.IsVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramPlayerHand_BP_C::IsVisible(bool* visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.IsVisible");

	AScramPlayerHand_BP_C_IsVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (visible != nullptr)
		*visible = params.visible;

}


// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.UpdateButtonFlashMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AScramPlayerHand_BP_C::UpdateButtonFlashMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.UpdateButtonFlashMesh");

	AScramPlayerHand_BP_C_UpdateButtonFlashMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.PlayHaptics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHapticFeedbackEffect_Base* HapticsEffect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          HapticsScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramPlayerHand_BP_C::PlayHaptics(class UHapticFeedbackEffect_Base* HapticsEffect, float HapticsScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.PlayHaptics");

	AScramPlayerHand_BP_C_PlayHaptics_Params params;
	params.HapticsEffect = HapticsEffect;
	params.HapticsScale = HapticsScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramPlayerHand_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.UserConstructionScript");

	AScramPlayerHand_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScramPlayerHand_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ReceiveBeginPlay");

	AScramPlayerHand_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramPlayerHand_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ReceiveTick");

	AScramPlayerHand_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.FlashButtons
// (BlueprintCallable, BlueprintEvent)
void AScramPlayerHand_BP_C::FlashButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.FlashButtons");

	AScramPlayerHand_BP_C_FlashButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.StopFlashButtons
// (BlueprintCallable, BlueprintEvent)
void AScramPlayerHand_BP_C::StopFlashButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.StopFlashButtons");

	AScramPlayerHand_BP_C_StopFlashButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ExecuteUbergraph_ScramPlayerHand_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramPlayerHand_BP_C::ExecuteUbergraph_ScramPlayerHand_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ExecuteUbergraph_ScramPlayerHand_BP");

	AScramPlayerHand_BP_C_ExecuteUbergraph_ScramPlayerHand_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
