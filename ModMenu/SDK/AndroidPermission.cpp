/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    10/14/2024                  |
 * ----------------------------------------
 */

#include "pch.h"
#include <cstdint>
#include <vector>
#include <string>
#include <locale>
#include <unordered_set>
#include "Headers/Global_DEFINES.h"
#include "Headers/BasicTypes.h"
#include "Headers/CoreUObject_UFunction.h"
#include "Headers/AndroidPermission_PARAMS.h"
#include "Headers/AndroidPermission_UAndroidPermissionCallbackProxy.h"
#include "Headers/AndroidPermission_UAndroidPermissionFunctionLibrary.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AndroidPermission
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x002678C0
     *         Name   -> Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
     *         Flags  -> (Final, Native, Static, Public, BlueprintCallable)
     * Parameters:
     *         BasicTypes::FString                                permission                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    bool UAndroidPermissionFunctionLibrary::STATIC_CheckPermission(const BasicTypes::FString& permission)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission");
        
        UAndroidPermissionFunctionLibrary_CheckPermission_Params params {};
        params.permission = permission;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x002677F0
     *         Name   -> Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
     *         Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
     * Parameters:
     *         BasicTypes::TArray<BasicTypes::FString>            Permissions                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
     *         AndroidPermission::UAndroidPermissionCallbackProxy* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    AndroidPermission::UAndroidPermissionCallbackProxy* UAndroidPermissionFunctionLibrary::STATIC_AcquirePermissions(BasicTypes::TArray<BasicTypes::FString> Permissions)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions");
        
        UAndroidPermissionFunctionLibrary_AcquirePermissions_Params params {};
        params.Permissions = Permissions;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
