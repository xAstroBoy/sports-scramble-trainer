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
#include "Engine_ENUMS.h"
#include "Engine_FLightingChannels.h"
#include "BasicTypes_TArray.h"
#include "Engine_FBodyInstance.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "Engine_FPrimitiveComponentPostPhysicsTickFunction.h"
#include "Engine_USceneComponent.h"
#include "BasicTypes_FName.h"
#include "Engine_FWalkableSlopeOverride.h"
#include "CoreUObject_FVector.h"
#include "Engine_FHitResult.h"
#include "CoreUObject_FBox.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::Engine { class UPhysicalMaterial; };
namespace CG::Engine { class UMaterialInterface; };
namespace CG::Engine { class UMaterialInstanceDynamic; };
namespace CG::Engine { class APawn; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.PrimitiveComponent
     * Size -> 0x0328 (FullSize[0x0560] - InheritedSize[0x0238])
     */
    class UPrimitiveComponent : public Engine::USceneComponent
    {
    public:
        uint8_t                                                      UnknownData_0009[0x8];                                   //  Fix Super Size
        float                                                        MinDrawDistance;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        LDMaxDrawDistance;                                       //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        CachedMaxDrawDistance;                                   //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ESceneDepthPriorityGroup                             DepthPriorityGroup;                                      //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ESceneDepthPriorityGroup                             ViewOwnerDepthPriorityGroup;                             //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EIndirectLightingCacheQuality                        IndirectLightingCacheQuality;                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ELightmapType                                        LightmapType;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bGenerateOverlapEvents : 1;                              //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAlwaysCreatePhysicsState : 1;                           //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bMultiBodyOverlap : 1;                                   //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bNeverDistanceCull : 1;                                  //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0000 : 4;                                    //  BIT_FIELD (PADDING)
        bool                                                         bCheckAsyncSceneOnMove : 1;                              //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bTraceComplexOnMove : 1;                                 //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bReturnMaterialOnMove : 1;                               //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseViewOwnerDepthPriorityGroup : 1;                     //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAllowCullDistanceVolume : 1;                            //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bHasMotionBlurVelocityMeshes : 1;                        //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bVisibleInReflectionCaptures : 1;                        //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bRenderInMainPass : 1;                                   //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bSelectable : 1;                                         //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bHasPerInstanceHitProxies : 1;                           //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bForceMipStreaming : 1;                                  //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseAsOccluder : 1;                                      //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bTreatAsBackgroundForOcclusion : 1;                      //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOnlyOwnerSee : 1;                                       //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOwnerNoSee : 1;                                         //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bReceivesDecals : 1;                                     //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         CastShadow : 1;                                          //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAffectDynamicIndirectLighting : 1;                      //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAffectDistanceFieldLighting : 1;                        //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCastDynamicShadow : 1;                                  //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCastStaticShadow : 1;                                   //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCastVolumetricTranslucentShadow : 1;                    //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bSelfShadowOnly : 1;                                     //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCastFarShadow : 1;                                      //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bSingleSampleShadowFromStationaryLights : 1;             //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bReceiveMobileCSMShadows : 1;                            //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bLightAttachmentsAsGroup : 1;                            //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bLightAsIfStatic : 1;                                    //  BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCastInsetShadow : 1;                                    //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCastHiddenShadow : 1;                                   //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCastCinematicShadow : 1;                                //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCastShadowAsTwoSided : 1;                               //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         AlwaysLoadOnServer : 1;                                  //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bRenderCustomDepth : 1;                                  //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseEditorCompositing : 1;                               //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         AlwaysLoadOnClient : 1;                                  //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIgnoreRadialForce : 1;                                  //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bApplyImpulseOnDamage : 1;                               //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bReplicatePhysicsToAutonomousProxy : 1;                  //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIgnoreRadialImpulse : 1;                                //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::EHasCustomNavigableGeometry                          bHasCustomNavigableGeometry;                             //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::ECanBeCharacterBase                                  CanCharacterStepUpOn;                                    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FLightingChannels                                    LightingChannels;                                        //  Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
        Engine::ERendererStencilMask                                 CustomDepthStencilWriteMask;                             //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      CustomDepthStencilValue;                                 //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      TranslucencySortPriority;                                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      VisibilityId;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        LpvBiasMultiplier;                                       //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        BoundsScale;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        LastSubmitTime;                                          //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        LastRenderTime;                                          //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        LastRenderTimeOnScreen;                                  //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bContactModification : 1;                                //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0005[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::AActor*>                          MoveIgnoreActors;                                        //  ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::UPrimitiveComponent*>             MoveIgnoreComponents;                                    //  ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0006[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FBodyInstance                                        BodyInstance;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnComponentHit;                                          //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnComponentBeginOverlap;                                 //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnComponentEndOverlap;                                   //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnComponentWake;                                         //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnComponentSleep;                                        //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0007[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         OnBeginCursorOver;                                       //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnEndCursorOver;                                         //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnClicked;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnReleased;                                              //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnInputTouchBegin;                                       //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnInputTouchEnd;                                         //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnInputTouchEnter;                                       //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnInputTouchLeave;                                       //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0008[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UPrimitiveComponent*                                 LODParentPrimitive;                                      //  ExportObject, ZeroConstructor, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::FPrimitiveComponentPostPhysicsTickFunction           PostPhysicsComponentTick;                                //  NativeAccessSpecifierPublic

