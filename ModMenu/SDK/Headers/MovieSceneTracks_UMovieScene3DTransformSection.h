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
#include "MovieSceneTracks_FMovieSceneTransformMask.h"
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
     * Class /Script/MovieSceneTracks.MovieScene3DTransformSection
     * Size -> 0x0650 (FullSize[0x0730] - InheritedSize[0x00E0])
     */
    class UMovieScene3DTransformSection : public MovieScene::UMovieSceneSection
    {
    public:
        MovieSceneTracks::FMovieSceneTransformMask                   TransformMask;                                           //  NoDestructor, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        MovieScene::FMovieSceneFloatChannel                          Translation[0x3];                                        //  NativeAccessSpecifierPrivate
        MovieScene::FMovieSceneFloatChannel                          Rotation[0x3];                                           //  NativeAccessSpecifierPrivate
        MovieScene::FMovieSceneFloatChannel                          Scale[0x3];                                              //  NativeAccessSpecifierPrivate
        MovieScene::FMovieSceneFloatChannel                          ManualWeight;                                            //  NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bUseQuaternionInterpolation;                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x3];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MovieSceneTracks.MovieScene3DTransformSection");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif