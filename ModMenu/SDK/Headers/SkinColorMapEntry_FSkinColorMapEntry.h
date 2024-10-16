#pragma once

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    10/14/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>
#include "BasicTypes_FName.h"
#include "AvatarMaterialOverride_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SkinColorMapEntry
{
    /**
     * UserDefinedStruct /Game/Datatables/Structs/SkinColorMapEntry.SkinColorMapEntry
     * Size -> 0x0020
     */
    struct FSkinColorMapEntry
    {
    public:
        BasicTypes::FName                                            SkinColorBase_2_90AD60704C4B5D0DB7AF3C9AFAA013F4;        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::FName                                            SkinColorShadow_4_37B7E7F4499161E9F3068E8A1EDF3B78;      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         EarlyAccess_8_287D7C1E40E34F90F6A1FFA13E6D258C;          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        AvatarMaterialOverride::EAvatarMaterialOverride              MaterialOverride_11_EB5C7FEF4A872779A2BBA7BC645D5898;    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         AiDisabled_6_9573FA5E4E90C9398E335FA84A90A6EC;           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0000[0x5];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FName                                            SkinPack_14_2F52F7A44FDCB5455DCE5FA7A35093F8;            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
