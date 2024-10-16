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
#include "Engine_FPointerToUberGraphFrame.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "SportsScramble_ABaseballMitt.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::Engine { class USkeletalMeshComponent; };
namespace CG::Engine { class USoundBase; };
namespace CG::Engine { class UMaterialInstance; };
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_Mitt
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Gloves/Baseball/BB_Mitt.BB_Mitt_C
     * Size -> 0x0041 (FullSize[0x0BF1] - InheritedSize[0x0BB0])
     */
    class ABB_Mitt_C : public SportsScramble::ABaseballMitt
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     PuffLocation;                                            //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USkeletalMeshComponent*                              SkeletalMesh;                                            //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<Engine::USoundBase*>                      CatchSounds;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        Engine::UMaterialInstance*                                   Material;                                                //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         BallCaught;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        bool                                                         IsHomeTeam;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

    public:
        void OnRep_Material();
        void ApplyMaterial();
        void SetMaterial(Engine::UMaterialInstance* NewMaterial);
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void BallCatch(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void ASyncScrambleLoad();
        void SetColors(bool HomeTeam);
        void NetSetColors(bool HomeTeam);
        void DestroyPrimitive(bool playOut, float Delay);
        void NetResetColor();
        void ExecuteUbergraph_BB_Mitt(int32_t EntryPoint);
        void BallCaught__DelegateSignature(SportsScramble::UScramEventBasePayload* Payload);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Gloves/Baseball/BB_Mitt.BB_Mitt_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
