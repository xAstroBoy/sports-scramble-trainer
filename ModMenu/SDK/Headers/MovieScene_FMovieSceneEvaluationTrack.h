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
#include "CoreUObject_FGuid.h"
#include "MovieScene_ENUMS.h"
#include "MovieScene_FMovieSceneEvaluationTrackSegments.h"
#include "MovieScene_FSectionEvaluationDataTree.h"
#include "BasicTypes_TArray.h"
#include "MovieScene_FMovieSceneEvalTemplatePtr.h"
#include "MovieScene_FMovieSceneTrackImplementationPtr.h"
#include "BasicTypes_FName.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MovieScene { class UMovieSceneTrack; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * ScriptStruct /Script/MovieScene.MovieSceneEvaluationTrack
     * Size -> 0x00F8
     */
    struct FMovieSceneEvaluationTrack
    {
    public:
        CoreUObject::FGuid                                           ObjectBindingId;                                         //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint16_t                                                     EvaluationPriority;                                      //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        MovieScene::EEvaluationMethod                                EvaluationMethod;                                        //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x5];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        MovieScene::FMovieSceneEvaluationTrackSegments               Segments;                                                //  NativeAccessSpecifierPrivate
        MovieScene::UMovieSceneTrack*                                SourceTrack;                                             //  ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        MovieScene::FSectionEvaluationDataTree                       EvaluationTree;                                          //  NativeAccessSpecifierPrivate
        BasicTypes::TArray<MovieScene::FMovieSceneEvalTemplatePtr>   ChildTemplates;                                          //  ZeroConstructor, NativeAccessSpecifierPrivate
        MovieScene::FMovieSceneTrackImplementationPtr                TrackTemplate;                                           //  NativeAccessSpecifierPrivate
        BasicTypes::FName                                            EvaluationGroup;                                         //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bEvaluateInPreroll : 1;                                  //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bEvaluateInPostroll : 1;                                 //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif