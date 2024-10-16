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
#include "BasicTypes_TWeakObjectPtr.h"
#include "BasicTypes_FName.h"
#include "BasicTypes_TArray.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"
#include "Engine_ENUMS.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "Engine_UActorComponent.h"
#include "CoreUObject_FTransform.h"
#include "Engine_FHitResult.h"
#include "CoreUObject_FQuat.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class APhysicsVolume; };
namespace CG::Engine { class USceneComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.SceneComponent
     * Size -> 0x0148 (FullSize[0x0238] - InheritedSize[0x00F0])
     */
    class USceneComponent : public Engine::UActorComponent
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TWeakObjectPtr<Engine::APhysicsVolume>           PhysicsVolume;                                           //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::USceneComponent*                                     AttachParent;                                            //  ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::FName                                            AttachSocketName;                                        //  Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TArray<Engine::USceneComponent*>                 AttachChildren;                                          //  ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate
        BasicTypes::TArray<Engine::USceneComponent*>                 ClientAttachedChildren;                                  //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x2C];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector                                         RelativeLocation;                                        //  Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FRotator                                        RelativeRotation;                                        //  Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         RelativeScale3D;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x30];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector                                         ComponentVelocity;                                       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bShouldUpdatePhysicsVolume : 1;                          //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bHiddenInGame : 1;                                       //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bVisible : 1;                                            //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAbsoluteScale : 1;                                      //  BIT_FIELD Edit, BlueprintVisible, Net, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAbsoluteLocation : 1;                                   //  BIT_FIELD Edit, BlueprintVisible, Net, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0003 : 1;                                    //  BIT_FIELD (PADDING)
        bool                                                         bComponentToWorldUpdated : 1;                            //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bAbsoluteRotation : 1;                                   //  BIT_FIELD Edit, BlueprintVisible, Net, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bBoundsChangeTriggersStreamingDataRebuild : 1;           //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseAttachParentBound : 1;                               //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0004 : 4;                                    //  BIT_FIELD (PADDING)
        bool                                                         bAbsoluteTranslation : 1;                                //  BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::EComponentMobility                                   Mobility;                                                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EDetailMode                                          DetailMode;                                              //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0005[0x40];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         PhysicsVolumeChangedDelegate;                            //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0007[0x28];                                  //  Fix size for supers

    public:
        void ToggleVisibility(bool bPropagateToChildren);
        bool SnapTo(Engine::USceneComponent* InParent, const BasicTypes::FName& InSocketName);
        void SetWorldScale3D(const CoreUObject::FVector& NewScale);
        void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
        void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume);
        void SetRelativeScale3D(const CoreUObject::FVector& NewScale3D);
        void SetMobility(Engine::EComponentMobility NewMobility);
        void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);
        void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
        void ResetRelativeTransform();
        void OnRep_Visibility(bool OldValue);
        void OnRep_Transform();
        void OnRep_AttachSocketName();
        void OnRep_AttachParent();
        void OnRep_AttachChildren();
        void K2_SetWorldTransform(const CoreUObject::FTransform& NewTransform, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        void K2_SetWorldRotation(const CoreUObject::FRotator& NewRotation, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        void K2_SetWorldLocationAndRotation(const CoreUObject::FVector& NewLocation, const CoreUObject::FRotator& NewRotation, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        void K2_SetWorldLocation(const CoreUObject::FVector& NewLocation, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        void K2_SetRelativeTransform(const CoreUObject::FTransform& NewTransform, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        void K2_SetRelativeRotation(const CoreUObject::FRotator& NewRotation, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        void K2_SetRelativeLocationAndRotation(const CoreUObject::FVector& NewLocation, const CoreUObject::FRotator& NewRotation, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        void K2_SetRelativeLocation(const CoreUObject::FVector& NewLocation, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        CoreUObject::FTransform K2_GetComponentToWorld();
        CoreUObject::FVector K2_GetComponentScale();
        CoreUObject::FRotator K2_GetComponentRotation();
        CoreUObject::FVector K2_GetComponentLocation();
        void K2_DetachFromComponent(Engine::EDetachmentRule LocationRule, Engine::EDetachmentRule RotationRule, Engine::EDetachmentRule ScaleRule, bool bCallModify);
        bool K2_AttachToComponent(Engine::USceneComponent* Parent, const BasicTypes::FName& SocketName, Engine::EAttachmentRule LocationRule, Engine::EAttachmentRule RotationRule, Engine::EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
        bool K2_AttachTo(Engine::USceneComponent* InParent, const BasicTypes::FName& InSocketName, Engine::EAttachLocation AttachType, bool bWeldSimulatedBodies);
        void K2_AddWorldTransform(const CoreUObject::FTransform& DeltaTransform, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        void K2_AddWorldRotation(const CoreUObject::FRotator& DeltaRotation, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        void K2_AddWorldOffset(const CoreUObject::FVector& DeltaLocation, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        void K2_AddRelativeRotation(const CoreUObject::FRotator& DeltaRotation, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        void K2_AddRelativeLocation(const CoreUObject::FVector& DeltaLocation, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        void K2_AddLocalTransform(const CoreUObject::FTransform& DeltaTransform, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        void K2_AddLocalRotation(const CoreUObject::FRotator& DeltaRotation, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        void K2_AddLocalOffset(const CoreUObject::FVector& DeltaLocation, bool bSweep, Engine::FHitResult* SweepHitResult, bool bTeleport);
        bool IsVisible();
        bool IsSimulatingPhysics(const BasicTypes::FName& BoneName);
        bool IsAnySimulatingPhysics();
        CoreUObject::FVector GetUpVector();
        CoreUObject::FTransform GetSocketTransform(const BasicTypes::FName& InSocketName, Engine::ERelativeTransformSpace TransformSpace);
        CoreUObject::FRotator GetSocketRotation(const BasicTypes::FName& InSocketName);
        CoreUObject::FQuat GetSocketQuaternion(const BasicTypes::FName& InSocketName);
        CoreUObject::FVector GetSocketLocation(const BasicTypes::FName& InSocketName);
        bool GetShouldUpdatePhysicsVolume();
        CoreUObject::FVector GetRightVector();
        CoreUObject::FTransform GetRelativeTransform();
        Engine::APhysicsVolume* GetPhysicsVolume();
        void GetParentComponents(BasicTypes::TArray<Engine::USceneComponent*>* Parents);
        int32_t GetNumChildrenComponents();
        CoreUObject::FVector GetForwardVector();
        CoreUObject::FVector GetComponentVelocity();
        void GetChildrenComponents(bool bIncludeAllDescendants, BasicTypes::TArray<Engine::USceneComponent*>* Children);
        Engine::USceneComponent* GetChildComponent(int32_t ChildIndex);
        BasicTypes::FName GetAttachSocketName();
        Engine::USceneComponent* GetAttachParent();
        BasicTypes::TArray<BasicTypes::FName> GetAllSocketNames();
        bool DoesSocketExist(const BasicTypes::FName& InSocketName);
        void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.SceneComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
