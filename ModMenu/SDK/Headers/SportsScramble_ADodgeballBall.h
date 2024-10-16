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
#include "SportsScramble_AScramBall.h"
#include "SportsScramble_FDodgeballShot.h"
#include "SportsScramble_FDodgeballBallProperties.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.DodgeballBall
     * Size -> 0x00E0 (FullSize[0x0C00] - InheritedSize[0x0B20])
     */
    class ADodgeballBall : public SportsScramble::AScramBall
    {
    public:
        uint8_t                                                      UnknownData_0000[0xE0];                                  //  MISSED OFFSET (PADDING)

    public:
        void OnShotChanged();
        SportsScramble::FDodgeballShot GetShot();
        SportsScramble::FDodgeballBallProperties GetDodgeballBallProperties();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.DodgeballBall");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
