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
#include "Headers/BW_VideoBoard_Training_PARAMS.h"
#include "Headers/BW_VideoBoard_Training_ABW_VideoBoard_Training_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_VideoBoard_Training
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.Initialize
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_VideoBoard_Training_C::Initialize()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.Initialize");
        
        ABW_VideoBoard_Training_C_Initialize_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_VideoBoard_Training_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.UserConstructionScript");
        
        ABW_VideoBoard_Training_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_VideoBoard_Training_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.ReceiveBeginPlay");
        
        ABW_VideoBoard_Training_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.Reset
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_VideoBoard_Training_C::Reset()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.Reset");
        
        ABW_VideoBoard_Training_C_Reset_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_VideoBoard_Training_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.ReceiveEndPlay");
        
        ABW_VideoBoard_Training_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.PlayMatchVideo
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_VideoBoard_Training_C::PlayMatchVideo(int32_t Round)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.PlayMatchVideo");
        
        ABW_VideoBoard_Training_C_PlayMatchVideo_Params params {};
        params.Round = Round;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.ExecuteUbergraph_BW_VideoBoard_Training
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_VideoBoard_Training_C::ExecuteUbergraph_BW_VideoBoard_Training(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.ExecuteUbergraph_BW_VideoBoard_Training");
        
        ABW_VideoBoard_Training_C_ExecuteUbergraph_BW_VideoBoard_Training_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.MatchVideoStarted__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FTimespan                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABW_VideoBoard_Training_C::MatchVideoStarted__DelegateSignature(const CoreUObject::FTimespan& Duration)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.MatchVideoStarted__DelegateSignature");
        
        ABW_VideoBoard_Training_C_MatchVideoStarted__DelegateSignature_Params params {};
        params.Duration = Duration;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.VideoFadeOutComplete__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_VideoBoard_Training_C::VideoFadeOutComplete__DelegateSignature()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.VideoFadeOutComplete__DelegateSignature");
        
        ABW_VideoBoard_Training_C_VideoFadeOutComplete__DelegateSignature_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.MatchVideoComplete__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABW_VideoBoard_Training_C::MatchVideoComplete__DelegateSignature()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Environments/BW_VideoBoard_Training.BW_VideoBoard_Training_C.MatchVideoComplete__DelegateSignature");
        
        ABW_VideoBoard_Training_C_MatchVideoComplete__DelegateSignature_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif