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

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::BasicTypes { class FUObjectItem; };
namespace CG::CoreUObject { class UObject; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BasicTypes
{
    /**
     * 
     * Size -> 0x0000
     */
    class TUObjectArray
    {
    private:
        static const constexpr int32_t                               NumElementsPerChunk = 64 * 1024;
        FUObjectItem**                                               Objects;
        BasicTypes::FUObjectItem*                                    PreAllocatedObjects;
    public:
        int32_t                                                      MaxElements;
        int32_t                                                      NumElements;
        int32_t                                                      MaxChunks;
        int32_t                                                      NumChunks;

    public:
        int32_t Count() const;
        int32_t Max() const;
        bool IsValidIndex(int32_t Index) const;
        FUObjectItem* GetObjectPtr(int32_t Index) const;
        CoreUObject::UObject* GetByIndex(int32_t index) const;
        BasicTypes::FUObjectItem* GetItemByIndex(int32_t index) const;
        CoreUObject::UObject* operator[](int32_t i);
        const CoreUObject::UObject* operator[](int32_t i) const;
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif