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
#include "BasicTypes_TArray.h"
#include "CoreUObject_FFrameNumber.h"
#include "MovieSceneTracks_FEventPayload.h"
#include "MovieScene_FMovieSceneChannel.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieSceneTracks
{
    /**
     * ScriptStruct /Script/MovieSceneTracks.MovieSceneEventSectionData
     * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
     */
    struct FMovieSceneEventSectionData : public MovieScene::FMovieSceneChannel
    {
    public:
        BasicTypes::TArray<CoreUObject::FFrameNumber>                Times;                                                   //  ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::TArray<MovieSceneTracks::FEventPayload>          KeyValues;                                               //  ZeroConstructor, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x60];                                  //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif