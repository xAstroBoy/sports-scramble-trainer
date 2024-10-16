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
#include "CoreUObject_FVector2D.h"
#include "MovieSceneTracks_FMovieSceneVectorKeyStructBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieSceneTracks
{
    /**
     * ScriptStruct /Script/MovieSceneTracks.MovieSceneVector2DKeyStruct
     * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
     */
    struct FMovieSceneVector2DKeyStruct : public MovieSceneTracks::FMovieSceneVectorKeyStructBase
    {
    public:
        CoreUObject::FVector2D                                       Vector;                                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
