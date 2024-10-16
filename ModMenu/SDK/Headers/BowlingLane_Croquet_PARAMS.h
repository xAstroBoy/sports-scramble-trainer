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
namespace CG::CroquetHoop_BP { class ACroquetHoop_BP_C; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BowlingLane_Croquet
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_Croquet_C_GetHoopToSpawn_Params
    {
    public:
        int32_t                                                      HoopIndex;                                               //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0000[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        CroquetHoop_BP::ACroquetHoop_BP_C*                           HoopToSpawn;                                             //  0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_Croquet_C_ShutdownLane_Params
    {
    public:
        bool                                                         Callback;                                                //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_Croquet_C_SetupLane_Params
    {
    public:
        bool                                                         Callback;                                                //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_Croquet_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_Croquet_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_Croquet_C_MultiPass_SetupLane_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_Croquet_C_MultiPass_ShutdownLane_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABowlingLane_Croquet_C_ExecuteUbergraph_BowlingLane_Croquet_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
