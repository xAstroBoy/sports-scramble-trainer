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
#include "Headers/SpaceInvaderAlien_BP_PARAMS.h"
#include "Headers/SpaceInvaderAlien_BP_ASpaceInvaderAlien_BP_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SpaceInvaderAlien_BP
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.ShouldShowFlyText
     *         Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::ShouldShowFlyText(bool* Output)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.ShouldShowFlyText");
        
        ASpaceInvaderAlien_BP_C_ShouldShowFlyText_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Output != nullptr)
            *Output = params.Output;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.Local_EndLaneFX
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::Local_EndLaneFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.Local_EndLaneFX");
        
        ASpaceInvaderAlien_BP_C_Local_EndLaneFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.Local_ScoreFX
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               bonus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::Local_ScoreFX(bool bonus, int32_t score)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.Local_ScoreFX");
        
        ASpaceInvaderAlien_BP_C_Local_ScoreFX_Params params {};
        params.bonus = bonus;
        params.score = score;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.VerifyPool
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::VerifyPool(bool* Success)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.VerifyPool");
        
        ASpaceInvaderAlien_BP_C_VerifyPool_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Success != nullptr)
            *Success = params.Success;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.MakeFractionalData
     *         Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         CoreUObject::FVector                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::MakeFractionalData(CoreUObject::FVector* NewParam)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.MakeFractionalData");
        
        ASpaceInvaderAlien_BP_C_MakeFractionalData_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (NewParam != nullptr)
            *NewParam = params.NewParam;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.RunParticle
     *         Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FTransform                            WorldTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
     *         CoreUObject::FLinearColor                          Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::RunParticle(const CoreUObject::FTransform& WorldTransform, const CoreUObject::FLinearColor& Color)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.RunParticle");
        
        ASpaceInvaderAlien_BP_C_RunParticle_Params params {};
        params.WorldTransform = WorldTransform;
        params.Color = Color;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.UserConstructionScript");
        
        ASpaceInvaderAlien_BP_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.UncoverAlien
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::UncoverAlien()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.UncoverAlien");
        
        ASpaceInvaderAlien_BP_C_UncoverAlien_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.RunScoreFX
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::RunScoreFX(Engine::AActor* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.RunScoreFX");
        
        ASpaceInvaderAlien_BP_C_RunScoreFX_Params params {};
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.RunEndLaneFX
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::RunEndLaneFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.RunEndLaneFX");
        
        ASpaceInvaderAlien_BP_C_RunEndLaneFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.ReceiveBeginPlay");
        
        ASpaceInvaderAlien_BP_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.UpdateAnimation
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::UpdateAnimation()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.UpdateAnimation");
        
        ASpaceInvaderAlien_BP_C_UpdateAnimation_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.UpdateAlien
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::UpdateAlien()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.UpdateAlien");
        
        ASpaceInvaderAlien_BP_C_UpdateAlien_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.HideAlien
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::HideAlien()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.HideAlien");
        
        ASpaceInvaderAlien_BP_C_HideAlien_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.Multi_EndLaneFX
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::Multi_EndLaneFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.Multi_EndLaneFX");
        
        ASpaceInvaderAlien_BP_C_Multi_EndLaneFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.Server_ScoreFX
     *         Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               bonus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::Server_ScoreFX(bool bonus, int32_t score)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.Server_ScoreFX");
        
        ASpaceInvaderAlien_BP_C_Server_ScoreFX_Params params {};
        params.bonus = bonus;
        params.score = score;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.AddScore
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         int32_t                                            ScoreValue                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         Engine::AActor*                                    Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::AddScore(int32_t ScoreValue, Engine::AActor* Ball)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.AddScore");
        
        ASpaceInvaderAlien_BP_C_AddScore_Params params {};
        params.ScoreValue = ScoreValue;
        params.Ball = Ball;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.Server_EndLaneFX
     *         Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::Server_EndLaneFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.Server_EndLaneFX");
        
        ASpaceInvaderAlien_BP_C_Server_EndLaneFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.Multi_ScoreFX
     *         Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               bonus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::Multi_ScoreFX(bool bonus, int32_t score)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.Multi_ScoreFX");
        
        ASpaceInvaderAlien_BP_C_Multi_ScoreFX_Params params {};
        params.bonus = bonus;
        params.score = score;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.ExecuteUbergraph_SpaceInvaderAlien_BP
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ASpaceInvaderAlien_BP_C::ExecuteUbergraph_SpaceInvaderAlien_BP(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/SpaceInvaderAlien_BP.SpaceInvaderAlien_BP_C.ExecuteUbergraph_SpaceInvaderAlien_BP");
        
        ASpaceInvaderAlien_BP_C_ExecuteUbergraph_SpaceInvaderAlien_BP_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif