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
#include "Engine_FDebugDisplayProperty.h"
#include "Engine_UScriptViewportClient.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UConsole; };
namespace CG::Engine { class UWorld; };
namespace CG::Engine { class UGameInstance; };
namespace CG::Engine { class UCanvas; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.GameViewportClient
     * Size -> 0x02B0 (FullSize[0x02E8] - InheritedSize[0x0038])
     */
    class UGameViewportClient : public Engine::UScriptViewportClient
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UConsole*                                            ViewportConsole;                                         //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FDebugDisplayProperty>            DebugProperties;                                         //  ZeroConstructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x20];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UWorld*                                              World;                                                   //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UGameInstance*                                       GameInstance;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x260];                                 //  MISSED OFFSET (PADDING)

    public:
        void SSSwapControllers();
        void ShowTitleSafeArea();
        void SetConsoleTarget(int32_t PlayerIndex);
        void PostRender(Engine::UCanvas* canvas);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.GameViewportClient");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
