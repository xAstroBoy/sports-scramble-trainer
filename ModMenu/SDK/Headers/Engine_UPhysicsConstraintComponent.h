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
#include "Engine_FConstrainComponentPropName.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "Engine_FConstraintInstance.h"
#include "Engine_USceneComponent.h"
#include "Engine_ENUMS.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FTransform.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_FRotator.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };
namespace CG::Engine { class UPhysicsConstraintTemplate; };
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.PhysicsConstraintComponent
     * Size -> 0x0208 (FullSize[0x0440] - InheritedSize[0x0238])
     */
    class UPhysicsConstraintComponent : public Engine::USceneComponent
    {
    public:
        Engine::AActor*                                              ConstraintActor1;                                        //  Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FConstrainComponentPropName                          ComponentName1;                                          //  Edit, NoDestructor, NativeAccessSpecifierPublic
        Engine::AActor*                                              ConstraintActor2;                                        //  Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FConstrainComponentPropName                          ComponentName2;                                          //  Edit, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UPhysicsConstraintTemplate*                          ConstraintSetup;                                         //  ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnConstraintBroken;                                      //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        Engine::FConstraintInstance                                  ConstraintInstance;                                      //  Edit, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
        void SetOrientationDriveSLERP(bool bEnableSLERP);
        void SetLinearZLimit(Engine::ELinearConstraintMotion ConstraintType, float LimitSize);
        void SetLinearYLimit(Engine::ELinearConstraintMotion ConstraintType, float LimitSize);
        void SetLinearXLimit(Engine::ELinearConstraintMotion ConstraintType, float LimitSize);
        void SetLinearVelocityTarget(const CoreUObject::FVector& InVelTarget);
        void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
        void SetLinearPositionTarget(const CoreUObject::FVector& InPosTarget);
        void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
        void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
        void SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold);
        void SetDisableCollision(bool bDisableCollision);
        void SetConstraintReferencePosition(Engine::EConstraintFrame Frame, const CoreUObject::FVector& RefPosition);
        void SetConstraintReferenceOrientation(Engine::EConstraintFrame Frame, const CoreUObject::FVector& PriAxis, const CoreUObject::FVector& SecAxis);
        void SetConstraintReferenceFrame(Engine::EConstraintFrame Frame, const CoreUObject::FTransform& RefFrame);
        void SetConstrainedComponents(Engine::UPrimitiveComponent* Component1, const BasicTypes::FName& BoneName1, Engine::UPrimitiveComponent* Component2, const BasicTypes::FName& BoneName2);
        void SetAngularVelocityTarget(const CoreUObject::FVector& InVelTarget);
        void SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
        void SetAngularVelocityDriveSLERP(bool bEnableSLERP);
        void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
        void SetAngularTwistLimit(Engine::EAngularConstraintMotion ConstraintType, float TwistLimitAngle);
        void SetAngularSwing2Limit(Engine::EAngularConstraintMotion MotionType, float Swing2LimitAngle);
        void SetAngularSwing1Limit(Engine::EAngularConstraintMotion MotionType, float Swing1LimitAngle);
        void SetAngularOrientationTarget(const CoreUObject::FRotator& InPosTarget);
        void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
        void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
        void SetAngularDriveMode(Engine::EAngularDriveMode DriveMode);
        void SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold);
        bool IsBroken();
        float GetCurrentTwist();
        float GetCurrentSwing2();
        float GetCurrentSwing1();
        void GetConstraintForce(CoreUObject::FVector* OutLinearForce, CoreUObject::FVector* OutAngularForce);
        void BreakConstraint();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.PhysicsConstraintComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif