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
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "CoreUObject_UObject.h"
#include "BasicTypes_FName.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class APlayerController; };
namespace CG::OnlineSubsystemUtils { class ULeaderboardQueryCallbackProxy; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OnlineSubsystemUtils
{
    /**
     * Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
     * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
     */
    class ULeaderboardQueryCallbackProxy : public CoreUObject::UObject
    {
    public:
        BasicTypes::UScriptMulticastDelegate                         OnSuccess;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnFailure;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x50];                                  //  MISSED OFFSET (PADDING)

    public:
        OnlineSubsystemUtils::ULeaderboardQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(Engine::APlayerController* PlayerController, const BasicTypes::FName& StatName);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif