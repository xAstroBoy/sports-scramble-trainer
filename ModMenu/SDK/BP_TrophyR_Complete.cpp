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
#include "Headers/BP_TrophyR_Complete_PARAMS.h"
#include "Headers/BP_TrophyR_Complete_UBP_TrophyR_Complete_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_TrophyR_Complete
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/UI/TrophyRoom/Blueprint/BP_TrophyR_Complete.BP_TrophyR_Complete_C.HideTrophyInfoDisplay
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UBP_TrophyR_Complete_C::HideTrophyInfoDisplay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/TrophyRoom/Blueprint/BP_TrophyR_Complete.BP_TrophyR_Complete_C.HideTrophyInfoDisplay");
        
        UBP_TrophyR_Complete_C_HideTrophyInfoDisplay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/UI/TrophyRoom/Blueprint/BP_TrophyR_Complete.BP_TrophyR_Complete_C.ShowTrophyInfoDisplay
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         BasicTypes::FName                                  TrophyNameText                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         BasicTypes::FText                                  TrophyDescText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
     *         BasicTypes::FText                                  DateEarned                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
     *         void                                               ReturnValue
     */
    void UBP_TrophyR_Complete_C::ShowTrophyInfoDisplay(const BasicTypes::FName& TrophyNameText, const BasicTypes::FText& TrophyDescText, const BasicTypes::FText& DateEarned)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/TrophyRoom/Blueprint/BP_TrophyR_Complete.BP_TrophyR_Complete_C.ShowTrophyInfoDisplay");
        
        UBP_TrophyR_Complete_C_ShowTrophyInfoDisplay_Params params {};
        params.TrophyNameText = TrophyNameText;
        params.TrophyDescText = TrophyDescText;
        params.DateEarned = DateEarned;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif