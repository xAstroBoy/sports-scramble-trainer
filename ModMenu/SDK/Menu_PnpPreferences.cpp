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
#include "Headers/Menu_PnpPreferences_PARAMS.h"
#include "Headers/Menu_PnpPreferences_AMenu_PnpPreferences_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Menu_PnpPreferences
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.EnableMenuInput
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               InputEnabled                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::EnableMenuInput(bool* InputEnabled)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.EnableMenuInput");
        
        AMenu_PnpPreferences_C_EnableMenuInput_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (InputEnabled != nullptr)
            *InputEnabled = params.InputEnabled;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.DisableMenuInput
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               InputDisabled                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::DisableMenuInput(bool* InputDisabled)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.DisableMenuInput");
        
        AMenu_PnpPreferences_C_DisableMenuInput_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (InputDisabled != nullptr)
            *InputDisabled = params.InputDisabled;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.RemoveSubMenu
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::RemoveSubMenu(bool* Removed)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.RemoveSubMenu");
        
        AMenu_PnpPreferences_C_RemoveSubMenu_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Removed != nullptr)
            *Removed = params.Removed;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.HideSubMenu
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               MenuHidden                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::HideSubMenu(bool* MenuHidden)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.HideSubMenu");
        
        AMenu_PnpPreferences_C_HideSubMenu_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (MenuHidden != nullptr)
            *MenuHidden = params.MenuHidden;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.RestoreSubMenu
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               MenuShown                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::RestoreSubMenu(bool* MenuShown)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.RestoreSubMenu");
        
        AMenu_PnpPreferences_C_RestoreSubMenu_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (MenuShown != nullptr)
            *MenuShown = params.MenuShown;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.EnableButtons
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::EnableButtons()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.EnableButtons");
        
        AMenu_PnpPreferences_C_EnableButtons_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.DisableButtons
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::DisableButtons()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.DisableButtons");
        
        AMenu_PnpPreferences_C_DisableButtons_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.Initialize
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::Initialize()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.Initialize");
        
        AMenu_PnpPreferences_C_Initialize_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.UserConstructionScript");
        
        AMenu_PnpPreferences_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.ReceiveBeginPlay");
        
        AMenu_PnpPreferences_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.ReceiveTick
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::ReceiveTick(float DeltaSeconds)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.ReceiveTick");
        
        AMenu_PnpPreferences_C_ReceiveTick_Params params {};
        params.DeltaSeconds = DeltaSeconds;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.ReceiveEndPlay
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::EEndPlayReason                             EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.ReceiveEndPlay");
        
        AMenu_PnpPreferences_C_ReceiveEndPlay_Params params {};
        params.EndPlayReason = EndPlayReason;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.ButtonPressed
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::ButtonPressed(int32_t ID)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.ButtonPressed");
        
        AMenu_PnpPreferences_C_ButtonPressed_Params params {};
        params.ID = ID;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.ButtonSwapped
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::ButtonSwapped(int32_t ID)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.ButtonSwapped");
        
        AMenu_PnpPreferences_C_ButtonSwapped_Params params {};
        params.ID = ID;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.SwingHandChanged
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::SwingHandChanged(int32_t ID)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.SwingHandChanged");
        
        AMenu_PnpPreferences_C_SwingHandChanged_Params params {};
        params.ID = ID;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.BowlingSkillChanged
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::BowlingSkillChanged(int32_t Index)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.BowlingSkillChanged");
        
        AMenu_PnpPreferences_C_BowlingSkillChanged_Params params {};
        params.Index = Index;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.ThrowingHandChanged
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::ThrowingHandChanged(int32_t ID)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.ThrowingHandChanged");
        
        AMenu_PnpPreferences_C_ThrowingHandChanged_Params params {};
        params.ID = ID;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.CatchingStyleChanged
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::CatchingStyleChanged(int32_t Index)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.CatchingStyleChanged");
        
        AMenu_PnpPreferences_C_CatchingStyleChanged_Params params {};
        params.Index = Index;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.PitchingSkillChanged
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::PitchingSkillChanged(int32_t Index)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.PitchingSkillChanged");
        
        AMenu_PnpPreferences_C_PitchingSkillChanged_Params params {};
        params.Index = Index;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.BattingSide
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::BattingSide(int32_t ID)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.BattingSide");
        
        AMenu_PnpPreferences_C_BattingSide_Params params {};
        params.ID = ID;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.BattingSkill
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::BattingSkill(int32_t Index)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.BattingSkill");
        
        AMenu_PnpPreferences_C_BattingSkill_Params params {};
        params.Index = Index;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.ExecuteUbergraph_Menu_PnpPreferences
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::ExecuteUbergraph_Menu_PnpPreferences(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.ExecuteUbergraph_Menu_PnpPreferences");
        
        AMenu_PnpPreferences_C_ExecuteUbergraph_Menu_PnpPreferences_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.HandSwapNeeded__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::HandSwapNeeded__DelegateSignature()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.HandSwapNeeded__DelegateSignature");
        
        AMenu_PnpPreferences_C_HandSwapNeeded__DelegateSignature_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.OptionChangeCompleted__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::OptionChangeCompleted__DelegateSignature(int32_t ID)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.OptionChangeCompleted__DelegateSignature");
        
        AMenu_PnpPreferences_C_OptionChangeCompleted__DelegateSignature_Params params {};
        params.ID = ID;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.OptionChangeStarted__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void AMenu_PnpPreferences_C::OptionChangeStarted__DelegateSignature(int32_t ID)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/UI/Frontend/SubMenus/Menu_PnpPreferences.Menu_PnpPreferences_C.OptionChangeStarted__DelegateSignature");
        
        AMenu_PnpPreferences_C_OptionChangeStarted__DelegateSignature_Params params {};
        params.ID = ID;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif