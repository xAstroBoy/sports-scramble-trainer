#pragma once

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
#include "CoreUObject_FLinearColor.h"
#include "SportsScramble_ENUMS.h"
#include "TN_Instrument_Base_ATN_Instrument_Base_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UMaterialInstanceDynamic; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_TennisRacket_Upgrade01
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Instruments/Tennis/TN_TennisRacket_Upgrade01.TN_TennisRacket_Upgrade01_C
     * Size -> 0x0060 (FullSize[0x1018] - InheritedSize[0x0FB8])
     */
    class ATN_TennisRacket_Upgrade01_C : public TN_Instrument_Base::ATN_Instrument_Base_C
    {
    public:
        Engine::UMaterialInstanceDynamic*                            DynamicMaterial;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FLinearColor                                    DefaultTints;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FLinearColor                                    NormalHitColors;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FLinearColor                                    ChargeHitColors;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FLinearColor                                    SliceHitColors;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FLinearColor                                    ChargeSliceHitColors;                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        SportsScramble::ETennisShotType                              ShotTypes;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        DefaultIntensity_1;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void UserConstructionScript();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Instruments/Tennis/TN_TennisRacket_Upgrade01.TN_TennisRacket_Upgrade01_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
