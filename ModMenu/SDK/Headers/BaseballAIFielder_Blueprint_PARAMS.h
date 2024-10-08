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
namespace CG::Engine { class UMaterialInstance; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BaseballAIFielder_Blueprint
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_OnRep_RedGlove_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_OnRep_GloveMaterial_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_OnRep_FielderMaterial_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_ApplyGloveMaterial_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_OnRep_Material_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_ApplyMaterial_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_SetMaterial_Params
    {
    public:
        Engine::UMaterialInstance*                                   FielderMat;                                              //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         RedGlove;                                                //  0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_Timeline_Spawn__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_Timeline_Spawn__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_Timeline_Despawn__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_Timeline_Despawn__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_DespawnFielder_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAIFielder_Blueprint_C_ExecuteUbergraph_BaseballAIFielder_Blueprint_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
