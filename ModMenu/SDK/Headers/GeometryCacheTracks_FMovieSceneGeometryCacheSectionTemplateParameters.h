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
#include "CoreUObject_FFrameNumber.h"
#include "GeometryCacheTracks_FMovieSceneGeometryCacheParams.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::GeometryCacheTracks
{
    /**
     * ScriptStruct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
     * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
     */
    struct FMovieSceneGeometryCacheSectionTemplateParameters : public GeometryCacheTracks::FMovieSceneGeometryCacheParams
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FFrameNumber                                    SectionStartTime;                                        //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FFrameNumber                                    SectionEndTime;                                          //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
