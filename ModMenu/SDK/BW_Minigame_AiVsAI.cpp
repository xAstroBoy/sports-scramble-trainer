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
#include "Headers/BW_Minigame_AiVsAI_PARAMS.h"
#include "Headers/BW_Minigame_AiVsAI_ABW_Minigame_AiVsAI_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_Minigame_AiVsAI
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.AddActorToGameElementList
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABW_Minigame_AiVsAI_C::AddActorToGameElementList(Engine::AActor* Actor, bool* Callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.AddActorToGameElementList");
        
        ABW_Minigame_AiVsAI_C_AddActorToGameElementList_Params params {};
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
     *         Name   -> Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.Shutdown
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABW_Minigame_AiVsAI_C::Shutdown(bool* ShutdownBegun)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.Shutdown");
        
        ABW_Minigame_AiVsAI_C_Shutdown_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ShutdownBegun != nullptr)
            *ShutdownBegun = params.ShutdownBegun;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.SpawnGameElements
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Minigame_AiVsAI_C::SpawnGameElements()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.SpawnGameElements");
        
        ABW_Minigame_AiVsAI_C_SpawnGameElements_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.Initialize
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Minigame_AiVsAI_C::Initialize()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.Initialize");
        
        ABW_Minigame_AiVsAI_C_Initialize_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Minigame_AiVsAI_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.UserConstructionScript");
        
        ABW_Minigame_AiVsAI_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Minigame_AiVsAI_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.ReceiveBeginPlay");
        
        ABW_Minigame_AiVsAI_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.DelayDestroy
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Minigame_AiVsAI_C::DelayDestroy()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.DelayDestroy");
        
        ABW_Minigame_AiVsAI_C_DelayDestroy_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.GameOver
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Minigame_AiVsAI_C::GameOver()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.GameOver");
        
        ABW_Minigame_AiVsAI_C_GameOver_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.ExecuteUbergraph_BW_Minigame_AiVsAI
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Minigame_AiVsAI_C::ExecuteUbergraph_BW_Minigame_AiVsAI(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Minigames/Bowling/BW_Minigame_AiVsAI.BW_Minigame_AiVsAI_C.ExecuteUbergraph_BW_Minigame_AiVsAI");
        
        ABW_Minigame_AiVsAI_C_ExecuteUbergraph_BW_Minigame_AiVsAI_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
