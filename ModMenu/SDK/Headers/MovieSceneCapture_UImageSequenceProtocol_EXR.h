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
#include "MovieSceneCapture_ENUMS.h"
#include "MovieSceneCapture_UImageSequenceProtocol.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieSceneCapture
{
    /**
     * Class /Script/MovieSceneCapture.ImageSequenceProtocol_EXR
     * Size -> 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
     */
    class UImageSequenceProtocol_EXR : public MovieSceneCapture::UImageSequenceProtocol
    {
    public:
        bool                                                         bCompressed;                                             //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        MovieSceneCapture::EHDRCaptureGamut                          CaptureGamut;                                            //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xE];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MovieSceneCapture.ImageSequenceProtocol_EXR");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif