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
#include "BasicTypes_TArray.h"
#include "SportsScramble_AScramSceneComponentActor.h"
#include "SportsScramble_FBowlingFrameSet.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::UMG { class UWidgetComponent; };
namespace CG::Engine { class UTimelineComponent; };
namespace CG::BW_ScoreCard_Widget { class UBW_ScoreCard_Widget_C; };
namespace CG::BW_ScoreCardFrame_Widget { class UBW_ScoreCardFrame_Widget_C; };
namespace CG::UMG { class USizeBox; };
namespace CG::BW_ScoreCardFrameSet_Widget { class UBW_ScoreCardFrameSet_Widget_C; };
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_ScoreCard
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C
     * Size -> 0x0068 (FullSize[0x03B8] - InheritedSize[0x0350])
     */
    class ABW_ScoreCard_C : public SportsScramble::AScramSceneComponentActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UStaticMeshComponent*                                BW_Traditional_Frame;                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetComponent*                                       ScoreCard;                                               //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        float                                                        Scale_Scale_3F4853634EA6A42F834C7AB7BC473CCD;            //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Scale__Direction_3F4853634EA6A42F834C7AB7BC473CCD;       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Scale;                                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BW_ScoreCard_Widget::UBW_ScoreCard_Widget_C*                 ScoreCardWidget;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<BW_ScoreCardFrame_Widget::UBW_ScoreCardFrame_Widget_C*> Player1RegularFrames;                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        BasicTypes::TArray<BW_ScoreCardFrame_Widget::UBW_ScoreCardFrame_Widget_C*> Player2RegularFrames;                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        BasicTypes::TArray<UMG::USizeBox*>                           RegularFrameLabels;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        int32_t                                                      NumFrames;                                               //  Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        int32_t                                                      NumPlayers;                                              //  Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

    public:
        void UpdatePlayerNames();
        void PrepareForGame(int32_t NumFrames, int32_t NumPlayers, bool Hidden);
        void UpdateFrameSets(BasicTypes::TArray<SportsScramble::FBowlingFrameSet> FrameSets, int32_t CurrentPlayer, int32_t CurrentFrame);
        void Initialize();
        void UpdateFrameSet(const SportsScramble::FBowlingFrameSet& frameSet, BW_ScoreCardFrameSet_Widget::UBW_ScoreCardFrameSet_Widget_C* FrameSetWidget, BasicTypes::TArray<BW_ScoreCardFrame_Widget::UBW_ScoreCardFrame_Widget_C*>* FrameWidgets, bool IsPlayerActive, int32_t CurrentFrame);
        void UserConstructionScript();
        void Scale__FinishedFunc();
        void Scale__UpdateFunc();
        void NetUpdateFrameSets(BasicTypes::TArray<SportsScramble::FBowlingFrameSet> FrameSets, int32_t CurrentPlayer, int32_t CurrentFrame);
        void ReceiveBeginPlay();
        void NetPrepareForGame(int32_t NumFrames, int32_t NumPlayers);
        void NetHide();
        void TravelCapsuleOpened(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void ExecuteUbergraph_BW_ScoreCard(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif