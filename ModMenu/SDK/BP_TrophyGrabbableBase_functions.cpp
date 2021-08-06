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

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnBounceSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyGrabbableBase_C::SpawnBounceSound(const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnBounceSound");

	ABP_TrophyGrabbableBase_C_SpawnBounceSound_Params params;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyGrabbableBase_C::SetVisibility(bool visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SetVisibility");

	ABP_TrophyGrabbableBase_C_SetVisibility_Params params;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ForceRespawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbableBase_C::ForceRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ForceRespawn");

	ABP_TrophyGrabbableBase_C_ForceRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbableBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.UserConstructionScript");

	ABP_TrophyGrabbableBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__FinishedFunc
// (BlueprintEvent)
void ABP_TrophyGrabbableBase_C::Scale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__FinishedFunc");

	ABP_TrophyGrabbableBase_C_Scale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__UpdateFunc
// (BlueprintEvent)
void ABP_TrophyGrabbableBase_C::Scale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__UpdateFunc");

	ABP_TrophyGrabbableBase_C_Scale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABP_TrophyGrabbableBase_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__FinishedFunc");

	ABP_TrophyGrabbableBase_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABP_TrophyGrabbableBase_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__UpdateFunc");

	ABP_TrophyGrabbableBase_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
void ABP_TrophyGrabbableBase_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__FinishedFunc");

	ABP_TrophyGrabbableBase_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
void ABP_TrophyGrabbableBase_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__UpdateFunc");

	ABP_TrophyGrabbableBase_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.FXRespawn
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbableBase_C::FXRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.FXRespawn");

	ABP_TrophyGrabbableBase_C_FXRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyGrabbableBase_C::SpawnFX(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnFX");

	ABP_TrophyGrabbableBase_C_SpawnFX_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.DestroyTrophy
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbableBase_C::DestroyTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.DestroyTrophy");

	ABP_TrophyGrabbableBase_C_DestroyTrophy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_TrophyGrabbableBase_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ReceiveHit");

	ABP_TrophyGrabbableBase_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Play_Grab_SFX
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbableBase_C::Play_Grab_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Play_Grab_SFX");

	ABP_TrophyGrabbableBase_C_Play_Grab_SFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ExecuteUbergraph_BP_TrophyGrabbableBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyGrabbableBase_C::ExecuteUbergraph_BP_TrophyGrabbableBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ExecuteUbergraph_BP_TrophyGrabbableBase");

	ABP_TrophyGrabbableBase_C_ExecuteUbergraph_BP_TrophyGrabbableBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
