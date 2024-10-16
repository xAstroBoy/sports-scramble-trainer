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
#include "MovieScene_FMovieSceneFloatChannel.h"
#include "BasicTypes_UScriptDelegate.h"
#include "BasicTypes_UScriptMulticastDelegate.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USoundBase; };
namespace CG::Engine { class USoundAttenuation; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieSceneTracks
{
    /**
     * ScriptStruct /Script/MovieSceneTracks.MovieSceneAudioSectionTemplateData
     * Size -> 0x0198
     */
    struct FMovieSceneAudioSectionTemplateData
    {
    public:
        Engine::USoundBase*                                          Sound;                                                   //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AudioStartOffset;                                        //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        double                                                       SectionStartTimeSeconds;                                 //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        MovieScene::FMovieSceneFloatChannel                          AudioPitchMultiplierCurve;                               //  NativeAccessSpecifierPublic
        MovieScene::FMovieSceneFloatChannel                          AudioVolumeCurve;                                        //  NativeAccessSpecifierPublic
        int32_t                                                      RowIndex;                                                //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOverrideAttenuation;                                    //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::USoundAttenuation*                                   AttenuationSettings;                                     //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::UScriptDelegate                                  OnQueueSubtitles;                                        //  ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnAudioFinished;                                         //  ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnAudioPlaybackPercent;                                  //  ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
