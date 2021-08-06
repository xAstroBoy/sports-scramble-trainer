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

// Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ACMN_ParticleEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.UserConstructionScript");

	ACMN_ParticleEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACMN_ParticleEmitter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.ReceiveBeginPlay");

	ACMN_ParticleEmitter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.OnSystemFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACMN_ParticleEmitter_C::OnSystemFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.OnSystemFinished");

	ACMN_ParticleEmitter_C_OnSystemFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACMN_ParticleEmitter_C::Activate(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.Activate");

	ACMN_ParticleEmitter_C_Activate_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.Set Color Parameter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACMN_ParticleEmitter_C::Set_Color_Parameter(const struct FName& Name, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.Set Color Parameter");

	ACMN_ParticleEmitter_C_Set_Color_Parameter_Params params;
	params.Name = Name;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.ExecuteUbergraph_CMN_ParticleEmitter
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACMN_ParticleEmitter_C::ExecuteUbergraph_CMN_ParticleEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.ExecuteUbergraph_CMN_ParticleEmitter");

	ACMN_ParticleEmitter_C_ExecuteUbergraph_CMN_ParticleEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
