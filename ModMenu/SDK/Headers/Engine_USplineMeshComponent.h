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
#include "Engine_FSplineMeshParams.h"
#include "CoreUObject_FVector.h"
#include "Engine_ENUMS.h"
#include "CoreUObject_FGuid.h"
#include "Engine_UStaticMeshComponent.h"
#include "CoreUObject_FVector2D.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UBodySetup; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.SplineMeshComponent
     * Size -> 0x00A8 (FullSize[0x06A0] - InheritedSize[0x05F8])
     */
    class USplineMeshComponent : public Engine::UStaticMeshComponent
    {
    public:
        uint8_t                                                      UnknownData_0004[0x8];                                   //  Fix Super Size
        Engine::FSplineMeshParams                                    SplineParams;                                            //  Edit, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         SplineUpDir;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAllowSplineEditingPerInstance : 1;                      //  BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bSmoothInterpRollScale : 1;                              //  BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::ESplineMeshAxis                                      ForwardAxis;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        SplineBoundaryMin;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        SplineBoundaryMax;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UBodySetup*                                          BodySetup;                                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FGuid                                           CachedMeshBodySetupGuid;                                 //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bMeshDirty : 1;                                          //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0xF];                                   //  MISSED OFFSET (PADDING)

    public:
        void UpdateMesh();
        void SetStartTangent(const CoreUObject::FVector& StartTangent, bool bUpdateMesh);
        void SetStartScale(const CoreUObject::FVector2D& StartScale, bool bUpdateMesh);
        void SetStartRoll(float StartRoll, bool bUpdateMesh);
        void SetStartPosition(const CoreUObject::FVector& StartPos, bool bUpdateMesh);
        void SetStartOffset(const CoreUObject::FVector2D& StartOffset, bool bUpdateMesh);
        void SetStartAndEnd(const CoreUObject::FVector& StartPos, const CoreUObject::FVector& StartTangent, const CoreUObject::FVector& EndPos, const CoreUObject::FVector& EndTangent, bool bUpdateMesh);
        void SetSplineUpDir(const CoreUObject::FVector& InSplineUpDir, bool bUpdateMesh);
        void SetForwardAxis(Engine::ESplineMeshAxis InForwardAxis, bool bUpdateMesh);
        void SetEndTangent(const CoreUObject::FVector& EndTangent, bool bUpdateMesh);
        void SetEndScale(const CoreUObject::FVector2D& EndScale, bool bUpdateMesh);
        void SetEndRoll(float EndRoll, bool bUpdateMesh);
        void SetEndPosition(const CoreUObject::FVector& EndPos, bool bUpdateMesh);
        void SetEndOffset(const CoreUObject::FVector2D& EndOffset, bool bUpdateMesh);
        void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh);
        void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh);
        CoreUObject::FVector GetStartTangent();
        CoreUObject::FVector2D GetStartScale();
        float GetStartRoll();
        CoreUObject::FVector GetStartPosition();
        CoreUObject::FVector2D GetStartOffset();
        CoreUObject::FVector GetSplineUpDir();
        Engine::ESplineMeshAxis GetForwardAxis();
        CoreUObject::FVector GetEndTangent();
        CoreUObject::FVector2D GetEndScale();
        float GetEndRoll();
        CoreUObject::FVector GetEndPosition();
        CoreUObject::FVector2D GetEndOffset();
        float GetBoundaryMin();
        float GetBoundaryMax();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.SplineMeshComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif