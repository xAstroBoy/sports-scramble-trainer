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
#include "InputCore_FKey.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::GameHandlerOnline { class AGameHandlerOnline_C; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ScramPlayerController_BP
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_IsMultiplayerQueued_Params
    {
    public:
        bool                                                         MultiplayerQueued;                                       //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0000[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_DoesPauseManagerExist_Params
    {
    public:
        bool                                                         Exists;                                                  //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0001[0x7];                                   //  0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_IsPauseRestricted_Params
    {
    public:
        bool                                                         restricted;                                              //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0002[0x7];                                   //  0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_SpawnNoPause_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_Initialize_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_PauseGame_Params
    {
    public:
        bool                                                         CheckIfPausedAllowed;                                    //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_UnpauseGame_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_PauseEndNotify_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_PauseStartNotify_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_QueuedPauseGame_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_QueuedUnpauseGame_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_Server_ClientCanStartTravel_Params
    {
    public:
        GameHandlerOnline::AGameHandlerOnline_C*                     GameHandler;                                             //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_Server_ClientCanBeginMatch_Params
    {
    public:
        GameHandlerOnline::AGameHandlerOnline_C*                     GameHandler;                                             //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_ExecuteUbergraph_ScramPlayerController_BP_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0003[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_PauseEnd__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayerController_BP_C_PauseStart__DelegateSignature_Params
    {
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif