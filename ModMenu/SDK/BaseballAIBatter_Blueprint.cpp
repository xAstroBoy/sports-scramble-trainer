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
#include "Headers/BaseballAIBatter_Blueprint_PARAMS.h"
#include "Headers/BaseballAIBatter_Blueprint_ABaseballAIBatter_Blueprint_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BaseballAIBatter_Blueprint
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetLook
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABaseballAIBatter_Blueprint_C::SetLook()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetLook");
        
        ABaseballAIBatter_Blueprint_C_SetLook_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.RandomizeLook
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABaseballAIBatter_Blueprint_C::RandomizeLook()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.RandomizeLook");
        
        ABaseballAIBatter_Blueprint_C_RandomizeLook_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ClearBat
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABaseballAIBatter_Blueprint_C::ClearBat()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ClearBat");
        
        ABaseballAIBatter_Blueprint_C_ClearBat_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetBat
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::ABaseballInstrument*               BatClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               PlayEffects                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABaseballAIBatter_Blueprint_C::SetBat(SportsScramble::ABaseballInstrument* BatClass, bool PlayEffects)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetBat");
        
        ABaseballAIBatter_Blueprint_C_SetBat_Params params {};
        params.BatClass = BatClass;
        params.PlayEffects = PlayEffects;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetTeamColor
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Home                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABaseballAIBatter_Blueprint_C::SetTeamColor(bool Home)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetTeamColor");
        
        ABaseballAIBatter_Blueprint_C_SetTeamColor_Params params {};
        params.Home = Home;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABaseballAIBatter_Blueprint_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.UserConstructionScript");
        
        ABaseballAIBatter_Blueprint_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABaseballAIBatter_Blueprint_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ReceiveBeginPlay");
        
        ABaseballAIBatter_Blueprint_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.PlayBatSound
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         SportsScramble::ABaseballBall*                     Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         float                                              BallSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABaseballAIBatter_Blueprint_C::PlayBatSound(SportsScramble::ABaseballBall* Ball, float BallSpeed)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.PlayBatSound");
        
        ABaseballAIBatter_Blueprint_C_PlayBatSound_Params params {};
        params.Ball = Ball;
        params.BallSpeed = BallSpeed;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABaseballAIBatter_Blueprint_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ReceiveEndPlay");
        
        ABaseballAIBatter_Blueprint_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ExecuteUbergraph_BaseballAIBatter_Blueprint
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABaseballAIBatter_Blueprint_C::ExecuteUbergraph_BaseballAIBatter_Blueprint(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ExecuteUbergraph_BaseballAIBatter_Blueprint");
        
        ABaseballAIBatter_Blueprint_C_ExecuteUbergraph_BaseballAIBatter_Blueprint_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.LookRandomzied__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SportsScramble::FAvatarLook                        AvatarLook                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
     *         void                                               ReturnValue
     */
    void ABaseballAIBatter_Blueprint_C::LookRandomzied__DelegateSignature(const SportsScramble::FAvatarLook& AvatarLook)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.LookRandomzied__DelegateSignature");
        
        ABaseballAIBatter_Blueprint_C_LookRandomzied__DelegateSignature_Params params {};
        params.AvatarLook = AvatarLook;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif