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
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "Engine_UOnlineBlueprintCallProxyBase.h"
#include "BasicTypes_TArray.h"
#include "SportsScramble_FSessionPropertyKeyPair.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UUpdateSessionCallbackProxyAdvanced; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.UpdateSessionCallbackProxyAdvanced
     * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
     */
    class UUpdateSessionCallbackProxyAdvanced : public Engine::UOnlineBlueprintCallProxyBase
    {
    public:
        BasicTypes::UScriptMulticastDelegate                         OnSuccess;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnFailure;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x48];                                  //  MISSED OFFSET (PADDING)

    public:
        SportsScramble::UUpdateSessionCallbackProxyAdvanced* STATIC_UpdateSession(CoreUObject::UObject* WorldContextObject, BasicTypes::TArray<SportsScramble::FSessionPropertyKeyPair> ExtraSettings, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.UpdateSessionCallbackProxyAdvanced");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
