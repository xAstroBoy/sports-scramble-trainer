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
#include "Engine_FSingleAnimationPlayData.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FTransform.h"
#include "Engine_ENUMS.h"
#include "BasicTypes_FName.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "Engine_USkinnedMeshComponent.h"
#include "Engine_FPoseSnapshot.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class UAnimInstance; };
namespace CG::Engine { class UBodySetup; };
namespace CG::ClothingSystemRuntimeInterface { class UClothingSimulationFactory; };
namespace CG::ClothingSystemRuntimeInterface { class UClothingSimulationInteractor; };
namespace CG::Engine { class UAnimationAsset; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.SkeletalMeshComponent
     * Size -> 0x0470 (FullSize[0x0B40] - InheritedSize[0x06D0])
     */
    class USkeletalMeshComponent : public Engine::USkinnedMeshComponent
    {
    public:
        CoreUObject::UObject*                                        AnimBlueprintGeneratedClass;                             //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UAnimInstance*                                       AnimClass;                                               //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UAnimInstance*                                       AnimScriptInstance;                                      //  ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::UAnimInstance*>                   SubInstances;                                            //  ZeroConstructor, Transient, NativeAccessSpecifierPublic
        Engine::UAnimInstance*                                       PostProcessAnimInstance;                                 //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FSingleAnimationPlayData                             AnimationData;                                           //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector                                         RootBoneTranslation;                                     //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         LineCheckBoundsScale;                                    //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x20];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<CoreUObject::FTransform>                  CachedBoneSpaceTransforms;                               //  ZeroConstructor, Transient, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::FTransform>                  CachedComponentSpaceTransforms;                          //  ZeroConstructor, Transient, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x20];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        GlobalAnimRateScale;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EDynamicActorScene                                   UseAsyncScene;                                           //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EKinematicBonesUpdateToPhysics                       KinematicBonesUpdateType;                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EPhysicsTransformUpdateMode                          PhysicsTransformUpdateMode;                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::EAnimationMode                                       AnimationMode;                                           //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0004[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bBlendPhysics : 1;                                       //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0007 : 1;                                    //  BIT_FIELD (PADDING)
        bool                                                         bHasValidBodies : 1;                                     //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEnablePhysicsOnDedicatedServer : 1;                     //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUpdateOverlapsOnAnimationFinalize : 1;                  //  BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0005 : 1;                                    //  BIT_FIELD (PADDING)
        bool                                                         bDisablePostProcessBlueprint : 1;                        //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         UnknownData_0006 : 1;                                    //  BIT_FIELD (PADDING)
        bool                                                         bUpdateJointsFromAnimation : 1;                          //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bDisableClothSimulation : 1;                             //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAllowAnimCurveEvaluation : 1;                           //  BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bDisableAnimCurves : 1;                                  //  BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         UnknownData_0008 : 3;                                    //  BIT_FIELD (PADDING)
        bool                                                         bCollideWithEnvironment : 1;                             //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bPauseAnims : 1;                                         //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseRefPoseOnInitAnim : 1;                               //  BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bNoSkeletonUpdate : 1;                                   //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEnablePerPolyCollision : 1;                             //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bResetAfterTeleport : 1;                                 //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bLocalSpaceSimulation : 1;                               //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCollideWithAttachedChildren : 1;                        //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0009 : 1;                                    //  BIT_FIELD (PADDING)
        bool                                                         bIncludeComponentLocationIntoBounds : 1;                 //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bRequiredBonesUpToDate : 1;                              //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bShowPrePhysBones : 1;                                   //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAnimTreeInitialised : 1;                                //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsAutonomousTickPose : 1;                               //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOnlyAllowAutonomousTickPose : 1;                        //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bForceRefpose : 1;                                       //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOldForceRefPose : 1;                                    //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEnableLineCheckWithBounds : 1;                          //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseBendingElements : 1;                                 //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseTetrahedralConstraints : 1;                          //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseThinShellVolumeConstraints : 1;                      //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseSelfCollisions : 1;                                  //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseContinuousCollisionDetection : 1;                    //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0010 : 1;                                    //  BIT_FIELD (PADDING)
        bool                                                         bNeedsQueuedAnimEventsDispatched : 1;                    //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0011[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        uint16_t                                                     CachedAnimCurveUidVersion;                               //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0012[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        ClothBlendWeight;                                        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        EdgeStiffness;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        BendingStiffness;                                        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AreaStiffness;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        VolumeStiffness;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        StrainLimitingStiffness;                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ShapeTargetStiffness;                                    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<BasicTypes::FName>                        DisallowedAnimCurves;                                    //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        Engine::UBodySetup*                                          BodySetup;                                               //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0013[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         OnConstraintBroken;                                      //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        ClothingSystemRuntimeInterface::UClothingSimulationFactory*  ClothingSimulationFactory;                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0014[0xF8];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        TeleportDistanceThreshold;                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        float                                                        TeleportRotationThreshold;                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0015[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        uint32_t                                                     LastPoseTickFrame;                                       //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0016[0x5C];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        ClothingSystemRuntimeInterface::UClothingSimulationInteractor* ClothingInteractor;                                      //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0017[0xB8];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         OnAnimInitialized;                                       //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0018[0x100];                                 //  MISSED OFFSET (PADDING)

