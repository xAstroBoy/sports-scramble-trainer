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
#include "Headers/BowlingLane_IceRink_PARAMS.h"
#include "Headers/BowlingLane_IceRink_ABowlingLane_IceRink_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BowlingLane_IceRink
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.ShutdownLane
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::ShutdownLane(bool* Callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.ShutdownLane");
        
        ABowlingLane_IceRink_C_ShutdownLane_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Callback != nullptr)
            *Callback = params.Callback;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.SetupLane
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::SetupLane(bool* Callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.SetupLane");
        
        ABowlingLane_IceRink_C_SetupLane_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Callback != nullptr)
            *Callback = params.Callback;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.UserConstructionScript");
        
        ABowlingLane_IceRink_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.GoalieAppearDisappear__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::GoalieAppearDisappear__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.GoalieAppearDisappear__FinishedFunc");
        
        ABowlingLane_IceRink_C_GoalieAppearDisappear__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.GoalieAppearDisappear__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::GoalieAppearDisappear__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.GoalieAppearDisappear__UpdateFunc");
        
        ABowlingLane_IceRink_C_GoalieAppearDisappear__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.ReceiveBeginPlay");
        
        ABowlingLane_IceRink_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.RegisterBallAsInstigator
     *         Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::UPrimitiveComponent*                       HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         Engine::AActor*                                    OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         Engine::UPrimitiveComponent*                       OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FVector                               NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         Engine::FHitResult                                 Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::RegisterBallAsInstigator(Engine::UPrimitiveComponent* HitComponent, Engine::AActor* OtherActor, Engine::UPrimitiveComponent* OtherComp, const CoreUObject::FVector& NormalImpulse, const Engine::FHitResult& Hit)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.RegisterBallAsInstigator");
        
        ABowlingLane_IceRink_C_RegisterBallAsInstigator_Params params {};
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
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.Local_ExplodeGoalie
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::Local_ExplodeGoalie()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.Local_ExplodeGoalie");
        
        ABowlingLane_IceRink_C_Local_ExplodeGoalie_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.Change Lane State
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               StateRunning                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::ChangeLaneState(bool StateRunning)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.Change Lane State");
        
        ABowlingLane_IceRink_C_ChangeLaneState_Params params {};
        params.StateRunning = StateRunning;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.GoalieAppear
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::GoalieAppear()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.GoalieAppear");
        
        ABowlingLane_IceRink_C_GoalieAppear_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.GoalieDisappear
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::GoalieDisappear()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.GoalieDisappear");
        
        ABowlingLane_IceRink_C_GoalieDisappear_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.LR_ExplodeGoalie
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::LR_ExplodeGoalie()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.LR_ExplodeGoalie");
        
        ABowlingLane_IceRink_C_LR_ExplodeGoalie_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.Multi_ExplodeGoalie
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::Multi_ExplodeGoalie()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.Multi_ExplodeGoalie");
        
        ABowlingLane_IceRink_C_Multi_ExplodeGoalie_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.Server_ExplodeGoalie
     *         Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::Server_ExplodeGoalie()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.Server_ExplodeGoalie");
        
        ABowlingLane_IceRink_C_Server_ExplodeGoalie_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.ExecuteUbergraph_BowlingLane_IceRink
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABowlingLane_IceRink_C::ExecuteUbergraph_BowlingLane_IceRink(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_IceRink.BowlingLane_IceRink_C.ExecuteUbergraph_BowlingLane_IceRink");
        
        ABowlingLane_IceRink_C_ExecuteUbergraph_BowlingLane_IceRink_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif