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
#include "Engine_FVoiceSettings.h"
#include "Engine_UActorComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class APlayerState; };
namespace CG::Engine { class UVOIPTalker; };
namespace CG::Engine { class UAudioComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.VOIPTalker
     * Size -> 0x0038 (FullSize[0x0128] - InheritedSize[0x00F0])
     */
    class UVOIPTalker : public Engine::UActorComponent
    {
    public:
        Engine::FVoiceSettings                                       Settings;                                                //  Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x20];                                  //  MISSED OFFSET (PADDING)

    public:
        void RegisterWithPlayerState(Engine::APlayerState* OwningState);
        float GetVoiceLevel();
        Engine::UVOIPTalker* STATIC_CreateTalkerForPlayer(Engine::APlayerState* OwningState);
        void BPOnTalkingEnd();
        void BPOnTalkingBegin(Engine::UAudioComponent* AudioComponent);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.VOIPTalker");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif