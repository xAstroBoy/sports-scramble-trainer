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
#include "DatasmithContent_ENUMS.h"
#include "DatasmithContent_FDatasmithImportBaseOptions.h"
#include "DatasmithContent_FDatasmithTessellationOptions.h"
#include "DatasmithContent_FDatasmithReimportOptions.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::DatasmithContent
{
    /**
     * Class /Script/DatasmithContent.DatasmithImportOptions
     * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
     */
    class UDatasmithImportOptions : public CoreUObject::UObject
    {
    public:
        DatasmithContent::EDatasmithImportSearchPackagePolicy        SearchPackagePolicy;                                     //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        DatasmithContent::EDatasmithImportAssetConflictPolicy        MaterialConflictPolicy;                                  //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        DatasmithContent::EDatasmithImportAssetConflictPolicy        TextureConflictPolicy;                                   //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        DatasmithContent::EDatasmithImportActorPolicy                StaticMeshActorImportPolicy;                             //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        DatasmithContent::EDatasmithImportActorPolicy                LightImportPolicy;                                       //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        DatasmithContent::EDatasmithImportActorPolicy                CameraImportPolicy;                                      //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        DatasmithContent::EDatasmithImportActorPolicy                OtherActorImportPolicy;                                  //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        DatasmithContent::EDatasmithImportMaterialQuality            MaterialQuality;                                         //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        DatasmithContent::FDatasmithImportBaseOptions                BaseOptions;                                             //  Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
        DatasmithContent::FDatasmithTessellationOptions              TessellationOptions;                                     //  Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
        DatasmithContent::FDatasmithReimportOptions                  ReimportOptions;                                         //  Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x2A];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/DatasmithContent.DatasmithImportOptions");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif