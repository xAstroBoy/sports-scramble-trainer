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

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };
namespace CG::BB_Mitt { class ABB_Mitt_C; };
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_Minigame_Pitching_Fielding
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_Shutdown_Params
    {
    public:
        bool                                                         ShutdownBegun;                                           //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0000[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_AddActorToGameElementList_Params
    {
    public:
        Engine::AActor*                                              Actor;                                                   //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Callback;                                                //  0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_SpawnActors_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_InitializeMode_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_DelayDestroy_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_TeleportComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_NoTeleport_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_LaunchBallAtPlayer_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_EquipmentGrabbed_Params
    {
    public:
        Engine::AActor*                                              DominantHand;                                            //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        BB_Mitt::ABB_Mitt_C*                                         Mitt;                                                    //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_BallLaunched_Params
    {
    public:
        Engine::AActor*                                              Ball;                                                    //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_BallCaught_Params
    {
    public:
        CoreUObject::UObject*                                        WorldContextObject;                                      //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        SportsScramble::UScramEventBasePayload*                      Payload;                                                 //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_OpenGate_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_BallDestroyed_Params
    {
    public:
        Engine::AActor*                                              DestroyedActor;                                          //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Minigame_Pitching_Fielding_C_ExecuteUbergraph_BB_Minigame_Pitching_Fielding_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0001[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
