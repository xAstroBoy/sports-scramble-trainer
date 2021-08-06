﻿#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum OculusHMD.EBoundaryType
enum class OculusHMD_EBoundaryType : uint8_t
{
	EBoundaryType__Boundary_Outer  = 0,
	EBoundaryType__Boundary_PlayArea = 1,
	EBoundaryType__Boundary_MAX    = 2,

};

// Enum OculusHMD.ETiledMultiResLevel
enum class OculusHMD_ETiledMultiResLevel : uint8_t
{
	ETiledMultiResLevel__ETiledMultiResLevel_Off = 0,
	ETiledMultiResLevel__ETiledMultiResLevel_LMSLow = 1,
	ETiledMultiResLevel__ETiledMultiResLevel_LMSMedium = 2,
	ETiledMultiResLevel__ETiledMultiResLevel_LMSHigh = 3,
	ETiledMultiResLevel__ETiledMultiResLevel_MAX = 4,

};

// Enum OculusHMD.ETrackedDeviceType
enum class OculusHMD_ETrackedDeviceType : uint8_t
{
	ETrackedDeviceType__None       = 0,
	ETrackedDeviceType__HMD        = 1,
	ETrackedDeviceType__LTouch     = 2,
	ETrackedDeviceType__RTouch     = 3,
	ETrackedDeviceType__Touch      = 4,
	ETrackedDeviceType__DeviceObjectZero = 5,
	ETrackedDeviceType__All        = 6,
	ETrackedDeviceType__ETrackedDeviceType_MAX = 7,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OculusHMD.HmdUserProfileField
// 0x0020
struct FHmdUserProfileField
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FieldValue;                                                // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OculusHMD.HmdUserProfile
// 0x0048
struct FHmdUserProfile
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Gender;                                                    // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerHeight;                                              // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EyeHeight;                                                 // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IPD;                                                       // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   NeckToEyeDistance;                                         // 0x002C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LW3G[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHmdUserProfileField>                ExtraFields;                                               // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct OculusHMD.GuardianTestResult
// 0x0020
struct FGuardianTestResult
{
	bool                                               IsTriggering;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	OculusHMD_ETrackedDeviceType                       DeviceType;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O9C1[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ClosestDistance;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ClosestPoint;                                              // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ClosestPointNormal;                                        // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OculusHMD.OculusSplashDesc
// 0x00A0
struct FOculusSplashDesc
{
	struct FSoftObjectPath                             TexturePath;                                               // 0x0000(0x0018) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NHI6[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  TransformInMeters;                                         // 0x0020(0x0030) (Edit, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   QuadSizeInMeters;                                          // 0x0050(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DGUG[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       DeltaRotation;                                             // 0x0060(0x0010) (Edit, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   TextureOffset;                                             // 0x0070(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TextureScale;                                              // 0x0078(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoAlphaChannel;                                           // 0x0080(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QQPH[0x1F];                                    // 0x0081(0x001F) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
