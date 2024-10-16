/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    10/14/2024                  |
 * ----------------------------------------
 */

#include "pch.h"
#include <cstdint>
#include <vector>
#include <string>
#include <locale>
#include <unordered_set>
#include "Headers/Global_DEFINES.h"
#include "Headers/BasicTypes.h"
#include "Headers/CoreUObject_UFunction.h"
#include "Headers/BowlingLane_LeftLoop_PARAMS.h"
#include "Headers/BowlingLane_LeftLoop_ABowlingLane_LeftLoop_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BowlingLane_LeftLoop
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.Initialize
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::Initialize()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.Initialize");
        
        ABowlingLane_LeftLoop_C_Initialize_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.ShutdownLane
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::ShutdownLane(bool* Callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.ShutdownLane");
        
        ABowlingLane_LeftLoop_C_ShutdownLane_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Callback != nullptr)
            *Callback = params.Callback;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.SetupLane
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::SetupLane(bool* Callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.SetupLane");
        
        ABowlingLane_LeftLoop_C_SetupLane_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Callback != nullptr)
            *Callback = params.Callback;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.UserConstructionScript");
        
        ABowlingLane_LeftLoop_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsInOut__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::BlindsInOut__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsInOut__FinishedFunc");
        
        ABowlingLane_LeftLoop_C_BlindsInOut__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsInOut__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::BlindsInOut__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsInOut__UpdateFunc");
        
        ABowlingLane_LeftLoop_C_BlindsInOut__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsUpDown__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::BlindsUpDown__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsUpDown__FinishedFunc");
        
        ABowlingLane_LeftLoop_C_BlindsUpDown__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsUpDown__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::BlindsUpDown__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsUpDown__UpdateFunc");
        
        ABowlingLane_LeftLoop_C_BlindsUpDown__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.LaneUpDown__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::LaneUpDown__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.LaneUpDown__FinishedFunc");
        
        ABowlingLane_LeftLoop_C_LaneUpDown__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.LaneUpDown__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::LaneUpDown__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.LaneUpDown__UpdateFunc");
        
        ABowlingLane_LeftLoop_C_LaneUpDown__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.ReceiveBeginPlay");
        
        ABowlingLane_LeftLoop_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsOut
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::BlindsOut()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsOut");
        
        ABowlingLane_LeftLoop_C_BlindsOut_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsIn
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::BlindsIn()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsIn");
        
        ABowlingLane_LeftLoop_C_BlindsIn_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsDown
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::BlindsDown()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsDown");
        
        ABowlingLane_LeftLoop_C_BlindsDown_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsUp
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::BlindsUp()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.BlindsUp");
        
        ABowlingLane_LeftLoop_C_BlindsUp_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.RaiseBridge
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::RaiseBridge()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.RaiseBridge");
        
        ABowlingLane_LeftLoop_C_RaiseBridge_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.LowerBridge
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::LowerBridge()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.LowerBridge");
        
        ABowlingLane_LeftLoop_C_LowerBridge_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.ExecuteUbergraph_BowlingLane_LeftLoop
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABowlingLane_LeftLoop_C::ExecuteUbergraph_BowlingLane_LeftLoop(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_LeftLoop.BowlingLane_LeftLoop_C.ExecuteUbergraph_BowlingLane_LeftLoop");
        
        ABowlingLane_LeftLoop_C_ExecuteUbergraph_BowlingLane_LeftLoop_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
