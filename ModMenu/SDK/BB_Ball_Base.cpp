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
#include "Headers/BB_Ball_Base_PARAMS.h"
#include "Headers/BB_Ball_Base_ABB_Ball_Base_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_Ball_Base
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.StopPitchVFX
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::StopPitchVFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.StopPitchVFX");
        
        ABB_Ball_Base_C_StopPitchVFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.StopRollingFX
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::StopRollingFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.StopRollingFX");
        
        ABB_Ball_Base_C_StopRollingFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PlayPitchVFX
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::PlayPitchVFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PlayPitchVFX");
        
        ABB_Ball_Base_C_PlayPitchVFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.StopAllShotTypeFX
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::StopAllShotTypeFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.StopAllShotTypeFX");
        
        ABB_Ball_Base_C_StopAllShotTypeFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.StopChargedSliceFX
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::StopChargedSliceFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.StopChargedSliceFX");
        
        ABB_Ball_Base_C_StopChargedSliceFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PlayChargedSliceFX
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::PlayChargedSliceFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PlayChargedSliceFX");
        
        ABB_Ball_Base_C_PlayChargedSliceFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.StopSliceFX
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::StopSliceFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.StopSliceFX");
        
        ABB_Ball_Base_C_StopSliceFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PlaySliceFX
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::PlaySliceFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PlaySliceFX");
        
        ABB_Ball_Base_C_PlaySliceFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.StopChargedFX
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::StopChargedFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.StopChargedFX");
        
        ABB_Ball_Base_C_StopChargedFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PlayChargedFX
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::PlayChargedFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PlayChargedFX");
        
        ABB_Ball_Base_C_PlayChargedFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.StopImbuedFX
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::StopImbuedFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.StopImbuedFX");
        
        ABB_Ball_Base_C_StopImbuedFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PlayImbuedFX
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::PlayImbuedFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PlayImbuedFX");
        
        ABB_Ball_Base_C_PlayImbuedFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PlayDespawnFX
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::PlayDespawnFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PlayDespawnFX");
        
        ABB_Ball_Base_C_PlayDespawnFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PlaySpawnFX
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::PlaySpawnFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PlaySpawnFX");
        
        ABB_Ball_Base_C_PlaySpawnFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.SetTrail
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::EBaseballShotType                  ShotType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::SetTrail(SportsScramble::EBaseballShotType ShotType)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.SetTrail");
        
        ABB_Ball_Base_C_SetTrail_Params params {};
        params.ShotType = ShotType;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.ClearTrail
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               snap                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::ClearTrail(bool snap)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.ClearTrail");
        
        ABB_Ball_Base_C_ClearTrail_Params params {};
        params.snap = snap;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.UserConstructionScript");
        
        ABB_Ball_Base_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.Timeline_GrowTrail__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::Timeline_GrowTrail__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.Timeline_GrowTrail__FinishedFunc");
        
        ABB_Ball_Base_C_Timeline_GrowTrail__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.Timeline_GrowTrail__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::Timeline_GrowTrail__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.Timeline_GrowTrail__UpdateFunc");
        
        ABB_Ball_Base_C_Timeline_GrowTrail__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.ReceiveBeginPlay");
        
        ABB_Ball_Base_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.ReceiveEndPlay");
        
        ABB_Ball_Base_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.Ball Hit
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::UScramEventBasePayload*            Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::BallHit(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.Ball Hit");
        
        ABB_Ball_Base_C_BallHit_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.Payload = Payload;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.BallGrabbed
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::UScramEventBasePayload*            Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::BallGrabbed(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.BallGrabbed");
        
        ABB_Ball_Base_C_BallGrabbed_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.Payload = Payload;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.BaseballHit
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::BaseballHit()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.BaseballHit");
        
        ABB_Ball_Base_C_BaseballHit_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.OnShotChanged
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::OnShotChanged()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.OnShotChanged");
        
        ABB_Ball_Base_C_OnShotChanged_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.DestroyPrimitive
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         bool                                               playOut                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::DestroyPrimitive(bool playOut, float Delay)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.DestroyPrimitive");
        
        ABB_Ball_Base_C_DestroyPrimitive_Params params {};
        params.playOut = playOut;
        params.Delay = Delay;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PitcherThrewBall
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::PitcherThrewBall()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.PitcherThrewBall");
        
        ABB_Ball_Base_C_PitcherThrewBall_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.OnFloorResultChanged
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         SportsScramble::EFloorResult                       newFloorResult                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::OnFloorResultChanged(SportsScramble::EFloorResult newFloorResult)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.OnFloorResultChanged");
        
        ABB_Ball_Base_C_OnFloorResultChanged_Params params {};
        params.newFloorResult = newFloorResult;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.BackWallHit
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::BackWallHit()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.BackWallHit");
        
        ABB_Ball_Base_C_BackWallHit_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.OnImbuedChanged
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::OnImbuedChanged()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.OnImbuedChanged");
        
        ABB_Ball_Base_C_OnImbuedChanged_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.Net_ChangeImbueVFX
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               ShowVFX                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::Net_ChangeImbueVFX(bool ShowVFX)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.Net_ChangeImbueVFX");
        
        ABB_Ball_Base_C_Net_ChangeImbueVFX_Params params {};
        params.ShowVFX = ShowVFX;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.ExecuteUbergraph_BB_Ball_Base
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Ball_Base_C::ExecuteUbergraph_BB_Ball_Base(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Balls/Baseball/BB_Ball_Base.BB_Ball_Base_C.ExecuteUbergraph_BB_Ball_Base");
        
        ABB_Ball_Base_C_ExecuteUbergraph_BB_Ball_Base_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif