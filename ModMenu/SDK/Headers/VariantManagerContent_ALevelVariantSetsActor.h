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
#include "CoreUObject_FSoftObjectPath.h"
#include "Engine_AActor.h"
#include "BasicTypes_FString.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::VariantManagerContent { class ULevelVariantSets; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::VariantManagerContent
{
    /**
     * Class /Script/VariantManagerContent.LevelVariantSetsActor
     * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
     */
    class ALevelVariantSetsActor : public Engine::AActor
    {
    public:
        CoreUObject::FSoftObjectPath                                 LevelVariantSets;                                        //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        bool SwitchOnVariantByName(const BasicTypes::FString& VariantSetName, const BasicTypes::FString& VariantName);
        bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);
        void SetLevelVariantSets(VariantManagerContent::ULevelVariantSets* InVariantSets);
        VariantManagerContent::ULevelVariantSets* GetLevelVariantSets(bool bLoad);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/VariantManagerContent.LevelVariantSetsActor");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif