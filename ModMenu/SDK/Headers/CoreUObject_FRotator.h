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
#include "CoreUObject_FRotator.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CoreUObject
{
    /**
     * ScriptStruct /Script/CoreUObject.Rotator
     * Size -> 0x000C
     */
    struct FRotator
    {
    public:
        float                                                        Pitch;                                                   //  Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        Yaw;                                                     //  Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        Roll;                                                    //  Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        FRotator();
        FRotator(float pitch, float yaw, float roll);
        CoreUObject::FRotator operator +(float scalar) const;
        CoreUObject::FRotator operator +(const CoreUObject::FRotator& other) const;
        CoreUObject::FRotator operator -(float scalar) const;
        CoreUObject::FRotator operator -(const CoreUObject::FRotator& other) const;
        CoreUObject::FRotator operator *(float scalar) const;
        CoreUObject::FRotator operator *(const CoreUObject::FRotator& other) const;
        CoreUObject::FRotator operator /(float scalar) const;
        CoreUObject::FRotator operator /(const CoreUObject::FRotator& other) const;
        CoreUObject::FRotator& operator =(const CoreUObject::FRotator& other);
        CoreUObject::FRotator& operator +=(float scalar);
        CoreUObject::FRotator& operator +=(const CoreUObject::FRotator& other);
        CoreUObject::FRotator& operator -=(float scalar);
        CoreUObject::FRotator& operator -=(const CoreUObject::FRotator& other);
        CoreUObject::FRotator& operator *=(const CoreUObject::FRotator& other);
        CoreUObject::FRotator& operator *=(const float other);
        CoreUObject::FRotator& operator /=(const CoreUObject::FRotator& other);
        CoreUObject::FRotator& operator /=(const float other);
        float Size() const;
        CoreUObject::FRotator Clamp() const;
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif