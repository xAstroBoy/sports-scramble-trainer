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
#include "Engine_FDataTableRowHandle.h"
#include "SportsScramble_FMinMaxFloat.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * ScriptStruct /Script/SportsScramble.DodgeballGlobalData
     * Size -> 0x0258
     */
    struct FDodgeballGlobalData
    {
    public:
        Engine::FDataTableRowHandle                                  ShotSpeedProperties[0x4];                                //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        Engine::FDataTableRowHandle                                  ShotSpinProperties[0x4];                                 //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        Engine::FDataTableRowHandle                                  ShotTypeProperties[0x5];                                 //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        SportsScramble::FMinMaxFloat                                 ForehandSlicePitchRange;                                 //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        SportsScramble::FMinMaxFloat                                 BackhandSlicePitchRange;                                 //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x178];                                 //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif