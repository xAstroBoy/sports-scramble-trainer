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

namespace CG::DemoTargetTraining
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_AddActorToGameElementList_Params
    {
    public:
        Engine::AActor*                                              Actor;                                                   //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Callback;                                                //  0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_ShutDown_Params
    {
    public:
        bool                                                         ShutdownBegun;                                           //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_UpdateTargetAnimSpeed_Params
    {
    public:
        float                                                        Speed;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_DestroyAllBalls_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_Cleanup_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_StartCountdown_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_RefreshActivePayloads_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_IsStreakContinued_Params
    {
    public:
        Engine::AActor*                                              PayloadActor;                                            //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         StreakContinues;                                         //  0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0000[0x3];                                   //  0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_PickNewTarget_Params
    {
    public:
        Engine::AActor*                                              OldTarget;                                               //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_SetupGame_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_SpawnGameElements_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_UpdateScore_Params
    {
    public:
        int32_t                                                      NewScore;                                                //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0001[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_RegisterTargets_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_Initialize_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_AddScore2_Params
    {
    public:
        Engine::AActor*                                              PayloadActor;                                            //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        Engine::AActor*                                              BallTargetActor;                                         //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32_t                                                      RegionHit;                                               //  0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_DelayDestroy_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_StartGame_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_NewBall_Params
    {
    public:
        Engine::AActor*                                              NewBallActor;                                            //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_GameEnd_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_StartMiniGame_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_SpeedUp_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_SpeedUpTimer_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_TargetShrinking_Params
    {
    public:
        Engine::AActor*                                              TargetActor;                                             //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_ExecuteUbergraph_DemoTargetTraining_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0002[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTargetTraining_C_GameComplete__DelegateSignature_Params
    {
    public:
        int32_t                                                      score;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif