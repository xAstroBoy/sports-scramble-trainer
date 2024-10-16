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
#include "SportsScramble_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_StrikezoneQuad
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_RemoveGameElement_Params
    {
    public:
        bool                                                         Removed;                                                 //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_Initialize_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_Timeline_Scale__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_Timeline_Scale__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_Timeline_ScaleAlt__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_Timeline_ScaleAlt__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_StrikezoneGrow_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_StrikezoneShrink_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_SetQuadTransparency_Params
    {
    public:
        float                                                        Transparency;                                            //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_TrainingQuadBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_TrainingQuadGrow_Params
    {
    public:
        float                                                        QuadTransparency;                                        //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_TrainingQuadEmissiveIntensity_Params
    {
    public:
        float                                                        EmissiveIntensity;                                       //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_UpdateStrikeZoneVisibility_Params
    {
    public:
        bool                                                         Hide;                                                    //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_UpdateQuadVisibility_Params
    {
    public:
        bool                                                         TL;                                                      //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        bool                                                         TR;                                                      //  0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        bool                                                         BL;                                                      //  0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        bool                                                         BR;                                                      //  0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_PitchingTargetHit_Params
    {
    public:
        SportsScramble::EBaseballScrambleTargetLocations             TargetLocation;                                          //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_StrikezoneQuad_C_ExecuteUbergraph_BB_StrikezoneQuad_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
