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
#include "UMG_ENUMS.h"
#include "CoreUObject_FVector2D.h"
#include "BasicTypes_TArray.h"
#include "UMG_FSlateChildSize.h"
#include "SlateCore_ENUMS.h"
#include "UMG_UWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UUserWidget; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * Class /Script/UMG.DynamicEntryBox
     * Size -> 0x00D0 (FullSize[0x01D8] - InheritedSize[0x0108])
     */
    class UDynamicEntryBox : public UMG::UWidget
    {
    public:
        UMG::EDynamicBoxType                                         EntryBoxType;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector2D                                       EntrySpacing;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<CoreUObject::FVector2D>                   SpacingPattern;                                          //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
        UMG::FSlateChildSize                                         EntrySizeRule;                                           //  Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
        SlateCore::EHorizontalAlignment                              EntryHorizontalAlignment;                                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SlateCore::EVerticalAlignment                                EntryVerticalAlignment;                                  //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      MaxElementSize;                                          //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0003[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        UMG::UUserWidget*                                            EntryWidgetClass;                                        //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0004[0x88];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetEntrySpacing(const CoreUObject::FVector2D& InEntrySpacing);
        void Reset(bool bDeleteWidgets);
        void RemoveEntry(UMG::UUserWidget* EntryWidget);
        int32_t GetNumEntries();
        BasicTypes::TArray<UMG::UUserWidget*> GetAllEntries();
        UMG::UUserWidget* BP_CreateEntryOfClass(UMG::UUserWidget* EntryClass);
        UMG::UUserWidget* BP_CreateEntry();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.DynamicEntryBox");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif