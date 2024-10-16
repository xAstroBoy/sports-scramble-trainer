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
#include "Engine_ENUMS.h"
#include "CoreUObject_FLinearColor.h"
#include "Engine_UTexture.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MediaAssets { class UMediaPlayer; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MediaAssets
{
    /**
     * Class /Script/MediaAssets.MediaTexture
     * Size -> 0x0090 (FullSize[0x0140] - InheritedSize[0x00B0])
     */
    class UMediaTexture : public Engine::UTexture
    {
    public:
        Engine::ETextureAddress                                      AddressX;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ETextureAddress                                      AddressY;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         AutoClear;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FLinearColor                                    ClearColor;                                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        MediaAssets::UMediaPlayer*                                   MediaPlayer;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x70];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetMediaPlayer(MediaAssets::UMediaPlayer* NewMediaPlayer);
        int32_t GetWidth();
        MediaAssets::UMediaPlayer* GetMediaPlayer();
        int32_t GetHeight();
        float GetAspectRatio();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MediaAssets.MediaTexture");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
