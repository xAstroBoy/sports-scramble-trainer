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
#include "BasicTypes_FName.h"
#include "CoreUObject_FColor.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UInterpTrack; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.InterpGroup
     * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
     */
    class UInterpGroup : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::UInterpTrack*>                    InterpTracks;                                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::FName                                            GroupName;                                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FColor                                          GroupColor;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCollapsed : 1;                                          //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bVisible : 1;                                            //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsFolder : 1;                                           //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsParented : 1;                                         //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsSelected : 1;                                         //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.InterpGroup");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif