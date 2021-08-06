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

// Function BowlingLane_Base.BowlingLane_Base_C.GetAlley
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingAlley*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ABowlingAlley* ABowlingLane_Base_C::GetAlley()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.GetAlley");

	ABowlingLane_Base_C_GetAlley_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BowlingLane_Base.BowlingLane_Base_C.IsLocalPlayerLane
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLocalPlayerLane              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABowlingLane_Base_C::IsLocalPlayerLane(bool* IsLocalPlayerLane)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.IsLocalPlayerLane");

	ABowlingLane_Base_C_IsLocalPlayerLane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLocalPlayerLane != nullptr)
		*IsLocalPlayerLane = params.IsLocalPlayerLane;

}


// Function BowlingLane_Base.BowlingLane_Base_C.Teardown
// (Public, BlueprintCallable, BlueprintEvent)
void ABowlingLane_Base_C::Teardown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.Teardown");

	ABowlingLane_Base_C_Teardown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingLane_Base.BowlingLane_Base_C.ShutdownLane
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABowlingLane_Base_C::ShutdownLane(bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.ShutdownLane");

	ABowlingLane_Base_C_ShutdownLane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BowlingLane_Base.BowlingLane_Base_C.SetupLane
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABowlingLane_Base_C::SetupLane(bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.SetupLane");

	ABowlingLane_Base_C_SetupLane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BowlingLane_Base.BowlingLane_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABowlingLane_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.UserConstructionScript");

	ABowlingLane_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingLane_Base.BowlingLane_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingLane_Base_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.ReceiveEndPlay");

	ABowlingLane_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingLane_Base.BowlingLane_Base_C.BndEvt__StaticMesh_Col_Gutter_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABowlingLane_Base_C::BndEvt__StaticMesh_Col_Gutter_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.BndEvt__StaticMesh_Col_Gutter_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABowlingLane_Base_C_BndEvt__StaticMesh_Col_Gutter_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingLane_Base.BowlingLane_Base_C.LR_AddScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AddedScore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingLane_Base_C::LR_AddScore(class AActor* Instigator, int AddedScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.LR_AddScore");

	ABowlingLane_Base_C_LR_AddScore_Params params;
	params.Instigator = Instigator;
	params.AddedScore = AddedScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingLane_Base.BowlingLane_Base_C.Multi_AddScore
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AddedScore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingLane_Base_C::Multi_AddScore(class AActor* Instigator, int AddedScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.Multi_AddScore");

	ABowlingLane_Base_C_Multi_AddScore_Params params;
	params.Instigator = Instigator;
	params.AddedScore = AddedScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingLane_Base.BowlingLane_Base_C.Server_AddScore
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AddedScore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingLane_Base_C::Server_AddScore(class AActor* Instigator, int AddedScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.Server_AddScore");

	ABowlingLane_Base_C_Server_AddScore_Params params;
	params.Instigator = Instigator;
	params.AddedScore = AddedScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingLane_Base.BowlingLane_Base_C.Local_AddScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AddedScore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingLane_Base_C::Local_AddScore(class AActor* Instigator, int AddedScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.Local_AddScore");

	ABowlingLane_Base_C_Local_AddScore_Params params;
	params.Instigator = Instigator;
	params.AddedScore = AddedScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingLane_Base.BowlingLane_Base_C.ExecuteUbergraph_BowlingLane_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABowlingLane_Base_C::ExecuteUbergraph_BowlingLane_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.ExecuteUbergraph_BowlingLane_Base");

	ABowlingLane_Base_C_ExecuteUbergraph_BowlingLane_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingLane_Base.BowlingLane_Base_C.LaneReadyForSwap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABowlingLane_Base_C::LaneReadyForSwap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.LaneReadyForSwap__DelegateSignature");

	ABowlingLane_Base_C_LaneReadyForSwap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BowlingLane_Base.BowlingLane_Base_C.LaneSetupComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABowlingLane_Base_C::LaneSetupComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BowlingLane_Base.BowlingLane_Base_C.LaneSetupComplete__DelegateSignature");

	ABowlingLane_Base_C_LaneSetupComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
