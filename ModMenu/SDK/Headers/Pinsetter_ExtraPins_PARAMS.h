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

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Pinsetter_ExtraPins
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class APinsetter_ExtraPins_C_ChangePinState_Params
    {
    public:
        bool                                                         PhysicsState;                                            //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0000[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class APinsetter_ExtraPins_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class APinsetter_ExtraPins_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class APinsetter_ExtraPins_C_SpawnAllPins_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class APinsetter_ExtraPins_C_ExecuteUbergraph_Pinsetter_ExtraPins_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif