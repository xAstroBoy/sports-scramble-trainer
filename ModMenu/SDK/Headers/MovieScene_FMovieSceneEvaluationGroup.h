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
#include "BasicTypes_TArray.h"
#include "MovieScene_FMovieSceneEvaluationGroupLUTIndex.h"
#include "MovieScene_FMovieSceneEvaluationFieldSegmentPtr.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * ScriptStruct /Script/MovieScene.MovieSceneEvaluationGroup
     * Size -> 0x0020
     */
    struct FMovieSceneEvaluationGroup
    {
    public:
        BasicTypes::TArray<MovieScene::FMovieSceneEvaluationGroupLUTIndex> LUTIndices;                                              //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<MovieScene::FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;                                           //  ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
