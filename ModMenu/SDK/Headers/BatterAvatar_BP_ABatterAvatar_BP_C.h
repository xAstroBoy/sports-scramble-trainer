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
#include "Engine_FPointerToUberGraphFrame.h"
#include "Engine_ENUMS.h"
#include "SportsScramble_ABattingAvatar.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_FLinearColor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UTimelineComponent; };
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BatterAvatar_BP
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Baseball/BatterAvatar_BP.BatterAvatar_BP_C
     * Size -> 0x0018 (FullSize[0x0428] - InheritedSize[0x0410])
     */
    class ABatterAvatar_BP_C : public SportsScramble::ABattingAvatar
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        float                                                        Timeline_0_Alpha_2AFEBB70439211A9A855EC8A9FB22FE3;       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_0__Direction_2AFEBB70439211A9A855EC8A9FB22FE3;  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_1;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        CoreUObject::FLinearColor GetGlobalColor(const BasicTypes::FName& globalColorName);
        void UserConstructionScript();
        void Timeline_0__FinishedFunc();
        void Timeline_0__UpdateFunc();
        void ReceiveBeginPlay();
        void RevealAvatar_BP(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void ScaleUp();
        void ExecuteUbergraph_BatterAvatar_BP(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Baseball/BatterAvatar_BP.BatterAvatar_BP_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif