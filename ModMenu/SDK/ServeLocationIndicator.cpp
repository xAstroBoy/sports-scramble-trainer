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
#include "Headers/ServeLocationIndicator_PARAMS.h"
#include "Headers/ServeLocationIndicator_AServeLocationIndicator_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ServeLocationIndicator
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.ResetBall
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AServeLocationIndicator_C::ResetBall(Engine::AActor* Player)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.ResetBall");
        
        AServeLocationIndicator_C_ResetBall_Params params {};
        params.Player = Player;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AServeLocationIndicator_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.UserConstructionScript");
        
        AServeLocationIndicator_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.Show
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AServeLocationIndicator_C::Show()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.Show");
        
        AServeLocationIndicator_C_Show_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.Hide
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AServeLocationIndicator_C::Hide()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.Hide");
        
        AServeLocationIndicator_C_Hide_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.ServeBallGrabbed
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramBall*                        Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AServeLocationIndicator_C::ServeBallGrabbed(SportsScramble::AScramBall* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.ServeBallGrabbed");
        
        AServeLocationIndicator_C_ServeBallGrabbed_Params params {};
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.ServeBallSpawned
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramBall*                        Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AServeLocationIndicator_C::ServeBallSpawned(SportsScramble::AScramBall* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.ServeBallSpawned");
        
        AServeLocationIndicator_C_ServeBallSpawned_Params params {};
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.OnPlayerEnter
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramPlayer*                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AServeLocationIndicator_C::OnPlayerEnter(SportsScramble::AScramPlayer* Player)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.OnPlayerEnter");
        
        AServeLocationIndicator_C_OnPlayerEnter_Params params {};
        params.Player = Player;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.OnPlayerExit
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramPlayer*                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AServeLocationIndicator_C::OnPlayerExit(SportsScramble::AScramPlayer* Player)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.OnPlayerExit");
        
        AServeLocationIndicator_C_OnPlayerExit_Params params {};
        params.Player = Player;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.AttractLoop
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AServeLocationIndicator_C::AttractLoop()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.AttractLoop");
        
        AServeLocationIndicator_C_AttractLoop_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.StopAttract
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AServeLocationIndicator_C::StopAttract()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.StopAttract");
        
        AServeLocationIndicator_C_StopAttract_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.ExecuteUbergraph_ServeLocationIndicator
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AServeLocationIndicator_C::ExecuteUbergraph_ServeLocationIndicator(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.ExecuteUbergraph_ServeLocationIndicator");
        
        AServeLocationIndicator_C_ExecuteUbergraph_ServeLocationIndicator_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.BallSpawned__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramBall*                        Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AServeLocationIndicator_C::BallSpawned__DelegateSignature(SportsScramble::AScramBall* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.BallSpawned__DelegateSignature");
        
        AServeLocationIndicator_C_BallSpawned__DelegateSignature_Params params {};
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.BallGrabbed__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramBall*                        Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AServeLocationIndicator_C::BallGrabbed__DelegateSignature(SportsScramble::AScramBall* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/ServeLocationIndicator.ServeLocationIndicator_C.BallGrabbed__DelegateSignature");
        
        AServeLocationIndicator_C_BallGrabbed__DelegateSignature_Params params {};
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif