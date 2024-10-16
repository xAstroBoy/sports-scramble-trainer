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
#include "CoreUObject_UObject.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FString.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class APlayerController; };
namespace CG::OnlineSubsystemUtils { class UInAppPurchaseQueryCallbackProxy; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OnlineSubsystemUtils
{
    /**
     * Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
     * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
     */
    class UInAppPurchaseQueryCallbackProxy : public CoreUObject::UObject
    {
    public:
        BasicTypes::UScriptMulticastDelegate                         OnSuccess;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnFailure;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x48];                                  //  MISSED OFFSET (PADDING)

    public:
        OnlineSubsystemUtils::UInAppPurchaseQueryCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseQuery(Engine::APlayerController* PlayerController, BasicTypes::TArray<BasicTypes::FString> ProductIdentifiers);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
