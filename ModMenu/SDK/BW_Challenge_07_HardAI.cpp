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
#include "Headers/BW_Challenge_07_HardAI_PARAMS.h"
#include "Headers/BW_Challenge_07_HardAI_ABW_Challenge_07_HardAI_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_Challenge_07_HardAI
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.GetTrophyID
     *         Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         BasicTypes::FName                                  TrophyID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Challenge_07_HardAI_C::GetTrophyID(BasicTypes::FName* TrophyID)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.GetTrophyID");
        
        ABW_Challenge_07_HardAI_C_GetTrophyID_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (TrophyID != nullptr)
            *TrophyID = params.TrophyID;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.InitializeChallengeRoom
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Challenge_07_HardAI_C::InitializeChallengeRoom()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.InitializeChallengeRoom");
        
        ABW_Challenge_07_HardAI_C_InitializeChallengeRoom_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.SetUpInfoText
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Challenge_07_HardAI_C::SetUpInfoText()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.SetUpInfoText");
        
        ABW_Challenge_07_HardAI_C_SetUpInfoText_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Challenge_07_HardAI_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.UserConstructionScript");
        
        ABW_Challenge_07_HardAI_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Challenge_07_HardAI_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ReceiveBeginPlay");
        
        ABW_Challenge_07_HardAI_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.NotifyChallengeContinue
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Challenge_07_HardAI_C::NotifyChallengeContinue(Engine::AActor* DestroyedActor)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.NotifyChallengeContinue");
        
        ABW_Challenge_07_HardAI_C_NotifyChallengeContinue_Params params {};
        params.DestroyedActor = DestroyedActor;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Challenge_07_HardAI_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ReceiveEndPlay");
        
        ABW_Challenge_07_HardAI_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.Shortcut
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Challenge_07_HardAI_C::Shortcut()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.Shortcut");
        
        ABW_Challenge_07_HardAI_C_Shortcut_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.BW_CHG_SportManagerGameEnd
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         GameResult::EGameResult                            MatchResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            Player1GamesWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            Player2GamesWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Challenge_07_HardAI_C::BW_CHG_SportManagerGameEnd(GameResult::EGameResult MatchResult, int32_t Player1GamesWon, int32_t Player2GamesWon)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.BW_CHG_SportManagerGameEnd");
        
        ABW_Challenge_07_HardAI_C_BW_CHG_SportManagerGameEnd_Params params {};
        params.MatchResult = MatchResult;
        params.Player1GamesWon = Player1GamesWon;
        params.Player2GamesWon = Player2GamesWon;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.AnnouncerExitSequenceComplete
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_Challenge_07_HardAI_C::AnnouncerExitSequenceComplete()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.AnnouncerExitSequenceComplete");
        
        ABW_Challenge_07_HardAI_C_AnnouncerExitSequenceComplete_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.OnScore
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::UScramEventBasePayload*            Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Challenge_07_HardAI_C::OnScore(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.OnScore");
        
        ABW_Challenge_07_HardAI_C_OnScore_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.Payload = Payload;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ExecuteUbergraph_BW_Challenge_07_HardAI
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_Challenge_07_HardAI_C::ExecuteUbergraph_BW_Challenge_07_HardAI(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Bowling/BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ExecuteUbergraph_BW_Challenge_07_HardAI");
        
        ABW_Challenge_07_HardAI_C_ExecuteUbergraph_BW_Challenge_07_HardAI_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
