#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnBounceSound
struct ABP_TrophyGrabbableBase_C_SpawnBounceSound_Params
{
	struct FVector                                     Normal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SetVisibility
struct ABP_TrophyGrabbableBase_C_SetVisibility_Params
{
	bool                                               visible;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ForceRespawn
struct ABP_TrophyGrabbableBase_C_ForceRespawn_Params
{
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.UserConstructionScript
struct ABP_TrophyGrabbableBase_C_UserConstructionScript_Params
{
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__FinishedFunc
struct ABP_TrophyGrabbableBase_C_Scale__FinishedFunc_Params
{
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__UpdateFunc
struct ABP_TrophyGrabbableBase_C_Scale__UpdateFunc_Params
{
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__FinishedFunc
struct ABP_TrophyGrabbableBase_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__UpdateFunc
struct ABP_TrophyGrabbableBase_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__FinishedFunc
struct ABP_TrophyGrabbableBase_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__UpdateFunc
struct ABP_TrophyGrabbableBase_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.FXRespawn
struct ABP_TrophyGrabbableBase_C_FXRespawn_Params
{
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnFX
struct ABP_TrophyGrabbableBase_C_SpawnFX_Params
{
	bool                                               IsVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.DestroyTrophy
struct ABP_TrophyGrabbableBase_C_DestroyTrophy_Params
{
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ReceiveHit
struct ABP_TrophyGrabbableBase_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Other;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSelfMoved;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitNormal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Play_Grab_SFX
struct ABP_TrophyGrabbableBase_C_Play_Grab_SFX_Params
{
};

// Function BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ExecuteUbergraph_BP_TrophyGrabbableBase
struct ABP_TrophyGrabbableBase_C_ExecuteUbergraph_BP_TrophyGrabbableBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