    public:
        void WakeRigidBody(const BasicTypes::FName& BoneName);
        void WakeAllRigidBodies();
        void SetWalkableSlopeOverride(const Engine::FWalkableSlopeOverride& NewOverride);
        void SetUseCCD(bool InUseCCD, const BasicTypes::FName& BoneName);
        void SetTranslucentSortPriority(int32_t NewTranslucentSortPriority);
        void SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights);
        void SetSimulatePhysics(bool bSimulate);
        void SetRenderInMainPass(bool bValue);
        void SetRenderCustomDepth(bool bValue);
        void SetReceivesDecals(bool bNewReceivesDecals);
        void SetPhysMaterialOverride(Engine::UPhysicalMaterial* NewPhysMaterial);
        void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, const BasicTypes::FName& BoneName);
        void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, const BasicTypes::FName& BoneName);
        void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, const BasicTypes::FName& BoneName);
        void SetPhysicsLinearVelocity(const CoreUObject::FVector& NewVel, bool bAddToCurrent, const BasicTypes::FName& BoneName);
        void SetPhysicsAngularVelocityInRadians(const CoreUObject::FVector& NewAngVel, bool bAddToCurrent, const BasicTypes::FName& BoneName);
        void SetPhysicsAngularVelocityInDegrees(const CoreUObject::FVector& NewAngVel, bool bAddToCurrent, const BasicTypes::FName& BoneName);
        void SetPhysicsAngularVelocity(const CoreUObject::FVector& NewAngVel, bool bAddToCurrent, const BasicTypes::FName& BoneName);
        void SetOwnerNoSee(bool bNewOwnerNoSee);
        void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
        void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
        void SetMaterialByName(const BasicTypes::FName& MaterialSlotName, Engine::UMaterialInterface* Material);
        void SetMaterial(int32_t ElementIndex, Engine::UMaterialInterface* Material);
        void SetMassScale(const BasicTypes::FName& BoneName, float InMassScale);
        void SetMassOverrideInKg(const BasicTypes::FName& BoneName, float MassInKg, bool bOverrideMass);
        void SetLockedAxis(Engine::EDOFMode LockedAxis);
        void SetLinearDamping(float InDamping);
        void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);
        void SetEnableGravity(bool bGravityEnabled);
        void SetCustomDepthStencilWriteMask(Engine::ERendererStencilMask WriteMaskBit);
        void SetCustomDepthStencilValue(int32_t Value);
        void SetCullDistance(float NewCullDistance);
        void SetConstraintMode(Engine::EDOFMode ConstraintMode);
        void SetCollisionResponseToChannel(Engine::ECollisionChannel Channel, Engine::ECollisionResponse NewResponse);
        void SetCollisionResponseToAllChannels(Engine::ECollisionResponse NewResponse);
        void SetCollisionProfileName(const BasicTypes::FName& InCollisionProfileName);
        void SetCollisionObjectType(Engine::ECollisionChannel Channel);
        void SetCollisionEnabled(Engine::ECollisionEnabled NewType);
        void SetCenterOfMass(const CoreUObject::FVector& CenterOfMassOffset, const BasicTypes::FName& BoneName);
        void SetCastShadow(bool NewCastShadow);
        void SetBoundsScale(float NewBoundsScale);
        void SetAngularDamping(float InDamping);
        void SetAllUseCCD(bool InUseCCD);
        void SetAllPhysicsLinearVelocity(const CoreUObject::FVector& NewVel, bool bAddToCurrent);
        void SetAllPhysicsAngularVelocityInRadians(const CoreUObject::FVector& NewAngVel, bool bAddToCurrent);
        void SetAllPhysicsAngularVelocityInDegrees(const CoreUObject::FVector& NewAngVel, bool bAddToCurrent);
        void SetAllPhysicsAngularVelocity(const CoreUObject::FVector& NewAngVel, bool bAddToCurrent);
        void SetAllMassScale(float InMassScale);
        CoreUObject::FVector ScaleByMomentOfInertia(const CoreUObject::FVector& InputVector, const BasicTypes::FName& BoneName);
        void PutRigidBodyToSleep(const BasicTypes::FName& BoneName);
        bool K2_SphereTraceComponent(const CoreUObject::FVector& TraceStart, const CoreUObject::FVector& TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, CoreUObject::FVector* HitLocation, CoreUObject::FVector* HitNormal, BasicTypes::FName* BoneName, Engine::FHitResult* OutHit);
        bool K2_SphereOverlapComponent(const CoreUObject::FVector& InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, CoreUObject::FVector* HitLocation, CoreUObject::FVector* HitNormal, BasicTypes::FName* BoneName, Engine::FHitResult* OutHit);
        bool K2_LineTraceComponent(const CoreUObject::FVector& TraceStart, const CoreUObject::FVector& TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, CoreUObject::FVector* HitLocation, CoreUObject::FVector* HitNormal, BasicTypes::FName* BoneName, Engine::FHitResult* OutHit);
        bool K2_IsQueryCollisionEnabled();
        bool K2_IsPhysicsCollisionEnabled();
        bool K2_IsCollisionEnabled();
        bool K2_BoxOverlapComponent(const CoreUObject::FVector& InBoxCentre, const CoreUObject::FBox& InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, CoreUObject::FVector* HitLocation, CoreUObject::FVector* HitNormal, BasicTypes::FName* BoneName, Engine::FHitResult* OutHit);
        bool IsOverlappingComponent(Engine::UPrimitiveComponent* OtherComp);
        bool IsOverlappingActor(Engine::AActor* Other);
        bool IsGravityEnabled();
        bool IsAnyRigidBodyAwake();
        void IgnoreComponentWhenMoving(Engine::UPrimitiveComponent* Component, bool bShouldIgnore);
        void IgnoreActorWhenMoving(Engine::AActor* Actor, bool bShouldIgnore);
        Engine::FWalkableSlopeOverride GetWalkableSlopeOverride();
        CoreUObject::FVector GetPhysicsLinearVelocityAtPoint(const CoreUObject::FVector& Point, const BasicTypes::FName& BoneName);
        CoreUObject::FVector GetPhysicsLinearVelocity(const BasicTypes::FName& BoneName);
        CoreUObject::FVector GetPhysicsAngularVelocityInRadians(const BasicTypes::FName& BoneName);
        CoreUObject::FVector GetPhysicsAngularVelocityInDegrees(const BasicTypes::FName& BoneName);
        CoreUObject::FVector GetPhysicsAngularVelocity(const BasicTypes::FName& BoneName);
        void GetOverlappingComponents(BasicTypes::TArray<Engine::UPrimitiveComponent*>* OutOverlappingComponents);
        void GetOverlappingActors(BasicTypes::TArray<Engine::AActor*>* OverlappingActors, Engine::AActor* ClassFilter);
        int32_t GetNumMaterials();
        Engine::UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32_t FaceIndex, int32_t* SectionIndex);
        Engine::UMaterialInterface* GetMaterial(int32_t ElementIndex);
        float GetMassScale(const BasicTypes::FName& BoneName);
        float GetMass();
        float GetLinearDamping();
        CoreUObject::FVector GetInertiaTensor(const BasicTypes::FName& BoneName);
        bool GetGenerateOverlapEvents();
        Engine::ECollisionResponse GetCollisionResponseToChannel(Engine::ECollisionChannel Channel);
        BasicTypes::FName GetCollisionProfileName();
        Engine::ECollisionChannel GetCollisionObjectType();
        Engine::ECollisionEnabled GetCollisionEnabled();
        float GetClosestPointOnCollision(const CoreUObject::FVector& Point, CoreUObject::FVector* OutPointOnBody, const BasicTypes::FName& BoneName);
        CoreUObject::FVector GetCenterOfMass(const BasicTypes::FName& BoneName);
        float GetAngularDamping();
        Engine::UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int32_t ElementIndex, Engine::UMaterialInterface* SourceMaterial, const BasicTypes::FName& OptionalName);
        Engine::UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, Engine::UMaterialInterface* Parent);
        Engine::UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex);
        BasicTypes::TArray<Engine::UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();
        BasicTypes::TArray<Engine::AActor*> CopyArrayOfMoveIgnoreActors();
        void ClearMoveIgnoreComponents();
        void ClearMoveIgnoreActors();
        bool CanCharacterStepUp(Engine::APawn* Pawn);
        void AddTorqueInRadians(const CoreUObject::FVector& Torque, const BasicTypes::FName& BoneName, bool bAccelChange);
        void AddTorqueInDegrees(const CoreUObject::FVector& Torque, const BasicTypes::FName& BoneName, bool bAccelChange);
        void AddTorque(const CoreUObject::FVector& Torque, const BasicTypes::FName& BoneName, bool bAccelChange);
        void AddRadialImpulse(const CoreUObject::FVector& Origin, float Radius, float Strength, Engine::ERadialImpulseFalloff Falloff, bool bVelChange);
        void AddRadialForce(const CoreUObject::FVector& Origin, float Radius, float Strength, Engine::ERadialImpulseFalloff Falloff, bool bAccelChange);
        void AddImpulseAtLocation(const CoreUObject::FVector& Impulse, const CoreUObject::FVector& Location, const BasicTypes::FName& BoneName);
        void AddImpulse(const CoreUObject::FVector& Impulse, const BasicTypes::FName& BoneName, bool bVelChange);
        void AddForceAtLocationLocal(const CoreUObject::FVector& Force, const CoreUObject::FVector& Location, const BasicTypes::FName& BoneName);
        void AddForceAtLocation(const CoreUObject::FVector& Force, const CoreUObject::FVector& Location, const BasicTypes::FName& BoneName);
        void AddForce(const CoreUObject::FVector& Force, const BasicTypes::FName& BoneName, bool bAccelChange);
        void AddAngularImpulseInRadians(const CoreUObject::FVector& Impulse, const BasicTypes::FName& BoneName, bool bVelChange);
        void AddAngularImpulseInDegrees(const CoreUObject::FVector& Impulse, const BasicTypes::FName& BoneName, bool bVelChange);
        void AddAngularImpulse(const CoreUObject::FVector& Impulse, const BasicTypes::FName& BoneName, bool bVelChange);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.PrimitiveComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
