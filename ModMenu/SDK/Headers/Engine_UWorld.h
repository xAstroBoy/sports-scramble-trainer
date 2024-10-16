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
#include "BasicTypes_TArray.h"
#include "BasicTypes_TSet.h"
#include "BasicTypes_FString.h"
#include "Engine_FLevelCollection.h"
#include "Engine_FWorldPSCPool.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UWorld; };
namespace CG::Engine { class ULevel; };
namespace CG::Engine { class UNetDriver; };
namespace CG::Engine { class ULineBatchComponent; };
namespace CG::Engine { class AGameNetworkManager; };
namespace CG::Engine { class UPhysicsCollisionHandler; };
namespace CG::CoreUObject { class UClass; };
namespace CG::Engine { class ULevelStreaming; };
namespace CG::Engine { class UDemoNetDriver; };
namespace CG::Engine { class AParticleEventManager; };
namespace CG::Engine { class APhysicsVolume; };
namespace CG::Engine { class UNavigationSystemBase; };
namespace CG::Engine { class AGameModeBase; };
namespace CG::Engine { class AGameStateBase; };
namespace CG::Engine { class UAISystemBase; };
namespace CG::Engine { class UAvoidanceManager; };
namespace CG::Engine { class UGameInstance; };
namespace CG::Engine { class UMaterialParameterCollectionInstance; };
namespace CG::Engine { class UCanvas; };
namespace CG::Engine { class UWorldComposition; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.World
     * Size -> 0x0840 (FullSize[0x0868] - InheritedSize[0x0028])
     */
    class UWorld : public CoreUObject::UObject
    {
    public:
        static Engine::UWorld**                                      GWorld;                                                  //  PREDEFINED PROPERTY
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::ULevel*                                              PersistentLevel;                                         //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UNetDriver*                                          NetDriver;                                               //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ULineBatchComponent*                                 LineBatcher;                                             //  ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ULineBatchComponent*                                 PersistentLineBatcher;                                   //  ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ULineBatchComponent*                                 ForegroundLineBatcher;                                   //  ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::AGameNetworkManager*                                 NetworkManager;                                          //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UPhysicsCollisionHandler*                            PhysicsCollisionHandler;                                 //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::UObject*>                    ExtraReferencedObjects;                                  //  ZeroConstructor, Transient, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::UObject*>                    PerModuleDataObjects;                                    //  ZeroConstructor, Transient, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::ULevelStreaming*>                 StreamingLevels;                                         //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        BasicTypes::TSet<Engine::ULevelStreaming*>                   StreamingLevelsToConsider;                               //  ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPrivate
        BasicTypes::FString                                          StreamingLevelsPrefix;                                   //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ULevel*                                              CurrentLevelPendingVisibility;                           //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::ULevel*                                              CurrentLevelPendingInvisibility;                         //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::UDemoNetDriver*                                      DemoNetDriver;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::AParticleEventManager*                               MyParticleEventManager;                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::APhysicsVolume*                                      DefaultPhysicsVolume;                                    //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x18];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UNavigationSystemBase*                               NavigationSystem;                                        //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::AGameModeBase*                                       AuthorityGameMode;                                       //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::AGameStateBase*                                      GameState;                                               //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::UAISystemBase*                                       AISystem;                                                //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::UAvoidanceManager*                                   AvoidanceManager;                                        //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TArray<Engine::ULevel*>                          Levels;                                                  //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        BasicTypes::TArray<Engine::FLevelCollection>                 LevelCollections;                                        //  ZeroConstructor, Transient, NonTransactional, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::ULevel*                                              CurrentLevel;                                            //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::UGameInstance*                                       OwningGameInstance;                                      //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TArray<Engine::UMaterialParameterCollectionInstance*> ParameterCollectionInstances;                            //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        Engine::UCanvas*                                             CanvasForRenderingToTarget;                              //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::UCanvas*                                             CanvasForDrawMaterialToRenderTarget;                     //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x5E0];                                 //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UWorldComposition*                                   WorldComposition;                                        //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0x4A];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bAreConstraintsDirty : 1;                                //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0005[0x25];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FWorldPSCPool                                        PSCPool;                                                 //  ContainsInstancedReference, NativeAccessSpecifierPrivate

    public:
        void HandleTimelineScrubbed();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.World");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
