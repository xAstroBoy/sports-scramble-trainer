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

// Function MenuInstrument_BP.MenuInstrument_BP_C.BallHitRacket
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenuInstrument_BP_C::BallHitRacket(float BallSpeed, class UClass* BallClass, class AScramBall* Ball, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.BallHitRacket");

	AMenuInstrument_BP_C_BallHitRacket_Params params;
	params.BallSpeed = BallSpeed;
	params.BallClass = BallClass;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.GetHand
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayerHand*        Hand                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenuInstrument_BP_C::GetHand(class AScramPlayerHand** Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.GetHand");

	AMenuInstrument_BP_C_GetHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hand != nullptr)
		*Hand = params.Hand;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.InitializeMaterial
// (Public, BlueprintCallable, BlueprintEvent)
void AMenuInstrument_BP_C::InitializeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.InitializeMaterial");

	AMenuInstrument_BP_C_InitializeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.PlayActivateSound
// (Public, BlueprintCallable, BlueprintEvent)
void AMenuInstrument_BP_C::PlayActivateSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.PlayActivateSound");

	AMenuInstrument_BP_C_PlayActivateSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.PrepareMotionBlur
// (Public, BlueprintCallable, BlueprintEvent)
void AMenuInstrument_BP_C::PrepareMotionBlur()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.PrepareMotionBlur");

	AMenuInstrument_BP_C_PrepareMotionBlur_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.PlaySpawnFX
// (Public, BlueprintCallable, BlueprintEvent)
void AMenuInstrument_BP_C::PlaySpawnFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.PlaySpawnFX");

	AMenuInstrument_BP_C_PlaySpawnFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.SetSFXOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HardHit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenuInstrument_BP_C::SetSFXOverride(class UClass* BallClass, bool HardHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.SetSFXOverride");

	AMenuInstrument_BP_C_SetSFXOverride_Params params;
	params.BallClass = BallClass;
	params.HardHit = HardHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.PlayBallHitSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenuInstrument_BP_C::PlayBallHitSound(float BallSpeed, class UClass* BallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.PlayBallHitSound");

	AMenuInstrument_BP_C_PlayBallHitSound_Params params;
	params.BallSpeed = BallSpeed;
	params.BallClass = BallClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.InitInstrument
// (Public, BlueprintCallable, BlueprintEvent)
void AMenuInstrument_BP_C::InitInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.InitInstrument");

	AMenuInstrument_BP_C_InitInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenuInstrument_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.UserConstructionScript");

	AMenuInstrument_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.Grow__FinishedFunc
// (BlueprintEvent)
void AMenuInstrument_BP_C::Grow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.Grow__FinishedFunc");

	AMenuInstrument_BP_C_Grow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.Grow__UpdateFunc
// (BlueprintEvent)
void AMenuInstrument_BP_C::Grow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.Grow__UpdateFunc");

	AMenuInstrument_BP_C_Grow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.Shrink__FinishedFunc
// (BlueprintEvent)
void AMenuInstrument_BP_C::Shrink__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.Shrink__FinishedFunc");

	AMenuInstrument_BP_C_Shrink__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.Shrink__UpdateFunc
// (BlueprintEvent)
void AMenuInstrument_BP_C::Shrink__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.Shrink__UpdateFunc");

	AMenuInstrument_BP_C_Shrink__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.ShowInstrument
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AMenuInstrument_BP_C::ShowInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.ShowInstrument");

	AMenuInstrument_BP_C_ShowInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.ShrinkRemoveInstrument
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AMenuInstrument_BP_C::ShrinkRemoveInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.ShrinkRemoveInstrument");

	AMenuInstrument_BP_C_ShrinkRemoveInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.InstrumentReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenuInstrument_BP_C::InstrumentReleased(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.InstrumentReleased");

	AMenuInstrument_BP_C_InstrumentReleased_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.DestroyPrimitive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           playOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenuInstrument_BP_C::DestroyPrimitive(bool playOut, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.DestroyPrimitive");

	AMenuInstrument_BP_C_DestroyPrimitive_Params params;
	params.playOut = playOut;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.SpawnEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenuInstrument_BP_C::SpawnEffect(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.SpawnEffect");

	AMenuInstrument_BP_C_SpawnEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.DisableSpawnFX
// (BlueprintCallable, BlueprintEvent)
void AMenuInstrument_BP_C::DisableSpawnFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.DisableSpawnFX");

	AMenuInstrument_BP_C_DisableSpawnFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.OnChangePointerType
// (Event, Protected, BlueprintEvent)
void AMenuInstrument_BP_C::OnChangePointerType()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.OnChangePointerType");

	AMenuInstrument_BP_C_OnChangePointerType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenuInstrument_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.ReceiveBeginPlay");

	AMenuInstrument_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.AdjustMenuPointer
// (BlueprintCallable, BlueprintEvent)
void AMenuInstrument_BP_C::AdjustMenuPointer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.AdjustMenuPointer");

	AMenuInstrument_BP_C_AdjustMenuPointer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.InitializeMenuPointer
// (BlueprintCallable, BlueprintEvent)
void AMenuInstrument_BP_C::InitializeMenuPointer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.InitializeMenuPointer");

	AMenuInstrument_BP_C_InitializeMenuPointer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.OnNotifyInputPress
// (Event, Protected, BlueprintEvent)
void AMenuInstrument_BP_C::OnNotifyInputPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.OnNotifyInputPress");

	AMenuInstrument_BP_C_OnNotifyInputPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuInstrument_BP.MenuInstrument_BP_C.ExecuteUbergraph_MenuInstrument_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenuInstrument_BP_C::ExecuteUbergraph_MenuInstrument_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuInstrument_BP.MenuInstrument_BP_C.ExecuteUbergraph_MenuInstrument_BP");

	AMenuInstrument_BP_C_ExecuteUbergraph_MenuInstrument_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
