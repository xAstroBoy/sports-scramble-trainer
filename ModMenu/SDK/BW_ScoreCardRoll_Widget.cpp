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
#include "Headers/BW_ScoreCardRoll_Widget_PARAMS.h"
#include "Headers/BW_ScoreCardRoll_Widget_UBW_ScoreCardRoll_Widget_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_ScoreCardRoll_Widget
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Bowling/BW_ScoreCardRoll_Widget.BW_ScoreCardRoll_Widget_C.ShowRoll
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::FBowlingRoll                       Roll                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
     *         SportsScramble::EBowlingRollResult                 PriorRollResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBW_ScoreCardRoll_Widget_C::ShowRoll(const SportsScramble::FBowlingRoll& Roll, SportsScramble::EBowlingRollResult PriorRollResult)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Bowling/BW_ScoreCardRoll_Widget.BW_ScoreCardRoll_Widget_C.ShowRoll");
        
        UBW_ScoreCardRoll_Widget_C_ShowRoll_Params params {};
        params.Roll = Roll;
        params.PriorRollResult = PriorRollResult;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif