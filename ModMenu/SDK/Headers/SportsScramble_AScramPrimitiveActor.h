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
#include "Engine_FDataTableRowHandle.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "SportsScramble_AScramMeshActor.h"
#include "SportsScramble_FScramTrajectory.h"
#include "CoreUObject_FQuat.h"
#include "SportsScramble_FScramPrimitiveProperties.h"
#include "CoreUObject_FVector.h"
#include "SportsScramble_FMotionState.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UMeshComponent; };
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.ScramPrimitiveActor
     * Size -> 0x059C (FullSize[0x08EC] - InheritedSize[0x0350])
     */
    class AScramPrimitiveActor : public SportsScramble::AScramMeshActor
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FDataTableRowHandle                                  Properties;                                              //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        float                                                        MassRelativeImpulseThreshold;                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        SimulatingNetPriority;                                   //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         ReplicateMotionState;                                    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         OnPrimitiveDestroyed;                                    //  ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
        bool                                                         mClientTrajectoryPaused;                                 //  Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x563];                                 //  Fix size for supers

    public:
        void SetPrimitiveTrajectory(const SportsScramble::FScramTrajectory& trajectory);
        void ResumeTrajectory();
        void RecreatePhysicsState();
        void PauseTrajectory();
        void OnRep_ClientTrajectoryPaused();
        void NotifyPrimitiveDestroyed();
        void NetResumeTrajectory();
        void NetPauseTrajectory();
        void NetDestroyPrimitive(bool playOut, float Delay);
        bool IsPrimitiveSimulatingPhysics();
        bool IsPrimitivePendingDestroy();
        bool IsPrimitiveInMotion();
        bool IsPrimitiveFollowingSpline();
        bool IsPrimitiveDestroyed();
        void InitializePrimitiveTrajectory(const SportsScramble::FScramTrajectory& trajectory);
        bool GetTrajectoryPaused();
        Engine::UMeshComponent* GetPrimitiveVisMesh();
        SportsScramble::FScramTrajectory GetPrimitiveTrajectory();
        CoreUObject::FQuat GetPrimitiveRotation();
        SportsScramble::FScramPrimitiveProperties GetPrimitiveProperties();
        CoreUObject::FVector GetPrimitivePhysicalAngularVelocity();
        SportsScramble::FMotionState GetPrimitiveMotionState();
        CoreUObject::FVector GetPrimitiveLocation();
        CoreUObject::FVector GetPrimitiveLinearVelocity();
        Engine::UPrimitiveComponent* GetPrimitiveComponent();
        int32_t GetFloorBouncesWithCurrentTrajectory();
        int32_t GetEnvironmentBouncesWithCurrentTrajectory();
        void DestroyPrimitive(bool playOut, float Delay);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.ScramPrimitiveActor");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif