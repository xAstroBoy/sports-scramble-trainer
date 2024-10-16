#pragma once
#pragma warning(disable: 4267)

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    10/14/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>
#include "BasicTypes_FString.h"
#include "Engine_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Menu_EnterName
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_EnterName_C_EnableMenuInput_Params
    {
    public:
        bool                                                         InputEnabled;                                            //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0000[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_EnterName_C_DisableMenuInput_Params
    {
    public:
        bool                                                         InputDisabled;                                           //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0001[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_EnterName_C_RemoveSubMenu_Params
    {
    public:
        bool                                                         Removed;                                                 //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_EnterName_C_HideSubMenu_Params
    {
    public:
        bool                                                         MenuHidden;                                              //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_EnterName_C_RestoreSubMenu_Params
    {
    public:
        bool                                                         MenuShown;                                               //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_EnterName_C_GetName_Params
    {
    public:
        BasicTypes::FString                                          Name;                                                    //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_EnterName_C_Initialize_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_EnterName_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_EnterName_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_EnterName_C_ReceiveTick_Params
    {
    public:
        float                                                        DeltaSeconds;                                            //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_EnterName_C_ReceiveEndPlay_Params
    {
    public:
        Engine::EEndPlayReason                                       EndPlayReason;                                           //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_EnterName_C_StringChanged_Params
    {
    public:
        BasicTypes::FString                                          NewString;                                               //  0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_EnterName_C_ExecuteUbergraph_Menu_EnterName_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0002[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AMenu_EnterName_C_StringUpdated__DelegateSignature_Params
    {
    public:
        bool                                                         Empty;                                                   //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
