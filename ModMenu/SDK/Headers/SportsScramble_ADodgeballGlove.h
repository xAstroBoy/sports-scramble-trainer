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
#include "CoreUObject_FVector.h"
#include "SportsScramble_FAngle.h"
#include "SportsScramble_AThrowingGlove.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UCurveFloat; };
namespace CG::SportsScramble { class AScramDodgeballPawnAI; };
namespace CG::Engine { class UHapticFeedbackEffect_Base; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.DodgeballGlove
     * Size -> 0x0050 (FullSize[0x0B30] - InheritedSize[0x0AE0])
     */
    class ADodgeballGlove : public SportsScramble::AThrowingGlove
    {
    public:
        Engine::UCurveFloat*                                         ThrowAdjustmentVsAngle;                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UCurveFloat*                                         ThrowAdjustmentSpeed;                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        MinSpeedToAdjustThrow;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UCurveFloat*                                         GrabRadiusVsSpeed;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        GrabRadiusFromHand;                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        CoreUObject::FVector                                         PointForward;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        PointingRadiusPadding;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        PointingHysteresisMargin;                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SportsScramble::FAngle                                       PointingLookAtAngle;                                     //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        float                                                        ArmLengthForPointing;                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SportsScramble::AScramDodgeballPawnAI*                       mpPointedAtAI;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        void PlayHaptic(Engine::UHapticFeedbackEffect_Base* haptic, float Scale);
        void ItemThrown(Engine::AActor* Item, const CoreUObject::FVector& Location, float Speed);
        void ItemPassed(Engine::AActor* Item, const CoreUObject::FVector& Location);
        void ItemCaught(Engine::AActor* Item, const CoreUObject::FVector& Location, float Speed);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.DodgeballGlove");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif