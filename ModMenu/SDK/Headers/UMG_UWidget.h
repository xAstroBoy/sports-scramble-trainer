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
#include "BasicTypes_UScriptDelegate.h"
#include "BasicTypes_FText.h"
#include "UMG_FWidgetTransform.h"
#include "CoreUObject_FVector2D.h"
#include "CoreUObject_ENUMS.h"
#include "SlateCore_ENUMS.h"
#include "UMG_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "UMG_UVisual.h"
#include "BasicTypes_FName.h"
#include "UMG_FEventReply.h"
#include "SlateCore_FGeometry.h"
#include "SlateCore_FPointerEvent.h"
#include "SlateCore_FSlateColor.h"
#include "SlateCore_FSlateBrush.h"
#include "CoreUObject_FLinearColor.h"
#include "BasicTypes_FString.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UPanelSlot; };
namespace CG::UMG { class UWidget; };
namespace CG::UMG { class UWidgetNavigation; };
namespace CG::UMG { class UPropertyBinding; };
namespace CG::Engine { class APlayerController; };
namespace CG::UMG { class UPanelWidget; };
namespace CG::Engine { class ULocalPlayer; };
namespace CG::CoreUObject { class UObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * Class /Script/UMG.Widget
     * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
     */
    class UWidget : public UMG::UVisual
    {
    public:
        UMG::UPanelSlot*                                             Slot;                                                    //  Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::UScriptDelegate                                  bIsEnabledDelegate;                                      //  ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::FText                                            ToolTipText;                                             //  Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
        BasicTypes::UScriptDelegate                                  ToolTipTextDelegate;                                     //  ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        UMG::UWidget*                                                ToolTipWidget;                                           //  Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::UScriptDelegate                                  ToolTipWidgetDelegate;                                   //  ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::UScriptDelegate                                  VisibilityDelegate;                                      //  ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        UMG::FWidgetTransform                                        RenderTransform;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FVector2D                                       RenderTransformPivot;                                    //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsVolatile : 1;                                         //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bOverride_Cursor : 1;                                    //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCreatedByConstructionScript : 1;                        //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsVariable : 1;                                         //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsEnabled : 1;                                          //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::EMouseCursor                                    Cursor;                                                  //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SlateCore::EWidgetClipping                                   Clipping;                                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        UMG::ESlateVisibility                                        Visibility;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        RenderOpacity;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        UMG::UWidgetNavigation*                                      Navigation;                                              //  Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x30];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<UMG::UPropertyBinding*>                   NativeBindings;                                          //  ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

    public:
        void SetVisibility(UMG::ESlateVisibility InVisibility);
        void SetUserFocus(Engine::APlayerController* PlayerController);
        void SetToolTipText(const BasicTypes::FText& InToolTipText);
        void SetToolTip(UMG::UWidget* Widget);
        void SetRenderTranslation(const CoreUObject::FVector2D& Translation);
        void SetRenderTransformPivot(const CoreUObject::FVector2D& Pivot);
        void SetRenderTransform(const UMG::FWidgetTransform& InTransform);
        void SetRenderShear(const CoreUObject::FVector2D& Shear);
        void SetRenderScale(const CoreUObject::FVector2D& Scale);
        void SetRenderOpacity(float InOpacity);
        void SetRenderAngle(float Angle);
        void SetNavigationRule(SlateCore::EUINavigation Direction, SlateCore::EUINavigationRule Rule, const BasicTypes::FName& WidgetToFocus);
        void SetKeyboardFocus();
        void SetIsEnabled(bool bInIsEnabled);
        void SetCursor(CoreUObject::EMouseCursor InCursor);
        void SetClipping(SlateCore::EWidgetClipping InClipping);
        void SetAllNavigationRules(SlateCore::EUINavigationRule Rule, const BasicTypes::FName& WidgetToFocus);
        void ResetCursor();
        void RemoveFromParent();
        UMG::FEventReply OnReply__DelegateSignature();
        UMG::FEventReply OnPointerEvent__DelegateSignature(const SlateCore::FGeometry& MyGeometry, const SlateCore::FPointerEvent& MouseEvent);
        bool IsVisible();
        bool IsHovered();
        void InvalidateLayoutAndVolatility();
        bool HasUserFocusedDescendants(Engine::APlayerController* PlayerController);
        bool HasUserFocus(Engine::APlayerController* PlayerController);
        bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);
        bool HasMouseCapture();
        bool HasKeyboardFocus();
        bool HasFocusedDescendants();
        bool HasAnyUserFocus();
        UMG::UWidget* GetWidget__DelegateSignature();
        UMG::ESlateVisibility GetVisibility();
        BasicTypes::FText GetText__DelegateSignature();
        UMG::ESlateVisibility GetSlateVisibility__DelegateSignature();
        SlateCore::FSlateColor GetSlateColor__DelegateSignature();
        SlateCore::FSlateBrush GetSlateBrush__DelegateSignature();
        float GetRenderOpacity();
        UMG::UPanelWidget* GetParent();
        Engine::APlayerController* GetOwningPlayer();
        Engine::ULocalPlayer* GetOwningLocalPlayer();
        CoreUObject::EMouseCursor GetMouseCursor__DelegateSignature();
        CoreUObject::FLinearColor GetLinearColor__DelegateSignature();
        bool GetIsEnabled();
        int32_t GetInt32__DelegateSignature();
        float GetFloat__DelegateSignature();
        CoreUObject::FVector2D GetDesiredSize();
        SlateCore::EWidgetClipping GetClipping();
        SlateCore::ECheckBoxState GetCheckBoxState__DelegateSignature();
        SlateCore::FGeometry GetCachedGeometry();
        bool GetBool__DelegateSignature();
        UMG::UWidget* GenerateWidgetForString__DelegateSignature(const BasicTypes::FString& Item);
        UMG::UWidget* GenerateWidgetForObject__DelegateSignature(CoreUObject::UObject* Item);
        void ForceVolatile(bool bForce);
        void ForceLayoutPrepass();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.Widget");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
