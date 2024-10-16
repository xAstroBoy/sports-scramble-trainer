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
#include "BasicTypes_FName.h"
#include "MovieSceneTracks_UMovieSceneMaterialTrack.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * Class /Script/UMG.MovieSceneWidgetMaterialTrack
     * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
     */
    class UMovieSceneWidgetMaterialTrack : public MovieSceneTracks::UMovieSceneMaterialTrack
    {
    public:
        BasicTypes::TArray<BasicTypes::FName>                        BrushPropertyNamePath;                                   //  ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::FName                                            TrackName;                                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.MovieSceneWidgetMaterialTrack");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
