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
#include "Engine_UOnlineBlueprintCallProxyBase.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class APlayerController; };
namespace CG::OnlineSubsystemUtils { class UAchievementQueryCallbackProxy; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OnlineSubsystemUtils
{
    /**
     * Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
     * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
     */
    class UAchievementQueryCallbackProxy : public Engine::UOnlineBlueprintCallProxyBase
    {
    public:
        BasicTypes::UScriptMulticastDelegate                         OnSuccess;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnFailure;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x18];                                  //  MISSED OFFSET (PADDING)

    public:
        OnlineSubsystemUtils::UAchievementQueryCallbackProxy* STATIC_CacheAchievements(CoreUObject::UObject* WorldContextObject, Engine::APlayerController* PlayerController);
        OnlineSubsystemUtils::UAchievementQueryCallbackProxy* STATIC_CacheAchievementDescriptions(CoreUObject::UObject* WorldContextObject, Engine::APlayerController* PlayerController);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif