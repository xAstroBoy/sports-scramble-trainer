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

// Function TN_Instrument_Base.TN_Instrument_Base_C.BallHitRacket
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Instrument_Base_C::BallHitRacket(float BallSpeed, class UClass* BallClass, class AScramBall* Ball, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.BallHitRacket");

	ATN_Instrument_Base_C_BallHitRacket_Params params;
	params.BallSpeed = BallSpeed;
	params.BallClass = BallClass;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.UpdateMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Instrument_Base_C::UpdateMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.UpdateMesh");

	ATN_Instrument_Base_C_UpdateMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.InitializeColors&Material
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Instrument_Base_C::InitializeColors_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.InitializeColors&Material");

	ATN_Instrument_Base_C_InitializeColors_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.PrepareMotionBlur
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Instrument_Base_C::PrepareMotionBlur()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.PrepareMotionBlur");

	ATN_Instrument_Base_C_PrepareMotionBlur_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.PlaySpawnFX
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Instrument_Base_C::PlaySpawnFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.PlaySpawnFX");

	ATN_Instrument_Base_C_PlaySpawnFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.SetSFXOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HardHit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Instrument_Base_C::SetSFXOverride(class UClass* BallClass, bool HardHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.SetSFXOverride");

	ATN_Instrument_Base_C_SetSFXOverride_Params params;
	params.BallClass = BallClass;
	params.HardHit = HardHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.PlayBallHitSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Instrument_Base_C::PlayBallHitSound(float BallSpeed, class UClass* BallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.PlayBallHitSound");

	ATN_Instrument_Base_C_PlayBallHitSound_Params params;
	params.BallSpeed = BallSpeed;
	params.BallClass = BallClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.InitInstrument
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Instrument_Base_C::InitInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.InitInstrument");

	ATN_Instrument_Base_C_InitInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_Instrument_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.UserConstructionScript");

	ATN_Instrument_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.Grow__FinishedFunc
// (BlueprintEvent)
void ATN_Instrument_Base_C::Grow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.Grow__FinishedFunc");

	ATN_Instrument_Base_C_Grow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.Grow__UpdateFunc
// (BlueprintEvent)
void ATN_Instrument_Base_C::Grow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.Grow__UpdateFunc");

	ATN_Instrument_Base_C_Grow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.Shrink__FinishedFunc
// (BlueprintEvent)
void ATN_Instrument_Base_C::Shrink__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.Shrink__FinishedFunc");

	ATN_Instrument_Base_C_Shrink__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.Shrink__UpdateFunc
// (BlueprintEvent)
void ATN_Instrument_Base_C::Shrink__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.Shrink__UpdateFunc");

	ATN_Instrument_Base_C_Shrink__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.Timeline_Emissive__FinishedFunc
// (BlueprintEvent)
void ATN_Instrument_Base_C::Timeline_Emissive__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.Timeline_Emissive__FinishedFunc");

	ATN_Instrument_Base_C_Timeline_Emissive__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.Timeline_Emissive__UpdateFunc
// (BlueprintEvent)
void ATN_Instrument_Base_C::Timeline_Emissive__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.Timeline_Emissive__UpdateFunc");

	ATN_Instrument_Base_C_Timeline_Emissive__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.ShowInstrument
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ATN_Instrument_Base_C::ShowInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.ShowInstrument");

	ATN_Instrument_Base_C_ShowInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.ShrinkRemoveInstrument
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ATN_Instrument_Base_C::ShrinkRemoveInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.ShrinkRemoveInstrument");

	ATN_Instrument_Base_C_ShrinkRemoveInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_Instrument_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.ReceiveBeginPlay");

	ATN_Instrument_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.InstrumentReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Instrument_Base_C::InstrumentReleased(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.InstrumentReleased");

	ATN_Instrument_Base_C_InstrumentReleased_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.DestroyPrimitive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           playOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Instrument_Base_C::DestroyPrimitive(bool playOut, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.DestroyPrimitive");

	ATN_Instrument_Base_C_DestroyPrimitive_Params params;
	params.playOut = playOut;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.SpawnEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Instrument_Base_C::SpawnEffect(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.SpawnEffect");

	ATN_Instrument_Base_C_SpawnEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.DisableSpawnFX
// (BlueprintCallable, BlueprintEvent)
void ATN_Instrument_Base_C::DisableSpawnFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.DisableSpawnFX");

	ATN_Instrument_Base_C_DisableSpawnFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.PlayHitShaderFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_ETennisShotType ShotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_ETennisBallType BallType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Instrument_Base_C::PlayHitShaderFX(SportsScramble_ETennisShotType ShotType, SportsScramble_ETennisBallType BallType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.PlayHitShaderFX");

	ATN_Instrument_Base_C_PlayHitShaderFX_Params params;
	params.ShotType = ShotType;
	params.BallType = BallType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.TN_PlayAvatarSwingVFX
// (BlueprintCallable, BlueprintEvent)
void ATN_Instrument_Base_C::TN_PlayAvatarSwingVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.TN_PlayAvatarSwingVFX");

	ATN_Instrument_Base_C_TN_PlayAvatarSwingVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.TN_PlayAvatarHitVFX
// (BlueprintCallable, BlueprintEvent)
void ATN_Instrument_Base_C::TN_PlayAvatarHitVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.TN_PlayAvatarHitVFX");

	ATN_Instrument_Base_C_TN_PlayAvatarHitVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Instrument_Base.TN_Instrument_Base_C.ExecuteUbergraph_TN_Instrument_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Instrument_Base_C::ExecuteUbergraph_TN_Instrument_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Instrument_Base.TN_Instrument_Base_C.ExecuteUbergraph_TN_Instrument_Base");

	ATN_Instrument_Base_C_ExecuteUbergraph_TN_Instrument_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
