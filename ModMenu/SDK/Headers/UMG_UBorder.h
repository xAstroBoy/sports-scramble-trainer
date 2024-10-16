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
#include "SlateCore_ENUMS.h"
#include "CoreUObject_FLinearColor.h"
#include "BasicTypes_UScriptDelegate.h"
#include "SlateCore_FMargin.h"
#include "SlateCore_FSlateBrush.h"
#include "CoreUObject_FVector2D.h"
#include "UMG_UContentWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UTexture2D; };
namespace CG::Engine { class UMaterialInterface; };
namespace CG::Engine { class USlateBrushAsset; };
namespace CG::Engine { class UMaterialInstanceDynamic; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * Class /Script/UMG.Border
     * Size -> 0x0148 (FullSize[0x0268] - InheritedSize[0x0120])
     */
    class UBorder : public UMG::UContentWidget
    {
    public:
        SlateCore::EHorizontalAlignment                              HorizontalAlignment;                                     //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SlateCore::EVerticalAlignment                                VerticalAlignment;                                       //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bShowEffectWhenDisabled : 1;                             //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FLinearColor                                    ContentColorAndOpacity;                                  //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptDelegate                                  ContentColorAndOpacityDelegate;                          //  ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        SlateCore::FMargin                                           Padding;                                                 //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       Background;                                              //  Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
        BasicTypes::UScriptDelegate                                  BackgroundDelegate;                                      //  ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FLinearColor                                    BrushColor;                                              //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::UScriptDelegate                                  BrushColorDelegate;                                      //  ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FVector2D                                       DesiredSizeScale;                                        //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::UScriptDelegate                                  OnMouseButtonDownEvent;                                  //  Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::UScriptDelegate                                  OnMouseButtonUpEvent;                                    //  Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::UScriptDelegate                                  OnMouseMoveEvent;                                        //  Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::UScriptDelegate                                  OnMouseDoubleClickEvent;                                 //  Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetVerticalAlignment(SlateCore::EVerticalAlignment InVerticalAlignment);
        void SetPadding(const SlateCore::FMargin& InPadding);
        void SetHorizontalAlignment(SlateCore::EHorizontalAlignment InHorizontalAlignment);
        void SetDesiredSizeScale(const CoreUObject::FVector2D& InScale);
        void SetContentColorAndOpacity(const CoreUObject::FLinearColor& InContentColorAndOpacity);
        void SetBrushFromTexture(Engine::UTexture2D* Texture);
        void SetBrushFromMaterial(Engine::UMaterialInterface* Material);
        void SetBrushFromAsset(Engine::USlateBrushAsset* Asset);
        void SetBrushColor(const CoreUObject::FLinearColor& InBrushColor);
        void SetBrush(const SlateCore::FSlateBrush& InBrush);
        Engine::UMaterialInstanceDynamic* GetDynamicMaterial();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.Border");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
