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
#include "SportsScramble_FAngle.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "Engine_USceneComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.ScramLookAtActivator
     * Size -> 0x0068 (FullSize[0x02A0] - InheritedSize[0x0238])
     */
    class UScramLookAtActivator : public Engine::USceneComponent
    {
    public:
        uint8_t                                                      UnknownData_0001[0x4];                                   //  Fix Super Size
        SportsScramble::FAngle                                       DeactivationAngle;                                       //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        SportsScramble::FAngle                                       ActivationAnglePitch;                                    //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        SportsScramble::FAngle                                       DeactivationAnglePitch;                                  //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        float                                                        ActivationDelay;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        DeactivationDelay;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::UScriptMulticastDelegate                         GlancingAt;                                              //  ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
        BasicTypes::UScriptMulticastDelegate                         GlancingAway;                                            //  ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
        BasicTypes::UScriptMulticastDelegate                         LookingAt;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
        BasicTypes::UScriptMulticastDelegate                         LookingAway;                                             //  ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.ScramLookAtActivator");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif