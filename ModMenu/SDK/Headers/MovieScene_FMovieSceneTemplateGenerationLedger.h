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
#include "MovieScene_FMovieSceneTrackIdentifier.h"
#include "BasicTypes_TMap.h"
#include "CoreUObject_FGuid.h"
#include "MovieScene_FMovieSceneFrameRange.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * ScriptStruct /Script/MovieScene.MovieSceneTemplateGenerationLedger
     * Size -> 0x00A8
     */
    struct FMovieSceneTemplateGenerationLedger
    {
    public:
        MovieScene::FMovieSceneTrackIdentifier                       LastTrackIdentifier;                                     //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<CoreUObject::FGuid, MovieScene::FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;                         //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TMap<CoreUObject::FGuid, MovieScene::FMovieSceneFrameRange> SubSectionRanges;                                        //  ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif