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
#include "SportsScramble_FTennisBallNetworkUpdate.h"
#include "SportsScramble_AScramBall.h"
#include "SportsScramble_FTennisBallProperties.h"
#include "SportsScramble_FTennisShot.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.TennisBall
     * Size -> 0x03E0 (FullSize[0x0F00] - InheritedSize[0x0B20])
     */
    class ATennisBall : public SportsScramble::AScramBall
    {
    public:
        bool                                                         AllowForceOutOfPlay;                                     //  BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         mClientSpawnHasUpdate;                                   //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0xE];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::FTennisBallNetworkUpdate                     mClientSpawnUpdate;                                      //  Net, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::UObject*                                        mpFutureBallHitterObjectToIgnore;                        //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::AActor*                                              mpSender;                                                //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::AActor*                                              mpTarget;                                                //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x148];                                 //  MISSED OFFSET (PADDING)

    public:
        void OnShotChanged();
        void OnRallyCountChanged();
        SportsScramble::FTennisBallProperties GetTennisBallProperties();
        Engine::AActor* GetTarget();
        SportsScramble::FTennisShot GetShot();
        Engine::AActor* GetSender();
        int32_t GetRallyCount();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.TennisBall");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif