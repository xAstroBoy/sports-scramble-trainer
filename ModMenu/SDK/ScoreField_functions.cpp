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

// Function ScoreField.ScoreField_C.TurnOnMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScoreField_C::TurnOnMesh(class UStaticMeshComponent* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreField.ScoreField_C.TurnOnMesh");

	AScoreField_C_TurnOnMesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScoreField.ScoreField_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AScoreField_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreField.ScoreField_C.Initialize");

	AScoreField_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScoreField.ScoreField_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScoreField_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreField.ScoreField_C.UserConstructionScript");

	AScoreField_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScoreField.ScoreField_C.OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScoreField_C::OnTriggered(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreField.ScoreField_C.OnTriggered");

	AScoreField_C_OnTriggered_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScoreField.ScoreField_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScoreField_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreField.ScoreField_C.ReceiveBeginPlay");

	AScoreField_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScoreField.ScoreField_C.ResetScore
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScoreField_C::ResetScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreField.ScoreField_C.ResetScore");

	AScoreField_C_ResetScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScoreField.ScoreField_C.Local_Triggered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ModifiedScore                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ModifiedBonus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScoreField_C::Local_Triggered(int ModifiedScore, bool ModifiedBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreField.ScoreField_C.Local_Triggered");

	AScoreField_C_Local_Triggered_Params params;
	params.ModifiedScore = ModifiedScore;
	params.ModifiedBonus = ModifiedBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScoreField.ScoreField_C.DeactivateScoreField
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScoreField_C::DeactivateScoreField()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreField.ScoreField_C.DeactivateScoreField");

	AScoreField_C_DeactivateScoreField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScoreField.ScoreField_C.LR_Triggered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ModifiedScore                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ModifiedBonus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScoreField_C::LR_Triggered(int ModifiedScore, bool ModifiedBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreField.ScoreField_C.LR_Triggered");

	AScoreField_C_LR_Triggered_Params params;
	params.ModifiedScore = ModifiedScore;
	params.ModifiedBonus = ModifiedBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScoreField.ScoreField_C.Multi_Triggered
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ModifiedScore                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ModifiedBonus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScoreField_C::Multi_Triggered(int ModifiedScore, bool ModifiedBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreField.ScoreField_C.Multi_Triggered");

	AScoreField_C_Multi_Triggered_Params params;
	params.ModifiedScore = ModifiedScore;
	params.ModifiedBonus = ModifiedBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScoreField.ScoreField_C.Server_Triggered
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ModifiedScore                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ModifiedBonus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScoreField_C::Server_Triggered(int ModifiedScore, bool ModifiedBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreField.ScoreField_C.Server_Triggered");

	AScoreField_C_Server_Triggered_Params params;
	params.ModifiedScore = ModifiedScore;
	params.ModifiedBonus = ModifiedBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScoreField.ScoreField_C.ExecuteUbergraph_ScoreField
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScoreField_C::ExecuteUbergraph_ScoreField(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreField.ScoreField_C.ExecuteUbergraph_ScoreField");

	AScoreField_C_ExecuteUbergraph_ScoreField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
