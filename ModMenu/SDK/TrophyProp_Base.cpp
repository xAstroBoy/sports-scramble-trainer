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
#include "Headers/TrophyProp_Base_PARAMS.h"
#include "Headers/TrophyProp_Base_ATrophyProp_Base_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TrophyProp_Base
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.SetWidgetVisibility
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ATrophyProp_Base_C::SetWidgetVisibility(bool IsVisible)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.SetWidgetVisibility");
        
        ATrophyProp_Base_C_SetWidgetVisibility_Params params {};
        params.IsVisible = IsVisible;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.InitializeColors
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATrophyProp_Base_C::InitializeColors()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.InitializeColors");
        
        ATrophyProp_Base_C_InitializeColors_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.InitializeMaterialArray
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATrophyProp_Base_C::InitializeMaterialArray()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.InitializeMaterialArray");
        
        ATrophyProp_Base_C_InitializeMaterialArray_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.ChangeMaterials
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATrophyProp_Base_C::ChangeMaterials()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.ChangeMaterials");
        
        ATrophyProp_Base_C_ChangeMaterials_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.SetInstanceVisibility
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ATrophyProp_Base_C::SetInstanceVisibility(bool IsVisible)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.SetInstanceVisibility");
        
        ATrophyProp_Base_C_SetInstanceVisibility_Params params {};
        params.IsVisible = IsVisible;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.SetupCollision
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATrophyProp_Base_C::SetupCollision()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.SetupCollision");
        
        ATrophyProp_Base_C_SetupCollision_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATrophyProp_Base_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.UserConstructionScript");
        
        ATrophyProp_Base_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ATrophyProp_Base_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.ReceiveBeginPlay");
        
        ATrophyProp_Base_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.ExecuteUbergraph_TrophyProp_Base
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ATrophyProp_Base_C::ExecuteUbergraph_TrophyProp_Base(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Props/Common/Trophies/Blueprints/TrophyProp_Base.TrophyProp_Base_C.ExecuteUbergraph_TrophyProp_Base");
        
        ATrophyProp_Base_C_ExecuteUbergraph_TrophyProp_Base_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif