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
#include "Headers/BaseballAI_Dummy_Batter_Blueprint_PARAMS.h"
#include "Headers/BaseballAI_Dummy_Batter_Blueprint_ABaseballAI_Dummy_Batter_Blueprint_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BaseballAI_Dummy_Batter_Blueprint
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABaseballAI_Dummy_Batter_Blueprint_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.UserConstructionScript");
        
        ABaseballAI_Dummy_Batter_Blueprint_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABaseballAI_Dummy_Batter_Blueprint_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ReceiveBeginPlay");
        
        ABaseballAI_Dummy_Batter_Blueprint_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABaseballAI_Dummy_Batter_Blueprint_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ReceiveEndPlay");
        
        ABaseballAI_Dummy_Batter_Blueprint_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ExecuteUbergraph_BaseballAI_Dummy_Batter_Blueprint
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABaseballAI_Dummy_Batter_Blueprint_C::ExecuteUbergraph_BaseballAI_Dummy_Batter_Blueprint(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ExecuteUbergraph_BaseballAI_Dummy_Batter_Blueprint");
        
        ABaseballAI_Dummy_Batter_Blueprint_C_ExecuteUbergraph_BaseballAI_Dummy_Batter_Blueprint_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
