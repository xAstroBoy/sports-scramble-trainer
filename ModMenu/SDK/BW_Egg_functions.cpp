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

// Function BW_Egg.BW_Egg_C.HasHatched
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Hatched                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Egg_C::HasHatched(bool* Hatched)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.HasHatched");

	ABW_Egg_C_HasHatched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hatched != nullptr)
		*Hatched = params.Hatched;

}


// Function BW_Egg.BW_Egg_C.Local_Hatch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMotionState            MotionState                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ABW_Egg_C::Local_Hatch(const struct FMotionState& MotionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.Local_Hatch");

	ABW_Egg_C_Local_Hatch_Params params;
	params.MotionState = MotionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Egg.BW_Egg_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_Egg_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.UserConstructionScript");

	ABW_Egg_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Egg.BW_Egg_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_Egg_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.ReceiveBeginPlay");

	ABW_Egg_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Egg.BW_Egg_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Egg_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.ReceiveEndPlay");

	ABW_Egg_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Egg.BW_Egg_C.HatchCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Egg_C::HatchCheck(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.HatchCheck");

	ABW_Egg_C_HatchCheck_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Egg.BW_Egg_C.HatchFX
// (BlueprintCallable, BlueprintEvent)
void ABW_Egg_C::HatchFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.HatchFX");

	ABW_Egg_C_HatchFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Egg.BW_Egg_C.Hide Egg
// (BlueprintCallable, BlueprintEvent)
void ABW_Egg_C::Hide_Egg()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.Hide Egg");

	ABW_Egg_C_Hide_Egg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Egg.BW_Egg_C.Turkey Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPrimitiveActor*    Primitve_Actor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Egg_C::Turkey_Destroyed(class AScramPrimitiveActor* Primitve_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.Turkey Destroyed");

	ABW_Egg_C_Turkey_Destroyed_Params params;
	params.Primitve_Actor = Primitve_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Egg.BW_Egg_C.SM_Hatch
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMotionState            MotionState                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ABW_Egg_C::SM_Hatch(const struct FMotionState& MotionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.SM_Hatch");

	ABW_Egg_C_SM_Hatch_Params params;
	params.MotionState = MotionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Egg.BW_Egg_C.Multi_Hatch
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMotionState            MotionState                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ABW_Egg_C::Multi_Hatch(const struct FMotionState& MotionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.Multi_Hatch");

	ABW_Egg_C_Multi_Hatch_Params params;
	params.MotionState = MotionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Egg.BW_Egg_C.ExecuteUbergraph_BW_Egg
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Egg_C::ExecuteUbergraph_BW_Egg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.ExecuteUbergraph_BW_Egg");

	ABW_Egg_C_ExecuteUbergraph_BW_Egg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
