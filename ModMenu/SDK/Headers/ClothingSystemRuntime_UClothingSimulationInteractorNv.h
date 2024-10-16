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
#include "ClothingSystemRuntimeInterface_UClothingSimulationInteractor.h"
#include "CoreUObject_FVector.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ClothingSystemRuntime
{
    /**
     * Class /Script/ClothingSystemRuntime.ClothingSimulationInteractorNv
     * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
     */
    class UClothingSimulationInteractorNv : public ClothingSystemRuntimeInterface::UClothingSimulationInteractor
    {
    public:
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetAnimDriveSpringStiffness(float InStiffness);
        void SetAnimDriveDamperStiffness(float InStiffness);
        void EnableGravityOverride(const CoreUObject::FVector& InVector);
        void DisableGravityOverride();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/ClothingSystemRuntime.ClothingSimulationInteractorNv");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
