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
#include "OnlineSubsystemUtils_FBlueprintSessionResult.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class APlayerController; };
namespace CG::SportsScramble { class UJoinOculusSessionCallbackProxy; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.JoinOculusSessionCallbackProxy
     * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
     */
    class UJoinOculusSessionCallbackProxy : public Engine::UOnlineBlueprintCallProxyBase
    {
    public:
        BasicTypes::UScriptMulticastDelegate                         OnSuccess;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnFailure;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xD8];                                  //  MISSED OFFSET (PADDING)

    public:
        SportsScramble::UJoinOculusSessionCallbackProxy* STATIC_JoinOculusSession(Engine::APlayerController* PlayerController, const OnlineSubsystemUtils::FBlueprintSessionResult& SearchResult);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.JoinOculusSessionCallbackProxy");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
