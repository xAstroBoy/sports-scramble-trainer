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
#include "BasicTypes_TMap.h"
#include "MovieScene_FMovieSceneSequenceID.h"
#include "MovieScene_FMovieSceneSubSequenceData.h"
#include "MovieScene_FMovieSceneSequenceHierarchyNode.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * ScriptStruct /Script/MovieScene.MovieSceneSequenceHierarchy
     * Size -> 0x00A0
     */
    struct FMovieSceneSequenceHierarchy
    {
    public:
        BasicTypes::TMap<MovieScene::FMovieSceneSequenceID, MovieScene::FMovieSceneSubSequenceData> SubSequences;                                            //  ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::TMap<MovieScene::FMovieSceneSequenceID, MovieScene::FMovieSceneSequenceHierarchyNode> Hierarchy;                                               //  ZeroConstructor, NativeAccessSpecifierPrivate
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
