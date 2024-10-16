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
#include "Headers/ArenaScrambleEffect_RaiseNet_PARAMS.h"
#include "Headers/ArenaScrambleEffect_RaiseNet_AArenaScrambleEffect_RaiseNet_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ArenaScrambleEffect_RaiseNet
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ArenaScrambleEnd
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AArenaScrambleEffect_RaiseNet_C::ArenaScrambleEnd(bool* Callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ArenaScrambleEnd");
        
        AArenaScrambleEffect_RaiseNet_C_ArenaScrambleEnd_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Callback != nullptr)
            *Callback = params.Callback;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AArenaScrambleEffect_RaiseNet_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.UserConstructionScript");
        
        AArenaScrambleEffect_RaiseNet_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.Timeline_RaiseNet__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AArenaScrambleEffect_RaiseNet_C::Timeline_RaiseNet__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.Timeline_RaiseNet__FinishedFunc");
        
        AArenaScrambleEffect_RaiseNet_C_Timeline_RaiseNet__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.Timeline_RaiseNet__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AArenaScrambleEffect_RaiseNet_C::Timeline_RaiseNet__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.Timeline_RaiseNet__UpdateFunc");
        
        AArenaScrambleEffect_RaiseNet_C_Timeline_RaiseNet__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AArenaScrambleEffect_RaiseNet_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ReceiveBeginPlay");
        
        AArenaScrambleEffect_RaiseNet_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.StartArenaScramble
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AArenaScrambleEffect_RaiseNet_C::StartArenaScramble()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.StartArenaScramble");
        
        AArenaScrambleEffect_RaiseNet_C_StartArenaScramble_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.EndArenaScramble
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AArenaScrambleEffect_RaiseNet_C::EndArenaScramble()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.EndArenaScramble");
        
        AArenaScrambleEffect_RaiseNet_C_EndArenaScramble_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.RaiseNet
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AArenaScrambleEffect_RaiseNet_C::RaiseNet()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.RaiseNet");
        
        AArenaScrambleEffect_RaiseNet_C_RaiseNet_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ResetNetHeight
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AArenaScrambleEffect_RaiseNet_C::ResetNetHeight()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ResetNetHeight");
        
        AArenaScrambleEffect_RaiseNet_C_ResetNetHeight_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AArenaScrambleEffect_RaiseNet_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ReceiveEndPlay");
        
        AArenaScrambleEffect_RaiseNet_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ExecuteUbergraph_ArenaScrambleEffect_RaiseNet
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AArenaScrambleEffect_RaiseNet_C::ExecuteUbergraph_ArenaScrambleEffect_RaiseNet(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Scrambles/Tennis/ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ExecuteUbergraph_ArenaScrambleEffect_RaiseNet");
        
        AArenaScrambleEffect_RaiseNet_C_ExecuteUbergraph_ArenaScrambleEffect_RaiseNet_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
