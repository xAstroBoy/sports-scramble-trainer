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
#include "CoreUObject_FVector.h"
#include "Engine_FHitResult.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::Engine { class AActor; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_TrophyGrabbableBase
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_SpawnBounceSound_Params
    {
    public:
        CoreUObject::FVector                                         Normal;                                                  //  0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_SetVisibility_Params
    {
    public:
        bool                                                         visible;                                                 //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_ForceRespawn_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_Scale__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_Scale__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_Timeline_0__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_Timeline_0__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_Timeline_1__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_Timeline_1__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_FXRespawn_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_SpawnFX_Params
    {
    public:
        bool                                                         IsVisible;                                               //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_DestroyTrophy_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_ReceiveHit_Params
    {
    public:
        Engine::UPrimitiveComponent*                                 MyComp;                                                  //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        Engine::AActor*                                              Other;                                                   //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        Engine::UPrimitiveComponent*                                 OtherComp;                                               //  0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         bSelfMoved;                                              //  0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0000[0x3];                                   //  0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        CoreUObject::FVector                                         HitLocation;                                             //  0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        CoreUObject::FVector                                         HitNormal;                                               //  0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        CoreUObject::FVector                                         NormalImpulse;                                           //  0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        Engine::FHitResult                                           Hit;                                                     //  0x0040(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_Play_Grab_SFX_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABP_TrophyGrabbableBase_C_ExecuteUbergraph_BP_TrophyGrabbableBase_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif