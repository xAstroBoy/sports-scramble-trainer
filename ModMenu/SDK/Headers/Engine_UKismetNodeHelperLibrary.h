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
#include "Engine_UBlueprintFunctionLibrary.h"
#include "BasicTypes_FString.h"
#include "BasicTypes_FName.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UEnum; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.KismetNodeHelperLibrary
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UKismetNodeHelperLibrary : public Engine::UBlueprintFunctionLibrary
    {
    public:
        void STATIC_MarkBit(int32_t* Data, int32_t Index);
        bool STATIC_HasUnmarkedBit(int32_t Data, int32_t NumBits);
        bool STATIC_HasMarkedBit(int32_t Data, int32_t NumBits);
        uint8_t STATIC_GetValidValue(CoreUObject::UEnum* Enum, uint8_t EnumeratorValue);
        int32_t STATIC_GetUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits, bool bRandom);
        int32_t STATIC_GetRandomUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits);
        int32_t STATIC_GetFirstUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits);
        uint8_t STATIC_GetEnumeratorValueFromIndex(CoreUObject::UEnum* Enum, uint8_t EnumeratorIndex);
        BasicTypes::FString STATIC_GetEnumeratorUserFriendlyName(CoreUObject::UEnum* Enum, uint8_t EnumeratorValue);
        BasicTypes::FName STATIC_GetEnumeratorName(CoreUObject::UEnum* Enum, uint8_t EnumeratorValue);
        void STATIC_ClearBit(int32_t* Data, int32_t Index);
        void STATIC_ClearAllBits(int32_t* Data);
        bool STATIC_BitIsMarked(int32_t Data, int32_t Index);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.KismetNodeHelperLibrary");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif