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
#include "SportsScramble_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UMaterialInstance; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BaseballAICatcher_Blueprint
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_TravelTubeCheck_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_ApplyMittMaterial_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_OnRep_MittMaterial_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_OnRep_Material_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_ApplyMaterial_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_SetMaterial_Params
    {
    public:
        Engine::UMaterialInstance*                                   CatcherMaterial;                                         //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        Engine::UMaterialInstance*                                   MittMaterial;                                            //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_UserConstructionScript_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_TimelineSpawnIn__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_TimelineSpawnIn__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_TimelineDespawn__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_TimelineDespawn__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_Timeline_ScaleGlove__FinishedFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_Timeline_ScaleGlove__UpdateFunc_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_BallCaught_Params
    {
    public:
        Engine::AActor*                                              Ball;                                                    //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        CoreUObject::FVector                                         Position;                                                //  0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        SportsScramble::EBaseballBallType                            BallType;                                                //  0x0014(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Imbued;                                                  //  0x0015(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_ReceiveBeginPlay_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_DespawnCatcher_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_CaughtNetCaster_Params
    {
    public:
        Engine::AActor*                                              Ball;                                                    //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        CoreUObject::FVector                                         Position;                                                //  0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        SportsScramble::EBaseballBallType                            BallType;                                                //  0x0014(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Imbued;                                                  //  0x0015(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_RevealMitt_Params
    {
    public:
        CoreUObject::UObject*                                        WorldContextObject;                                      //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        SportsScramble::UScramEventBasePayload*                      Payload;                                                 //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_ShowMitt_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_HideMitt_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_ExecuteUbergraph_BaseballAICatcher_Blueprint_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ABaseballAICatcher_Blueprint_C_CatcherCaughtBall__DelegateSignature_Params
    {
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif