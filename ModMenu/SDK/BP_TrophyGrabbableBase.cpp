/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    09/09/2024                  |
 * ----------------------------------------
 */

#include "../pch.h"
#include <cstdint>
#include <vector>
#include <string>
#include <locale>
#include <unordered_set>
#include "Headers/Global_DEFINES.h"
#include "Headers/BasicTypes.h"
#include "Headers/CoreUObject_UFunction.h"
#include "Headers/BP_TrophyGrabbableBase_PARAMS.h"
#include "Headers/BP_TrophyGrabbableBase_ABP_TrophyGrabbableBase_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_TrophyGrabbableBase
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnBounceSound
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FVector                               Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::SpawnBounceSound(const CoreUObject::FVector& Normal)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnBounceSound");
        
        ABP_TrophyGrabbableBase_C_SpawnBounceSound_Params params {};
        params.Normal = Normal;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SetVisibility
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::SetVisibility(bool visible)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SetVisibility");
        
        ABP_TrophyGrabbableBase_C_SetVisibility_Params params {};
        params.visible = visible;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ForceRespawn
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::ForceRespawn()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ForceRespawn");
        
        ABP_TrophyGrabbableBase_C_ForceRespawn_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.UserConstructionScript");
        
        ABP_TrophyGrabbableBase_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::Scale__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__FinishedFunc");
        
        ABP_TrophyGrabbableBase_C_Scale__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::Scale__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Scale__UpdateFunc");
        
        ABP_TrophyGrabbableBase_C_Scale__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::Timeline_0__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__FinishedFunc");
        
        ABP_TrophyGrabbableBase_C_Timeline_0__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::Timeline_0__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_0__UpdateFunc");
        
        ABP_TrophyGrabbableBase_C_Timeline_0__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::Timeline_1__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__FinishedFunc");
        
        ABP_TrophyGrabbableBase_C_Timeline_1__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::Timeline_1__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Timeline_1__UpdateFunc");
        
        ABP_TrophyGrabbableBase_C_Timeline_1__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.FXRespawn
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::FXRespawn()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.FXRespawn");
        
        ABP_TrophyGrabbableBase_C_FXRespawn_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnFX
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::SpawnFX(bool IsVisible)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.SpawnFX");
        
        ABP_TrophyGrabbableBase_C_SpawnFX_Params params {};
        params.IsVisible = IsVisible;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.DestroyTrophy
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::DestroyTrophy()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.DestroyTrophy");
        
        ABP_TrophyGrabbableBase_C_DestroyTrophy_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ReceiveHit
     *         Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
     * Parameters:
     *         Engine::UPrimitiveComponent*                       MyComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         Engine::AActor*                                    Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         Engine::UPrimitiveComponent*                       OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               bSelfMoved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         CoreUObject::FVector                               HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FVector                               HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FVector                               NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         Engine::FHitResult                                 Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::ReceiveHit(Engine::UPrimitiveComponent* MyComp, Engine::AActor* Other, Engine::UPrimitiveComponent* OtherComp, bool bSelfMoved, const CoreUObject::FVector& HitLocation, const CoreUObject::FVector& HitNormal, const CoreUObject::FVector& NormalImpulse, const Engine::FHitResult& Hit)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ReceiveHit");
        
        ABP_TrophyGrabbableBase_C_ReceiveHit_Params params {};
        params.MyComp = MyComp;
        params.Other = Other;
        params.OtherComp = OtherComp;
        params.bSelfMoved = bSelfMoved;
        params.HitLocation = HitLocation;
        params.HitNormal = HitNormal;
        params.NormalImpulse = NormalImpulse;
        params.Hit = Hit;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Play_Grab_SFX
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::Play_Grab_SFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.Play_Grab_SFX");
        
        ABP_TrophyGrabbableBase_C_Play_Grab_SFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ExecuteUbergraph_BP_TrophyGrabbableBase
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABP_TrophyGrabbableBase_C::ExecuteUbergraph_BP_TrophyGrabbableBase(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyGrabbables/BP_TrophyGrabbableBase.BP_TrophyGrabbableBase_C.ExecuteUbergraph_BP_TrophyGrabbableBase");
        
        ABP_TrophyGrabbableBase_C_ExecuteUbergraph_BP_TrophyGrabbableBase_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif