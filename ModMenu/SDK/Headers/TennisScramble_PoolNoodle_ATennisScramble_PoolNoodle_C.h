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
#include "ScrambleEvent_Base_AScrambleEvent_Base_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };
namespace CG::TN_Instrument_Base { class ATN_Instrument_Base_C; };
namespace CG::TN_Ball_Base { class ATN_Ball_Base_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TennisScramble_PoolNoodle
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Scrambles/Tennis/TennisScramble_PoolNoodle.TennisScramble_PoolNoodle_C
     * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
     */
    class ATennisScramble_PoolNoodle_C : public ScrambleEvent_Base::AScrambleEvent_Base_C
    {
    public:
        void RacquetChanged(Engine::AActor* Player, TN_Instrument_Base::ATN_Instrument_Base_C* Instrument);
        void GetRandomInstrument(TN_Instrument_Base::ATN_Instrument_Base_C* InstrumentClass, TN_Instrument_Base::ATN_Instrument_Base_C** NewInstrument);
        void ActivateScrambleEffect(TN_Ball_Base::ATN_Ball_Base_C* Ball, Engine::AActor* OtherActor, bool* ScrambleEffectSuccess);
        void UserConstructionScript();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Scrambles/Tennis/TennisScramble_PoolNoodle.TennisScramble_PoolNoodle_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif