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
#include "Headers/BB_Minigame_Pitching_Base_PARAMS.h"
#include "Headers/BB_Minigame_Pitching_Base_ABB_Minigame_Pitching_Base_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_Minigame_Pitching_Base
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.AddActorToGameElementList
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::AddActorToGameElementList(Engine::AActor* Actor, bool* Callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.AddActorToGameElementList");
        
        ABB_Minigame_Pitching_Base_C_AddActorToGameElementList_Params params {};
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
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Shutdown
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::Shutdown(bool* ShutdownBegun)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Shutdown");
        
        ABB_Minigame_Pitching_Base_C_Shutdown_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ShutdownBegun != nullptr)
            *ShutdownBegun = params.ShutdownBegun;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ClearCurrentBall
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::ClearCurrentBall()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ClearCurrentBall");
        
        ABB_Minigame_Pitching_Base_C_ClearCurrentBall_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GetMaxBounces
     *         Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         Engine::AActor*                                    Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               RollingPitch                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::GetMaxBounces(Engine::AActor* Actor, int32_t* Result, bool* RollingPitch)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GetMaxBounces");
        
        ABB_Minigame_Pitching_Base_C_GetMaxBounces_Params params {};
        params.Actor = Actor;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Result != nullptr)
            *Result = params.Result;
        if (RollingPitch != nullptr)
            *RollingPitch = params.RollingPitch;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchTargetScoreboard
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::UpdatePitchTargetScoreboard()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchTargetScoreboard");
        
        ABB_Minigame_Pitching_Base_C_UpdatePitchTargetScoreboard_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ResetPitchingScoreboard
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               ShowBallCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::ResetPitchingScoreboard(bool ShowBallCount)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ResetPitchingScoreboard");
        
        ABB_Minigame_Pitching_Base_C_ResetPitchingScoreboard_Params params {};
        params.ShowBallCount = ShowBallCount;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CleanupScoreboards
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::CleanupScoreboards()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CleanupScoreboards");
        
        ABB_Minigame_Pitching_Base_C_CleanupScoreboards_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnGameElements
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               UseStrikeZone                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         bool                                               PlayStrikezoneSounds                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         bool                                               SpawnTargets                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         bool                                               DisplayStrikezoneText                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         bool                                               ShowQuad                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::SpawnGameElements(bool UseStrikeZone, bool PlayStrikezoneSounds, bool SpawnTargets, bool DisplayStrikezoneText, bool ShowQuad)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnGameElements");
        
        ABB_Minigame_Pitching_Base_C_SpawnGameElements_Params params {};
        params.UseStrikeZone = UseStrikeZone;
        params.PlayStrikezoneSounds = PlayStrikezoneSounds;
        params.SpawnTargets = SpawnTargets;
        params.DisplayStrikezoneText = DisplayStrikezoneText;
        params.ShowQuad = ShowQuad;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchingScoreboard
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               ShowBallCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::UpdatePitchingScoreboard(bool ShowBallCount)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchingScoreboard");
        
        ABB_Minigame_Pitching_Base_C_UpdatePitchingScoreboard_Params params {};
        params.ShowBallCount = ShowBallCount;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Initialize
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::Initialize()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Initialize");
        
        ABB_Minigame_Pitching_Base_C_Initialize_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UserConstructionScript");
        
        ABB_Minigame_Pitching_Base_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ReceiveBeginPlay");
        
        ABB_Minigame_Pitching_Base_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.DelayDestroy
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::DelayDestroy()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.DelayDestroy");
        
        ABB_Minigame_Pitching_Base_C_DelayDestroy_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ThrowBallAtPlayer
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         float                                              delayBeforeThrow                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         float                                              DelayAfterThrow                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::ThrowBallAtPlayer(float delayBeforeThrow, float DelayAfterThrow)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ThrowBallAtPlayer");
        
        ABB_Minigame_Pitching_Base_C_ThrowBallAtPlayer_Params params {};
        params.delayBeforeThrow = delayBeforeThrow;
        params.DelayAfterThrow = DelayAfterThrow;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallLaunched
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::BallLaunched(Engine::AActor* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallLaunched");
        
        ABB_Minigame_Pitching_Base_C_BallLaunched_Params params {};
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbedByPlayer
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    DominantHand                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         BB_Mitt::ABB_Mitt_C*                               Mitt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::EquipmentGrabbedByPlayer(Engine::AActor* DominantHand, BB_Mitt::ABB_Mitt_C* Mitt)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbedByPlayer");
        
        ABB_Minigame_Pitching_Base_C_EquipmentGrabbedByPlayer_Params params {};
        params.DominantHand = DominantHand;
        params.Mitt = Mitt;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.TeleportComplete
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::TeleportComplete()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.TeleportComplete");
        
        ABB_Minigame_Pitching_Base_C_TeleportComplete_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.NoTeleport
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::NoTeleport()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.NoTeleport");
        
        ABB_Minigame_Pitching_Base_C_NoTeleport_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnEquipmentSet
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::SpawnEquipmentSet()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnEquipmentSet");
        
        ABB_Minigame_Pitching_Base_C_SpawnEquipmentSet_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GameReadyRunOperations
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::GameReadyRunOperations()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GameReadyRunOperations");
        
        ABB_Minigame_Pitching_Base_C_GameReadyRunOperations_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallScramHit
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::UScramEventBasePayload*            Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::ActiveBallScramHit(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallScramHit");
        
        ABB_Minigame_Pitching_Base_C_ActiveBallScramHit_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.Payload = Payload;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallCaughtEvent
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::UScramEventBasePayload*            Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::BallCaughtEvent(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallCaughtEvent");
        
        ABB_Minigame_Pitching_Base_C_BallCaughtEvent_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.Payload = Payload;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.StrikeZoneHit
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::ABaseballBall*                     Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::EScramStrikeResult                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::StrikeZoneHit(SportsScramble::ABaseballBall* Ball, SportsScramble::EScramStrikeResult Result)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.StrikeZoneHit");
        
        ABB_Minigame_Pitching_Base_C_StrikeZoneHit_Params params {};
        params.Ball = Ball;
        params.Result = Result;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallThrown
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::ABaseballBall*                     Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::BallThrown(SportsScramble::ABaseballBall* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallThrown");
        
        ABB_Minigame_Pitching_Base_C_BallThrown_Params params {};
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CurrentBallInvalidated
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::CurrentBallInvalidated(CoreUObject::UObject* WorldContextObject)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CurrentBallInvalidated");
        
        ABB_Minigame_Pitching_Base_C_CurrentBallInvalidated_Params params {};
        params.WorldContextObject = WorldContextObject;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallDropped
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::UScramEventBasePayload*            Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::BallDropped(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallDropped");
        
        ABB_Minigame_Pitching_Base_C_BallDropped_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.Payload = Payload;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallDestroyed
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramPrimitiveActor*              DestroyedPrimitive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::ActiveBallDestroyed(SportsScramble::AScramPrimitiveActor* DestroyedPrimitive)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallDestroyed");
        
        ABB_Minigame_Pitching_Base_C_ActiveBallDestroyed_Params params {};
        params.DestroyedPrimitive = DestroyedPrimitive;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ExecuteUbergraph_BB_Minigame_Pitching_Base
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::ExecuteUbergraph_BB_Minigame_Pitching_Base(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ExecuteUbergraph_BB_Minigame_Pitching_Base");
        
        ABB_Minigame_Pitching_Base_C_ExecuteUbergraph_BB_Minigame_Pitching_Base_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbed__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Minigame_Pitching_Base_C::EquipmentGrabbed__DelegateSignature()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Baseball/BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbed__DelegateSignature");
        
        ABB_Minigame_Pitching_Base_C_EquipmentGrabbed__DelegateSignature_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
