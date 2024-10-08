/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    09/09/2024                  |
 * ----------------------------------------
 */

#include "../pch.h"
#include <cstdint>
#include <vector>
#include <string>
#include <locale>
#include <unordered_set>
#include "Headers/Global_DEFINES.h"
#include "Headers/BasicTypes.h"
#include "Headers/CoreUObject_UFunction.h"
#include "Headers/BW_ScoreCard_PARAMS.h"
#include "Headers/BW_ScoreCard_ABW_ScoreCard_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_ScoreCard
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.UpdatePlayerNames
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_ScoreCard_C::UpdatePlayerNames()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.UpdatePlayerNames");
        
        ABW_ScoreCard_C_UpdatePlayerNames_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.PrepareForGame
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            NumFrames                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            NumPlayers                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               Hidden                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABW_ScoreCard_C::PrepareForGame(int32_t NumFrames, int32_t NumPlayers, bool Hidden)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.PrepareForGame");
        
        ABW_ScoreCard_C_PrepareForGame_Params params {};
        params.NumFrames = NumFrames;
        params.NumPlayers = NumPlayers;
        params.Hidden = Hidden;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSets
     *         Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         BasicTypes::TArray<SportsScramble::FBowlingFrameSet> FrameSets                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
     *         int32_t                                            CurrentPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            CurrentFrame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_ScoreCard_C::UpdateFrameSets(BasicTypes::TArray<SportsScramble::FBowlingFrameSet> FrameSets, int32_t CurrentPlayer, int32_t CurrentFrame)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSets");
        
        ABW_ScoreCard_C_UpdateFrameSets_Params params {};
        params.FrameSets = FrameSets;
        params.CurrentPlayer = CurrentPlayer;
        params.CurrentFrame = CurrentFrame;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.Initialize
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_ScoreCard_C::Initialize()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.Initialize");
        
        ABW_ScoreCard_C_Initialize_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSet
     *         Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::FBowlingFrameSet                   frameSet                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
     *         BW_ScoreCardFrameSet_Widget::UBW_ScoreCardFrameSet_Widget_C* FrameSetWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         BasicTypes::TArray<BW_ScoreCardFrame_Widget::UBW_ScoreCardFrame_Widget_C*> FrameWidgets                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
     *         bool                                               IsPlayerActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         int32_t                                            CurrentFrame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_ScoreCard_C::UpdateFrameSet(const SportsScramble::FBowlingFrameSet& frameSet, BW_ScoreCardFrameSet_Widget::UBW_ScoreCardFrameSet_Widget_C* FrameSetWidget, BasicTypes::TArray<BW_ScoreCardFrame_Widget::UBW_ScoreCardFrame_Widget_C*>* FrameWidgets, bool IsPlayerActive, int32_t CurrentFrame)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSet");
        
        ABW_ScoreCard_C_UpdateFrameSet_Params params {};
        params.frameSet = frameSet;
        params.FrameSetWidget = FrameSetWidget;
        params.IsPlayerActive = IsPlayerActive;
        params.CurrentFrame = CurrentFrame;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (FrameWidgets != nullptr)
            *FrameWidgets = params.FrameWidgets;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_ScoreCard_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.UserConstructionScript");
        
        ABW_ScoreCard_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.Scale__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_ScoreCard_C::Scale__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.Scale__FinishedFunc");
        
        ABW_ScoreCard_C_Scale__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.Scale__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_ScoreCard_C::Scale__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.Scale__UpdateFunc");
        
        ABW_ScoreCard_C_Scale__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.NetUpdateFrameSets
     *         Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         BasicTypes::TArray<SportsScramble::FBowlingFrameSet> FrameSets                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
     *         int32_t                                            CurrentPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            CurrentFrame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_ScoreCard_C::NetUpdateFrameSets(BasicTypes::TArray<SportsScramble::FBowlingFrameSet> FrameSets, int32_t CurrentPlayer, int32_t CurrentFrame)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.NetUpdateFrameSets");
        
        ABW_ScoreCard_C_NetUpdateFrameSets_Params params {};
        params.FrameSets = FrameSets;
        params.CurrentPlayer = CurrentPlayer;
        params.CurrentFrame = CurrentFrame;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_ScoreCard_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.ReceiveBeginPlay");
        
        ABW_ScoreCard_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.NetPrepareForGame
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            NumFrames                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            NumPlayers                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_ScoreCard_C::NetPrepareForGame(int32_t NumFrames, int32_t NumPlayers)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.NetPrepareForGame");
        
        ABW_ScoreCard_C_NetPrepareForGame_Params params {};
        params.NumFrames = NumFrames;
        params.NumPlayers = NumPlayers;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.NetHide
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_ScoreCard_C::NetHide()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.NetHide");
        
        ABW_ScoreCard_C_NetHide_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.TravelCapsuleOpened
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::UScramEventBasePayload*            Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_ScoreCard_C::TravelCapsuleOpened(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.TravelCapsuleOpened");
        
        ABW_ScoreCard_C_TravelCapsuleOpened_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.Payload = Payload;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.ExecuteUbergraph_BW_ScoreCard
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_ScoreCard_C::ExecuteUbergraph_BW_ScoreCard(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/BW_ScoreCard.BW_ScoreCard_C.ExecuteUbergraph_BW_ScoreCard");
        
        ABW_ScoreCard_C_ExecuteUbergraph_BW_ScoreCard_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
