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
#include "MovieScene_FMovieSceneFloatChannel.h"
#include "MovieScene_ENUMS.h"
#include "UMG_FMovieScene2DTransformMask.h"
#include "MovieScene_FMovieScenePropertySectionTemplate.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * ScriptStruct /Script/UMG.MovieScene2DTransformSectionTemplate
     * Size -> 0x0468 (FullSize[0x04B0] - InheritedSize[0x0048])
     */
    struct FMovieScene2DTransformSectionTemplate : public MovieScene::FMovieScenePropertySectionTemplate
    {
    public:
        MovieScene::FMovieSceneFloatChannel                          Translation[0x2];                                        //  NativeAccessSpecifierPrivate
        MovieScene::FMovieSceneFloatChannel                          Rotation;                                                //  NativeAccessSpecifierPrivate
        MovieScene::FMovieSceneFloatChannel                          Scale[0x2];                                              //  NativeAccessSpecifierPrivate
        MovieScene::FMovieSceneFloatChannel                          Shear[0x2];                                              //  NativeAccessSpecifierPrivate
        MovieScene::EMovieSceneBlendType                             BlendType;                                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        UMG::FMovieScene2DTransformMask                              Mask;                                                    //  NoDestructor, NativeAccessSpecifierPrivate
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif