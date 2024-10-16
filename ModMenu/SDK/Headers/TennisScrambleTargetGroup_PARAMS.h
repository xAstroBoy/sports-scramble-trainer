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
#include "BasicTypes_TArray.h"
#include "ScramblerTargetSet_FScramblerTargetSet.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::TN_Ball_Base { class ATN_Ball_Base_C; };
namespace CG::TN_Instrument_Base { class ATN_Instrument_Base_C; };
namespace CG::ScrambleEvent_Base { class AScrambleEvent_Base_C; };
namespace CG::TennisScrambleTarget { class ATennisScrambleTarget_C; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TennisScrambleTargetGroup
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_RemoveGameElement_Params
    {
    public:
        bool                                                         Removed;                                                 //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0000[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_FilterScrambleSet_Params
    {
    public:
        BasicTypes::TArray<ScramblerTargetSet::FScramblerTargetSet>  ScramblerTargetSet;                                      //  0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
        BasicTypes::TArray<ScramblerTargetSet::FScramblerTargetSet>  FilteredTargetSet;                                       //  0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_SpecificBallActivated_Params
    {
    public:
        TN_Ball_Base::ATN_Ball_Base_C*                               BallClass;                                               //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_GetValidSpecificBalls_Params
    {
    public:
        BasicTypes::TArray<TN_Ball_Base::ATN_Ball_Base_C*>           BallDistibutionList;                                     //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_SpecificInstrumentActivated_Params
    {
    public:
        TN_Instrument_Base::ATN_Instrument_Base_C*                   InstrumentClass;                                         //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_GetValidSpecificInstruments_Params
    {
    public:
        BasicTypes::TArray<TN_Instrument_Base::ATN_Instrument_Base_C*> ValidInstruments;                                        //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_RemoveAllNetNotifiers_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_SetSpawnLocsForReinforcements_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_UpdateTennisManagerVars_Params
    {
    public:
        int32_t                                                      Game;                                                    //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32_t                                                      Point;                                                   //  0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_RemoveAllTargets_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_GetActiveTargetsByClass_Params
    {
    public:
        ScrambleEvent_Base::AScrambleEvent_Base_C*                   ScrambleEventClass;                                      //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32_t                                                      Count;                                                   //  0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_GetWeightedClassList_Params
    {
    public:
        BasicTypes::TArray<ScrambleEvent_Base::AScrambleEvent_Base_C*> WeightedList;                                            //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_DisableScrambleEventType_Params
    {
    public:
        ScrambleEvent_Base::AScrambleEvent_Base_C*                   EventClass;                                              //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_RemoveDisabledSpawnLocations_Params
    {
    public:
        BasicTypes::TArray<int32_t>                                  ValidSpawnLocations;                                     //  0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_DisableSpawnLocations_Params
    {
    public:
        BasicTypes::TArray<int32_t>                                  DisabledLocations;                                       //  0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_SpawnInitial_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_SpawnRandom_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_SpawnTarget_Params
    {
    public:
        int32_t                                                      Location;                                                //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0001[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        ScrambleEvent_Base::AScrambleEvent_Base_C*                   ScrambleClass;                                           //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_Initialize_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_RespawnLoop_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_TargetDespawned_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_ScrambleTargetRemoved_Params
    {
    public:
        TennisScrambleTarget::ATennisScrambleTarget_C*               TargetActor;                                             //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        ScrambleEvent_Base::AScrambleEvent_Base_C*                   ScrambleEvent;                                           //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32_t                                                      ID;                                                      //  0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_NewServiceReady_Params
    {
    public:
        int32_t                                                      Game;                                                    //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32_t                                                      Point;                                                   //  0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Player1Serve;                                            //  0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_PointComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_InPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_GroupSpawn_Params
    {
    public:
        int32_t                                                      Count;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_GroupSpawnLoop_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_DelayDestroy_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_TargetHit_Params
    {
    public:
        TennisScrambleTarget::ATennisScrambleTarget_C*               TargetActor;                                             //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        ScrambleEvent_Base::AScrambleEvent_Base_C*                   ScrambleEvent;                                           //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32_t                                                      ID;                                                      //  0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_StopTimer_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_QueueReinforcements_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_BallCrossedNet_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_SpawnQueuedTargets_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ATennisScrambleTargetGroup_C_ExecuteUbergraph_TennisScrambleTargetGroup_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
