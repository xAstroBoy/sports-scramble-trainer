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
#include "UI_ButtonState_ENUMS.h"
#include "UI_ButtonStyle_ENUMS.h"
#include "BasicTypes_FText.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_ButtonData
{
    /**
     * UserDefinedStruct /Game/Datatables/Structs/UI_ButtonData.UI_ButtonData
     * Size -> 0x0020
     */
    struct FUI_ButtonData
    {
    public:
        UI_ButtonState::EUI_ButtonState                              State_2_0C4D7BA247C4631A7D7F339CBE234566;                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        UI_ButtonStyle::EUI_ButtonStyle                              Style_5_A5867A2548719645A76B458CD0103443;                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FText                                            Text_8_AB933499452E054980999EACD6CC91C0;                 //  Edit, BlueprintVisible
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif