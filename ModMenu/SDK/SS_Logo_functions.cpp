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

// Function SS_Logo.SS_Logo_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ASS_Logo_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function SS_Logo.SS_Logo_C.Initialize");

	ASS_Logo_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SS_Logo.SS_Logo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASS_Logo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SS_Logo.SS_Logo_C.UserConstructionScript");

	ASS_Logo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SS_Logo.SS_Logo_C.Timeline_ScaleDown__FinishedFunc
// (BlueprintEvent)
void ASS_Logo_C::Timeline_ScaleDown__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SS_Logo.SS_Logo_C.Timeline_ScaleDown__FinishedFunc");

	ASS_Logo_C_Timeline_ScaleDown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SS_Logo.SS_Logo_C.Timeline_ScaleDown__UpdateFunc
// (BlueprintEvent)
void ASS_Logo_C::Timeline_ScaleDown__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SS_Logo.SS_Logo_C.Timeline_ScaleDown__UpdateFunc");

	ASS_Logo_C_Timeline_ScaleDown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SS_Logo.SS_Logo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASS_Logo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SS_Logo.SS_Logo_C.ReceiveBeginPlay");

	ASS_Logo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SS_Logo.SS_Logo_C.ScaleDown
// (BlueprintCallable, BlueprintEvent)
void ASS_Logo_C::ScaleDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function SS_Logo.SS_Logo_C.ScaleDown");

	ASS_Logo_C_ScaleDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SS_Logo.SS_Logo_C.PlayFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASS_Logo_C::PlayFX(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function SS_Logo.SS_Logo_C.PlayFX");

	ASS_Logo_C_PlayFX_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SS_Logo.SS_Logo_C.Cleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASS_Logo_C::Cleanup(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function SS_Logo.SS_Logo_C.Cleanup");

	ASS_Logo_C_Cleanup_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SS_Logo.SS_Logo_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASS_Logo_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SS_Logo.SS_Logo_C.ReceiveEndPlay");

	ASS_Logo_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SS_Logo.SS_Logo_C.ScaleUp
// (BlueprintCallable, BlueprintEvent)
void ASS_Logo_C::ScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function SS_Logo.SS_Logo_C.ScaleUp");

	ASS_Logo_C_ScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SS_Logo.SS_Logo_C.ExecuteUbergraph_SS_Logo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASS_Logo_C::ExecuteUbergraph_SS_Logo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SS_Logo.SS_Logo_C.ExecuteUbergraph_SS_Logo");

	ASS_Logo_C_ExecuteUbergraph_SS_Logo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
