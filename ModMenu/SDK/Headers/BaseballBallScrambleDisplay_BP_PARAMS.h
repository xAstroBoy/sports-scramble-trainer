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
namespace CG::Engine { class UTexture2D; };
namespace CG::BB_Ball_Base { class ABB_Ball_Base_C; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BaseballBallScrambleDisplay_BP
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballBallScrambleDisplay_BP_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballBallScrambleDisplay_BP_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballBallScrambleDisplay_BP_C_SetIcon_Params
    {
    public:
        int32_t                                                      Index;                                                   //  0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0000[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        Engine::UTexture2D*                                          Icon;                                                    //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballBallScrambleDisplay_BP_C_GoAway_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballBallScrambleDisplay_BP_C_FindIcon_From_BBClass_Params
    {
    public:
        BB_Ball_Base::ABB_Ball_Base_C*                               BBBallClass;                                             //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32_t                                                      IconIndex;                                               //  0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballBallScrambleDisplay_BP_C_ExecuteUbergraph_BaseballBallScrambleDisplay_BP_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
