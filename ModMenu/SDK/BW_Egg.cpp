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
#include "Headers/BW_Egg_PARAMS.h"
#include "Headers/BW_Egg_ABW_Egg_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_Egg
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.HasHatched
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         bool                                               Hatched                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABW_Egg_C::HasHatched(bool* Hatched)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.HasHatched");
        
        ABW_Egg_C_HasHatched_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Hatched != nullptr)
            *Hatched = params.Hatched;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.Local_Hatch
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::FMotionState                       MotionState                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABW_Egg_C::Local_Hatch(const SportsScramble::FMotionState& MotionState)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.Local_Hatch");
        
        ABW_Egg_C_Local_Hatch_Params params {};
        params.MotionState = MotionState;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Egg_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.UserConstructionScript");
        
        ABW_Egg_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Egg_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.ReceiveBeginPlay");
        
        ABW_Egg_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Egg_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.ReceiveEndPlay");
        
        ABW_Egg_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.HatchCheck
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::UScramEventBasePayload*            Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Egg_C::HatchCheck(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.HatchCheck");
        
        ABW_Egg_C_HatchCheck_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.Payload = Payload;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.HatchFX
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Egg_C::HatchFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.HatchFX");
        
        ABW_Egg_C_HatchFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.Hide Egg
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Egg_C::HideEgg()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.Hide Egg");
        
        ABW_Egg_C_HideEgg_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.Turkey Destroyed
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramPrimitiveActor*              PrimitveActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Egg_C::TurkeyDestroyed(SportsScramble::AScramPrimitiveActor* PrimitveActor)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.Turkey Destroyed");
        
        ABW_Egg_C_TurkeyDestroyed_Params params {};
        params.PrimitveActor = PrimitveActor;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.SM_Hatch
     *         Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::FMotionState                       MotionState                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABW_Egg_C::SM_Hatch(const SportsScramble::FMotionState& MotionState)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.SM_Hatch");
        
        ABW_Egg_C_SM_Hatch_Params params {};
        params.MotionState = MotionState;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.Multi_Hatch
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::FMotionState                       MotionState                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABW_Egg_C::Multi_Hatch(const SportsScramble::FMotionState& MotionState)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.Multi_Hatch");
        
        ABW_Egg_C_Multi_Hatch_Params params {};
        params.MotionState = MotionState;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.ExecuteUbergraph_BW_Egg
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Egg_C::ExecuteUbergraph_BW_Egg(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_Egg.BW_Egg_C.ExecuteUbergraph_BW_Egg");
        
        ABW_Egg_C_ExecuteUbergraph_BW_Egg_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
