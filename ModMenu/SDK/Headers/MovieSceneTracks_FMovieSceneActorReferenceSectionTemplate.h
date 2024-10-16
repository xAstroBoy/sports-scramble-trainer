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
#include "MovieScene_FMovieScenePropertySectionData.h"
#include "MovieSceneTracks_FMovieSceneActorReferenceData.h"
#include "MovieScene_FMovieSceneEvalTemplate.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieSceneTracks
{
    /**
     * ScriptStruct /Script/MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
     * Size -> 0x00C8 (FullSize[0x00E8] - InheritedSize[0x0020])
     */
    struct FMovieSceneActorReferenceSectionTemplate : public MovieScene::FMovieSceneEvalTemplate
    {
    public:
        MovieScene::FMovieScenePropertySectionData                   PropertyData;                                            //  NativeAccessSpecifierPrivate
        MovieSceneTracks::FMovieSceneActorReferenceData              ActorReferenceData;                                      //  NativeAccessSpecifierPrivate
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
