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
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "BasicTypes_FText.h"
#include "CoreUObject_FVector.h"
#include "Engine_AActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::UMG { class UWidgetComponent; };
namespace CG::Engine { class USceneComponent; };
namespace CG::Engine { class UTexture; };
namespace CG::Engine { class UMaterialInstanceDynamic; };
namespace CG::FeatherMenuWidget { class UFeatherMenuWidget_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Panel_Feather
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/UI/Frontend/SubMenus/Panel_Feather.Panel_Feather_C
     * Size -> 0x0088 (FullSize[0x03B0] - InheritedSize[0x0328])
     */
    class APanel_Feather_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UStaticMeshComponent*                                StaticMesh;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetComponent*                                       Widget;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Scene;                                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         ButtonPressed;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        BasicTypes::UScriptMulticastDelegate                         SelectionConfirmed;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        Engine::UTexture*                                            Texture;                                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        BasicTypes::FText                                            Text;                                                    //  Edit, BlueprintVisible, ExposeOnSpawn
        Engine::UMaterialInstanceDynamic*                            DynamicMaterial;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        FeatherMenuWidget::UFeatherMenuWidget_C*                     FeatherWidget;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         RenderOrigin;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        CoreUObject::FVector                                         RenderForwardVector;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

    public:
        void Initialize();
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void ReceiveTick(float DeltaSeconds);
        void ExecuteUbergraph_Panel_Feather(int32_t EntryPoint);
        void SelectionConfirmed__DelegateSignature(int32_t Index);
        void ButtonPressed__DelegateSignature(int32_t Index);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/UI/Frontend/SubMenus/Panel_Feather.Panel_Feather_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
