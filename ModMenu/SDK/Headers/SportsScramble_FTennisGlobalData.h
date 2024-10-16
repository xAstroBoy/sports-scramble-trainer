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
#include "Engine_FDataTableRowHandle.h"
#include "SportsScramble_FAngle.h"
#include "SportsScramble_FMinMaxAngle.h"
#include "SportsScramble_FMinMaxFloat.h"
#include "SportsScramble_FTennisPlayerHandicap.h"
#include "SportsScramble_FTennisGlobalSkillData.h"
#include "SportsScramble_FInferredContactParameters.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UCurveFloat; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * ScriptStruct /Script/SportsScramble.TennisGlobalData
     * Size -> 0x03F8
     */
    struct FTennisGlobalData
    {
    public:
        Engine::FDataTableRowHandle                                  ShotSpeedProperties[0x4];                                //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        Engine::FDataTableRowHandle                                  ShotSpinProperties[0x4];                                 //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        Engine::FDataTableRowHandle                                  ShotTypeProperties[0x6];                                 //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        SportsScramble::FAngle                                       MaxSliceSwingPitch;                                      //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        SportsScramble::FMinMaxAngle                                 ForehandSliceSpinPitchRange;                             //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        SportsScramble::FMinMaxAngle                                 BackhandSliceSpinPitchRange;                             //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        float                                                        SmallPlayAreaDiagonal;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        LargePlayAreaDiagonal;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SportsScramble::FMinMaxFloat                                 ReturnHeightRange;                                       //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        float                                                        MaxAvoidanceZ;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        MinimumInDistance;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        MinimumOutDistance;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        OutOfPlayEvaluationDistance;                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UCurveFloat*                                         AvoidCenterChanceCurve;                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        AvoidCenterDistance;                                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SportsScramble::FTennisPlayerHandicap                        LeadingHandicap;                                         //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        SportsScramble::FTennisPlayerHandicap                        LosingHandicap;                                          //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        SportsScramble::FTennisGlobalSkillData                       SkillData[0x3];                                          //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::FInferredContactParameters                   InferredContactParameters;                               //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x238];                                 //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
