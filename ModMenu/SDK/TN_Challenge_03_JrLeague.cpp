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
#include "Headers/TN_Challenge_03_JrLeague_PARAMS.h"
#include "Headers/TN_Challenge_03_JrLeague_ATN_Challenge_03_JrLeague_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_Challenge_03_JrLeague
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.SetUpInfoText
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_03_JrLeague_C::SetUpInfoText()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.SetUpInfoText");
        
        ATN_Challenge_03_JrLeague_C_SetUpInfoText_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.AddActorToGameElementList
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_03_JrLeague_C::AddActorToGameElementList(Engine::AActor* Actor, bool* Callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.AddActorToGameElementList");
        
        ATN_Challenge_03_JrLeague_C_AddActorToGameElementList_Params params {};
        params.Actor = Actor;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Callback != nullptr)
            *Callback = params.Callback;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.Shutdown
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_03_JrLeague_C::Shutdown(bool* ShutdownBegun)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.Shutdown");
        
        ATN_Challenge_03_JrLeague_C_Shutdown_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ShutdownBegun != nullptr)
            *ShutdownBegun = params.ShutdownBegun;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.Initialize
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_03_JrLeague_C::Initialize()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.Initialize");
        
        ATN_Challenge_03_JrLeague_C_Initialize_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_03_JrLeague_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.UserConstructionScript");
        
        ATN_Challenge_03_JrLeague_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_03_JrLeague_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.ReceiveBeginPlay");
        
        ATN_Challenge_03_JrLeague_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.DelayDestroy
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_03_JrLeague_C::DelayDestroy()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.DelayDestroy");
        
        ATN_Challenge_03_JrLeague_C_DelayDestroy_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_03_JrLeague_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.ReceiveEndPlay");
        
        ATN_Challenge_03_JrLeague_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.SportManager_MatchComplete
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         GameResult::EGameResult                            Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_03_JrLeague_C::SportManager_MatchComplete(GameResult::EGameResult Result)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.SportManager_MatchComplete");
        
        ATN_Challenge_03_JrLeague_C_SportManager_MatchComplete_Params params {};
        params.Result = Result;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.NotifyChallengeContinue
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_03_JrLeague_C::NotifyChallengeContinue(Engine::AActor* DestroyedActor)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.NotifyChallengeContinue");
        
        ATN_Challenge_03_JrLeague_C_NotifyChallengeContinue_Params params {};
        params.DestroyedActor = DestroyedActor;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.TriggerAlternativeCadence
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_03_JrLeague_C::TriggerAlternativeCadence()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.TriggerAlternativeCadence");
        
        ATN_Challenge_03_JrLeague_C_TriggerAlternativeCadence_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.Shortcut
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_03_JrLeague_C::Shortcut()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.Shortcut");
        
        ATN_Challenge_03_JrLeague_C_Shortcut_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.ExecuteUbergraph_TN_Challenge_03_JrLeague
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_03_JrLeague_C::ExecuteUbergraph_TN_Challenge_03_JrLeague(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C.ExecuteUbergraph_TN_Challenge_03_JrLeague");
        
        ATN_Challenge_03_JrLeague_C_ExecuteUbergraph_TN_Challenge_03_JrLeague_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
