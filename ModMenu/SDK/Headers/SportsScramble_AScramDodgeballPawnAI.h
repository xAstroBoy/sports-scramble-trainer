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
#include "SportsScramble_FMinMaxFloat.h"
#include "BasicTypes_FName.h"
#include "SportsScramble_AScramDodgeballAI.h"
#include "CoreUObject_FVector.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::SportsScramble { class UDodgeballPawnAIAnimInstance; };
namespace CG::SportsScramble { class AScramPrimitiveGrabbable; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.ScramDodgeballPawnAI
     * Size -> 0x00A0 (FullSize[0x0418] - InheritedSize[0x0378])
     */
    class AScramDodgeballPawnAI : public SportsScramble::AScramDodgeballAI
    {
    public:
        float                                                        FetchSpeed;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SportsScramble::FMinMaxFloat                                 ThrowSpeed;                                              //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        SportsScramble::FMinMaxFloat                                 PassSpeed;                                               //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        float                                                        MinimumPassDelay;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::FName                                            HandSocket;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        HandSocketOffset;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SportsScramble::FMinMaxFloat                                 DelayBeforeThrowing;                                     //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        float                                                        DelayAfterPickup;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        DelayAfterThrow;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        PassUpContribution;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        WanderRadius;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SportsScramble::FMinMaxFloat                                 WanderTime;                                              //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        float                                                        WanderSpeed;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::UDodgeballPawnAIAnimInstance*                mpAnimInstance;                                          //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        SportsScramble::AScramPrimitiveGrabbable*                    mpGrabbable;                                             //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x40];                                  //  MISSED OFFSET (PADDING)

    public:
        void StartGame();
        void SetDelayBeforeThrowing(const SportsScramble::FMinMaxFloat& delayBeforeThrow);
        void KnockedOut();
        void BallThrown(Engine::AActor* Ball, const CoreUObject::FVector& Location, float Speed);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.ScramDodgeballPawnAI");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
