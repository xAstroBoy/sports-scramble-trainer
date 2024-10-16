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
#include "Engine_FPointerToUberGraphFrame.h"
#include "SportsScramble_ABaseballBallScrambleDisplay.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UWidgetComponent; };
namespace CG::Engine { class USceneComponent; };
namespace CG::BB_Ball_Base { class ABB_Ball_Base_C; };
namespace CG::Engine { class UTexture2D; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BaseballBallScrambleDisplay_BP
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Baseball/BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C
     * Size -> 0x0024 (FullSize[0x034C] - InheritedSize[0x0328])
     */
    class ABaseballBallScrambleDisplay_BP_C : public SportsScramble::ABaseballBallScrambleDisplay
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UWidgetComponent*                                       Widget;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     DefaultSceneRoot;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        BB_Ball_Base::ABB_Ball_Base_C*                               BallClass;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      IconIndex;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void SetIcon(int32_t Index, Engine::UTexture2D* Icon);
        void GoAway();
        void FindIcon_From_BBClass(BB_Ball_Base::ABB_Ball_Base_C* BBBallClass, int32_t IconIndex);
        void ExecuteUbergraph_BaseballBallScrambleDisplay_BP(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Baseball/BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
