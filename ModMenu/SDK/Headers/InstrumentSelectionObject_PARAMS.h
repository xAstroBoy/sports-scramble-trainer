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

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::Engine { class AActor; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::InstrumentSelectionObject
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class AInstrumentSelectionObject_C_Initialize_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AInstrumentSelectionObject_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AInstrumentSelectionObject_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AInstrumentSelectionObject_C_GrabbedTN_Params
    {
    public:
        CoreUObject::UObject*                                        WorldContextObject;                                      //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        SportsScramble::UScramEventBasePayload*                      Payload;                                                 //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AInstrumentSelectionObject_C_NotSelected_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AInstrumentSelectionObject_C_DestroySelf_Params
    {
    public:
        Engine::AActor*                                              DestroyedActor;                                          //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AInstrumentSelectionObject_C_DisableNotSelected_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AInstrumentSelectionObject_C_GrabbedBB_Params
    {
    public:
        CoreUObject::UObject*                                        WorldContextObject;                                      //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        SportsScramble::UScramEventBasePayload*                      Payload;                                                 //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AInstrumentSelectionObject_C_GrabbedDB_Params
    {
    public:
        CoreUObject::UObject*                                        WorldContextObject;                                      //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        SportsScramble::UScramEventBasePayload*                      Payload;                                                 //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AInstrumentSelectionObject_C_ExecuteUbergraph_InstrumentSelectionObject_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AInstrumentSelectionObject_C_InstrumentSelected__DelegateSignature_Params
    {
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif