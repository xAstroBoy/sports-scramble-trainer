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
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "SportsScramble_AScramBallTrigger.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::SportsScramble { class AScramBall; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TennisScrambleTargetGroup_NetNotifier
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Scrambles/Tennis/TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C
     * Size -> 0x0020 (FullSize[0x0440] - InheritedSize[0x0420])
     */
    class ATennisScrambleTargetGroup_NetNotifier_C : public SportsScramble::AScramBallTrigger
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     DefaultSceneRoot;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         TriggeredByBall;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

    public:
        void UserConstructionScript();
        void OnTriggered(SportsScramble::AScramBall* Ball);
        void ExecuteUbergraph_TennisScrambleTargetGroup_NetNotifier(int32_t EntryPoint);
        void TriggeredByBall__DelegateSignature();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Scrambles/Tennis/TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif