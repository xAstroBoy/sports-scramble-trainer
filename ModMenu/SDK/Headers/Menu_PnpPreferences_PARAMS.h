#pragma once
#pragma warning(disable: 4267)

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    09/09/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>
#include "Engine_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Menu_PnpPreferences
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_EnableMenuInput_Params
    {
    public:
        bool                                                         InputEnabled;                                            //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_DisableMenuInput_Params
    {
    public:
        bool                                                         InputDisabled;                                           //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_RemoveSubMenu_Params
    {
    public:
        bool                                                         Removed;                                                 //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_HideSubMenu_Params
    {
    public:
        bool                                                         MenuHidden;                                              //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_RestoreSubMenu_Params
    {
    public:
        bool                                                         MenuShown;                                               //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_EnableButtons_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_DisableButtons_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_Initialize_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_ReceiveTick_Params
    {
    public:
        float                                                        DeltaSeconds;                                            //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_ButtonPressed_Params
    {
    public:
        int32_t                                                      ID;                                                      //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_ButtonSwapped_Params
    {
    public:
        int32_t                                                      ID;                                                      //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_SwingHandChanged_Params
    {
    public:
        int32_t                                                      ID;                                                      //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_BowlingSkillChanged_Params
    {
    public:
        int32_t                                                      Index;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_ThrowingHandChanged_Params
    {
    public:
        int32_t                                                      ID;                                                      //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_CatchingStyleChanged_Params
    {
    public:
        int32_t                                                      Index;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_PitchingSkillChanged_Params
    {
    public:
        int32_t                                                      Index;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_BattingSide_Params
    {
    public:
        int32_t                                                      ID;                                                      //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_BattingSkill_Params
    {
    public:
        int32_t                                                      Index;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_ExecuteUbergraph_Menu_PnpPreferences_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_HandSwapNeeded__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_OptionChangeCompleted__DelegateSignature_Params
    {
    public:
        int32_t                                                      ID;                                                      //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_PnpPreferences_C_OptionChangeStarted__DelegateSignature_Params
    {
    public:
        int32_t                                                      ID;                                                      //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif