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
#include "BasicTypes_TArray.h"
#include "BasicTypes_TBitArray.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BasicTypes
{
    /**
     * 
     * Size -> 0x0000
     */
    template<typename ArrayType>
    class TSparseArray
    {
    public:
        BasicTypes::TArray<ArrayType>                                Data;                                                    //  Should be 'TArray<TSparseArrayElementOrListLink<ArrayType>>' but im lazy
        BasicTypes::TBitArray                                        AllocationFlags;
        int32_t                                                      FirstFreeIndex;
        int32_t                                                      NumFreeIndices;

    public:
        int32_t Count() const
        {
            return Data.Count() - NumFreeIndices;
        }
        bool IsValidIndex(int32_t index) const
        {
            return AllocationFlags.IsSet(index);
        }
        ArrayType& operator[](int32_t index)
        {
            return *(ArrayType*)&Data[index];
        }
        const ArrayType& operator[](int32_t index) const
        {
            return *(const ArrayType*)&Data[index];
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif