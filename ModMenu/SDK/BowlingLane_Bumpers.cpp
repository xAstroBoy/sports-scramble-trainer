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
#include "Headers/BowlingLane_Bumpers_PARAMS.h"
#include "Headers/BowlingLane_Bumpers_ABowlingLane_Bumpers_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BowlingLane_Bumpers
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.SwapAllTabLocations
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_Bumpers_C::SwapAllTabLocations()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.SwapAllTabLocations");
        
        ABowlingLane_Bumpers_C_SwapAllTabLocations_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.SwapTabLocations
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::USceneComponent*                           RedTab                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         Engine::USceneComponent*                           BlueTab                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABowlingLane_Bumpers_C::SwapTabLocations(Engine::USceneComponent* RedTab, Engine::USceneComponent* BlueTab)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.SwapTabLocations");
        
        ABowlingLane_Bumpers_C_SwapTabLocations_Params params {};
        params.RedTab = RedTab;
        params.BlueTab = BlueTab;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.UnflashPinballTab
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         PinballTab_BP::APinballTab_BP_C*                   Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABowlingLane_Bumpers_C::UnflashPinballTab(PinballTab_BP::APinballTab_BP_C* Tab)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.UnflashPinballTab");
        
        ABowlingLane_Bumpers_C_UnflashPinballTab_Params params {};
        params.Tab = Tab;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.FlashClosestPinballTab
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FVector                               Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABowlingLane_Bumpers_C::FlashClosestPinballTab(const CoreUObject::FVector& Position)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.FlashClosestPinballTab");
        
        ABowlingLane_Bumpers_C_FlashClosestPinballTab_Params params {};
        params.Position = Position;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_Bumpers_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.UserConstructionScript");
        
        ABowlingLane_Bumpers_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.BndEvt__StaticMesh_Col_Gutter_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
     *         Flags  -> (HasOutParms, BlueprintEvent)
     * Parameters:
     *         Engine::UPrimitiveComponent*                       HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         Engine::AActor*                                    OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         Engine::UPrimitiveComponent*                       OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FVector                               NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         Engine::FHitResult                                 Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
     *         void                                               ReturnValue
     */
    void ABowlingLane_Bumpers_C::BndEvt__StaticMesh_Col_Gutter_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(Engine::UPrimitiveComponent* HitComponent, Engine::AActor* OtherActor, Engine::UPrimitiveComponent* OtherComp, const CoreUObject::FVector& NormalImpulse, const Engine::FHitResult& Hit)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.BndEvt__StaticMesh_Col_Gutter_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
        
        ABowlingLane_Bumpers_C_BndEvt__StaticMesh_Col_Gutter_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
        params.HitComponent = HitComponent;
        params.OtherActor = OtherActor;
        params.OtherComp = OtherComp;
        params.NormalImpulse = NormalImpulse;
        params.Hit = Hit;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.Local_BounceFX
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FVector                               Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            ModifiedScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               ModifiedBonus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABowlingLane_Bumpers_C::Local_BounceFX(const CoreUObject::FVector& Location, int32_t ModifiedScore, bool ModifiedBonus)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.Local_BounceFX");
        
        ABowlingLane_Bumpers_C_Local_BounceFX_Params params {};
        params.Location = Location;
        params.ModifiedScore = ModifiedScore;
        params.ModifiedBonus = ModifiedBonus;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_Bumpers_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.ReceiveBeginPlay");
        
        ABowlingLane_Bumpers_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.LR_BounceFX
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FVector                               Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            ModifiedScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               ModifiedBonus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABowlingLane_Bumpers_C::LR_BounceFX(const CoreUObject::FVector& Location, int32_t ModifiedScore, bool ModifiedBonus)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.LR_BounceFX");
        
        ABowlingLane_Bumpers_C_LR_BounceFX_Params params {};
        params.Location = Location;
        params.ModifiedScore = ModifiedScore;
        params.ModifiedBonus = ModifiedBonus;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.Multi_BounceFX
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FVector                               Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            ModifiedScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               ModifiedBonus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABowlingLane_Bumpers_C::Multi_BounceFX(const CoreUObject::FVector& Location, int32_t ModifiedScore, bool ModifiedBonus)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.Multi_BounceFX");
        
        ABowlingLane_Bumpers_C_Multi_BounceFX_Params params {};
        params.Location = Location;
        params.ModifiedScore = ModifiedScore;
        params.ModifiedBonus = ModifiedBonus;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.Server_BounceFX
     *         Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FVector                               Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            ModifiedScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               ModifiedBonus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABowlingLane_Bumpers_C::Server_BounceFX(const CoreUObject::FVector& Location, int32_t ModifiedScore, bool ModifiedBonus)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.Server_BounceFX");
        
        ABowlingLane_Bumpers_C_Server_BounceFX_Params params {};
        params.Location = Location;
        params.ModifiedScore = ModifiedScore;
        params.ModifiedBonus = ModifiedBonus;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.ExecuteUbergraph_BowlingLane_Bumpers
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABowlingLane_Bumpers_C::ExecuteUbergraph_BowlingLane_Bumpers(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C.ExecuteUbergraph_BowlingLane_Bumpers");
        
        ABowlingLane_Bumpers_C_ExecuteUbergraph_BowlingLane_Bumpers_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif