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
#include "LevelSequence_FLevelSequenceObjectReferenceMap.h"
#include "LevelSequence_FLevelSequenceBindingReferences.h"
#include "BasicTypes_TMap.h"
#include "BasicTypes_FString.h"
#include "LevelSequence_FLevelSequenceObject.h"
#include "MovieScene_UMovieSceneSequence.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MovieScene { class UMovieScene; };
namespace CG::CoreUObject { class UObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::LevelSequence
{
    /**
     * Class /Script/LevelSequence.LevelSequence
     * Size -> 0x0150 (FullSize[0x0498] - InheritedSize[0x0348])
     */
    class ULevelSequence : public MovieScene::UMovieSceneSequence
    {
    public:
        MovieScene::UMovieScene*                                     MovieScene;                                              //  ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::UObject*                                        DirectorClass;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        LevelSequence::FLevelSequenceObjectReferenceMap              ObjectReferences;                                        //  Protected, NativeAccessSpecifierProtected
        LevelSequence::FLevelSequenceBindingReferences               BindingReferences;                                       //  Protected, NativeAccessSpecifierProtected
        BasicTypes::TMap<BasicTypes::FString, LevelSequence::FLevelSequenceObject> PossessedObjects;                                        //  ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/LevelSequence.LevelSequence");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
