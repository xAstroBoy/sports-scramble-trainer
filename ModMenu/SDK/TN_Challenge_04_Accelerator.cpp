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
#include "Headers/TN_Challenge_04_Accelerator_PARAMS.h"
#include "Headers/TN_Challenge_04_Accelerator_ATN_Challenge_04_Accelerator_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_Challenge_04_Accelerator
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SetupInfoText
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::SetupInfoText()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SetupInfoText");
        
        ATN_Challenge_04_Accelerator_C_SetupInfoText_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AddActorToGameElementList
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::AddActorToGameElementList(Engine::AActor* Actor, bool* Callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AddActorToGameElementList");
        
        ATN_Challenge_04_Accelerator_C_AddActorToGameElementList_Params params {};
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
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ShutDown
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::ShutDown(bool* ShutdownBegun)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ShutDown");
        
        ATN_Challenge_04_Accelerator_C_ShutDown_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ShutdownBegun != nullptr)
            *ShutdownBegun = params.ShutdownBegun;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Initialize
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::Initialize()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Initialize");
        
        ATN_Challenge_04_Accelerator_C_Initialize_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.UserConstructionScript");
        
        ATN_Challenge_04_Accelerator_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveBeginPlay");
        
        ATN_Challenge_04_Accelerator_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.DelayDestroy
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::DelayDestroy()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.DelayDestroy");
        
        ATN_Challenge_04_Accelerator_C_DelayDestroy_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveEndPlay");
        
        ATN_Challenge_04_Accelerator_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SportManager_MatchComplete
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         GameResult::EGameResult                            Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::SportManager_MatchComplete(GameResult::EGameResult Result)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SportManager_MatchComplete");
        
        ATN_Challenge_04_Accelerator_C_SportManager_MatchComplete_Params params {};
        params.Result = Result;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.NotifyChallengeContinue
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::NotifyChallengeContinue(Engine::AActor* DestroyedActor)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.NotifyChallengeContinue");
        
        ATN_Challenge_04_Accelerator_C_NotifyChallengeContinue_Params params {};
        params.DestroyedActor = DestroyedActor;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.TN_TriggerCountdown
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::TN_TriggerCountdown()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.TN_TriggerCountdown");
        
        ATN_Challenge_04_Accelerator_C_TN_TriggerCountdown_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.BallHit
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::UScramEventBasePayload*            Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::BallHit(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.BallHit");
        
        ATN_Challenge_04_Accelerator_C_BallHit_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.Payload = Payload;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Shortcut
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::Shortcut()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Shortcut");
        
        ATN_Challenge_04_Accelerator_C_Shortcut_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ResetScore
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::ResetScore(Engine::AActor* DestroyedActor)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ResetScore");
        
        ATN_Challenge_04_Accelerator_C_ResetScore_Params params {};
        params.DestroyedActor = DestroyedActor;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.StartGame
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::StartGame()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.StartGame");
        
        ATN_Challenge_04_Accelerator_C_StartGame_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.GameEnd
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::GameEnd()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.GameEnd");
        
        ATN_Challenge_04_Accelerator_C_GameEnd_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerPresenting
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::AnnouncerPresenting()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerPresenting");
        
        ATN_Challenge_04_Accelerator_C_AnnouncerPresenting_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerExitSequenceComplete
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::AnnouncerExitSequenceComplete()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerExitSequenceComplete");
        
        ATN_Challenge_04_Accelerator_C_AnnouncerExitSequenceComplete_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AI_Hit_Ball
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::ATennisBall*                       Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::AI_Hit_Ball(SportsScramble::ATennisBall* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AI_Hit_Ball");
        
        ATN_Challenge_04_Accelerator_C_AI_Hit_Ball_Params params {};
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ExecuteUbergraph_TN_Challenge_04_Accelerator
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATN_Challenge_04_Accelerator_C::ExecuteUbergraph_TN_Challenge_04_Accelerator(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ExecuteUbergraph_TN_Challenge_04_Accelerator");
        
        ATN_Challenge_04_Accelerator_C_ExecuteUbergraph_TN_Challenge_04_Accelerator_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif