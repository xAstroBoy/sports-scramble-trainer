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
#include "BasicTypes_TArray.h"
#include "Engine_FCollisionResponseTemplate.h"
#include "Engine_FCustomChannelSetup.h"
#include "Engine_FCustomProfile.h"
#include "Engine_FRedirector.h"
#include "Engine_UDeveloperSettings.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.CollisionProfile
     * Size -> 0x0120 (FullSize[0x0158] - InheritedSize[0x0038])
     */
    class UCollisionProfile : public Engine::UDeveloperSettings
    {
    public:
        BasicTypes::TArray<Engine::FCollisionResponseTemplate>       Profiles;                                                //  ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPrivate
        BasicTypes::TArray<Engine::FCustomChannelSetup>              DefaultChannelResponses;                                 //  ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPrivate
        BasicTypes::TArray<Engine::FCustomProfile>                   EditProfiles;                                            //  ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPrivate
        BasicTypes::TArray<Engine::FRedirector>                      ProfileRedirects;                                        //  ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPrivate
        BasicTypes::TArray<Engine::FRedirector>                      CollisionChannelRedirects;                               //  ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0xD0];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.CollisionProfile");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif