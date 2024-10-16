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
#include "MovieScene_UMovieSceneSection.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieSceneTracks
{
    /**
     * Class /Script/MovieSceneTracks.MovieSceneColorSection
     * Size -> 0x0280 (FullSize[0x0360] - InheritedSize[0x00E0])
     */
    class UMovieSceneColorSection : public MovieScene::UMovieSceneSection
    {
    public:
        MovieScene::FMovieSceneFloatChannel                          RedCurve;                                                //  NativeAccessSpecifierPrivate
        MovieScene::FMovieSceneFloatChannel                          GreenCurve;                                              //  NativeAccessSpecifierPrivate
        MovieScene::FMovieSceneFloatChannel                          BlueCurve;                                               //  NativeAccessSpecifierPrivate
        MovieScene::FMovieSceneFloatChannel                          AlphaCurve;                                              //  NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MovieSceneTracks.MovieSceneColorSection");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
