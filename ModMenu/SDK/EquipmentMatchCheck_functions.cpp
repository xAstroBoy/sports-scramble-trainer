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

// Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchWarn_Enabled?
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           EquipmentMatchWarningAllowed   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AEquipmentMatchCheck_C::EquipmentMatchWarn_Enabled_(class AActor* Actor, bool* EquipmentMatchWarningAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchWarn_Enabled?");

	AEquipmentMatchCheck_C_EquipmentMatchWarn_Enabled__Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EquipmentMatchWarningAllowed != nullptr)
		*EquipmentMatchWarningAllowed = params.EquipmentMatchWarningAllowed;

}


// Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchCheck_Instrument
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATN_Instrument_Base_C*   Instrument                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           LocalPlayer_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATN_Ball_Base_C*         BallOptional                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Match                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AEquipmentMatchCheck_C::EquipmentMatchCheck_Instrument(class ATN_Instrument_Base_C* Instrument, bool LocalPlayer_, class ATN_Ball_Base_C* BallOptional, bool* Match)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchCheck_Instrument");

	AEquipmentMatchCheck_C_EquipmentMatchCheck_Instrument_Params params;
	params.Instrument = Instrument;
	params.LocalPlayer_ = LocalPlayer_;
	params.BallOptional = BallOptional;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Match != nullptr)
		*Match = params.Match;

}


// Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchCheck_Ball
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATN_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Match                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AEquipmentMatchCheck_C::EquipmentMatchCheck_Ball(class ATN_Ball_Base_C* Ball, bool* Match)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchCheck_Ball");

	AEquipmentMatchCheck_C_EquipmentMatchCheck_Ball_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Match != nullptr)
		*Match = params.Match;

}


// Function EquipmentMatchCheck.EquipmentMatchCheck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AEquipmentMatchCheck_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentMatchCheck.EquipmentMatchCheck_C.UserConstructionScript");

	AEquipmentMatchCheck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EquipmentMatchCheck.EquipmentMatchCheck_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AEquipmentMatchCheck_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentMatchCheck.EquipmentMatchCheck_C.ReceiveBeginPlay");

	AEquipmentMatchCheck_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EquipmentMatchCheck.EquipmentMatchCheck_C.ExecuteUbergraph_EquipmentMatchCheck
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEquipmentMatchCheck_C::ExecuteUbergraph_EquipmentMatchCheck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentMatchCheck.EquipmentMatchCheck_C.ExecuteUbergraph_EquipmentMatchCheck");

	AEquipmentMatchCheck_C_ExecuteUbergraph_EquipmentMatchCheck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
