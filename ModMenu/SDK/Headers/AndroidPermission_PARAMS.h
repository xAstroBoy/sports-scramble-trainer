#pragma once
#pragma warning(disable: 4267)

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
#include "BasicTypes_FString.h"
#include "BasicTypes_TArray.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AndroidPermission { class UAndroidPermissionCallbackProxy; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AndroidPermission
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UAndroidPermissionFunctionLibrary_CheckPermission_Params
    {
    public:
        BasicTypes::FString                                          permission;                                              //  0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAndroidPermissionFunctionLibrary_AcquirePermissions_Params
    {
    public:
        BasicTypes::TArray<BasicTypes::FString>                      Permissions;                                             //  0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        AndroidPermission::UAndroidPermissionCallbackProxy*          ReturnValue;                                             //  0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif