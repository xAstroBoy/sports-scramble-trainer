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
#include "Engine_ENUMS.h"
#include "GameResult_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_Challenge_07_ProLeague
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Challenge_07_ProLeague_C_SetUpInfoText_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Challenge_07_ProLeague_C_AddActorToGameElementList_Params
    {
    public:
        Engine::AActor*                                              Actor;                                                   //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Callback;                                                //  0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Challenge_07_ProLeague_C_Shutdown_Params
    {
    public:
        bool                                                         ShutdownBegun;                                           //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Challenge_07_ProLeague_C_Initialize_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Challenge_07_ProLeague_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Challenge_07_ProLeague_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Challenge_07_ProLeague_C_DelayDestroy_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Challenge_07_ProLeague_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Challenge_07_ProLeague_C_SportManager_MatchComplete_Params
    {
    public:
        GameResult::EGameResult                                      Result;                                                  //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Challenge_07_ProLeague_C_NotifyChallengeContinue_Params
    {
    public:
        Engine::AActor*                                              DestroyedActor;                                          //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Challenge_07_ProLeague_C_TriggerAlternativeCadence_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Challenge_07_ProLeague_C_Shortcut_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Challenge_07_ProLeague_C_ExecuteUbergraph_TN_Challenge_07_ProLeague_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
