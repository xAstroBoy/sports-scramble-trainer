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
#include "BasicTypes_TArray.h"
#include "CoreUObject_UObject.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class ULocalPlayer; };
namespace CG::Engine { class UOnlineSession; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.GameInstance
     * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
     */
    class UGameInstance : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::ULocalPlayer*>                    LocalPlayers;                                            //  ZeroConstructor, Protected, NativeAccessSpecifierProtected
        Engine::UOnlineSession*                                      OnlineSession;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<CoreUObject::UObject*>                    ReferencedObjects;                                       //  ZeroConstructor, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x40];                                  //  MISSED OFFSET (PADDING)

    public:
        void ReceiveShutdown();
        void ReceiveInit();
        void HandleTravelError(Engine::ETravelFailure failureType);
        void HandleNetworkError(Engine::ENetworkFailure failureType, bool bIsServer);
        void DebugRemovePlayer(int32_t ControllerId);
        void DebugCreatePlayer(int32_t ControllerId);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.GameInstance");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
