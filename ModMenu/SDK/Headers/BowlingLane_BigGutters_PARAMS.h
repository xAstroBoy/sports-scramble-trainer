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
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::ScoreField { class AScoreField_C; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BowlingLane_BigGutters
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_SpawnScoreFields_Params
    {
    public:
        int32_t                                                      ScoreAmount;                                             //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        CoreUObject::FVector                                         RelativeLocation;                                        //  0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        CoreUObject::FRotator                                        RelativeRotation;                                        //  0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0000[0x4];                                   //  0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        Engine::USceneComponent*                                     ParentSceneComp;                                         //  0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        CoreUObject::FVector                                         RelativeScale;                                           //  0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0001[0x4];                                   //  0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        ScoreField::AScoreField_C*                                   ScoreFiel;                                               //  0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_Initialize_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_SetupLane_Params
    {
    public:
        bool                                                         Callback;                                                //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_ShutdownLane_Params
    {
    public:
        bool                                                         Callback;                                                //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_BlindsInOut__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_BlindsInOut__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_BlindsUpDown__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_BlindsUpDown__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_BridgeUpDown__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_BridgeUpDown__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_BlindsOut_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_BlindsIn_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_BlindsDown_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_BlindsUp_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_RaiseBridge_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_LowerBridge_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_ScoreFieldsUp_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_StartSetup_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_StartShutdown_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_BigGutters_C_ExecuteUbergraph_BowlingLane_BigGutters_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif