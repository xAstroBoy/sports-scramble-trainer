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
#include "Headers/BB_Equipment_Set_PARAMS.h"
#include "Headers/BB_Equipment_Set_ABB_Equipment_Set_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_Equipment_Set
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Gloves/Baseball/BB_Equipment_Set.BB_Equipment_Set_C.UserConstructionScript
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Equipment_Set_C::UserConstructionScript()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gloves/Baseball/BB_Equipment_Set.BB_Equipment_Set_C.UserConstructionScript");
        
        ABB_Equipment_Set_C_UserConstructionScript_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Gloves/Baseball/BB_Equipment_Set.BB_Equipment_Set_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ABB_Equipment_Set_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gloves/Baseball/BB_Equipment_Set.BB_Equipment_Set_C.ReceiveBeginPlay");
        
        ABB_Equipment_Set_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Gloves/Baseball/BB_Equipment_Set.BB_Equipment_Set_C.PostEquipmentSpawn
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         SportsScramble::AScramPrimitiveGrabbable*          DominantHandSpawnedEquipment                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         SportsScramble::AScramPrimitiveGrabbable*          OffHandSpawnedEquipment                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Equipment_Set_C::PostEquipmentSpawn(SportsScramble::AScramPrimitiveGrabbable* DominantHandSpawnedEquipment, SportsScramble::AScramPrimitiveGrabbable* OffHandSpawnedEquipment)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gloves/Baseball/BB_Equipment_Set.BB_Equipment_Set_C.PostEquipmentSpawn");
        
        ABB_Equipment_Set_C_PostEquipmentSpawn_Params params {};
        params.DominantHandSpawnedEquipment = DominantHandSpawnedEquipment;
        params.OffHandSpawnedEquipment = OffHandSpawnedEquipment;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Gloves/Baseball/BB_Equipment_Set.BB_Equipment_Set_C.ExecuteUbergraph_BB_Equipment_Set
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Equipment_Set_C::ExecuteUbergraph_BB_Equipment_Set(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gloves/Baseball/BB_Equipment_Set.BB_Equipment_Set_C.ExecuteUbergraph_BB_Equipment_Set");
        
        ABB_Equipment_Set_C_ExecuteUbergraph_BB_Equipment_Set_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x006628B0
     *         Name   -> Function /Game/Blueprints/Gloves/Baseball/BB_Equipment_Set.BB_Equipment_Set_C.EquipmentGrabbed__DelegateSignature
     *         Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    DominantHand                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         BB_Mitt::ABB_Mitt_C*                               Mitt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABB_Equipment_Set_C::EquipmentGrabbed__DelegateSignature(Engine::AActor* DominantHand, BB_Mitt::ABB_Mitt_C* Mitt)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gloves/Baseball/BB_Equipment_Set.BB_Equipment_Set_C.EquipmentGrabbed__DelegateSignature");
        
        ABB_Equipment_Set_C_EquipmentGrabbed__DelegateSignature_Params params {};
        params.DominantHand = DominantHand;
        params.Mitt = Mitt;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