    public:
        void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);
        void ToggleDisablePostProcessBlueprint();
        void TermBodiesBelow(const BasicTypes::FName& ParentBoneName);
        void SuspendClothingSimulation();
        void Stop();
        void SnapshotPose(Engine::FPoseSnapshot* Snapshot);
        void SetUpdateAnimationInEditor(bool NewUpdateState);
        void SetTeleportRotationThreshold(float Threshold);
        void SetTeleportDistanceThreshold(float Threshold);
        void SetPosition(float InPos, bool bFireNotifies);
        void SetPlayRate(float Rate);
        void SetPhysicsBlendWeight(float PhysicsBlendWeight);
        void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, const BasicTypes::FName& BoneName, bool bIncludeSelf);
        void SetMorphTarget(const BasicTypes::FName& MorphTargetName, float Value, bool bRemoveZeroWeight);
        void SetEnablePhysicsBlending(bool bNewBlendPhysics);
        void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, const BasicTypes::FName& BoneName, bool bIncludeSelf);
        void SetEnableBodyGravity(bool bEnableGravity, const BasicTypes::FName& BoneName);
        void SetDisablePostProcessBlueprint(bool bInDisablePostProcess);
        void SetDisableAnimCurves(bool bInDisableAnimCurves);
        void SetConstraintProfileForAll(const BasicTypes::FName& ProfileName, bool bDefaultIfNotFound);
        void SetConstraintProfile(const BasicTypes::FName& JointName, const BasicTypes::FName& ProfileName, bool bDefaultIfNotFound);
        void SetClothMaxDistanceScale(float Scale);
        void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, const BasicTypes::FName& BoneName);
        void SetAnimationMode(Engine::EAnimationMode InAnimationMode);
        void SetAnimation(Engine::UAnimationAsset* NewAnimToPlay);
        void SetAngularLimits(const BasicTypes::FName& InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);
        void SetAllowedAnimCurvesEvaluation(BasicTypes::TArray<BasicTypes::FName> List, bool bAllow);
        void SetAllowAnimCurveEvaluation(bool bInAllow);
        void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
        void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
        void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);
        void SetAllBodiesSimulatePhysics(bool bNewSimulate);
        void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
        void SetAllBodiesBelowSimulatePhysics(const BasicTypes::FName& InBoneName, bool bNewSimulate, bool bIncludeSelf);
        void SetAllBodiesBelowPhysicsBlendWeight(const BasicTypes::FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);
        void ResumeClothingSimulation();
        void ResetClothTeleportMode();
        void ResetAnimInstanceDynamics(Engine::ETeleportType InTeleportType);
        void ResetAllowedAnimCurveEvaluation();
        void ResetAllBodiesSimulatePhysics();
        void PlayAnimation(Engine::UAnimationAsset* NewAnimToPlay, bool bLooping);
        void Play(bool bLooping);
        void OverrideAnimationData(Engine::UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate);
        void K2_SetAnimInstanceClass(CoreUObject::UObject* NewClass);
        bool K2_GetClosestPointOnPhysicsAsset(const CoreUObject::FVector& WorldPosition, CoreUObject::FVector* ClosestWorldPosition, CoreUObject::FVector* Normal, BasicTypes::FName* BoneName, float* Distance);
        bool IsPlaying();
        bool IsClothingSimulationSuspended();
        bool IsBodyGravityEnabled(const BasicTypes::FName& BoneName);
        bool HasValidAnimationInstance();
        float GetTeleportRotationThreshold();
        float GetTeleportDistanceThreshold();
        Engine::UAnimInstance* GetSubInstanceByName(const BasicTypes::FName& InName);
        CoreUObject::FVector GetSkeletalCenterOfMass();
        Engine::UAnimInstance* GetPostProcessInstance();
        float GetPosition();
        float GetPlayRate();
        float GetMorphTarget(const BasicTypes::FName& MorphTargetName);
        bool GetDisablePostProcessBlueprint();
        bool GetDisableAnimCurves();
        void GetCurrentJointAngles(const BasicTypes::FName& InBoneName, float* Swing1Angle, float* TwistAngle, float* Swing2Angle);
        float GetClothMaxDistanceScale();
        ClothingSystemRuntimeInterface::UClothingSimulationInteractor* GetClothingSimulationInteractor();
        float GetBoneMass(const BasicTypes::FName& BoneName, bool bScaleMass);
        Engine::UAnimInstance* GetAnimInstance();
        Engine::EAnimationMode GetAnimationMode();
        bool GetAllowedAnimCurveEvaluate();
        void ForceClothNextUpdateTeleportAndReset();
        void ForceClothNextUpdateTeleport();
        BasicTypes::FName FindConstraintBoneName(int32_t ConstraintIndex);
        void ClearMorphTargets();
        void BreakConstraint(const CoreUObject::FVector& Impulse, const CoreUObject::FVector& HitLocation, const BasicTypes::FName& InBoneName);
        void BindClothToMasterPoseComponent();
        void AllowAnimCurveEvaluation(const BasicTypes::FName& NameOfCurve, bool bAllow);
        void AddImpulseToAllBodiesBelow(const CoreUObject::FVector& Impulse, const BasicTypes::FName& BoneName, bool bVelChange, bool bIncludeSelf);
        void AddForceToAllBodiesBelow(const CoreUObject::FVector& Force, const BasicTypes::FName& BoneName, bool bAccelChange, bool bIncludeSelf);
        void AccumulateAllBodiesBelowPhysicsBlendWeight(const BasicTypes::FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);
        CoreUObject::FVector GetBoneWorldPos(const int32_t& boneId) const;
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.SkeletalMeshComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
