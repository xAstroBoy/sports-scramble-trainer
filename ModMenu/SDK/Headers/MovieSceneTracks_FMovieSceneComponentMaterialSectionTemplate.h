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
#include "MovieSceneTracks_FMovieSceneParameterSectionTemplate.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieSceneTracks
{
    /**
     * ScriptStruct /Script/MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
     * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
     */
    struct FMovieSceneComponentMaterialSectionTemplate : public MovieSceneTracks::FMovieSceneParameterSectionTemplate
    {
    public:
        int32_t                                                      MaterialIndex;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
