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
#include "MovieScene_ENUMS.h"
#include "CoreUObject_FGuid.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * ScriptStruct /Script/MovieScene.MovieSceneObjectBindingID
     * Size -> 0x0018
     */
    struct FMovieSceneObjectBindingID
    {
    public:
        int32_t                                                      SequenceID;                                              //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        MovieScene::EMovieSceneObjectBindingSpace                    Space;                                                   //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FGuid                                           Guid;                                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif