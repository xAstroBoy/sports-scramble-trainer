#pragma once
#pragma warning(disable: 4267)

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

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_Minigame_Pitching_Whack
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_Shutdown_Params
    {
    public:
        bool                                                         ShutdownBegun;                                           //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_ClearWhackTimer_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_WhackScoreboardGameOver_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_InitializeWhack_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_UpdateWhackScoreboard_Params
    {
    public:
        int32_t                                                      score;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_WhackTimerCountdownStart_Params
    {
    public:
        int32_t                                                      Seconds;                                                 //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_StartCountdown_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_CountDownComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_DisableWhackTargets_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_WhackEquipmentGrabbed_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_GoMessageReceived_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_PlayerTeleportComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_DisableTargets_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_PitchTargetCreated_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_UpdateScoreboardScoreValue_Params
    {
    public:
        int32_t                                                      ScoreAmount;                                             //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_NoTeleport_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Whack_C_ExecuteUbergraph_BB_Minigame_Pitching_Whack_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
