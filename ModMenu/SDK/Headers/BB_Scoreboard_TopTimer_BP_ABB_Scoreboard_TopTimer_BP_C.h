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
#include "Engine_AActor.h"
#include "SlateCore_FSlateFontInfo.h"
#include "BasicTypes_FText.h"
#include "UMG_ENUMS.h"
#include "BB_ScoreboardVideos_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UWidgetComponent; };
namespace CG::Engine { class USceneComponent; };
namespace CG::BB_Scoreboard_JustTimer_Widget { class UBB_Scoreboard_JustTimer_Widget_C; };
namespace CG::Engine { class UMaterialInterface; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_Scoreboard_TopTimer_BP
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/UI/Baseball/BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C
     * Size -> 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
     */
    class ABB_Scoreboard_TopTimer_BP_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UWidgetComponent*                                       Widget;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Root;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        int32_t                                                      CurrentTime;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         ClockActive;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BB_Scoreboard_JustTimer_Widget::UBB_Scoreboard_JustTimer_Widget_C* TimerWidget;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void BBVideo_StartTimer(int32_t Seconds, bool* complete);
        void BBVideoScoreFontAndMaterial(Engine::UMaterialInterface* Material, const SlateCore::FSlateFontInfo& Font, bool* complete);
        void BBVideo_UpdateScore(const BasicTypes::FText& Text, bool* complete);
        void BBVideo_HideShowScoreAndTimer(UMG::ESlateVisibility Visibility, bool* Completed);
        void BBVideo_HideShowCenterText(UMG::ESlateVisibility Visibility, bool* Completed);
        void BBVideo_ChangeFontAndMaterial(Engine::UMaterialInterface* Material, const SlateCore::FSlateFontInfo& Font, bool* FontChanged);
        void BB_UpdatePlayerNames(bool PlayerIsHomeTeam, bool* Callback);
        void BBVideo_PlayAnimation(BB_ScoreboardVideos::EBB_ScoreboardVideos Animation, bool* AnimationStarted);
        void BBGame_UpdateGameScore(int32_t Player1Score, int32_t Player2Score, bool* ScoreUpdated);
        void MG_ClearAllMGText(bool* TextCleared);
        void MG_ClearBottomText(bool* TextCleared);
        void MG_SetBottomText(const BasicTypes::FText& Text, bool* TextSet);
        void MG_ClearCenterText(bool* TextCleared);
        void MG_SetCenterText(const BasicTypes::FText& Text, bool* TextSet);
        void MG_ShowCenterDisplay(bool* DisplayShown);
        void MG_ClearDistanceScore(bool* ScoreHidden);
        void MG_StopCountDown(bool* CountDownStopped);
        void MG_HideCenterDisplay(bool* CenterDisplayHidden);
        void MG_BeginCountDown(int32_t Seconds, bool* CountdownStarted);
        void MG_SetDistanceScore(float Distance, bool* DistanceUpdated);
        void BBGame_UpdateOuts(int32_t Freebees, int32_t Outs, int32_t Strikes, bool* OutsUpdated);
        void BBGame_UpdateBaserunners(bool RunnerOn1, bool RunnerOn2, bool RunnerOn3, bool* RunnersUpdated);
        void BBGame_Deactivate(bool* BBGameDeactivate);
        void BBGame_Activate(int32_t BallsCount, int32_t StrikesCount, bool* GameActivated);
        void BBGame_NewInning(int32_t Inning, bool Top, bool* InningUpdated);
        void Initialize();
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void SetClockTimer(int32_t Seconds);
        void ClockUpdateLoop(int32_t Seconds);
        void ExecuteUbergraph_BB_Scoreboard_TopTimer_BP(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/UI/Baseball/BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
