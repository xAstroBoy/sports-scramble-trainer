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
#include "BasicTypes_FText.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USkeletalMesh; };
namespace CG::Engine { class UStaticMesh; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AvatarDefinition
{
    /**
     * UserDefinedStruct /Game/Datatables/Structs/AvatarDefinition.AvatarDefinition
     * Size -> 0x002E
     */
    struct FAvatarDefinition
    {
    public:
        BasicTypes::FText                                            Name_6_4E03D7D84315F6883108479F2A94F009;                 //  Edit, BlueprintVisible
        Engine::USkeletalMesh*                                       SkeletalMesh_3_D30BEF1B4CD8DE04417712AB55AFA2F5;         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMesh*                                         AlternateStaticMesh_32_5AE3F12547494F6141B6E39C620B9D91; //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      Requirement_27_5614A6134CCA62FEA28D64A0750DAD81;         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         EarlyAccess_33_1D0343714CC51687303BFEB34695DD15;         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        bool                                                         AiDisabled_25_37E9B3B14148F8C12DB3D891D76B78B8;          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
