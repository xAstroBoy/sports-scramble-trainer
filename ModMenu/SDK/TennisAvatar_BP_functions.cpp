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

// Function TennisAvatar_BP.TennisAvatar_BP_C.CanPlayInstrumentVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayerHand*        Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisAvatar_BP_C::CanPlayInstrumentVFX(class AScramPlayerHand* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.CanPlayInstrumentVFX");

	ATennisAvatar_BP_C_CanPlayInstrumentVFX_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisAvatar_BP.TennisAvatar_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATennisAvatar_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.UserConstructionScript");

	ATennisAvatar_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisAvatar_BP.TennisAvatar_BP_C.Timeline_ScaleUp__FinishedFunc
// (BlueprintEvent)
void ATennisAvatar_BP_C::Timeline_ScaleUp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.Timeline_ScaleUp__FinishedFunc");

	ATennisAvatar_BP_C_Timeline_ScaleUp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisAvatar_BP.TennisAvatar_BP_C.Timeline_ScaleUp__UpdateFunc
// (BlueprintEvent)
void ATennisAvatar_BP_C::Timeline_ScaleUp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.Timeline_ScaleUp__UpdateFunc");

	ATennisAvatar_BP_C_Timeline_ScaleUp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisAvatar_BP.TennisAvatar_BP_C.ScaleUp
// (BlueprintCallable, BlueprintEvent)
void ATennisAvatar_BP_C::ScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.ScaleUp");

	ATennisAvatar_BP_C_ScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisAvatar_BP.TennisAvatar_BP_C.TryInitializeMaterial
// (BlueprintCallable, BlueprintEvent)
void ATennisAvatar_BP_C::TryInitializeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.TryInitializeMaterial");

	ATennisAvatar_BP_C_TryInitializeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisAvatar_BP.TennisAvatar_BP_C.RevealAvatar
// (BlueprintCallable, BlueprintEvent)
void ATennisAvatar_BP_C::RevealAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.RevealAvatar");

	ATennisAvatar_BP_C_RevealAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisAvatar_BP.TennisAvatar_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATennisAvatar_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.ReceiveBeginPlay");

	ATennisAvatar_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisAvatar_BP.TennisAvatar_BP_C.CapsuleOpening
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisAvatar_BP_C::CapsuleOpening(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.CapsuleOpening");

	ATennisAvatar_BP_C_CapsuleOpening_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisAvatar_BP.TennisAvatar_BP_C.PlayVFX
// (BlueprintCallable, BlueprintEvent)
void ATennisAvatar_BP_C::PlayVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.PlayVFX");

	ATennisAvatar_BP_C_PlayVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisAvatar_BP.TennisAvatar_BP_C.ExecuteUbergraph_TennisAvatar_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisAvatar_BP_C::ExecuteUbergraph_TennisAvatar_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.ExecuteUbergraph_TennisAvatar_BP");

	ATennisAvatar_BP_C_ExecuteUbergraph_TennisAvatar_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
