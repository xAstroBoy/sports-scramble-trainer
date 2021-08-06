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

// Function BB_Equipment_Set.BB_Equipment_Set_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Equipment_Set_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Equipment_Set.BB_Equipment_Set_C.UserConstructionScript");

	ABB_Equipment_Set_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Equipment_Set.BB_Equipment_Set_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Equipment_Set_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Equipment_Set.BB_Equipment_Set_C.ReceiveBeginPlay");

	ABB_Equipment_Set_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Equipment_Set.BB_Equipment_Set_C.PostEquipmentSpawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramPrimitiveGrabbable* DominantHandSpawnedEquipment   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScramPrimitiveGrabbable* OffHandSpawnedEquipment        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Equipment_Set_C::PostEquipmentSpawn(class AScramPrimitiveGrabbable* DominantHandSpawnedEquipment, class AScramPrimitiveGrabbable* OffHandSpawnedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Equipment_Set.BB_Equipment_Set_C.PostEquipmentSpawn");

	ABB_Equipment_Set_C_PostEquipmentSpawn_Params params;
	params.DominantHandSpawnedEquipment = DominantHandSpawnedEquipment;
	params.OffHandSpawnedEquipment = OffHandSpawnedEquipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Equipment_Set.BB_Equipment_Set_C.ExecuteUbergraph_BB_Equipment_Set
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Equipment_Set_C::ExecuteUbergraph_BB_Equipment_Set(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Equipment_Set.BB_Equipment_Set_C.ExecuteUbergraph_BB_Equipment_Set");

	ABB_Equipment_Set_C_ExecuteUbergraph_BB_Equipment_Set_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Equipment_Set.BB_Equipment_Set_C.EquipmentGrabbed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DominantHand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABB_Mitt_C*              Mitt                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Equipment_Set_C::EquipmentGrabbed__DelegateSignature(class AActor* DominantHand, class ABB_Mitt_C* Mitt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Equipment_Set.BB_Equipment_Set_C.EquipmentGrabbed__DelegateSignature");

	ABB_Equipment_Set_C_EquipmentGrabbed__DelegateSignature_Params params;
	params.DominantHand = DominantHand;
	params.Mitt = Mitt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
