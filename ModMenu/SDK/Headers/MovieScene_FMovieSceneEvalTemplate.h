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
#include "MovieScene_ENUMS.h"
#include "MovieScene_FMovieSceneEvalTemplateBase.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MovieScene { class UMovieSceneSection; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * ScriptStruct /Script/MovieScene.MovieSceneEvalTemplate
     * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
     */
    struct FMovieSceneEvalTemplate : public MovieScene::FMovieSceneEvalTemplateBase
    {
    public:
        MovieScene::EMovieSceneCompletionMode                        CompletionMode;                                          //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        MovieScene::UMovieSceneSection*                              SourceSection;                                           //  ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
