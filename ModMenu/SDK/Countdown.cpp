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
#include "Headers/Countdown_PARAMS.h"
#include "Headers/Countdown_ACountdown_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Countdown
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.Initialize
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ACountdown_C::Initialize()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.Initialize");
        
        ACountdown_C_Initialize_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ACountdown_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.UserConstructionScript");
        
        ACountdown_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.Timeline_ScaleUp__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ACountdown_C::Timeline_ScaleUp__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.Timeline_ScaleUp__FinishedFunc");
        
        ACountdown_C_Timeline_ScaleUp__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.Timeline_ScaleUp__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ACountdown_C::Timeline_ScaleUp__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.Timeline_ScaleUp__UpdateFunc");
        
        ACountdown_C_Timeline_ScaleUp__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ACountdown_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.ReceiveBeginPlay");
        
        ACountdown_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.StartCountdown
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ACountdown_C::StartCountdown(int32_t Count)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.StartCountdown");
        
        ACountdown_C_StartCountdown_Params params {};
        params.Count = Count;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.DisplayGameOver
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               DestroyActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ACountdown_C::DisplayGameOver(float Duration, bool DestroyActor)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.DisplayGameOver");
        
        ACountdown_C_DisplayGameOver_Params params {};
        params.Duration = Duration;
        params.DestroyActor = DestroyActor;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.CountdownLoop
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ACountdown_C::CountdownLoop()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.CountdownLoop");
        
        ACountdown_C_CountdownLoop_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.ScaleUp
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ACountdown_C::ScaleUp()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.ScaleUp");
        
        ACountdown_C_ScaleUp_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.ScaleDown
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ACountdown_C::ScaleDown()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.ScaleDown");
        
        ACountdown_C_ScaleDown_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.DisplayText
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               DestroyActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         BasicTypes::FText                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
     *         void                                               ReturnValue
     */
    void ACountdown_C::DisplayText(float Duration, bool DestroyActor, const BasicTypes::FText& Text)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.DisplayText");
        
        ACountdown_C_DisplayText_Params params {};
        params.Duration = Duration;
        params.DestroyActor = DestroyActor;
        params.Text = Text;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.CustomCountdown_Bowling
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               DisplayBowl                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ACountdown_C::CustomCountdown_Bowling(bool DisplayBowl)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.CustomCountdown_Bowling");
        
        ACountdown_C_CustomCountdown_Bowling_Params params {};
        params.DisplayBowl = DisplayBowl;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.ExecuteUbergraph_Countdown
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ACountdown_C::ExecuteUbergraph_Countdown(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.ExecuteUbergraph_Countdown");
        
        ACountdown_C_ExecuteUbergraph_Countdown_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.BowlDisplayed__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ACountdown_C::BowlDisplayed__DelegateSignature()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.BowlDisplayed__DelegateSignature");
        
        ACountdown_C_BowlDisplayed__DelegateSignature_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.OneDisplayed__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ACountdown_C::OneDisplayed__DelegateSignature()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.OneDisplayed__DelegateSignature");
        
        ACountdown_C_OneDisplayed__DelegateSignature_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.TwoDisplayed__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ACountdown_C::TwoDisplayed__DelegateSignature()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.TwoDisplayed__DelegateSignature");
        
        ACountdown_C_TwoDisplayed__DelegateSignature_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.ThreeDisplayed__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ACountdown_C::ThreeDisplayed__DelegateSignature()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.ThreeDisplayed__DelegateSignature");
        
        ACountdown_C_ThreeDisplayed__DelegateSignature_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.GoMessage__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ACountdown_C::GoMessage__DelegateSignature()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.GoMessage__DelegateSignature");
        
        ACountdown_C_GoMessage__DelegateSignature_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.CountdownComplete__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ACountdown_C::CountdownComplete__DelegateSignature()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Tennis/MiniGames/Countdown.Countdown_C.CountdownComplete__DelegateSignature");
        
        ACountdown_C_CountdownComplete__DelegateSignature_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
