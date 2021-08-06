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

// Function CubbyEffect.CubbyEffect_C. ToggleLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isOn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACubbyEffect_C::_ToggleLights(bool isOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CubbyEffect.CubbyEffect_C. ToggleLights");

	ACubbyEffect_C__ToggleLights_Params params;
	params.isOn = isOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CubbyEffect.CubbyEffect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ACubbyEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CubbyEffect.CubbyEffect_C.UserConstructionScript");

	ACubbyEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CubbyEffect.CubbyEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACubbyEffect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CubbyEffect.CubbyEffect_C.ReceiveBeginPlay");

	ACubbyEffect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CubbyEffect.CubbyEffect_C.ExecuteUbergraph_CubbyEffect
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACubbyEffect_C::ExecuteUbergraph_CubbyEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CubbyEffect.CubbyEffect_C.ExecuteUbergraph_CubbyEffect");

	ACubbyEffect_C_ExecuteUbergraph_CubbyEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
