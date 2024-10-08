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
#include "Engine_UBlueprintFunctionLibrary.h"
#include "BasicTypes_TArray.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FVector2D.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UPanelWidget; };
namespace CG::CoreUObject { class UObject; };
namespace CG::UMG { class UWidget; };
namespace CG::UMG { class UCanvasPanel; };
namespace CG::UMG { class UWidgetComponent; };
namespace CG::UMG { class UCanvasPanelSlot; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BPFL_TraceWidgetFunctionLibrary
{
    /**
     * BlueprintGeneratedClass /Game/VR_Keyboard/Blueprints/FunctionLibraries/BPFL_TraceWidgetFunctionLibrary.BPFL_TraceWidgetFunctionLibrary_C
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UBPFL_TraceWidgetFunctionLibrary_C : public Engine::UBlueprintFunctionLibrary
    {
    public:
        void STATIC_GetPanelChildren(UMG::UPanelWidget* Panel, CoreUObject::UObject* __WorldContext, BasicTypes::TArray<UMG::UWidget*>* Widgets);
        void STATIC_GetCanvasChildren(bool Deep, UMG::UCanvasPanel* Root, CoreUObject::UObject* __WorldContext, BasicTypes::TArray<UMG::UWidget*>* Widgets);
        void STATIC_WorldSpaceToWidgetSpace(const CoreUObject::FVector& Location, UMG::UWidgetComponent* Target, CoreUObject::UObject* __WorldContext, CoreUObject::FVector2D* WidgetPosition);
        CoreUObject::FVector2D STATIC_ParentWidgetSpaceToChildSpace(const CoreUObject::FVector2D& Position, const CoreUObject::FVector2D& ParentSize, UMG::UCanvasPanelSlot* ChildSlot, CoreUObject::UObject* __WorldContext);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/VR_Keyboard/Blueprints/FunctionLibraries/BPFL_TraceWidgetFunctionLibrary.BPFL_TraceWidgetFunctionLibrary_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
