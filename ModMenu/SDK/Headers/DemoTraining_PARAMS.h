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
#include "BasicTypes_FText.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USoundBase; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::TN_Ball_Base { class ATN_Ball_Base_C; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::DemoTraining
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_StopActivity_Params
    {
    public:
        bool                                                         KeepShell;                                               //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_RecenterLauncher_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_AnnouncerSpeak_Params
    {
    public:
        Engine::USoundBase*                                          AnnouncerCue;                                            //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_DisplayInfo_Params
    {
    public:
        float                                                        DisplayTime;                                             //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0000[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::FText                                            DisplayText;                                             //  0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_SaveNewHighScore_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_SpawnMinigame_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_RevealCourt_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_CheckInBounds_Params
    {
    public:
        float                                                        XLocation;                                               //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        float                                                        YLocation;                                               //  0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         InBounds;                                                //  0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0001[0x3];                                   //  0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_DestroyHint_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_SpawnHint_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_DestroyAllBalls_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_PlayPreShotAudio_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_SetWarmupShotList_Params
    {
    public:
        bool                                                         FirstSet;                                                //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0002[0x7];                                   //  0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_Cleanup_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_Initialize_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_Timeline_RaiseNet__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_Timeline_RaiseNet__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_BeginWarmup_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_BallLaunchedWarmup_Params
    {
    public:
        Engine::AActor*                                              Ball;                                                    //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_BallHitWarmup_Params
    {
    public:
        CoreUObject::UObject*                                        WorldContextObject;                                      //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        SportsScramble::UScramEventBasePayload*                      Payload;                                                 //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_WarmupLoop_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_RaiseNet_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_DestroyBall_Params
    {
    public:
        TN_Ball_Base::ATN_Ball_Base_C*                               Ball;                                                    //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_ReadyForHint_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_DelayDestroyHint_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_HitCheckComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_PrepMiniGame_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_TrainingIntro_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_TrainingCompleted_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_ReadyTeleportFromTraining_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_Load_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_EndMenuChoiceMade_Params
    {
    public:
        int32_t                                                      ButtonId;                                                //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_MinigameCompleted_Params
    {
    public:
        int32_t                                                      score;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_RetryMiniGame_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_ShowInstructions_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_QuitTraining_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_ExecuteUbergraph_DemoTraining_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ADemoTraining_C_TrainingComplete__DelegateSignature_Params
    {
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif