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
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USkeletalBodySetup; };
namespace CG::Engine { class UPhysicsConstraintTemplate; };
namespace CG::Engine { class UThumbnailInfo; };
namespace CG::Engine { class UBodySetup; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.PhysicsAsset
     * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
     */
    class UPhysicsAsset : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<int32_t>                                  BoundsBodies;                                            //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::USkeletalBodySetup*>              SkeletalBodySetups;                                      //  ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::UPhysicsConstraintTemplate*>      ConstraintSetup;                                         //  ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
        bool                                                         bUseAsyncScene : 1;                                      //  BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bNotForDedicatedServer : 1;                              //  BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xA7];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UThumbnailInfo*                                      ThumbnailInfo;                                           //  Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::UBodySetup*>                      BodySetup;                                               //  ExportObject, ZeroConstructor, Deprecated, ContainsInstancedReference, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.PhysicsAsset");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif