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
#include "SportsScramble_ENUMS.h"
#include "BasicTypes_FText.h"
#include "BasicTypes_FName.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };
namespace CG::Engine { class UTexture2D; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TrainingDefinitionEntry
{
    /**
     * UserDefinedStruct /Game/Datatables/Structs/TrainingDefinitionEntry.TrainingDefinitionEntry
     * Size -> 0x0068
     */
    struct FTrainingDefinitionEntry
    {
    public:
        SportsScramble::EScramSport                                  Sport_2_91C890A94F86972300BB239BC0F160C8;                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::AActor*                                              TrainingClass_19_E1996BE849B3759CFDC40A88588A6C1D;       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::FText                                            Title_8_BEFC0FED49F408C0E395AAA079E79F5F;                //  Edit, BlueprintVisible
        BasicTypes::FText                                            Description_10_7FA0F7514C564A6F57B95790A7CE8882;         //  Edit, BlueprintVisible
        int32_t                                                      UnlockOverride_13_F13694EB49BB7C3D934546BD4D6C14C5;      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         HasOptionsMenu_21_B7F3F45C49E53A8C0C3C249220A9C59C;      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        bool                                                         DisableNextButton_25_0759972D476289045B2984B1944D8B8B;   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0001[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FName                                            SpawnLocOverride_28_C8C3C1244386BA71609DEDA84C82E08B;    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         UseStandardArena_31_62F0E647418CA2D771679996FDD2214B;    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0002[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTexture2D*                                          PreviewImageLeft_34_F10C8B44446E1FE457FC0298D09AFB4C;    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UTexture2D*                                          PreviewImageRight_36_76D2ECC443603849CEEB079B361498CE;   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
