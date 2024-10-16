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
#include "CoreUObject_FSoftObjectPath.h"
#include "Engine_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "Engine_FAudioQualitySettings.h"
#include "BasicTypes_FString.h"
#include "Engine_UDeveloperSettings.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.AudioSettings
     * Size -> 0x00C0 (FullSize[0x00F8] - InheritedSize[0x0038])
     */
    class UAudioSettings : public Engine::UDeveloperSettings
    {
    public:
        CoreUObject::FSoftObjectPath                                 DefaultSoundClassName;                                   //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftObjectPath                                 DefaultMediaSoundClassName;                              //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftObjectPath                                 DefaultSoundConcurrencyName;                             //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftObjectPath                                 DefaultBaseSoundMix;                                     //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftObjectPath                                 VoiPSoundClass;                                          //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EVoiceSampleRate                                     VoiPSampleRate;                                          //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        VoipBufferingDelay;                                      //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DefaultReverbSendLevel;                                  //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      MaximumConcurrentStreams;                                //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FAudioQualitySettings>            QualityLevels;                                           //  Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
        bool                                                         bAllowCenterChannel3DPanning : 1;                        //  BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAllowVirtualizedSounds : 1;                             //  BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bDisableMasterEQ : 1;                                    //  BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        uint32_t                                                     MaxWaveInstances;                                        //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint32_t                                                     NumStoppingSources;                                      //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EPanningMethod                                       PanningMethod;                                           //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EMonoChannelUpmixMethod                              MonoChannelUpmixMethod;                                  //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FString                                          DialogueFilenameFormat;                                  //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.AudioSettings");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
