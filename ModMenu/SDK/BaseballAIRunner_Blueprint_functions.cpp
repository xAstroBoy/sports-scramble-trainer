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

// Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnRep_Material
// (BlueprintCallable, BlueprintEvent)
void ABaseballAIRunner_Blueprint_C::OnRep_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnRep_Material");

	ABaseballAIRunner_Blueprint_C_OnRep_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ApplyMaterial
// (Public, BlueprintCallable, BlueprintEvent)
void ABaseballAIRunner_Blueprint_C::ApplyMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ApplyMaterial");

	ABaseballAIRunner_Blueprint_C_ApplyMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.SetMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       NewMaterial                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballAIRunner_Blueprint_C::SetMaterial(class UMaterialInstance* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.SetMaterial");

	ABaseballAIRunner_Blueprint_C_SetMaterial_Params params;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABaseballAIRunner_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.UserConstructionScript");

	ABaseballAIRunner_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleUp__FinishedFunc
// (BlueprintEvent)
void ABaseballAIRunner_Blueprint_C::Timeline_ScaleUp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleUp__FinishedFunc");

	ABaseballAIRunner_Blueprint_C_Timeline_ScaleUp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleUp__UpdateFunc
// (BlueprintEvent)
void ABaseballAIRunner_Blueprint_C::Timeline_ScaleUp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleUp__UpdateFunc");

	ABaseballAIRunner_Blueprint_C_Timeline_ScaleUp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleDown__FinishedFunc
// (BlueprintEvent)
void ABaseballAIRunner_Blueprint_C::Timeline_ScaleDown__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleDown__FinishedFunc");

	ABaseballAIRunner_Blueprint_C_Timeline_ScaleDown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleDown__UpdateFunc
// (BlueprintEvent)
void ABaseballAIRunner_Blueprint_C::Timeline_ScaleDown__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleDown__UpdateFunc");

	ABaseballAIRunner_Blueprint_C_Timeline_ScaleDown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABaseballAIRunner_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ReceiveBeginPlay");

	ABaseballAIRunner_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnSpawn
// (Event, Protected, BlueprintEvent)
void ABaseballAIRunner_Blueprint_C::OnSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnSpawn");

	ABaseballAIRunner_Blueprint_C_OnSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnDespawn
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballAIRunner_Blueprint_C::OnDespawn(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnDespawn");

	ABaseballAIRunner_Blueprint_C_OnDespawn_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Public Despawn
// (BlueprintCallable, BlueprintEvent)
void ABaseballAIRunner_Blueprint_C::Public_Despawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Public Despawn");

	ABaseballAIRunner_Blueprint_C_Public_Despawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ExecuteUbergraph_BaseballAIRunner_Blueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballAIRunner_Blueprint_C::ExecuteUbergraph_BaseballAIRunner_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ExecuteUbergraph_BaseballAIRunner_Blueprint");

	ABaseballAIRunner_Blueprint_C_ExecuteUbergraph_BaseballAIRunner_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
