#pragma once

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
#include "Engine_FPointerToUberGraphFrame.h"
#include "SportsScramble_AScramActor.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_FLinearColor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UParticleSystemComponent; };
namespace CG::Engine { class USceneComponent; };
namespace CG::Engine { class UParticleSystem; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CMN_ParticleEmitter
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/CMN_ParticleEmitter.CMN_ParticleEmitter_C
     * Size -> 0x0022 (FullSize[0x036A] - InheritedSize[0x0348])
     */
    class ACMN_ParticleEmitter_C : public SportsScramble::AScramActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UParticleSystemComponent*                            ParticleSystem;                                          //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     DefaultSceneRoot;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UParticleSystem*                                     Template;                                                //  Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        bool                                                         AutoActivate;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
        bool                                                         DestroyOnFinish;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

    public:
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void OnSystemFinished(Engine::UParticleSystemComponent* PSystem);
        void Activate(bool Reset);
        void SetColorParameter(const BasicTypes::FName& Name, const CoreUObject::FLinearColor& Color);
        void ExecuteUbergraph_CMN_ParticleEmitter(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/CMN_ParticleEmitter.CMN_ParticleEmitter_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif