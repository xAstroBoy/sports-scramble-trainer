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
#include "BasicTypes_TArray.h"
#include "SportsScramble_FRandomActorTable.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::SportsScramble { class UBowlingBallReturnTrack; };
namespace CG::BW_Ball_Base { class ABW_Ball_Base_C; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_BallReturn
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_GetReturnTrack_Params
    {
    public:
        SportsScramble::UBowlingBallReturnTrack*                     ReturnValue;                                             //  0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_SetQueuedBalls_Params
    {
    public:
        BasicTypes::TArray<BW_Ball_Base::ABW_Ball_Base_C*>           QueuedBalls;                                             //  0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_QueueRandomBalls_Params
    {
    public:
        BW_Ball_Base::ABW_Ball_Base_C*                               DefaultBallClass;                                        //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32_t                                                      Num;                                                     //  0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0000[0x4];                                   //  0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::TArray<BW_Ball_Base::ABW_Ball_Base_C*>           Balls;                                                   //  0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_UpdateBallTable_Params
    {
    public:
        SportsScramble::FRandomActorTable                            NewBallTable;                                            //  0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_SelectRandomBall_Params
    {
    public:
        BW_Ball_Base::ABW_Ball_Base_C*                               DefaultBallClass;                                        //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        BW_Ball_Base::ABW_Ball_Base_C*                               BallClass;                                               //  0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_Reset_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_MakeRoomForNewBall_Params
    {
    public:
        int32_t                                                      NumActiveBalls;                                          //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_SpawnSpecificBall_Params
    {
    public:
        BW_Ball_Base::ABW_Ball_Base_C*                               BallClass;                                               //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32_t                                                      NumActiveBalls;                                          //  0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0001[0x4];                                   //  0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BW_Ball_Base::ABW_Ball_Base_C*                               OutputPin;                                               //  0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0002[0x8];                                   //  0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_SpawnRandomBall_Params
    {
    public:
        BW_Ball_Base::ABW_Ball_Base_C*                               DefaultBallClass;                                        //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32_t                                                      NumActiveBalls;                                          //  0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0003[0x4];                                   //  0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_ResetTotalInitialDefaultBalls_Params
    {
    public:
        int32_t                                                      TotalInitialDefaultBalls;                                //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_OnReturnSlideStarted_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_OnReturnSlideStopped_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_OnTrackMotionStart_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_OnTrackMotionStop_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_ExecuteUbergraph_BW_BallReturn_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_SpecificBallCreated__DelegateSignature_Params
    {
    public:
        BW_Ball_Base::ABW_Ball_Base_C*                               Ball;                                                    //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABW_BallReturn_C_RandomBallCreated__DelegateSignature_Params
    {
    public:
        BW_Ball_Base::ABW_Ball_Base_C*                               Ball;                                                    //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif