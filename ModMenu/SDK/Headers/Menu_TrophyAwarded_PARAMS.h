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

namespace CG::Menu_TrophyAwarded
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_EnableMenuInput_Params
    {
    public:
        bool                                                         InputEnabled;                                            //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_DisableMenuInput_Params
    {
    public:
        bool                                                         InputDisabled;                                           //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_RemoveSubMenu_Params
    {
    public:
        bool                                                         Removed;                                                 //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_HideSubMenu_Params
    {
    public:
        bool                                                         MenuHidden;                                              //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_RestoreSubMenu_Params
    {
    public:
        bool                                                         MenuShown;                                               //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_SpawnHairPack_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_SpawnSkinPack_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_DebugHairPackData_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_DebugSkinPackData_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_DebugAvatarData_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_GetDate_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_SpawnAvatar_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_SpawnTrophy_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Initialize_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_MoveTitle__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_MoveTitle__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_ScaleIcon__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_ScaleIcon__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_ScaleModels__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_ScaleModels__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_ScaleInfo__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_ScaleInfo__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_SpinIcon__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_SpinIcon__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_HideIcon__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_HideIcon__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_MoveModel__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_MoveModel__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_RotatePacks__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_Timeline_RotatePacks__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_ReceiveTick_Params
    {
    public:
        float                                                        DeltaSeconds;                                            //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_TrophyMenuGo_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_RevealIcon_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_SpinIcon_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_ShowModels_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_ShowInfo_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_MoveRewardMesh_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_RotatePacks_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_ExecuteUbergraph_Menu_TrophyAwarded_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_TrophyAwarded_C_TrophyAwardComplete__DelegateSignature_Params
    {
    public:
        bool                                                         AllAwardsComplete;                                       //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif