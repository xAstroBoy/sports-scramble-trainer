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
#include "BasicTypes_FString.h"
#include "BasicTypes_FText.h"
#include "MovieScene_UMovieSceneSubSection.h"

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
     * Class /Script/MovieSceneTracks.MovieSceneCinematicShotSection
     * Size -> 0x0028 (FullSize[0x0178] - InheritedSize[0x0150])
     */
    class UMovieSceneCinematicShotSection : public MovieScene::UMovieSceneSubSection
    {
    public:
        BasicTypes::FString                                          ShotDisplayName;                                         //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::FText                                            DisplayName;                                             //  Deprecated, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MovieSceneTracks.MovieSceneCinematicShotSection");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
