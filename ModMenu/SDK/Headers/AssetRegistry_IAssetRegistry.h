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
#include "CoreUObject_IInterface.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FString.h"
#include "AssetRegistry_FAssetData.h"
#include "AssetRegistry_FARFilter.h"
#include "BasicTypes_FName.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AssetRegistry
{
    /**
     * Class /Script/AssetRegistry.AssetRegistry
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class IAssetRegistry : public CoreUObject::IInterface
    {
    public:
        void SearchAllAssets(bool bSynchronousSearch);
        void ScanPathsSynchronous(BasicTypes::TArray<BasicTypes::FString> InPaths, bool bForceRescan);
        void ScanModifiedAssetFiles(BasicTypes::TArray<BasicTypes::FString> InFilePaths);
        void ScanFilesSynchronous(BasicTypes::TArray<BasicTypes::FString> InFilePaths, bool bForceRescan);
        void RunAssetsThroughFilter(BasicTypes::TArray<AssetRegistry::FAssetData>* AssetDataList, const AssetRegistry::FARFilter& Filter);
        void PrioritizeSearchPath(const BasicTypes::FString& PathToPrioritize);
        bool IsLoadingAssets();
        bool HasAssets(const BasicTypes::FName& PackagePath, bool bRecursive);
        void GetSubPaths(const BasicTypes::FString& InBasePath, BasicTypes::TArray<BasicTypes::FString>* OutPathList, bool bInRecurse);
        bool GetAssetsByPath(const BasicTypes::FName& PackagePath, BasicTypes::TArray<AssetRegistry::FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
        bool GetAssetsByPackageName(const BasicTypes::FName& PackageName, BasicTypes::TArray<AssetRegistry::FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets);
        bool GetAssetsByClass(const BasicTypes::FName& ClassName, BasicTypes::TArray<AssetRegistry::FAssetData>* OutAssetData, bool bSearchSubClasses);
        bool GetAssets(const AssetRegistry::FARFilter& Filter, BasicTypes::TArray<AssetRegistry::FAssetData>* OutAssetData);
        AssetRegistry::FAssetData GetAssetByObjectPath(const BasicTypes::FName& ObjectPath, bool bIncludeOnlyOnDiskAssets);
        void GetAllCachedPaths(BasicTypes::TArray<BasicTypes::FString>* OutPathList);
        bool GetAllAssets(BasicTypes::TArray<AssetRegistry::FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AssetRegistry.AssetRegistry");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif