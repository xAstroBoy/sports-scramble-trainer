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
#include "Headers/BW_VibroBall_PARAMS.h"
#include "Headers/BW_VibroBall_ABW_VibroBall_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_VibroBall
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_VibroBall.BW_VibroBall_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_VibroBall_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_VibroBall.BW_VibroBall_C.UserConstructionScript");
        
        ABW_VibroBall_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_VibroBall.BW_VibroBall_C.VibroBallGrabbed
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::UScramEventBasePayload*            Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_VibroBall_C::VibroBallGrabbed(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_VibroBall.BW_VibroBall_C.VibroBallGrabbed");
        
        ABW_VibroBall_C_VibroBallGrabbed_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.Payload = Payload;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_VibroBall.BW_VibroBall_C.VibroBallHit
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::UScramEventBasePayload*            Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_VibroBall_C::VibroBallHit(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_VibroBall.BW_VibroBall_C.VibroBallHit");
        
        ABW_VibroBall_C_VibroBallHit_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.Payload = Payload;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_VibroBall.BW_VibroBall_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_VibroBall_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_VibroBall.BW_VibroBall_C.ReceiveBeginPlay");
        
        ABW_VibroBall_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_VibroBall.BW_VibroBall_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_VibroBall_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_VibroBall.BW_VibroBall_C.ReceiveEndPlay");
        
        ABW_VibroBall_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Bowling/BW_VibroBall.BW_VibroBall_C.ExecuteUbergraph_BW_VibroBall
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_VibroBall_C::ExecuteUbergraph_BW_VibroBall(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Bowling/BW_VibroBall.BW_VibroBall_C.ExecuteUbergraph_BW_VibroBall");
        
        ABW_VibroBall_C_ExecuteUbergraph_BW_VibroBall_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif