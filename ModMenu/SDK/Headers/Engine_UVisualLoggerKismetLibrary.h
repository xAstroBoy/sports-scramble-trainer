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
#include "BasicTypes_FString.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FLinearColor.h"
#include "CoreUObject_FBox.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.VisualLoggerKismetLibrary
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UVisualLoggerKismetLibrary : public Engine::UBlueprintFunctionLibrary
    {
    public:
        void STATIC_RedirectVislog(CoreUObject::UObject* SourceOwner, CoreUObject::UObject* DestinationOwner);
        void STATIC_LogText(CoreUObject::UObject* WorldContextObject, const BasicTypes::FString& Text, const BasicTypes::FName& LogCategory, bool bAddToMessageLog);
        void STATIC_LogSegment(CoreUObject::UObject* WorldContextObject, const CoreUObject::FVector& SegmentStart, const CoreUObject::FVector& SegmentEnd, const BasicTypes::FString& Text, const CoreUObject::FLinearColor& ObjectColor, float Thickness, const BasicTypes::FName& CategoryName, bool bAddToMessageLog);
        void STATIC_LogLocation(CoreUObject::UObject* WorldContextObject, const CoreUObject::FVector& Location, const BasicTypes::FString& Text, const CoreUObject::FLinearColor& ObjectColor, float Radius, const BasicTypes::FName& LogCategory, bool bAddToMessageLog);
        void STATIC_LogBox(CoreUObject::UObject* WorldContextObject, const CoreUObject::FBox& BoxShape, const BasicTypes::FString& Text, const CoreUObject::FLinearColor& ObjectColor, const BasicTypes::FName& LogCategory, bool bAddToMessageLog);
        void STATIC_EnableRecording(bool bEnabled);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.VisualLoggerKismetLibrary");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif