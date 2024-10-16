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
#include "CoreUObject_FSoftClassPath.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::LevelSequence { class ULevelSequenceBurnInInitSettings; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::LevelSequence
{
    /**
     * Class /Script/LevelSequence.LevelSequenceBurnInOptions
     * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
     */
    class ULevelSequenceBurnInOptions : public CoreUObject::UObject
    {
    public:
        bool                                                         bUseBurnIn;                                              //  Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FSoftClassPath                                  BurnInClass;                                             //  Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic
        LevelSequence::ULevelSequenceBurnInInitSettings*             Settings;                                                //  Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        void SetBurnIn(const CoreUObject::FSoftClassPath& InBurnInClass);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/LevelSequence.LevelSequenceBurnInOptions");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
