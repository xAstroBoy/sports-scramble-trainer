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
#include "CoreUObject_FTransform.h"
#include "CoreUObject_FVector.h"
#include "BasicTypes_FText.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::TN_Ball_Base { class ATN_Ball_Base_C; };
namespace CG::Engine { class UStaticMesh; };
namespace CG::Engine { class UTexture2D; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_BallTypes
{
    /**
     * UserDefinedStruct /Game/Datatables/Structs/TN_BallTypes.TN_BallTypes
     * Size -> 0x0070
     */
    struct FTN_BallTypes
    {
    public:
        TN_Ball_Base::ATN_Ball_Base_C*                               BallClass_2_5E2FAF4A45A5C1C7DBB60DB1C98E87F0;            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMesh*                                         SelectionMesh_5_EED69D43456EF1314A16BD8E5161D5AD;        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FTransform                                      SelectoinMeshOffset_10_FC3760E147ADE9E6BD2D7BBC06C864EE; //  Edit, BlueprintVisible, IsPlainOldData, NoDestructor
        Engine::UTexture2D*                                          ScrambleIcon_13_60BCADE14C476C54E86DA0ABFE2FE64E;        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         ExcludedFromSelection_15_ED35E5E04F74DF2B9AD080AB18682E43; //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        bool                                                         ExcludedFromRandomScrambler_29_FCBC74484537257372CCC198D0270B53; //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        bool                                                         ExcludedFromEquipMatchingScrambler_28_9C20EF25465520C2000751937E6E4F05; //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        bool                                                         ExcludedFromEquipMatchWarning_26_FE9465FA40307B2DB9BF2296F044C706; //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        CoreUObject::FVector                                         ServeScale_32_9F2D05B746D5C1B8757C90B6D440F56C;          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::FText                                            DisplayName_35_836E4A424D52E6CB47F1ADBE0A5B7F3F;         //  Edit, BlueprintVisible
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif