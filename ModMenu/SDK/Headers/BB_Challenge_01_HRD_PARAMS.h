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
#include "BasicTypes_FName.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::SportsScramble { class AScramInstrument; };
namespace CG::SportsScramble { class AScramBall; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_Challenge_01_HRD
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_InitializeChallenge_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_SetupInfoText_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_CheckProperAudioList_Params
    {
    public:
        bool                                                         UseAlternate;                                            //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0000[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_RequestNewBat_Params
    {
    public:
        SportsScramble::AScramInstrument*                            NewInstrumentClass;                                      //  0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Success;                                                 //  0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0001[0x7];                                   //  0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_RequestNewBall_Params
    {
    public:
        SportsScramble::AScramBall*                                  NewBallClass;                                            //  0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Success;                                                 //  0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0002[0x7];                                   //  0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_Cleanup_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_AnnouncerPlayingSequence_Params
    {
    public:
        BasicTypes::FName                                            SequenceName;                                            //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_AnnouncerPresenting_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_AnnouncerPaused_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_BB_TriggerCountdown_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_Start_Game_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_End_Game_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_AnnouncerExitSequenceComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_PlayerScoredRun_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_PlayerHitHomerun_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_Shortcut_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_01_HRD_C_ExecuteUbergraph_BB_Challenge_01_HRD_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
