#pragma once

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    09/09/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::ScrambleEvent_Base { class AScrambleEvent_Base_C; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ScramblerTargetSet
{
    /**
     * UserDefinedStruct /Game/Datatables/Structs/ScramblerTargetSet.ScramblerTargetSet
     * Size -> 0x0010
     */
    struct FScramblerTargetSet
    {
    public:
        ScrambleEvent_Base::AScrambleEvent_Base_C*                   ScrambleEventClass_19_2B02531A4A6A53BEDC414A832812B48E;  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      Weight_22_4E6E0CC1491E55032371BE9FC1A63183;              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      MaxActive_24_6E0F3E6A4CFCF69B869E949AE13D7CD3;           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif