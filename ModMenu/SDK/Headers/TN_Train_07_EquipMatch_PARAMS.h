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
namespace CG::TennisScrambleTarget { class ATennisScrambleTarget_C; };
namespace CG::ScrambleEvent_Base { class AScrambleEvent_Base_C; };
namespace CG::Engine { class AActor; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_Train_07_EquipMatch
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_InitializeTrainingRoom07_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_HandlePostIntroInstrumentChange_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_HandleProgressBasedOnScore_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_PreTrainingGameCountDown_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_CountDownCompleted_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_PreTrainingDialog_01_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_PreTrainingDialog_02_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_PreTrainingDialog_03_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_PreTrainingDialog_04_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_TN_TRN_InstrumentHit_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_TN_ScrambleTargetInstrumentChangeMissed_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_PreTrainingMakeLauncherHitBatTarget_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_PreTrainingMakeLauncherHitBaseballTarget_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_PreTrainingSpawnBatRightTarget_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_PreTrainingSpawnLeftTargetBaseball_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_TN_TNG_ScrambleTargetHit_Params
    {
    public:
        TennisScrambleTarget::ATennisScrambleTarget_C*               TargetActor;                                             //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        ScrambleEvent_Base::AScrambleEvent_Base_C*                   EventClass;                                              //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32_t                                                      TargetID;                                                //  0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_ProcessChargeShot_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_PreTrainingLaunchIntroBaseballAtPlayer_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_TN_LaunchedBallMissed_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_LaunchBallAtPingPongPaddleTarget_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_LaunchBallAtPingPongBallTarget_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_SpawnRightPoolNoodleTarget_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_SpawnRightPingPongPaddleTarget_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_SpawnLeftPingPongBallTarget_Params
    {
    public:
        float                                                        Delay;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_PreTrainingFirstInstrumentChange_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_PreTrainingPlayerMissedFirstChargeShot_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_PreTrainingPlayerMissedChargeShot_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_PreTrainingPlayerMissedInstrumentChange_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_LaunchAtPoolNoodleTarget_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_LaunchBallAtBeachBallTarget_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_SpawnLeftBeachBallTarget_Params
    {
    public:
        float                                                        Delay;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_SpawnRightProRacketTarget_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_LaunchAtProRacketTarget_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_LaunchBallAtLeftTennisBallTarget_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_SpawnLeftTennisBallTarget_Params
    {
    public:
        float                                                        Delay;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_ProcessLightNormalShot_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_TN_ScrambleTargetBallHit_Params
    {
    public:
        float                                                        HitLocationX;                                            //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        float                                                        HitLocationY;                                            //  0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_TN_LaunchedBallHit_Params
    {
    public:
        float                                                        HitLocationX;                                            //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        float                                                        HitLocationY;                                            //  0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_NotifyTrainingContinue_Params
    {
    public:
        Engine::AActor*                                              DestroyedActor;                                          //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_AnnouncerExitSequenceComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATN_Train_07_EquipMatch_C_ExecuteUbergraph_TN_Train_07_EquipMatch_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif