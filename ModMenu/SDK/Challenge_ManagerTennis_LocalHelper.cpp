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
#include "Headers/Challenge_ManagerTennis_LocalHelper_PARAMS.h"
#include "Headers/Challenge_ManagerTennis_LocalHelper_AChallenge_ManagerTennis_LocalHelper_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Challenge_ManagerTennis_LocalHelper
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UpdateAdvantage
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               ShowAdvantage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::UpdateAdvantage(bool ShowAdvantage)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UpdateAdvantage");
        
        AChallenge_ManagerTennis_LocalHelper_C_UpdateAdvantage_Params params {};
        params.ShowAdvantage = ShowAdvantage;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UpdateArenaScoreboardsServe
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         bool                                               Player2Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::UpdateArenaScoreboardsServe(bool Player1Serve, bool Player2Serve)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UpdateArenaScoreboardsServe");
        
        AChallenge_ManagerTennis_LocalHelper_C_UpdateArenaScoreboardsServe_Params params {};
        params.Player1Serve = Player1Serve;
        params.Player2Serve = Player2Serve;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayDebugInfo
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         BasicTypes::FString                                String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::DisplayDebugInfo(const BasicTypes::FString& String)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayDebugInfo");
        
        AChallenge_ManagerTennis_LocalHelper_C_DisplayDebugInfo_Params params {};
        params.String = String;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayServeInfo
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               IsLocalPlayerServe                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         int32_t                                            GameCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               OC5Demo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::DisplayServeInfo(bool IsLocalPlayerServe, int32_t GameCount, bool OC5Demo)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayServeInfo");
        
        AChallenge_ManagerTennis_LocalHelper_C_DisplayServeInfo_Params params {};
        params.IsLocalPlayerServe = IsLocalPlayerServe;
        params.GameCount = GameCount;
        params.OC5Demo = OC5Demo;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayInfo
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         BasicTypes::FText                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
     *         float                                              DisplayTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::DisplayInfo(const BasicTypes::FText& Text, float DisplayTime)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayInfo");
        
        AChallenge_ManagerTennis_LocalHelper_C_DisplayInfo_Params params {};
        params.Text = Text;
        params.DisplayTime = DisplayTime;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.GetArenaScoreboards
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::GetArenaScoreboards()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.GetArenaScoreboards");
        
        AChallenge_ManagerTennis_LocalHelper_C_GetArenaScoreboards_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UpdateArenaScoreboards
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            Player1Score                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            Player2Score                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            Player1Games                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            Player2Games                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         bool                                               Player2Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         bool                                               UpdateScoreOnly                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::UpdateArenaScoreboards(int32_t Player1Score, int32_t Player2Score, int32_t Player1Games, int32_t Player2Games, bool Player1Serve, bool Player2Serve, bool UpdateScoreOnly)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UpdateArenaScoreboards");
        
        AChallenge_ManagerTennis_LocalHelper_C_UpdateArenaScoreboards_Params params {};
        params.Player1Score = Player1Score;
        params.Player2Score = Player2Score;
        params.Player1Games = Player1Games;
        params.Player2Games = Player2Games;
        params.Player1Serve = Player1Serve;
        params.Player2Serve = Player2Serve;
        params.UpdateScoreOnly = UpdateScoreOnly;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.Cleanup
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::Cleanup()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.Cleanup");
        
        AChallenge_ManagerTennis_LocalHelper_C_Cleanup_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.Initialize
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::Initialize()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.Initialize");
        
        AChallenge_ManagerTennis_LocalHelper_C_Initialize_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UserConstructionScript");
        
        AChallenge_ManagerTennis_LocalHelper_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ReceiveBeginPlay");
        
        AChallenge_ManagerTennis_LocalHelper_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ReceiveEndPlay");
        
        AChallenge_ManagerTennis_LocalHelper_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayPointResults
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         BasicTypes::FText                                  PointType                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
     *         int32_t                                            NewScoreP1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            NewScoreP2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               Player1WonPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         bool                                               TextOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::DisplayPointResults(const BasicTypes::FText& PointType, int32_t NewScoreP1, int32_t NewScoreP2, bool Player1WonPoint, bool TextOnly)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayPointResults");
        
        AChallenge_ManagerTennis_LocalHelper_C_DisplayPointResults_Params params {};
        params.PointType = PointType;
        params.NewScoreP1 = NewScoreP1;
        params.NewScoreP2 = NewScoreP2;
        params.Player1WonPoint = Player1WonPoint;
        params.TextOnly = TextOnly;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayLet
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::DisplayLet()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayLet");
        
        AChallenge_ManagerTennis_LocalHelper_C_DisplayLet_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayFault
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::DisplayFault()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayFault");
        
        AChallenge_ManagerTennis_LocalHelper_C_DisplayFault_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayStartOfMatchInfo
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            GamesToWin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         bool                                               OC5Demo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::DisplayStartOfMatchInfo(int32_t GamesToWin, bool Player1Serve, bool OC5Demo)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayStartOfMatchInfo");
        
        AChallenge_ManagerTennis_LocalHelper_C_DisplayStartOfMatchInfo_Params params {};
        params.GamesToWin = GamesToWin;
        params.Player1Serve = Player1Serve;
        params.OC5Demo = OC5Demo;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ShowNetPreServeInfo
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         BasicTypes::FText                                  GameStatusText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
     *         bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::ShowNetPreServeInfo(const BasicTypes::FText& GameStatusText, bool Player1Serve)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ShowNetPreServeInfo");
        
        AChallenge_ManagerTennis_LocalHelper_C_ShowNetPreServeInfo_Params params {};
        params.GameStatusText = GameStatusText;
        params.Player1Serve = Player1Serve;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.HideNetScoreboard
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::HideNetScoreboard()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.HideNetScoreboard");
        
        AChallenge_ManagerTennis_LocalHelper_C_HideNetScoreboard_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.GameComplete
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            GameCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            Player1GamesWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            Player2GamesWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::GameComplete(int32_t GameCount, int32_t Player1GamesWon, int32_t Player2GamesWon, bool Player1Serve)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.GameComplete");
        
        AChallenge_ManagerTennis_LocalHelper_C_GameComplete_Params params {};
        params.GameCount = GameCount;
        params.Player1GamesWon = Player1GamesWon;
        params.Player2GamesWon = Player2GamesWon;
        params.Player1Serve = Player1Serve;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.MatchCompleted
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            Player1GamesWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            Player2GamesWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               OC5Demo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::MatchCompleted(int32_t Player1GamesWon, int32_t Player2GamesWon, bool OC5Demo)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.MatchCompleted");
        
        AChallenge_ManagerTennis_LocalHelper_C_MatchCompleted_Params params {};
        params.Player1GamesWon = Player1GamesWon;
        params.Player2GamesWon = Player2GamesWon;
        params.OC5Demo = OC5Demo;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.SwitchServeMessage
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Player1Serve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::SwitchServeMessage(bool Player1Serve)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.SwitchServeMessage");
        
        AChallenge_ManagerTennis_LocalHelper_C_SwitchServeMessage_Params params {};
        params.Player1Serve = Player1Serve;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ExecuteUbergraph_Challenge_ManagerTennis_LocalHelper
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::ExecuteUbergraph_Challenge_ManagerTennis_LocalHelper(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ExecuteUbergraph_Challenge_ManagerTennis_LocalHelper");
        
        AChallenge_ManagerTennis_LocalHelper_C_ExecuteUbergraph_Challenge_ManagerTennis_LocalHelper_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ServeMessageComplete__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AChallenge_ManagerTennis_LocalHelper_C::ServeMessageComplete__DelegateSignature()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Challenges/Tennis/Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ServeMessageComplete__DelegateSignature");
        
        AChallenge_ManagerTennis_LocalHelper_C_ServeMessageComplete__DelegateSignature_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
