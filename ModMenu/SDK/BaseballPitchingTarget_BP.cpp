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
#include "Headers/BaseballPitchingTarget_BP_PARAMS.h"
#include "Headers/BaseballPitchingTarget_BP_ABaseballPitchingTarget_BP_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BaseballPitchingTarget_BP
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ValidateBallTrajectory
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         SportsScramble::AScramBall*                        IncomingBall                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               ValidHit                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABaseballPitchingTarget_BP_C::ValidateBallTrajectory(SportsScramble::AScramBall* IncomingBall, bool* ValidHit)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ValidateBallTrajectory");
        
        ABaseballPitchingTarget_BP_C_ValidateBallTrajectory_Params params {};
        params.IncomingBall = IncomingBall;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ValidHit != nullptr)
            *ValidHit = params.ValidHit;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.SetVisibleElements
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABaseballPitchingTarget_BP_C::SetVisibleElements()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.SetVisibleElements");
        
        ABaseballPitchingTarget_BP_C_SetVisibleElements_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABaseballPitchingTarget_BP_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.UserConstructionScript");
        
        ABaseballPitchingTarget_BP_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABaseballPitchingTarget_BP_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveBeginPlay");
        
        ABaseballPitchingTarget_BP_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.OnTriggered
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramBall*                        Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABaseballPitchingTarget_BP_C::OnTriggered(SportsScramble::AScramBall* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.OnTriggered");
        
        ABaseballPitchingTarget_BP_C_OnTriggered_Params params {};
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.AutoCleanup
     *         Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABaseballPitchingTarget_BP_C::AutoCleanup()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.AutoCleanup");
        
        ABaseballPitchingTarget_BP_C_AutoCleanup_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.Break Target
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABaseballPitchingTarget_BP_C::BreakTarget()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.Break Target");
        
        ABaseballPitchingTarget_BP_C_BreakTarget_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalShow
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABaseballPitchingTarget_BP_C::LocalShow()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalShow");
        
        ABaseballPitchingTarget_BP_C_LocalShow_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalHide
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABaseballPitchingTarget_BP_C::LocalHide()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalHide");
        
        ABaseballPitchingTarget_BP_C_LocalHide_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ChangeTargetVisibility
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               ShowTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABaseballPitchingTarget_BP_C::ChangeTargetVisibility(bool ShowTarget)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ChangeTargetVisibility");
        
        ABaseballPitchingTarget_BP_C_ChangeTargetVisibility_Params params {};
        params.ShowTarget = ShowTarget;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABaseballPitchingTarget_BP_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveEndPlay");
        
        ABaseballPitchingTarget_BP_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ExecuteUbergraph_BaseballPitchingTarget_BP
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABaseballPitchingTarget_BP_C::ExecuteUbergraph_BaseballPitchingTarget_BP(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ExecuteUbergraph_BaseballPitchingTarget_BP");
        
        ABaseballPitchingTarget_BP_C_ExecuteUbergraph_BaseballPitchingTarget_BP_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.PitchingTargetHit__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::EBaseballScrambleTargetLocations   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABaseballPitchingTarget_BP_C::PitchingTargetHit__DelegateSignature(SportsScramble::EBaseballScrambleTargetLocations Location)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Baseball/BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.PitchingTargetHit__DelegateSignature");
        
        ABaseballPitchingTarget_BP_C_PitchingTargetHit__DelegateSignature_Params params {};
        params.Location = Location;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif