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
#include "BasicTypes_FName.h"
#include "BasicTypes_TSet.h"
#include "BasicTypes_TArray.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.BlueprintSetLibrary
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UBlueprintSetLibrary : public Engine::UBlueprintFunctionLibrary
    {
    public:
        void STATIC_SetSetPropertyByName(CoreUObject::UObject* Object, const BasicTypes::FName& PropertyName, BasicTypes::TSet<int32_t> Value);
        void STATIC_Set_Union(BasicTypes::TSet<int32_t> A, BasicTypes::TSet<int32_t> B, BasicTypes::TSet<int32_t>* Result);
        void STATIC_Set_ToArray(BasicTypes::TSet<int32_t> A, BasicTypes::TArray<int32_t>* Result);
        void STATIC_Set_RemoveItems(BasicTypes::TSet<int32_t> TargetSet, BasicTypes::TArray<int32_t> Items);
        bool STATIC_Set_Remove(BasicTypes::TSet<int32_t> TargetSet, int32_t Item);
        int32_t STATIC_Set_Length(BasicTypes::TSet<int32_t> TargetSet);
        void STATIC_Set_Intersection(BasicTypes::TSet<int32_t> A, BasicTypes::TSet<int32_t> B, BasicTypes::TSet<int32_t>* Result);
        void STATIC_Set_Difference(BasicTypes::TSet<int32_t> A, BasicTypes::TSet<int32_t> B, BasicTypes::TSet<int32_t>* Result);
        bool STATIC_Set_Contains(BasicTypes::TSet<int32_t> TargetSet, int32_t ItemToFind);
        void STATIC_Set_Clear(BasicTypes::TSet<int32_t> TargetSet);
        void STATIC_Set_AddItems(BasicTypes::TSet<int32_t> TargetSet, BasicTypes::TArray<int32_t> NewItems);
        void STATIC_Set_Add(BasicTypes::TSet<int32_t> TargetSet, int32_t NewItem);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.BlueprintSetLibrary");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif