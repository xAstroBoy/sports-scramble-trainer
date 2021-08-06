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

// Function ScrambleEvent_Base.ScrambleEvent_Base_C.GetNewBallType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UClass* AScrambleEvent_Base_C::GetNewBallType()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrambleEvent_Base.ScrambleEvent_Base_C.GetNewBallType");

	AScrambleEvent_Base_C_GetNewBallType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ScrambleEvent_Base.ScrambleEvent_Base_C.QueueScrambleEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         BallHitDelegate                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FScriptDelegate         OnDestroyedDelegate            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void AScrambleEvent_Base_C::QueueScrambleEffect(const struct FScriptDelegate& BallHitDelegate, const struct FScriptDelegate& OnDestroyedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrambleEvent_Base.ScrambleEvent_Base_C.QueueScrambleEffect");

	AScrambleEvent_Base_C_QueueScrambleEffect_Params params;
	params.BallHitDelegate = BallHitDelegate;
	params.OnDestroyedDelegate = OnDestroyedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScrambleEvent_Base.ScrambleEvent_Base_C.ActivateScrambleEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATN_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ScrambleEffectSuccess          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScrambleEvent_Base_C::ActivateScrambleEffect(class ATN_Ball_Base_C* Ball, class AActor* OtherActor, bool* ScrambleEffectSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrambleEvent_Base.ScrambleEvent_Base_C.ActivateScrambleEffect");

	AScrambleEvent_Base_C_ActivateScrambleEffect_Params params;
	params.Ball = Ball;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScrambleEffectSuccess != nullptr)
		*ScrambleEffectSuccess = params.ScrambleEffectSuccess;

}


// Function ScrambleEvent_Base.ScrambleEvent_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScrambleEvent_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrambleEvent_Base.ScrambleEvent_Base_C.UserConstructionScript");

	AScrambleEvent_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScrambleEvent_Base.ScrambleEvent_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScrambleEvent_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrambleEvent_Base.ScrambleEvent_Base_C.ReceiveBeginPlay");

	AScrambleEvent_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScrambleEvent_Base.ScrambleEvent_Base_C.BallHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScrambleEvent_Base_C::BallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrambleEvent_Base.ScrambleEvent_Base_C.BallHit");

	AScrambleEvent_Base_C_BallHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScrambleEvent_Base.ScrambleEvent_Base_C.DestroySelf
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScrambleEvent_Base_C::DestroySelf(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrambleEvent_Base.ScrambleEvent_Base_C.DestroySelf");

	AScrambleEvent_Base_C_DestroySelf_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScrambleEvent_Base.ScrambleEvent_Base_C.PerformScrambleEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATN_Ball_Base_C*         NewBall                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScrambleEvent_Base_C::PerformScrambleEffect(class ATN_Ball_Base_C* NewBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrambleEvent_Base.ScrambleEvent_Base_C.PerformScrambleEffect");

	AScrambleEvent_Base_C_PerformScrambleEffect_Params params;
	params.NewBall = NewBall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScrambleEvent_Base.ScrambleEvent_Base_C.CheckEquipmentMatch
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATN_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckInstrument                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATN_Instrument_Base_C*   Instrument                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           LocalPlayerInstrument_         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScrambleEvent_Base_C::CheckEquipmentMatch(class ATN_Ball_Base_C* Ball, bool CheckInstrument, class ATN_Instrument_Base_C* Instrument, bool LocalPlayerInstrument_)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrambleEvent_Base.ScrambleEvent_Base_C.CheckEquipmentMatch");

	AScrambleEvent_Base_C_CheckEquipmentMatch_Params params;
	params.Ball = Ball;
	params.CheckInstrument = CheckInstrument;
	params.Instrument = Instrument;
	params.LocalPlayerInstrument_ = LocalPlayerInstrument_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScrambleEvent_Base.ScrambleEvent_Base_C.ExecuteUbergraph_ScrambleEvent_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScrambleEvent_Base_C::ExecuteUbergraph_ScrambleEvent_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrambleEvent_Base.ScrambleEvent_Base_C.ExecuteUbergraph_ScrambleEvent_Base");

	AScrambleEvent_Base_C_ExecuteUbergraph_ScrambleEvent_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
