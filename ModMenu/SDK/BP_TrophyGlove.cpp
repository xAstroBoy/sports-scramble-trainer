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
#include "Headers/BP_TrophyGlove_PARAMS.h"
#include "Headers/BP_TrophyGlove_ABP_TrophyGlove_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_TrophyGlove
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.RemoveTrophy
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGlove_C::RemoveTrophy()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.RemoveTrophy");
        
        ABP_TrophyGlove_C_RemoveTrophy_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.HideGlove
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               shouldHide                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABP_TrophyGlove_C::HideGlove(bool shouldHide)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.HideGlove");
        
        ABP_TrophyGlove_C_HideGlove_Params params {};
        params.shouldHide = shouldHide;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.SetMenuInstrumentVisibility
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABP_TrophyGlove_C::SetMenuInstrumentVisibility(bool visible)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.SetMenuInstrumentVisibility");
        
        ABP_TrophyGlove_C_SetMenuInstrumentVisibility_Params params {};
        params.visible = visible;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.SpawnFX
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGlove_C::SpawnFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.SpawnFX");
        
        ABP_TrophyGlove_C_SpawnFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.ToggleEnable
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               canGrab                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         bool                                               hasTrophy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABP_TrophyGlove_C::ToggleEnable(bool canGrab, bool* hasTrophy)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.ToggleEnable");
        
        ABP_TrophyGlove_C_ToggleEnable_Params params {};
        params.canGrab = canGrab;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (hasTrophy != nullptr)
            *hasTrophy = params.hasTrophy;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.SetRotation
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         float                                              LerpIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::ATrophyGrabbable*                  Trophy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABP_TrophyGlove_C::SetRotation(float LerpIndex, SportsScramble::ATrophyGrabbable* Trophy)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.SetRotation");
        
        ABP_TrophyGlove_C_SetRotation_Params params {};
        params.LerpIndex = LerpIndex;
        params.Trophy = Trophy;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.SetTrophyPosition
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         float                                              LerpIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::ATrophyGrabbable*                  Trophy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABP_TrophyGlove_C::SetTrophyPosition(float LerpIndex, SportsScramble::ATrophyGrabbable* Trophy)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.SetTrophyPosition");
        
        ABP_TrophyGlove_C_SetTrophyPosition_Params params {};
        params.LerpIndex = LerpIndex;
        params.Trophy = Trophy;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.SetScale
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         float                                              LerpIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::ATrophyGrabbable*                  Trophy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABP_TrophyGlove_C::SetScale(float LerpIndex, SportsScramble::ATrophyGrabbable* Trophy)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.SetScale");
        
        ABP_TrophyGlove_C_SetScale_Params params {};
        params.LerpIndex = LerpIndex;
        params.Trophy = Trophy;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGlove_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.UserConstructionScript");
        
        ABP_TrophyGlove_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyGlove_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.ReceiveBeginPlay");
        
        ABP_TrophyGlove_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.OnShouldGrab
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         SportsScramble::ATrophyGrabbable*                  Trophy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABP_TrophyGlove_C::OnShouldGrab(SportsScramble::ATrophyGrabbable* Trophy)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.OnShouldGrab");
        
        ABP_TrophyGlove_C_OnShouldGrab_Params params {};
        params.Trophy = Trophy;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.ExecuteUbergraph_BP_TrophyGlove
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABP_TrophyGlove_C::ExecuteUbergraph_BP_TrophyGlove(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/BP_TrophyGlove.BP_TrophyGlove_C.ExecuteUbergraph_BP_TrophyGlove");
        
        ABP_TrophyGlove_C_ExecuteUbergraph_BP_TrophyGlove_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif