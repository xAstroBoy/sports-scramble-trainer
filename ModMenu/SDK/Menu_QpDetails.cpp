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
#include "Headers/Menu_QpDetails_PARAMS.h"
#include "Headers/Menu_QpDetails_AMenu_QpDetails_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Menu_QpDetails
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.EnableMenuInput
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               InputEnabled                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::EnableMenuInput(bool* InputEnabled)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.EnableMenuInput");
        
        AMenu_QpDetails_C_EnableMenuInput_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (InputEnabled != nullptr)
            *InputEnabled = params.InputEnabled;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.DisableMenuInput
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               InputDisabled                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::DisableMenuInput(bool* InputDisabled)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.DisableMenuInput");
        
        AMenu_QpDetails_C_DisableMenuInput_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (InputDisabled != nullptr)
            *InputDisabled = params.InputDisabled;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.RemoveSubMenu
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::RemoveSubMenu(bool* Removed)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.RemoveSubMenu");
        
        AMenu_QpDetails_C_RemoveSubMenu_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Removed != nullptr)
            *Removed = params.Removed;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.HideSubMenu
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               MenuHidden                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::HideSubMenu(bool* MenuHidden)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.HideSubMenu");
        
        AMenu_QpDetails_C_HideSubMenu_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (MenuHidden != nullptr)
            *MenuHidden = params.MenuHidden;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.RestoreSubMenu
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               MenuShown                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::RestoreSubMenu(bool* MenuShown)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.RestoreSubMenu");
        
        AMenu_QpDetails_C_RestoreSubMenu_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (MenuShown != nullptr)
            *MenuShown = params.MenuShown;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.SpawnButton
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::SpawnButton()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.SpawnButton");
        
        AMenu_QpDetails_C_SpawnButton_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.EnableButtons
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::EnableButtons()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.EnableButtons");
        
        AMenu_QpDetails_C_EnableButtons_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.DisableButtons
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::DisableButtons()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.DisableButtons");
        
        AMenu_QpDetails_C_DisableButtons_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.Initialize
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::Initialize()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.Initialize");
        
        AMenu_QpDetails_C_Initialize_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.UserConstructionScript");
        
        AMenu_QpDetails_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.TimelineMoveMessage__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::TimelineMoveMessage__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.TimelineMoveMessage__FinishedFunc");
        
        AMenu_QpDetails_C_TimelineMoveMessage__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.TimelineMoveMessage__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::TimelineMoveMessage__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.TimelineMoveMessage__UpdateFunc");
        
        AMenu_QpDetails_C_TimelineMoveMessage__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.Timeline_ScaleBox__FinishedFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::Timeline_ScaleBox__FinishedFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.Timeline_ScaleBox__FinishedFunc");
        
        AMenu_QpDetails_C_Timeline_ScaleBox__FinishedFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.Timeline_ScaleBox__UpdateFunc
     *         Flags  -> (BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::Timeline_ScaleBox__UpdateFunc()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.Timeline_ScaleBox__UpdateFunc");
        
        AMenu_QpDetails_C_Timeline_ScaleBox__UpdateFunc_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.ReceiveBeginPlay");
        
        AMenu_QpDetails_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.ReceiveTick
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::ReceiveTick(float DeltaSeconds)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.ReceiveTick");
        
        AMenu_QpDetails_C_ReceiveTick_Params params {};
        params.DeltaSeconds = DeltaSeconds;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.ReceiveEndPlay");
        
        AMenu_QpDetails_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.ButtonPressed
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::ButtonPressed(int32_t ID)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.ButtonPressed");
        
        AMenu_QpDetails_C_ButtonPressed_Params params {};
        params.ID = ID;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.ButtonSwapped
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::ButtonSwapped(int32_t ID)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.ButtonSwapped");
        
        AMenu_QpDetails_C_ButtonSwapped_Params params {};
        params.ID = ID;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.MoveTitle
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::MoveTitle()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.MoveTitle");
        
        AMenu_QpDetails_C_MoveTitle_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.ShowBox
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::ShowBox()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.ShowBox");
        
        AMenu_QpDetails_C_ShowBox_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.ExecuteUbergraph_Menu_QpDetails
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::ExecuteUbergraph_Menu_QpDetails(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.ExecuteUbergraph_Menu_QpDetails");
        
        AMenu_QpDetails_C_ExecuteUbergraph_Menu_QpDetails_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.SpawnNavButtons__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::SpawnNavButtons__DelegateSignature()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.SpawnNavButtons__DelegateSignature");
        
        AMenu_QpDetails_C_SpawnNavButtons__DelegateSignature_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.EditButtonSwapped__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::EditButtonSwapped__DelegateSignature(int32_t ID)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.EditButtonSwapped__DelegateSignature");
        
        AMenu_QpDetails_C_EditButtonSwapped__DelegateSignature_Params params {};
        params.ID = ID;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.EditButtonPressed__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_QpDetails_C::EditButtonPressed__DelegateSignature(int32_t ID)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C.EditButtonPressed__DelegateSignature");
        
        AMenu_QpDetails_C_EditButtonPressed__DelegateSignature_Params params {};
        params.ID = ID;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
