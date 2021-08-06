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

// Function SceneMaterialVariables.SceneMaterialVariables_C.SetSceneVariablesMaster
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASceneMaterialVariables_C::SetSceneVariablesMaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneMaterialVariables.SceneMaterialVariables_C.SetSceneVariablesMaster");

	ASceneMaterialVariables_C_SetSceneVariablesMaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SceneMaterialVariables.SceneMaterialVariables_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASceneMaterialVariables_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneMaterialVariables.SceneMaterialVariables_C.UserConstructionScript");

	ASceneMaterialVariables_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SceneMaterialVariables.SceneMaterialVariables_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASceneMaterialVariables_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneMaterialVariables.SceneMaterialVariables_C.ReceiveBeginPlay");

	ASceneMaterialVariables_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SceneMaterialVariables.SceneMaterialVariables_C.ExecuteUbergraph_SceneMaterialVariables
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASceneMaterialVariables_C::ExecuteUbergraph_SceneMaterialVariables(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneMaterialVariables.SceneMaterialVariables_C.ExecuteUbergraph_SceneMaterialVariables");

	ASceneMaterialVariables_C_ExecuteUbergraph_SceneMaterialVariables_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
