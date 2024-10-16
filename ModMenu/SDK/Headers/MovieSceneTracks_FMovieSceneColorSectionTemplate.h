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
#include "MovieScene_ENUMS.h"
#include "MovieScene_FMovieScenePropertySectionTemplate.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieSceneTracks
{
    /**
     * ScriptStruct /Script/MovieSceneTracks.MovieSceneColorSectionTemplate
     * Size -> 0x0288 (FullSize[0x02D0] - InheritedSize[0x0048])
     */
    struct FMovieSceneColorSectionTemplate : public MovieScene::FMovieScenePropertySectionTemplate
    {
    public:
        MovieScene::FMovieSceneFloatChannel                          Curves[0x4];                                             //  NativeAccessSpecifierPublic
        MovieScene::EMovieSceneBlendType                             BlendType;                                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
