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
#include "Headers/ScramPlayerBoundary_BP_PARAMS.h"
#include "Headers/ScramPlayerBoundary_BP_AScramPlayerBoundary_BP_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ScramPlayerBoundary_BP
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AScramPlayerBoundary_BP_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.UserConstructionScript");
        
        AScramPlayerBoundary_BP_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.OCDemo_SetupSmallPlayArea
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AScramPlayerBoundary_BP_C::OCDemo_SetupSmallPlayArea()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.OCDemo_SetupSmallPlayArea");
        
        AScramPlayerBoundary_BP_C_OCDemo_SetupSmallPlayArea_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.OCDemo_SetupLargePlayArea
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AScramPlayerBoundary_BP_C::OCDemo_SetupLargePlayArea()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.OCDemo_SetupLargePlayArea");
        
        AScramPlayerBoundary_BP_C_OCDemo_SetupLargePlayArea_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AScramPlayerBoundary_BP_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ReceiveBeginPlay");
        
        AScramPlayerBoundary_BP_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.HideBoundary
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AScramPlayerBoundary_BP_C::HideBoundary()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.HideBoundary");
        
        AScramPlayerBoundary_BP_C_HideBoundary_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.UnhideBoundary
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AScramPlayerBoundary_BP_C::UnhideBoundary()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.UnhideBoundary");
        
        AScramPlayerBoundary_BP_C_UnhideBoundary_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ReceiveTick
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AScramPlayerBoundary_BP_C::ReceiveTick(float DeltaSeconds)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ReceiveTick");
        
        AScramPlayerBoundary_BP_C_ReceiveTick_Params params {};
        params.DeltaSeconds = DeltaSeconds;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ExecuteUbergraph_ScramPlayerBoundary_BP
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AScramPlayerBoundary_BP_C::ExecuteUbergraph_ScramPlayerBoundary_BP(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ExecuteUbergraph_ScramPlayerBoundary_BP");
        
        AScramPlayerBoundary_BP_C_ExecuteUbergraph_ScramPlayerBoundary_BP_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
