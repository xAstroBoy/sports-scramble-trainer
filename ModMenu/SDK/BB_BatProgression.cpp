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
#include "Headers/BB_BatProgression_PARAMS.h"
#include "Headers/BB_BatProgression_ABB_BatProgression_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_BatProgression
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.SwapBat
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramPlayerHand*                  BattingPlayerHand                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         BaseballAIBatter_Blueprint::ABaseballAIBatter_Blueprint_C* BattingAI                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::EBaseballInstrumentType            newBatType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_BatProgression_C::SwapBat(SportsScramble::AScramPlayerHand* BattingPlayerHand, BaseballAIBatter_Blueprint::ABaseballAIBatter_Blueprint_C* BattingAI, SportsScramble::EBaseballInstrumentType newBatType)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.SwapBat");
        
        ABB_BatProgression_C_SwapBat_Params params {};
        params.BattingPlayerHand = BattingPlayerHand;
        params.BattingAI = BattingAI;
        params.newBatType = newBatType;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.UpdateProgression
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramPlayerHand*                  BattingPlayerHand                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         BaseballAIBatter_Blueprint::ABaseballAIBatter_Blueprint_C* BattingAI                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::ABaseballInstrument*               Bat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_BatProgression_C::UpdateProgression(SportsScramble::AScramPlayerHand* BattingPlayerHand, BaseballAIBatter_Blueprint::ABaseballAIBatter_Blueprint_C* BattingAI, SportsScramble::ABaseballInstrument* Bat)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.UpdateProgression");
        
        ABB_BatProgression_C_UpdateProgression_Params params {};
        params.BattingPlayerHand = BattingPlayerHand;
        params.BattingAI = BattingAI;
        params.Bat = Bat;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_BatProgression_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.UserConstructionScript");
        
        ABB_BatProgression_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_BatProgression_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.ReceiveBeginPlay");
        
        ABB_BatProgression_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.OnBaseballEvent
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::UScramEventBasePayload*            Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_BatProgression_C::OnBaseballEvent(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.OnBaseballEvent");
        
        ABB_BatProgression_C_OnBaseballEvent_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.Payload = Payload;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_BatProgression_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.ReceiveEndPlay");
        
        ABB_BatProgression_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.ProcessPlayByPlay
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::EBaseballInstrumentType            newBatType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_BatProgression_C::ProcessPlayByPlay(SportsScramble::EBaseballInstrumentType newBatType)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.ProcessPlayByPlay");
        
        ABB_BatProgression_C_ProcessPlayByPlay_Params params {};
        params.newBatType = newBatType;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.QueuScramblePBP
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::EBaseballInstrumentType            ScrambleBatType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_BatProgression_C::QueuScramblePBP(SportsScramble::EBaseballInstrumentType ScrambleBatType)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.QueuScramblePBP");
        
        ABB_BatProgression_C_QueuScramblePBP_Params params {};
        params.ScrambleBatType = ScrambleBatType;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.ExecuteUbergraph_BB_BatProgression
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_BatProgression_C::ExecuteUbergraph_BB_BatProgression(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.ExecuteUbergraph_BB_BatProgression");
        
        ABB_BatProgression_C_ExecuteUbergraph_BB_BatProgression_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.BatProgressionBatSwap__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::EBaseballInstrumentType            newBatType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_BatProgression_C::BatProgressionBatSwap__DelegateSignature(SportsScramble::EBaseballInstrumentType newBatType)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BB_BatProgression.BB_BatProgression_C.BatProgressionBatSwap__DelegateSignature");
        
        ABB_BatProgression_C_BatProgressionBatSwap__DelegateSignature_Params params {};
        params.newBatType = newBatType;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif