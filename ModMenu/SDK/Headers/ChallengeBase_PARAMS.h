#pragma once
#pragma warning(disable: 4267)

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
#include "BB_ScramIconSetting_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FName.h"
#include "BasicTypes_FText.h"
#include "Engine_ENUMS.h"
#include "ResultsData_FResultsData.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Countdown { class ACountdown_C; };
namespace CG::Engine { class AActor; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ChallengeBase
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_PlayResultMusic_Params
    {
    public:
        bool                                                         Succeeded;                                               //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_EarnChallengeTrophy_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_SaveIntroHasPlayed_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_CheckIntroHasPlayed_Params
    {
    public:
        bool                                                         IntroHasPlayed;                                          //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0000[0x7];                                   //  0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_DestroyAllBalls_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_BB_SpawnScrambleIcon_Params
    {
    public:
        BB_ScramIconSetting::EBB_ScramIconSetting                    Settings;                                                //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0001[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_AwardTrophy_Params
    {
    public:
        int32_t                                                      CurrentScore;                                            //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0002[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_SpawnAnnouncerPaired_Params
    {
    public:
        BasicTypes::TArray<BasicTypes::FName>                        AnnouncerPairedList;                                     //  0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_VerifyNotMultiplayerGame_Params
    {
    public:
        bool                                                         NotMultiplayer;                                          //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_BW_SpawnScrambleIcon_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_DestroyPopupInfo_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_DemoDisplayInfo_Params
    {
    public:
        float                                                        Display_Time;                                            //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0003[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::FText                                            Display_Text;                                            //  0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_SpawnDemoCountdown_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_SetAnnouncerIdle_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_TN_SpawnScrambleIcons_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_CleanUpGameElements_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_SpawnCountDown_Params
    {
    public:
        float                                                        CountdownDelay;                                          //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        float                                                        GoShrinkDelay;                                           //  0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        Countdown::ACountdown_C*                                     CountdownActor;                                          //  0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_SpawnAnnouncerActor_Params
    {
    public:
        BasicTypes::TArray<BasicTypes::FName>                        AnnouncerAudioList;                                      //  0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_SpawnPopupInfo_Params
    {
    public:
        BasicTypes::FText                                            Text;                                                    //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
        float                                                        DisplayTime;                                             //  0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_RestoreAllSportSettings_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_SetTempChallengeSettings_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_AnnouncerReady_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_DisplayStartOfMatchInfo_Params
    {
    public:
        bool                                                         FadeInOutMusic;                                          //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_EndOfGame_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_MusicFadeOut_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_MusicFadeIn_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_VoiceClipEnd_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_ResumeAnnouncer_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_AnnouncerPaused_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_SaveAllSportSettings_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_AnnouncerPresenting_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_AnnouncerDonePresenting_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_AnnouncerPlayingSequence_Params
    {
    public:
        BasicTypes::FName                                            SequenceName;                                            //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_NotifyChallengeContinue_Params
    {
    public:
        Engine::AActor*                                              DestroyedActor;                                          //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_ShowDemoInstructions_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_AnnouncerPairedComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_AnnouncerExitSequenceComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_HandleSuccess_Params
    {
    public:
        int32_t                                                      CurrentScore;                                            //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_HandleFailure_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_CloseTravelCapsule_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_ExecuteUbergraph_ChallengeBase_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AChallengeBase_C_ChallengeLevelComplete__DelegateSignature_Params
    {
    public:
        ResultsData::FResultsData                                    Results;                                                 //  0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif