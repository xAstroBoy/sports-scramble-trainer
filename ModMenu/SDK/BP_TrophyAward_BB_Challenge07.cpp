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
#include "Headers/BP_TrophyAward_BB_Challenge07_PARAMS.h"
#include "Headers/BP_TrophyAward_BB_Challenge07_ABP_TrophyAward_BB_Challenge07_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_TrophyAward_BB_Challenge07
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyAward/Baseball/Challenges/BP_TrophyAward_BB_Challenge07.BP_TrophyAward_BB_Challenge07_C.ResetProgress
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyAward_BB_Challenge07_C::ResetProgress()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyAward/Baseball/Challenges/BP_TrophyAward_BB_Challenge07.BP_TrophyAward_BB_Challenge07_C.ResetProgress");
        
        ABP_TrophyAward_BB_Challenge07_C_ResetProgress_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyAward/Baseball/Challenges/BP_TrophyAward_BB_Challenge07.BP_TrophyAward_BB_Challenge07_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABP_TrophyAward_BB_Challenge07_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyAward/Baseball/Challenges/BP_TrophyAward_BB_Challenge07.BP_TrophyAward_BB_Challenge07_C.UserConstructionScript");
        
        ABP_TrophyAward_BB_Challenge07_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyAward/Baseball/Challenges/BP_TrophyAward_BB_Challenge07.BP_TrophyAward_BB_Challenge07_C.HomeRun
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramPlayer*                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABP_TrophyAward_BB_Challenge07_C::HomeRun(SportsScramble::AScramPlayer* Player, int32_t PlayerId)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyAward/Baseball/Challenges/BP_TrophyAward_BB_Challenge07.BP_TrophyAward_BB_Challenge07_C.HomeRun");
        
        ABP_TrophyAward_BB_Challenge07_C_HomeRun_Params params {};
        params.Player = Player;
        params.PlayerId = PlayerId;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Trophy/TrophyAward/Baseball/Challenges/BP_TrophyAward_BB_Challenge07.BP_TrophyAward_BB_Challenge07_C.ExecuteUbergraph_BP_TrophyAward_BB_Challenge07
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABP_TrophyAward_BB_Challenge07_C::ExecuteUbergraph_BP_TrophyAward_BB_Challenge07(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Trophy/TrophyAward/Baseball/Challenges/BP_TrophyAward_BB_Challenge07.BP_TrophyAward_BB_Challenge07_C.ExecuteUbergraph_BP_TrophyAward_BB_Challenge07");
        
        ABP_TrophyAward_BB_Challenge07_C_ExecuteUbergraph_BP_TrophyAward_BB_Challenge07_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif