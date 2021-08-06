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

// Function DB_Instrument_Base.DB_Instrument_Base_C.BallHitRacket
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADB_Instrument_Base_C::BallHitRacket(float BallSpeed, class UClass* BallClass, class AScramBall* Ball, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.BallHitRacket");

	ADB_Instrument_Base_C_BallHitRacket_Params params;
	params.BallSpeed = BallSpeed;
	params.BallClass = BallClass;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function DB_Instrument_Base.DB_Instrument_Base_C.SetSFXOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HardHit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADB_Instrument_Base_C::SetSFXOverride(class UClass* BallClass, bool HardHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.SetSFXOverride");

	ADB_Instrument_Base_C_SetSFXOverride_Params params;
	params.BallClass = BallClass;
	params.HardHit = HardHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DB_Instrument_Base.DB_Instrument_Base_C.PlayBallHitSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BallSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADB_Instrument_Base_C::PlayBallHitSound(float BallSpeed, class UClass* BallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.PlayBallHitSound");

	ADB_Instrument_Base_C_PlayBallHitSound_Params params;
	params.BallSpeed = BallSpeed;
	params.BallClass = BallClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DB_Instrument_Base.DB_Instrument_Base_C.InitInstrument
// (Public, BlueprintCallable, BlueprintEvent)
void ADB_Instrument_Base_C::InitInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.InitInstrument");

	ADB_Instrument_Base_C_InitInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DB_Instrument_Base.DB_Instrument_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ADB_Instrument_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.UserConstructionScript");

	ADB_Instrument_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DB_Instrument_Base.DB_Instrument_Base_C.Grow__FinishedFunc
// (BlueprintEvent)
void ADB_Instrument_Base_C::Grow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.Grow__FinishedFunc");

	ADB_Instrument_Base_C_Grow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DB_Instrument_Base.DB_Instrument_Base_C.Grow__UpdateFunc
// (BlueprintEvent)
void ADB_Instrument_Base_C::Grow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.Grow__UpdateFunc");

	ADB_Instrument_Base_C_Grow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DB_Instrument_Base.DB_Instrument_Base_C.Shrink__FinishedFunc
// (BlueprintEvent)
void ADB_Instrument_Base_C::Shrink__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.Shrink__FinishedFunc");

	ADB_Instrument_Base_C_Shrink__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DB_Instrument_Base.DB_Instrument_Base_C.Shrink__UpdateFunc
// (BlueprintEvent)
void ADB_Instrument_Base_C::Shrink__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.Shrink__UpdateFunc");

	ADB_Instrument_Base_C_Shrink__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DB_Instrument_Base.DB_Instrument_Base_C.ShowInstrument
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ADB_Instrument_Base_C::ShowInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.ShowInstrument");

	ADB_Instrument_Base_C_ShowInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DB_Instrument_Base.DB_Instrument_Base_C.ShrinkRemoveInstrument
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ADB_Instrument_Base_C::ShrinkRemoveInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.ShrinkRemoveInstrument");

	ADB_Instrument_Base_C_ShrinkRemoveInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DB_Instrument_Base.DB_Instrument_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADB_Instrument_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.ReceiveBeginPlay");

	ADB_Instrument_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DB_Instrument_Base.DB_Instrument_Base_C.InstrumentReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADB_Instrument_Base_C::InstrumentReleased(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.InstrumentReleased");

	ADB_Instrument_Base_C_InstrumentReleased_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DB_Instrument_Base.DB_Instrument_Base_C.DestroyPrimitive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           playOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADB_Instrument_Base_C::DestroyPrimitive(bool playOut, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.DestroyPrimitive");

	ADB_Instrument_Base_C_DestroyPrimitive_Params params;
	params.playOut = playOut;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DB_Instrument_Base.DB_Instrument_Base_C.ExecuteUbergraph_DB_Instrument_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADB_Instrument_Base_C::ExecuteUbergraph_DB_Instrument_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DB_Instrument_Base.DB_Instrument_Base_C.ExecuteUbergraph_DB_Instrument_Base");

	ADB_Instrument_Base_C_ExecuteUbergraph_DB_Instrument_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
