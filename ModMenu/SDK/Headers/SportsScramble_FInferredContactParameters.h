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
#include "SportsScramble_ENUMS.h"
#include "SportsScramble_FMinMaxAngle.h"
#include "SportsScramble_FMinMaxFloat.h"
#include "SportsScramble_FAngle.h"

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
     * ScriptStruct /Script/SportsScramble.InferredContactParameters
     * Size -> 0x0050
     */
    struct FInferredContactParameters
    {
    public:
        SportsScramble::EInferredContactActivationMode               ActivationMode;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        RequiredSpeedThreshold;                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UCurveFloat*                                         PullAlphaCurve;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SportsScramble::FMinMaxAngle                                 SwingVelocityYawRange;                                   //  Edit, NoDestructor, NativeAccessSpecifierPublic
        SportsScramble::FMinMaxAngle                                 SwingYawRangeAroundPull;                                 //  Edit, NoDestructor, NativeAccessSpecifierPublic
        SportsScramble::FMinMaxAngle                                 SwingVelocityPitchRange;                                 //  Edit, NoDestructor, NativeAccessSpecifierPublic
        SportsScramble::FMinMaxFloat                                 CriticalFractionRange;                                   //  Edit, NoDestructor, NativeAccessSpecifierPublic
        SportsScramble::FAngle                                       FoulYawThreshold;                                        //  Edit, NoDestructor, NativeAccessSpecifierPublic
        SportsScramble::FMinMaxAngle                                 FoulYawRange;                                            //  Edit, NoDestructor, NativeAccessSpecifierPublic
        float                                                        ContactArmLength;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ContactRangeFront;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ContactRangeBack;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MaxContactDelay;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        TimeUntilTrackingIsReliable;                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif