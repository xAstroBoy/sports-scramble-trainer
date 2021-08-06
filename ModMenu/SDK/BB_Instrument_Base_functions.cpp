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

// Function BB_Instrument_Base.BB_Instrument_Base_C.BallHitRacket
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Instrument_Base_C::BallHitRacket(float BallSpeed, class UClass* BallClass, class AScramBall* Ball, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.BallHitRacket");

	ABB_Instrument_Base_C_BallHitRacket_Params params;
	params.BallSpeed = BallSpeed;
	params.BallClass = BallClass;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.UpdateMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Instrument_Base_C::UpdateMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.UpdateMesh");

	ABB_Instrument_Base_C_UpdateMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.SelectRandomReplacement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Instrument_Base_C::SelectRandomReplacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.SelectRandomReplacement");

	ABB_Instrument_Base_C_SelectRandomReplacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.PlaySpawnFX
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Instrument_Base_C::PlaySpawnFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.PlaySpawnFX");

	ABB_Instrument_Base_C_PlaySpawnFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.SetSFXOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HardHit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Instrument_Base_C::SetSFXOverride(class UClass* BallClass, bool HardHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.SetSFXOverride");

	ABB_Instrument_Base_C_SetSFXOverride_Params params;
	params.BallClass = BallClass;
	params.HardHit = HardHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.PlayBallHitSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Instrument_Base_C::PlayBallHitSound(float BallSpeed, class UClass* BallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.PlayBallHitSound");

	ABB_Instrument_Base_C_PlayBallHitSound_Params params;
	params.BallSpeed = BallSpeed;
	params.BallClass = BallClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.InitInstrument
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Instrument_Base_C::InitInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.InitInstrument");

	ABB_Instrument_Base_C_InitInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Instrument_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.UserConstructionScript");

	ABB_Instrument_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.Grow__FinishedFunc
// (BlueprintEvent)
void ABB_Instrument_Base_C::Grow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.Grow__FinishedFunc");

	ABB_Instrument_Base_C_Grow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.Grow__UpdateFunc
// (BlueprintEvent)
void ABB_Instrument_Base_C::Grow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.Grow__UpdateFunc");

	ABB_Instrument_Base_C_Grow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.Shrink__FinishedFunc
// (BlueprintEvent)
void ABB_Instrument_Base_C::Shrink__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.Shrink__FinishedFunc");

	ABB_Instrument_Base_C_Shrink__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.Shrink__UpdateFunc
// (BlueprintEvent)
void ABB_Instrument_Base_C::Shrink__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.Shrink__UpdateFunc");

	ABB_Instrument_Base_C_Shrink__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.OnLoaded_427B66CA4A4B8B64A37F659956E60B75
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Instrument_Base_C::OnLoaded_427B66CA4A4B8B64A37F659956E60B75(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.OnLoaded_427B66CA4A4B8B64A37F659956E60B75");

	ABB_Instrument_Base_C_OnLoaded_427B66CA4A4B8B64A37F659956E60B75_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.ShowInstrument
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABB_Instrument_Base_C::ShowInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.ShowInstrument");

	ABB_Instrument_Base_C_ShowInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.ShrinkRemoveInstrument
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABB_Instrument_Base_C::ShrinkRemoveInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.ShrinkRemoveInstrument");

	ABB_Instrument_Base_C_ShrinkRemoveInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Instrument_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.ReceiveBeginPlay");

	ABB_Instrument_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Instrument_Base_C::InstrumentReleased(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentReleased");

	ABB_Instrument_Base_C_InstrumentReleased_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.DestroyPrimitive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           playOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Instrument_Base_C::DestroyPrimitive(bool playOut, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.DestroyPrimitive");

	ABB_Instrument_Base_C_DestroyPrimitive_Params params;
	params.playOut = playOut;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentSelected
// (BlueprintCallable, BlueprintEvent)
void ABB_Instrument_Base_C::InstrumentSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentSelected");

	ABB_Instrument_Base_C_InstrumentSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.SpawnEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Instrument_Base_C::SpawnEffect(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.SpawnEffect");

	ABB_Instrument_Base_C_SpawnEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.DisableSpawnFX
// (BlueprintCallable, BlueprintEvent)
void ABB_Instrument_Base_C::DisableSpawnFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.DisableSpawnFX");

	ABB_Instrument_Base_C_DisableSpawnFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Instrument_Base_C::InstrumentHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentHit");

	ABB_Instrument_Base_C_InstrumentHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Instrument_Base.BB_Instrument_Base_C.ExecuteUbergraph_BB_Instrument_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Instrument_Base_C::ExecuteUbergraph_BB_Instrument_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Instrument_Base.BB_Instrument_Base_C.ExecuteUbergraph_BB_Instrument_Base");

	ABB_Instrument_Base_C_ExecuteUbergraph_BB_Instrument_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
