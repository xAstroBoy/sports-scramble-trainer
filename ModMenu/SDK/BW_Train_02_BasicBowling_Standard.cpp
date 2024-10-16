/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    10/14/2024                  |
 * ----------------------------------------
 */

#include "pch.h"
#include <cstdint>
#include <vector>
#include <string>
#include <locale>
#include <unordered_set>
#include "Headers/Global_DEFINES.h"
#include "Headers/BasicTypes.h"
#include "Headers/CoreUObject_UFunction.h"
#include "Headers/BW_Train_02_BasicBowling_Standard_PARAMS.h"
#include "Headers/BW_Train_02_BasicBowling_Standard_ABW_Train_02_BasicBowling_Standard_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_Train_02_BasicBowling_Standard
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.InitializeTrainingRoom01
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::InitializeTrainingRoom01()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.InitializeTrainingRoom01");
        
        ABW_Train_02_BasicBowling_Standard_C_InitializeTrainingRoom01_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.UserConstructionScript");
        
        ABW_Train_02_BasicBowling_Standard_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.ReceiveBeginPlay");
        
        ABW_Train_02_BasicBowling_Standard_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.TutorialStepOne
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::TutorialStepOne()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.TutorialStepOne");
        
        ABW_Train_02_BasicBowling_Standard_C_TutorialStepOne_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.TutorialStepTwo
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::TutorialStepTwo()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.TutorialStepTwo");
        
        ABW_Train_02_BasicBowling_Standard_C_TutorialStepTwo_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.SpecificBallCreated
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         BW_Ball_Base::ABW_Ball_Base_C*                     Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::SpecificBallCreated(BW_Ball_Base::ABW_Ball_Base_C* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.SpecificBallCreated");
        
        ABW_Train_02_BasicBowling_Standard_C_SpecificBallCreated_Params params {};
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.Tutorial_BW_BallGrabbed
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::UScramEventBasePayload*            Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::Tutorial_BW_BallGrabbed(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.Tutorial_BW_BallGrabbed");
        
        ABW_Train_02_BasicBowling_Standard_C_Tutorial_BW_BallGrabbed_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.Payload = Payload;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.TutorialStepThree
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::TutorialStepThree()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.TutorialStepThree");
        
        ABW_Train_02_BasicBowling_Standard_C_TutorialStepThree_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.TutorialStepFour
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::TutorialStepFour()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.TutorialStepFour");
        
        ABW_Train_02_BasicBowling_Standard_C_TutorialStepFour_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.TutorialStepFive
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::TutorialStepFive()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.TutorialStepFive");
        
        ABW_Train_02_BasicBowling_Standard_C_TutorialStepFive_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.RetryPracticeRoll
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::RetryPracticeRoll()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.RetryPracticeRoll");
        
        ABW_Train_02_BasicBowling_Standard_C_RetryPracticeRoll_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.CountDownCompleted
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::CountDownCompleted()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.CountDownCompleted");
        
        ABW_Train_02_BasicBowling_Standard_C_CountDownCompleted_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.StartTraining
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::StartTraining()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.StartTraining");
        
        ABW_Train_02_BasicBowling_Standard_C_StartTraining_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.SpawnBalls
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::SpawnBalls()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.SpawnBalls");
        
        ABW_Train_02_BasicBowling_Standard_C_SpawnBalls_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.GetCurrentLaneScore
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            LaneID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            CurrentScore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::GetCurrentLaneScore(int32_t LaneID, int32_t CurrentScore)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.GetCurrentLaneScore");
        
        ABW_Train_02_BasicBowling_Standard_C_GetCurrentLaneScore_Params params {};
        params.LaneID = LaneID;
        params.CurrentScore = CurrentScore;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.ListenForBowlingEvent
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::EBowlingEvent                      BowlingEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::ListenForBowlingEvent(int32_t PlayerId, SportsScramble::EBowlingEvent BowlingEvent)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.ListenForBowlingEvent");
        
        ABW_Train_02_BasicBowling_Standard_C_ListenForBowlingEvent_Params params {};
        params.PlayerId = PlayerId;
        params.BowlingEvent = BowlingEvent;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.CheckTutorialStatus
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramPrimitiveActor*              DestroyedPrimitive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::CheckTutorialStatus(SportsScramble::AScramPrimitiveActor* DestroyedPrimitive)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.CheckTutorialStatus");
        
        ABW_Train_02_BasicBowling_Standard_C_CheckTutorialStatus_Params params {};
        params.DestroyedPrimitive = DestroyedPrimitive;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.ReceiveEndPlay");
        
        ABW_Train_02_BasicBowling_Standard_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.NotifyTrainingContinue
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::NotifyTrainingContinue(Engine::AActor* DestroyedActor)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.NotifyTrainingContinue");
        
        ABW_Train_02_BasicBowling_Standard_C_NotifyTrainingContinue_Params params {};
        params.DestroyedActor = DestroyedActor;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.AnnouncerExitSequenceComplete
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::AnnouncerExitSequenceComplete()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.AnnouncerExitSequenceComplete");
        
        ABW_Train_02_BasicBowling_Standard_C_AnnouncerExitSequenceComplete_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.ExecuteUbergraph_BW_Train_02_BasicBowling_Standard
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Train_02_BasicBowling_Standard_C::ExecuteUbergraph_BW_Train_02_BasicBowling_Standard(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Training/Bowling/BW_Train_02_BasicBowling_Standard.BW_Train_02_BasicBowling_Standard_C.ExecuteUbergraph_BW_Train_02_BasicBowling_Standard");
        
        ABW_Train_02_BasicBowling_Standard_C_ExecuteUbergraph_BW_Train_02_BasicBowling_Standard_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
