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
#include "AudioMixer_FSubmixEffectSubmixEQSettings.h"
#include "Engine_USoundEffectSubmixPreset.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AudioMixer
{
    /**
     * Class /Script/AudioMixer.SubmixEffectSubmixEQPreset
     * Size -> 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
     */
    class USubmixEffectSubmixEQPreset : public Engine::USoundEffectSubmixPreset
    {
    public:
        uint8_t                                                      UnknownData_0000[0x38];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        AudioMixer::FSubmixEffectSubmixEQSettings                    Settings;                                                //  Edit, BlueprintVisible, NativeAccessSpecifierPublic

    public:
        void SetSettings(const AudioMixer::FSubmixEffectSubmixEQSettings& InSettings);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AudioMixer.SubmixEffectSubmixEQPreset");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif