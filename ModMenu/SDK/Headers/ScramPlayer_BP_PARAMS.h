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
#include "SportsScramble_FCommonPlayerPreferences.h"
#include "SportsScramble_FBowlingPlayerPreferences.h"
#include "SportsScramble_FBaseballBatterPreferences.h"
#include "SportsScramble_FBaseballPitcherPreferences.h"
#include "SportsScramble_FTennisPlayerPreferences.h"
#include "InputCore_FKey.h"
#include "CoreUObject_FTransform.h"
#include "SportsScramble_FAvatarLook.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ScramPlayer_BP
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_Cleanup_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_SlomoDecrement_Params
    {
    public:
        int32_t                                                      Index;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0000[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::TArray<float>                                    Array;                                                   //  0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_SlomoIncrement_Params
    {
    public:
        int32_t                                                      Index;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0001[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::TArray<float>                                    Array;                                                   //  0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_Slomo_Params
    {
    public:
        float                                                        Scale;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0002[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_SetDefaults_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_SetCommonPreferences_Params
    {
    public:
        SportsScramble::FCommonPlayerPreferences                     preferences;                                             //  0x0000(0x0002)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_GetCommonPreferences_Params
    {
    public:
        SportsScramble::FCommonPlayerPreferences                     preferences;                                             //  0x0000(0x0002)  (Parm, OutParm, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_SetBowlingPreferences_Params
    {
    public:
        SportsScramble::FBowlingPlayerPreferences                    preferences;                                             //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_SetBaseballBatterPreferences_Params
    {
    public:
        SportsScramble::FBaseballBatterPreferences                   preferences;                                             //  0x0000(0x0003)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_SetBaseballPitcherPreferences_Params
    {
    public:
        SportsScramble::FBaseballPitcherPreferences                  preferences;                                             //  0x0000(0x0003)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_SetTennisPreferences_Params
    {
    public:
        SportsScramble::FTennisPlayerPreferences                     preferences;                                             //  0x0000(0x0003)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_GetBowlingPreferences_Params
    {
    public:
        SportsScramble::FBowlingPlayerPreferences                    preferences;                                             //  0x0000(0x0001)  (Parm, OutParm, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_GetBaseballBatterPreferences_Params
    {
    public:
        SportsScramble::FBaseballBatterPreferences                   preferences;                                             //  0x0000(0x0003)  (Parm, OutParm, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_GetBaseballPitcherPreferences_Params
    {
    public:
        SportsScramble::FBaseballPitcherPreferences                  preferences;                                             //  0x0000(0x0003)  (Parm, OutParm, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_GetTennisPreferences_Params
    {
    public:
        SportsScramble::FTennisPlayerPreferences                     preferences;                                             //  0x0000(0x0003)  (Parm, OutParm, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_Initialize_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_SetPlayerVisibility_Params
    {
    public:
        bool                                                         visible;                                                 //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_Timeline_Fade__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_Timeline_Fade__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_RightGripTrigger_K2Node_InputActionEvent_7_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_8_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_7_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_6_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_5_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_X_K2Node_InputActionEvent_6_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_X_K2Node_InputActionEvent_5_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Right_K2Node_InputKeyEvent_4_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Up_K2Node_InputKeyEvent_3_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Left_K2Node_InputKeyEvent_2_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Down_K2Node_InputKeyEvent_1_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_Y_K2Node_InputActionEvent_4_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_Y_K2Node_InputActionEvent_3_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_X_K2Node_InputActionEvent_2_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InpActEvt_Y_K2Node_InputActionEvent_1_Params
    {
    public:
        InputCore::FKey                                              Key;                                                     //  0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_ReceiveTick_Params
    {
    public:
        float                                                        DeltaSeconds;                                            //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_FadeToBlack_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_FadeFromBlack_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_InitialFadeIn_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_GrabbedSomething_Params
    {
    public:
        CoreUObject::UObject*                                        WorldContextObject;                                      //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        SportsScramble::UScramEventBasePayload*                      Payload;                                                 //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_OnPlayerOutOfBoundary_Params
    {
    public:
        CoreUObject::FTransform                                      ReturnTransform;                                         //  0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_OnPlayerEnterBoundary_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_PauseGame_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_ResumeGame_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_QueuedPlayerOutOfBoundary_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_QueuedPlayerEnterBoundary_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_ClientReady_Params
    {
    public:
        int32_t                                                      ID;                                                      //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_HostFadeToBlack_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_SetAvatarMaterials_Params
    {
    public:
        SportsScramble::FAvatarLook                                  AvatarLook;                                              //  0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_RecenterDetected_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_TravelCapsuleOpened_Params
    {
    public:
        CoreUObject::UObject*                                        WorldContextObject;                                      //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        SportsScramble::UScramEventBasePayload*                      Payload;                                                 //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_ExecuteUbergraph_ScramPlayer_BP_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0003[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_PlayerRecentered__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_RemotePlayerReady__DelegateSignature_Params
    {
    public:
        int32_t                                                      ID;                                                      //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_PlayerEnterBoundary__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_PlayerExitBoundary__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AScramPlayer_BP_C_PlayerFadedOut__DelegateSignature_Params
    {
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif