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
#include "Engine_FHitResult.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::BP_TraceInteractor { class UBP_TraceInteractor_C; };
namespace CG::Engine { class UPrimitiveComponent; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BPI_TraceInteractionInterface
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class IBPI_TraceInteractionInterface_C_ShouldInteractWithWidgets_Params
    {
    public:
        bool                                                         Return;                                                  //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IBPI_TraceInteractionInterface_C_TraceUp_Params
    {
    public:
        Engine::FHitResult                                           Hit;                                                     //  0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
        BP_TraceInteractor::UBP_TraceInteractor_C*                   interactor;                                              //  0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Return;                                                  //  0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IBPI_TraceInteractionInterface_C_TraceDown_Params
    {
    public:
        Engine::FHitResult                                           Hit;                                                     //  0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
        BP_TraceInteractor::UBP_TraceInteractor_C*                   interactor;                                              //  0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Return;                                                  //  0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IBPI_TraceInteractionInterface_C_TraceMove_Params
    {
    public:
        Engine::FHitResult                                           Hit;                                                     //  0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
        BP_TraceInteractor::UBP_TraceInteractor_C*                   interactor;                                              //  0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Return;                                                  //  0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IBPI_TraceInteractionInterface_C_TraceOut_Params
    {
    public:
        Engine::FHitResult                                           Hit;                                                     //  0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
        BP_TraceInteractor::UBP_TraceInteractor_C*                   interactor;                                              //  0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        Engine::UPrimitiveComponent*                                 LeavingComponent;                                        //  0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Return;                                                  //  0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IBPI_TraceInteractionInterface_C_TraceOver_Params
    {
    public:
        Engine::FHitResult                                           Hit;                                                     //  0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
        BP_TraceInteractor::UBP_TraceInteractor_C*                   interactor;                                              //  0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        Engine::UPrimitiveComponent*                                 HitComponent;                                            //  0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Return;                                                  //  0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IBPI_TraceInteractionInterface_C_TraceLeave_Params
    {
    public:
        Engine::FHitResult                                           Hit;                                                     //  0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
        BP_TraceInteractor::UBP_TraceInteractor_C*                   interactor;                                              //  0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Return;                                                  //  0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IBPI_TraceInteractionInterface_C_TraceEnter_Params
    {
    public:
        Engine::FHitResult                                           Hit;                                                     //  0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
        BP_TraceInteractor::UBP_TraceInteractor_C*                   interactor;                                              //  0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Return;                                                  //  0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
