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
#include "Engine_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_Challenge_07_BigTime
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_07_BigTime_C_StopPlayingAudioComponents_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_07_BigTime_C_SetupInfoText_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_07_BigTime_C_BB_Initialize_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_07_BigTime_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_07_BigTime_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_07_BigTime_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_07_BigTime_C_BaseballGameCompleted_Params
    {
    public:
        bool                                                         LocalPlayerVictory;                                      //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0000[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        int32_t                                                      AwayScore;                                               //  0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32_t                                                      HomeScore;                                               //  0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_07_BigTime_C_AnnouncerExitSequenceComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_07_BigTime_C_TriggerAlternateCadence_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_07_BigTime_C_Shortcut_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Challenge_07_BigTime_C_ExecuteUbergraph_BB_Challenge_07_BigTime_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif