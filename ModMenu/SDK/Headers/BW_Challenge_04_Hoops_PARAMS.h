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

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_Challenge_04_Hoops
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_UnbindEvents_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_InitializeChallengeRoom_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_SetupInfoText_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_StartTraining_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_SpawnBalls_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_NotifyChallengeContinue_Params
    {
    public:
        Engine::AActor*                                              DestroyedActor;                                          //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_BW_TriggerCountdown_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_GameEnd_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_Shortcut_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_UpdateCurrentScore_Params
    {
    public:
        int32_t                                                      LaneID;                                                  //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32_t                                                      CurrentScore;                                            //  0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_AnnouncerExitSequenceComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_Challenge_04_Hoops_C_ExecuteUbergraph_BW_Challenge_04_Hoops_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif