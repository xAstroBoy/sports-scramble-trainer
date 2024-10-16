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
#include "Engine_ENUMS.h"
#include "CoreUObject_FVector.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::BB_Ball_Base { class ABB_Ball_Base_C; };
namespace CG::Engine { class AActor; };
namespace CG::BB_Mitt { class ABB_Mitt_C; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_Train_01_Casual
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_StopPlayingAudioComponents_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_SetUpInfoText_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_BB_TRN_Casual_Initialize_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_StartGrabButtonTimer_Params
    {
    public:
        float                                                        Time;                                                    //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_SliceInstructions_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_BaseballEvent_Params
    {
    public:
        CoreUObject::UObject*                                        WorldContextObject;                                      //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        SportsScramble::UScramEventBasePayload*                      Payload;                                                 //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_ListenForBBEvent_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_StartThrowBallTimer_Params
    {
    public:
        float                                                        Time;                                                    //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_RemindPlayerToThrow_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_ReadyForTraining_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_Tutorial_Step_01_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_HitFloorCollision_Params
    {
    public:
        BB_Ball_Base::ABB_Ball_Base_C*                               Ball;                                                    //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        CoreUObject::FVector                                         HitLocation;                                             //  0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_BB_EquipmentGrabbed_Params
    {
    public:
        Engine::AActor*                                              DominantHand;                                            //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        BB_Mitt::ABB_Mitt_C*                                         Mitt;                                                    //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_PitcherCaughtSomething_Params
    {
    public:
        SportsScramble::UScramEventBasePayload*                      Payload;                                                 //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_BallInGloveGrabbed_Params
    {
    public:
        CoreUObject::UObject*                                        WorldContextObject;                                      //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        SportsScramble::UScramEventBasePayload*                      Payload;                                                 //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_Tutorial_Step_02_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_Tutotial_Step_03_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_Tutorial_Step_03_Retry_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_BallInGloveThrown_Params
    {
    public:
        CoreUObject::UObject*                                        WorldContextObject;                                      //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        SportsScramble::UScramEventBasePayload*                      Payload;                                                 //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_CatcherCaughtBall_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_Tutorial_Step_04_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_Tutorial_Step_05_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_Tutorial_Step_06_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_Strikezone_Strike_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_Tutorial_Step_07_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_Strikezone_Ball_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_TryAgain_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_CalculateScore_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_NotifyTrainingContinue_Params
    {
    public:
        Engine::AActor*                                              DestroyedActor;                                          //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_CountVoiceClips_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_AnnouncerExitSequenceComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_CountDownCompleted_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_StartTraining_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_TrackMissedBalls_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABB_Train_01_Casual_C_ExecuteUbergraph_BB_Train_01_Casual_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
