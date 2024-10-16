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
#include "Headers/BW_Glove_PARAMS.h"
#include "Headers/BW_Glove_ABW_Glove_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_Glove
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Glove_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.UserConstructionScript");
        
        ABW_Glove_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Glove_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.ReceiveEndPlay");
        
        ABW_Glove_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.BallThrown
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::UScramEventBasePayload*            Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Glove_C::BallThrown(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.BallThrown");
        
        ABW_Glove_C_BallThrown_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.Payload = Payload;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Glove_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.ReceiveBeginPlay");
        
        ABW_Glove_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.OnThrowFinalized
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         SportsScramble::ABowlingBall*                      Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Glove_C::OnThrowFinalized(SportsScramble::ABowlingBall* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.OnThrowFinalized");
        
        ABW_Glove_C_OnThrowFinalized_Params params {};
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.DestroyPrimitive
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         bool                                               playOut                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Glove_C::DestroyPrimitive(bool playOut, float Delay)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.DestroyPrimitive");
        
        ABW_Glove_C_DestroyPrimitive_Params params {};
        params.playOut = playOut;
        params.Delay = Delay;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.ExecuteUbergraph_BW_Glove
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Glove_C::ExecuteUbergraph_BW_Glove(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.ExecuteUbergraph_BW_Glove");
        
        ABW_Glove_C_ExecuteUbergraph_BW_Glove_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.FinalizeThrow__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::ABowlingBall*                      BowlingBall                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Glove_C::FinalizeThrow__DelegateSignature(SportsScramble::ABowlingBall* BowlingBall)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gloves/Bowling/BW_Glove.BW_Glove_C.FinalizeThrow__DelegateSignature");
        
        ABW_Glove_C_FinalizeThrow__DelegateSignature_Params params {};
        params.BowlingBall = BowlingBall;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
