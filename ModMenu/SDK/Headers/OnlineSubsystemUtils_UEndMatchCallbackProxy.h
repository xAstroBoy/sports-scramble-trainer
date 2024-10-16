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
#include "BasicTypes_TScriptInterface.h"
#include "OnlineSubsystem_ITurnBasedMatchInterface.h"
#include "BasicTypes_FString.h"
#include "OnlineSubsystem_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class APlayerController; };
namespace CG::OnlineSubsystemUtils { class UEndMatchCallbackProxy; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OnlineSubsystemUtils
{
    /**
     * Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
     * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
     */
    class UEndMatchCallbackProxy : public Engine::UOnlineBlueprintCallProxyBase
    {
    public:
        BasicTypes::UScriptMulticastDelegate                         OnSuccess;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnFailure;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x30];                                  //  MISSED OFFSET (PADDING)

    public:
        OnlineSubsystemUtils::UEndMatchCallbackProxy* STATIC_EndMatch(CoreUObject::UObject* WorldContextObject, Engine::APlayerController* PlayerController, const BasicTypes::TScriptInterface<OnlineSubsystem::ITurnBasedMatchInterface>& MatchActor, const BasicTypes::FString& MatchID, OnlineSubsystem::EMPMatchOutcome LocalPlayerOutcome, OnlineSubsystem::EMPMatchOutcome OtherPlayersOutcome);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
