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
namespace CG::OnlineSubsystemOculus { class UOculusIdentityCallbackProxy; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OnlineSubsystemOculus
{
    /**
     * Class /Script/OnlineSubsystemOculus.OculusIdentityCallbackProxy
     * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
     */
    class UOculusIdentityCallbackProxy : public Engine::UOnlineBlueprintCallProxyBase
    {
    public:
        BasicTypes::UScriptMulticastDelegate                         OnSuccess;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnFailure;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        OnlineSubsystemOculus::UOculusIdentityCallbackProxy* STATIC_GetOculusIdentity(int32_t LocalUserNum);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/OnlineSubsystemOculus.OculusIdentityCallbackProxy");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif