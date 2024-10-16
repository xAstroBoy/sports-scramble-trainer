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
#include "CoreUObject_IInterface.h"
#include "BasicTypes_FString.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Scoreboard
{
    /**
     * BlueprintGeneratedClass /Game/Interfaces/Scoreboard.Scoreboard_C
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class IScoreboard_C : public CoreUObject::IInterface
    {
    public:
        void OverrideScoreText(const BasicTypes::FString& InputString, bool* Callback);
        void HideClock(bool* ClockHidden);
        void ResumeClock(bool* ClockResumed);
        void ResetClock(bool* ClockReset);
        void PauseClock(int32_t* DisplayedTime);
        void StartClock(int32_t Duration, bool Countdown, bool AutoStart, bool* TimerStarted);
        void SetScore(int32_t NewScore, bool* ScoreUpdated);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Interfaces/Scoreboard.Scoreboard_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
