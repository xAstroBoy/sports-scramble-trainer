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
#include "Headers/TennisScrambleTarget_PARAMS.h"
#include "Headers/TennisScrambleTarget_ATennisScrambleTarget_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TennisScrambleTarget
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.RemoveGameElement
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::RemoveGameElement(bool* Removed)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.RemoveGameElement");
        
        ATennisScrambleTarget_C_RemoveGameElement_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Removed != nullptr)
            *Removed = params.Removed;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.SpawnScrambleEffect
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         TN_Ball_Base::ATN_Ball_Base_C*                     Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::SpawnScrambleEffect(TN_Ball_Base::ATN_Ball_Base_C* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.SpawnScrambleEffect");
        
        ATennisScrambleTarget_C_SpawnScrambleEffect_Params params {};
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.SetupNewTarget
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::SetupNewTarget()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.SetupNewTarget");
        
        ATennisScrambleTarget_C_SetupNewTarget_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.DisableIcon
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::DisableIcon()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.DisableIcon");
        
        ATennisScrambleTarget_C_DisableIcon_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.RemoveOldBall
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         TN_Ball_Base::ATN_Ball_Base_C*                     Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::RemoveOldBall(TN_Ball_Base::ATN_Ball_Base_C* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.RemoveOldBall");
        
        ATennisScrambleTarget_C_RemoveOldBall_Params params {};
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.GetExistingSubclasses
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         BasicTypes::TArray<TN_Ball_Base::ATN_Ball_Base_C*> ActiveBallClasses                                          (Parm, OutParm, ZeroConstructor)
     *         BasicTypes::TArray<TN_Instrument_Base::ATN_Instrument_Base_C*> ActiveInstrumentClasses                                    (Parm, OutParm, ZeroConstructor)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::GetExistingSubclasses(BasicTypes::TArray<TN_Ball_Base::ATN_Ball_Base_C*>* ActiveBallClasses, BasicTypes::TArray<TN_Instrument_Base::ATN_Instrument_Base_C*>* ActiveInstrumentClasses)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.GetExistingSubclasses");
        
        ATennisScrambleTarget_C_GetExistingSubclasses_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ActiveBallClasses != nullptr)
            *ActiveBallClasses = params.ActiveBallClasses;
        if (ActiveInstrumentClasses != nullptr)
            *ActiveInstrumentClasses = params.ActiveInstrumentClasses;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.GetAiValue
     *         Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::EScrambleTargetAiValue             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::GetAiValue(SportsScramble::EScrambleTargetAiValue* Value)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.GetAiValue");
        
        ATennisScrambleTarget_C_GetAiValue_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Value != nullptr)
            *Value = params.Value;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.GetRandomRacketType
     *         Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::UTexture2D*                                ScrambleIcon                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::GetRandomRacketType(Engine::UTexture2D** ScrambleIcon)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.GetRandomRacketType");
        
        ATennisScrambleTarget_C_GetRandomRacketType_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ScrambleIcon != nullptr)
            *ScrambleIcon = params.ScrambleIcon;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.GetRandomBallType
     *         Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::UTexture2D*                                ScrambleIcon                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::GetRandomBallType(Engine::UTexture2D** ScrambleIcon)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.GetRandomBallType");
        
        ATennisScrambleTarget_C_GetRandomBallType_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ScrambleIcon != nullptr)
            *ScrambleIcon = params.ScrambleIcon;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Initialize
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::Initialize()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Initialize");
        
        ATennisScrambleTarget_C_Initialize_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.UserConstructionScript");
        
        ATennisScrambleTarget_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Timeline_Size_Change__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::Timeline_Size_Change__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Timeline_Size_Change__FinishedFunc");
        
        ATennisScrambleTarget_C_Timeline_Size_Change__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Timeline_Size_Change__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::Timeline_Size_Change__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Timeline_Size_Change__UpdateFunc");
        
        ATennisScrambleTarget_C_Timeline_Size_Change__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Timeline_RotateCannon__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::Timeline_RotateCannon__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Timeline_RotateCannon__FinishedFunc");
        
        ATennisScrambleTarget_C_Timeline_RotateCannon__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Timeline_RotateCannon__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::Timeline_RotateCannon__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Timeline_RotateCannon__UpdateFunc");
        
        ATennisScrambleTarget_C_Timeline_RotateCannon__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Timeline_SpinCannon__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::Timeline_SpinCannon__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Timeline_SpinCannon__FinishedFunc");
        
        ATennisScrambleTarget_C_Timeline_SpinCannon__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Timeline_SpinCannon__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::Timeline_SpinCannon__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Timeline_SpinCannon__UpdateFunc");
        
        ATennisScrambleTarget_C_Timeline_SpinCannon__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.ReceiveBeginPlay");
        
        ATennisScrambleTarget_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Grow
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::Grow()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Grow");
        
        ATennisScrambleTarget_C_Grow_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Shrink
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::Shrink()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.Shrink");
        
        ATennisScrambleTarget_C_Shrink_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.OnTriggered
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramBall*                        Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::OnTriggered(SportsScramble::AScramBall* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.OnTriggered");
        
        ATennisScrambleTarget_C_OnTriggered_Params params {};
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.SetupCannon
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::SetupCannon()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.SetupCannon");
        
        ATennisScrambleTarget_C_SetupCannon_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.ReceiveEndPlay");
        
        ATennisScrambleTarget_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.FireCannon
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::FireCannon()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.FireCannon");
        
        ATennisScrambleTarget_C_FireCannon_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.RotateCannon
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::RotateCannon()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.RotateCannon");
        
        ATennisScrambleTarget_C_RotateCannon_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.SpinCannon
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::SpinCannon()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.SpinCannon");
        
        ATennisScrambleTarget_C_SpinCannon_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.FireFX
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::FireFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.FireFX");
        
        ATennisScrambleTarget_C_FireFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.ApplyCannonRotation
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::FScramTrajectory                   trajectory                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::ApplyCannonRotation(const SportsScramble::FScramTrajectory& trajectory)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.ApplyCannonRotation");
        
        ATennisScrambleTarget_C_ApplyCannonRotation_Params params {};
        params.trajectory = trajectory;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.SetCannonRotation
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FRotator                              Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::SetCannonRotation(const CoreUObject::FRotator& Rotation)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.SetCannonRotation");
        
        ATennisScrambleTarget_C_SetCannonRotation_Params params {};
        params.Rotation = Rotation;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.ExecuteUbergraph_TennisScrambleTarget
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::ExecuteUbergraph_TennisScrambleTarget(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.ExecuteUbergraph_TennisScrambleTarget");
        
        ATennisScrambleTarget_C_ExecuteUbergraph_TennisScrambleTarget_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.BallFiredFromTarget__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         TN_Ball_Base::ATN_Ball_Base_C*                     BallFired                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::BallFiredFromTarget__DelegateSignature(TN_Ball_Base::ATN_Ball_Base_C* BallFired)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.BallFiredFromTarget__DelegateSignature");
        
        ATennisScrambleTarget_C_BallFiredFromTarget__DelegateSignature_Params params {};
        params.BallFired = BallFired;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.ScrambleTargetHit__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         TennisScrambleTarget::ATennisScrambleTarget_C*     TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         ScrambleEvent_Base::AScrambleEvent_Base_C*         ScrambleEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::ScrambleTargetHit__DelegateSignature(TennisScrambleTarget::ATennisScrambleTarget_C* TargetActor, ScrambleEvent_Base::AScrambleEvent_Base_C* ScrambleEvent, int32_t ID)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.ScrambleTargetHit__DelegateSignature");
        
        ATennisScrambleTarget_C_ScrambleTargetHit__DelegateSignature_Params params {};
        params.TargetActor = TargetActor;
        params.ScrambleEvent = ScrambleEvent;
        params.ID = ID;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.ScrambleTargetRemoved__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         TennisScrambleTarget::ATennisScrambleTarget_C*     TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         ScrambleEvent_Base::AScrambleEvent_Base_C*         ScrambleEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATennisScrambleTarget_C::ScrambleTargetRemoved__DelegateSignature(TennisScrambleTarget::ATennisScrambleTarget_C* TargetActor, ScrambleEvent_Base::AScrambleEvent_Base_C* ScrambleEvent, int32_t ID)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C.ScrambleTargetRemoved__DelegateSignature");
        
        ATennisScrambleTarget_C_ScrambleTargetRemoved__DelegateSignature_Params params {};
        params.TargetActor = TargetActor;
        params.ScrambleEvent = ScrambleEvent;
        params.ID = ID;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif