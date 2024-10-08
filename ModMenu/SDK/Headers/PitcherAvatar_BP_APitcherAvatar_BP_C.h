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
#include "SportsScramble_APitchingAvatar.h"
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

namespace CG::PitcherAvatar_BP
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Baseball/PitcherAvatar_BP.PitcherAvatar_BP_C
     * Size -> 0x0018 (FullSize[0x0428] - InheritedSize[0x0410])
     */
    class APitcherAvatar_BP_C : public SportsScramble::APitchingAvatar
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        float                                                        Timeline_0_Alpha_38EA05164800B04FF556E0BB6899910F;       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_0__Direction_38EA05164800B04FF556E0BB6899910F;  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_1;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        CoreUObject::FLinearColor GetGlobalColor(const BasicTypes::FName& globalColorName);
        void UserConstructionScript();
        void Timeline_0__FinishedFunc();
        void Timeline_0__UpdateFunc();
        void ReceiveBeginPlay();
        void TryInitializeMaterial();
        void RevealAvatar_BP(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void ScaleUp();
        void ExecuteUbergraph_PitcherAvatar_BP(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Baseball/PitcherAvatar_BP.PitcherAvatar_BP_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
