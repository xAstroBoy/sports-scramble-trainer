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

// Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ADoubleCross_ParticleTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.UserConstructionScript");

	ADoubleCross_ParticleTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoubleCross_ParticleTrigger_C::OnTriggered(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.OnTriggered");

	ADoubleCross_ParticleTrigger_C_OnTriggered_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.ExecuteUbergraph_DoubleCross_ParticleTrigger
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoubleCross_ParticleTrigger_C::ExecuteUbergraph_DoubleCross_ParticleTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.ExecuteUbergraph_DoubleCross_ParticleTrigger");

	ADoubleCross_ParticleTrigger_C_ExecuteUbergraph_DoubleCross_ParticleTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
